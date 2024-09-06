#include<stdio.h>
#include<conio.h>
void main()
{
int num,sum=0,rem;
clrscr();
printf("enter number: ");
scanf("%d",&num);
while(num!=0)
{
rem =num%10;
num=num/10;
sum=sum+rem;
}
printf("%d",sum);
}








