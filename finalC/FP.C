#include "SymbolTa.c"
#include "OTable.c"
#include<string.h>
int checkOpCode(char c[]) 
{
	int i=OpCode(c);
	if(i==-1)return 0;
	else return 1;
}

int checkRegister(char c[])
{
	int ans=0;
	if(c[0]=='R' && (c[1]>='0'&& c[1]<='9' && strlen(c)==2))
	ans=1;
	if(c[0]=='*' && (c[2]>='0'&& c[2]<='9' && strlen(c)==3) && c[1]=='R')
	ans=1;
	return ans;
}

int checkNumeral(char c[]) 
{
	int ans=0;
	int len=strlen(c);
	if(c[0]=='#')
   {
		int i;
		for( i=1;i<len;i++) 
      {
		      if(c[i]>='0' && c[i]<='9')
		      ans=1;
		}
	}
	return ans;
}
int firstPass(char c[]) 
{
	int flag=0;
	if(checkOpCode(c))
   {
		flag=1;
		if(strcmp(c, "DC")==0) flag=2;
		if(strcmp(c, "DS")==0) flag=3;
		if(strcmp(c, "HLT")==0) flag=4;
		if(strcmp(c, "JMP")==0) flag=5;
	}
	else
   {
		if(checkRegister)
      {
		   flag=6;
		}
		else
      {
			if(checkNumeral)
         {
			   flag=7;
			}
/*			else {
				scanTable(c);
				flag=8;
				if(c[strlen(c)-1]==':') flag=9;
			}*/
		}
	}

	return flag;

}
