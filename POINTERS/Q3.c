#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int*const ptr=&a;
	printf("%d\n",*ptr=&a);
	*ptr=b;
	printf("%d",*ptr);
	return 0;
}