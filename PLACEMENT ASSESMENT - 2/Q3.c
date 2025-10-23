#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(isupper(a)){
		printf("Uppercase");
	}
	else if(islower(a)){
		printf("Lowercase");
	}
	else if(a=='0' ||a=='1' ||a=='2' ||a=='3' ||a=='4' ||a=='5' ||a=='6' ||a=='7' ||a=='8' ||a=='9'){
		printf("Digit");
	}
	else{
		printf("special symbol");
	}
	return 0;
}

