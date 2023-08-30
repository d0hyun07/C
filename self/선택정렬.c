#include <stdio.h>

int main(){
	int list[]={5,3,8,1,2,7};
	int index, min,i,j,size;
	size=sizeof(list)/sizeof(int);
		
	for(i=0;i<size-1;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(list[j]<list[min])
				min = j;
		}
		temp=list[i];
		list[i] = list[min];
		list[min] = temp;
	}
	
	for(i=0;i<size;i++){
		printf("%d",list[i]);
	}
}
