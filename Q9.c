#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a&1)
	printf( "odd",a);
	else
	printf("even",&a);
	return 0;
}