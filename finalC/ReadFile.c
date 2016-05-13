#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char a[60],b[60],c[60],d[60],
   char *e;
   char f[2]=",";
  
   FILE* fp;
   fp=fopen("file.txt","r");
  
   while(fgets(a,60,fp)!=NULL)
   {
      e=strtok(a,f);//return instruction
      e=strtok(NULL,f);
      while(e!=NULL)
      {
         printf("%s ",e);
         e=strtok(NULL,f);
         //
      }
      //printf("\n");
   
   }
   fclose(fp);
}
