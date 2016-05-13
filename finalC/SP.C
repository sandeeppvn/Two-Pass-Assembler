#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<Math.h>


int getOpcode(char* a)
{

    if(strcmp(a,"NEG"))
        return 000000;
    else if(strcmp(a,"AND"))
        return 000001;
    else if(strcmp(a,"XOR"))
        return 000010;
    else if(strcmp(a,"OR"))
        return 000011;
    else if(strcmp(a,"LSR"))
        return 000100;
    else if(strcmp(a,"LSL"))
        return 000101;
    else if(strcmp(a,"HLT"))
        return 001010;
    else if(strcmp(a,"MOV"))
        return 001101;
    else if(strcmp(a,"JMP"))
        return 001111;
    else if(strcmp(a,"ADD"))
        return 010000;
    else if(strcmp(a,"SUB"))
        return 010001;
}

int getPart1(char* a)
{
    if(strcmp(a,"R1"))
        return 00100;
    else if(strcmp(a,"*R1"))
        return 00101;
    if(strcmp(a,"R2"))
        return 00000;
    else if(strcmp(a,"*R2"))
        return 01001;
    if(strcmp(a,"R3"))
        return 01100;
    else if(strcmp(a,"*R3"))
        return 01101;
    if(strcmp(a,"R4"))
        return 10000;
    else if(strcmp(a,"*R4"))
        return 10001;
    if(strcmp(a,"R5"))
        return 10100;
    else if(strcmp(a,"*R5"))
        return 10101;
    if(strcmp(a,"R6"))
        return 11000;
    else if(strcmp(a,"*R6"))
        return 11001;
    if(strcmp(a,"R7"))
        return 11100;
    else if(strcmp(a,"*R7"))
        return 11101;
}

int getPart2(char* a)
{
    if(strcmp(a,"R1"))
        return 00100;
    else if(strcmp(a,"*R1"))
        return 00101;
    if(strcmp(a,"R2"))
        return 00000;
    else if(strcmp(a,"*R2"))
        return 01001;
    if(strcmp(a,"R3"))
        return 01100;
    else if(strcmp(a,"*R3"))
        return 01101;
    if(strcmp(a,"R4"))
        return 10000;
    else if(strcmp(a,"*R4"))
        return 10001;
    if(strcmp(a,"R5"))
        return 10100;
    else if(strcmp(a,"*R5"))
        return 10101;
    if(strcmp(a,"R6"))
        return 11000;
    else if(strcmp(a,"*R6"))
        return 11001;
    if(strcmp(a,"R7"))
        return 11100;
    else if(strcmp(a,"*R7"))
        return 11101;
    else
        return 00010;

}

int hexaToBinary(int a)
{
    int rem,dec=0,i=0,sum=0;
    while(a!=0)
    {
        rem=a%10;
        dec=dec+pow(16,i);
        a=a/10;
        i++;
    }
    i=0;
    while(dec!=0)
    {
        rem=dec%2;
        sum=(rem*pow(10,i))+sum;
        dec=dec/2;
        i++;
    }
    return sum;
}


int check(char a[])
{
        char *e;
        char *label,*opcode,*part1,*part2;
        int b=0;
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]==':')
                b=1;
        }
        if(b==1)
		{
			e=strtok(a,":");
			label=e;
			e=strtok(a," ");
			opcode=e;
            int count=0;
			while(e!=NULL)
			{
				count++;
				e=strtok(NULL,",");
				if(count==1)
                    part1=e;
                else if(count==2)
                    part2=e;
				//i++;
			}
		}
		else
		{
			e=strtok(a," ");
			opcode=e;

            int count=0;
			while(e!=NULL)
			{
				count++;
				e=strtok(NULL,",");
				if(count==1)
                    part1=e;
                else if(count==2)
                    part2=e;
				//i++;
			}

		}
    /*if(checkIfVariable)
	{
	    check if next token is DC or DS
	    call the getter to get PC and value of variable
	    putInFile based on command and next token value
	}
	else
       .
       .
       .
	*/


		int res;
		res=getOpcode(opcode);


        //for HALT Statement
		if(res==001010)
        {
            res=0010100000000000;
           // putInFile();
        }

        //for Jump Statement
        else if(res==001111)
        {
            res=0011110000000000;
           // putInFile();
            //get address/PC of the label from getter and putInFile
        }
        else
        {
            int r;
            res=( res*pow(10,6) + getPart1(part1) )*pow(10,11) + getPart2(part2);
            //putInFile(res);
            printf("%16d",res);
             //for #   i.e: 0000000000100101 in MOV R1 #25
            //if(getPart2(part2)==00010)
               // r=hexaToBinary(z); //z is the next token
                //put value of r in file.... putInFile(r);
        }

}

int main()
{
        check("MOV R1,R2");
        return 0;
}

















