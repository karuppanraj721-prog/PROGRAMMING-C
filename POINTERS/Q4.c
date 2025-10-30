#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int *ptr=&a;
	int **ptr1=&ptr;
	printf("%d\n",*ptr);
	printf("%d",**ptr1);
	return 0;
}