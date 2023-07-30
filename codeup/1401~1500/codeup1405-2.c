#include <stdio.h>

int main() {
	int n, a[1000], t;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int j = 0; i < n; i++) {
		for (int i = 0; i < n; i++) {
			printf("%d", a[i]);
		}
		printf("\n");
		t = a[0];
		for (int i = 0; i < n; i++) {
			a[i] = a[i + 1];
		}
		a[n - 1] = t;
	}
}