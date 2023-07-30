#include<stdio.h>


// a~b까지 출력하는 함수를 작성
void odd_print(a, b) {
	if (a > b) return;
	if (a % 2 == 1) printf("%d ", a);
	odd_print(a + 1, b);
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	//함수호출 부분 작성
	odd_print(a, b);
	return 0;
}