#include<stdio.h>
#include<string.h>
struct Table
{
	char name[4];
	int num;
}Entry[13]={"NEG", 000000, "AND",  000001, "XOR", 0000010, "OR ",  000011, "LSR", 000100, "LSL",000101,
	    "HLT", 001010, "MOV",  001101, "JMP", 001111, "ADD",  010000, "SUB", 010001, "DC" ,     0,
	    "DS", 0 };

int OpCode(char inp[])
{
   int ans=-1, i;
	for(i=0;i<13;i++)
   {
   	if(strcmp(inp, Entry[i].name)==0)
      {
		   ans= Entry[i].num;
	   }
   }
	return ans;
}

 
/*void main() {
	int i;
	for(i=0;i<13;i++) {
		printf("%d %s\n", OpCode(Entry[i].name), Entry[i].name);
	}
	printf("%d", OpCode("HLT"));
	scanf("%s");
}
*/

