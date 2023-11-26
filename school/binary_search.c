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
	
	printf("Ž���� key���� �Է��ϼ��� : ");
	scanf("%d", &key);
	
	result = binary_search(0, n-1);
	
	if(result == -1) 
		printf("Ž�� ����");
	else
		printf("Ž������/ ��Ƚ��: %d",result);
	
	
	return 0;
}
