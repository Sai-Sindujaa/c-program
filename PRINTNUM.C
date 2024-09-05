#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter a number : ");
scanf("%d",&a);
while(a<=100) {
printf("%d\n",a);
a++;
}
getch();
}