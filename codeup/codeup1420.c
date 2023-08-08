#include <stdio.h>

int main(){
	int i,j,n;
	char name[50];
	int score[50];
	int score2[50];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%s %d",name[i],&score[i]);
	}
	for(j=0;j<n;j++){
		score[j] = score2[j];
	}
}
