#include<stdio.h>
#include<conio.h>
void main()
{
int num,terms,i=0;
clrscr();
printf("enter the number : ");
scanf("%d",&num);
printf("enter how many terms : ");
scanf("%d",&terms);
while(i<=terms)
{
printf("%d*%d=%d \n",num,i,num*i);
i++;
}
getch();
}