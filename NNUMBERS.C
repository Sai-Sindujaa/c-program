#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=0;
clrscr();
printf("enter the number : ");
scanf("%d",&num);
while(i<num)
{
printf("%d\n",i);
i++;
}
getch();
}