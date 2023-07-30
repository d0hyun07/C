#include <stdio.h>

int main(){
	int i,j,w,h,d,n,l,x,y;
	int arr[101][101]={};
	
	
	scanf("%d %d",&w,&h);
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d %d",&l,&d,&x,&y);
		while(l--){
			if(d){
				arr[x++][y] = 1;
			}else{
				arr[x][y++] = 1;
			}
		}
	}
	for(i=1;i<=w;i++){
		for(j=1;j<=h;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
