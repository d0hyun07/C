#include <stdio.h>

int main(){
	int a,b,c,d,e,f,g;
	int min,plus;
	plus = 0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	scanf("%d",&g);
	if(a%2==0||b%2==0||c%2==0||d%2==0||e%2==0||f%2==0||g%2==0){
	
		if(!(a%2==0){
			min = a;
			plus = plus + a;
		}
		if(!(b%2==0){
			if(b<min){
				min = b;
			}
			plus = plus + b;
		}
		if(!(c%2==0){
			if(c<min){
				min = c;
			}
			plus = plus + c;
		}
		if(!(d%2==0){
			if(d<min){
				min = d;
			}
			plus = plus + d;
		}
		if(!(e%2==0){
			if(e<min){
				min = e;
			}
			plus = plus + e;
		}
		if(!(f%2==0){
			if(f<min){
				min = f;
			}
			plus = plus + f;
		}
		if(!(g%2==0){
			if(g<min){
				min = g;
			}
			plus = plus + g;
		}
		printf("%d",plus);
		
	}else{
		printf("-1");
	}
	
	
	return 0;
}
