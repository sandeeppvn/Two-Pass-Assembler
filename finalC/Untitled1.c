#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
}

void setOpcode(char c[])
{
   char set1[],set2[],set3[],set[];

   if(searchTable(c)==1)
   {
       //get next word followed by DS or DC
   }

   if(strcmp(c,"HLT")
      set="0010100000000000";
   else
   {
      set1=setOne(c);
      set2=setTwo(c);
      set3=setThree(c);
      set=strcat(set1,set2);
      set=strcat(set,set3);
   }
}

char[] setOne(char c[])
{
   if(strcmp(c,"NEG"))
      return "000000";
   if(strcmp(c,"AND"))
      return "000001";
   if(strcmp(c,"XOR"))
      return "000010";
   if(strcmp(c,"OR"))
      return "000011";
   if(strcmp(c,"LSR"))
      return "000100";
   if(strcmp(c,"LSL"))
      return "000101";
   if(strcmp(c,"MOV"))
      return "001101";
   if(strcmp(c,"JMP"))
      return "001111";
   if(strcmp(c,"ADD"))
      return "010000";
   if(strcmp(c,"SUB"))
      return "010001";
}

char[] setTwo(char c[])
{
   char part1[],part2[];

   if(strcmp(c,"R1"))
      part1="001";
   else if(strcmp(c,"R2"))
      part1="010";
   else if(strcmp(c,"R3"))
      part1="011";
   else if(strcmp(c,"R4"))
      part1="100";
   else if(strcmp(c,"R5"))
      part1="101";
   else if(strcmp(c,"R6"))
      part1="110";
   else if(strcmp(c,"R7"))
      part1="111";

   if(strcmp(c,"*");
      part2="01";
   else
      part2="00";

   return  strcat(part1,part2);
}

char[] setThree(char c[])
{
   char part1[],part2[];

   if(strcmp(c,"R1"))
      part1="001";
   else if(strcmp(c,"R2"))
      part1="010";
   else if(strcmp(c,"R3"))
      part1="011";
   else if(strcmp(c,"R4"))
      part1="100";
   else if(strcmp(c,"R5"))
      part1="101";
   else if(strcmp(c,"R6"))
      part1="110";
   else if(strcmp(c,"R7"))
      part1="111";

   if(strcmp(c,"#"))
      part2="10";
   else if(strcmp(c,"*");
      part2="01";
   else
      part2="00";

   return  strcat(part1,part2);
}
