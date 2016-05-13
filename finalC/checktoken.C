#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<Math.h>

int main()
{
    char *e,a[]="karma,is a bitch";
    e=strtok(a,", ");
	while(e!=NULL)
	{
		printf("%s \n",e);
        e=strtok(NULL," ");

	}

	int res=10;
	printf("%10d",res);
}
