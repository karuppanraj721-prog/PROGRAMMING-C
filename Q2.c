#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	if(a<b) 
	printf("smallest number %d",a);
	else 
	printf("smallest number %d",b); 
	return 0;
	
}