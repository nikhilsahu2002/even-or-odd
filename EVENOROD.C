#include<stdio.h>
#include<conio.h>
void main()
{
int a ;
clrscr();
printf("Enter the value");
scanf("%d",&a);
if (a==0 || a<0)
printf("The Numbe is 0");
else if(a%2==0)
printf("Nuber is Even");
else
printf("odd");
getch();
}