#include <stdio.h>

int main(){
	int a[7];
	int sum=0, min=100;
	int cnt = 0;
	int i;
	for(i=0;i<7;i++){
		scanf("%d",&a[i]);
		if(a[i]%2!=0){
			sum = sum + a[i];
			if(min>a[i]){
				min = a[i];
			}
		}else{
			cnt++;
			if(cnt ==7){
				sum=-1;
			}
		}
	}
	printf("%d\n",sum);
	printf("%d",min);
	
	return 0;
}
