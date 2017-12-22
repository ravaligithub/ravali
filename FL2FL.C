#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp,*fp1;
char c,d;
clrscr();
fp=fopen("filer.txt","r");
fp1=fopen("file3.txt","w");
while(1)
{
c=fgetc(fp);
printf("%c",c);
if(c==EOF)
break;
else
putc(c,fp1);
}
fclose(fp);
fclose(fp1);

getch();
}


