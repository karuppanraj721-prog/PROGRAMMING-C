#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	int n=a-b;
	if(n%2==0)
	printf("even %d\n",n);
	else
	printf("odd %d\n",n);
	return 0;

	
}