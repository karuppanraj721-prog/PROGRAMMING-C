#include<stdio.h>
int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
int n=a%10;
if(n%3==0)
printf("divisiable by 3 %d\n",n);
else 
printf("not divisiableby 3 %d\n",n);
return 0;
}