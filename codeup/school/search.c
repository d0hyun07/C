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
	
	printf("Ž���� key���� �Է��ϼ��� : ");
	scanf("%d", &key);
	
	result = search(0, n-1,key);
	
	if(result == -1) 
		printf("Ž�� ����");
	else
		printf("Ž������/ ��Ƚ��: %d",result);
	
	
	return 0;
}
