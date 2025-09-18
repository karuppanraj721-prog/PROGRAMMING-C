#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number");
scanf("%d %d %d",&a,&b,&c);
if(a<b && a<c)
printf("smallest number%d\n",a);
else if(b<a && b<c)
printf("smallest number%d\n",b);
else
printf("smallest number%d",c);
return 0;
}