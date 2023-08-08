#include <stdio.h>

int main() {
	int n;
	int arr[1001];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i, int k = 0; j < n, k < n; j++, k++) {
			if (j == n) {
				j = 0;
			}
			printf("%d", arr[j]);
		}
		printf("\n");
	}
}