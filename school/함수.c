#include <stdio.h>

int f(int a,int b){
	if(a<b) return b;
	else return a;
}

int main(){
	int score[10] = {18,77,66,99,15,56,97,64,48};
	int i, max = 0;
	for(i=0;i<10;i++){
		max = f(max,score[i]);
	}
	printf("%d\n",max);
}
