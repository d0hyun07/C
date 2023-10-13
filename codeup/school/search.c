#include <stdio.h>
int list[] = {9,5,8,3,7};

int search(int low, int high, int key){
	int i;
	for(i=low;i<=high;i++){
		if(list[i] == key)
			return i+1;
	}
	return -1;
}

int main() {
	int n, key, result;
	n = sizeof(list)/sizeof(int);
	
	printf("탐색할 key값을 입력하세요 : ");
	scanf("%d", &key);
	
	result = search(0, n-1,key);
	
	if(result == -1) 
		printf("탐색 실패");
	else
		printf("탐색성공/ 비교횟수: %d",result);
	
	
	return 0;
}
