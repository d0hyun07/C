#include <stdio.h>

int main(){
	int Arr[1000] = {};
	int N;
	int i,j,k;
	
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&Arr[i]);
	}
	for(k=0;k<N;k++){
		printf("%d: ",k+1);
		for(j=0;j<N;j++){
			if(k!=j){
				if(Arr[k]>Arr[j]){printf("> ");}
				else if(Arr[k]<Arr[j]){printf("< ");}
				else{printf("= ");}
			}
		}
		printf("\n");
	}
	
	return 0;
}
