#include<stdio.h>
int main(){
	float l,b,s,base,h,r;
	printf("Enter length and breath of rectangle l,b:");
	scanf("%f%f",&l,&b);
	printf("%.2f",l*b);
	printf("Enter sides of square s :");
	scanf("%f",&s);
	printf("%.2f",s*s);
	printf("Enter baseand Height of triangle base,h:");
	scanf("%f%f",&base,&h);
	printf("%.2f",0.5*base*h);
	printf("Enter radius of the circle r :");
	scanf("%f",&r);
	float PI;
	PI=3.14;
	printf("%.2f",PI*r*r);
	return 0 ;
}
