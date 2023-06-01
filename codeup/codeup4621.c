#include <stdio.h>

int main(){
	int n,k;
	int i;
	int arr[10001] = {};
	int j=1;
	
	scanf("%d %d",&n,&k);
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			arr[j]= i;
			j++;
		}
				
	}
	
	printf("%d",arr[k]);
}
