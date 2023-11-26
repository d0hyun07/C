#include <stdio.h>
int list[] = {2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47};
int key, count=0,result;

int binary_search(int low, int high){
	int middle;
	
	middle=(low+high)/2;
	if(low<=high){
		count++;
		if(key==list[middle])
			return count;
		else if(key>list[middle])
			binary_search(middle+1, high);
		else
			binary_search(low, middle-1);
	}
	else
		return -1;
}

int main() {
	int n;
	n = sizeof(list)/sizeof(int);
	
	printf("탐색할 key값을 입력하세요 : ");
	scanf("%d", &key);
	
	result = binary_search(0, n-1);
	
	if(result == -1) 
		printf("탐색 실패");
	else
		printf("탐색성공/ 비교횟수: %d",result);
	
	
	return 0;
}
