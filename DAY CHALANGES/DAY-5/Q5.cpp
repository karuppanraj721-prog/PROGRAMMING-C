#include<stdio.h>
int main(){
	float principle,rate,time,SI;
	scanf("%f",&principle);
	scanf("%f",&rate);
	scanf("%f",&time);
	SI=(principle*rate*time)/100;
	printf("%.2f",SI);
	return 0;
}
