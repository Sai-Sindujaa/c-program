#include<stdio.h>
#include<conio.h>
void main()
{
int i=1 , num;
clrscr();
printf("enter the number:");
scanf("%d",&num);
printf("\nnumber \tsquare \tcube");
while(i<=num)
{
printf("\n %d    \t %d  \t%d\n ",i ,i*i,i*i*i);
i++;
}
getch();
}
