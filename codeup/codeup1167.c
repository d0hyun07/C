#include <stdio.h>

int main() {
	int a,b,c, tmp;
	
	scanf_s("%d %d %d", &a, &b, &c);
	if (a>b) {
		tmp = a;
		a= b;
		b = tmp;
	}
	if (a > c) {
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b>c) {
		tmp = b;
		b = c;
		c= tmp;
	}
	


	printf("%d", b);
}
