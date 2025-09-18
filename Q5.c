#include<stdio.h>
int main()
{
int n;
printf("enter the number");
scanf("%d",&n);
if(n>=100 && n<=999)
printf("3 digit number%d\n",n);
else
printf("not a 3 digit number%n",n);
return 0;
}