#include <stdio.h>

void f(int* a, int* b) {
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		f(&a, &b);
	}
	if (b > c) {
		f(&b, &c);
	}
	if (a > b) {
		f(&a, &b);
	}
	printf("%d %d %d", a, b, c);
}