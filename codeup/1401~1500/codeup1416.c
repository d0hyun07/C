#include <stdio.h>

int main(){
	int n;
	int i=0;
	int j;
	int arr[100]={0,};
	scanf("%d",&n);
	if(n==0){
		printf("0");
	}
	while(n>0){
		arr[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=i-1;j>=0;j--){
		printf("%d",arr[j]);
	}
}
