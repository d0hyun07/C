#include <stdio.h>

int main(){
	int num,a,b;
	
	scanf("%d",&num);
	b = num%10;
	a = num/10;
	num = (b*10 + a) *2;
    if(num >=100){num = num -100;}
    printf("%d\n",num);
    if(num <=50){
        printf("GOOD");
    }
    else{printf("OH MY GOD");}
}
