#include <stdio.h>
int sum;
void hanoi(int n, char from, char tmp, char to){
	if(n==1) printf("���� 1�� %c -> %c.\n", from, to);
		sum = sum +1;
	else{
		hanoi(n-1, from, to, tmp);
		printf("���� %d�� %c -> %c\n",n, from, to);
		sum = sum + 1;
		hanoi(n-1,tmp, from, to);
	}
}


int main(){
	int n;
	scanf("%d",&n);
	hanoi(n, 'A','B','C');
	printf("%d",sum);
}
