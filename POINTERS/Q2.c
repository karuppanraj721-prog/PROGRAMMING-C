#include<stdio.h>
int main(){
	int a;
	float b;
	scanf("%d%f",&a,&b);
	void*ptr; ptr=&a;
	printf("%d\t",*(int*)ptr);
	ptr=&b;
	printf("%f",*(float*)ptr);
	return 0;
}