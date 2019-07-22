#include<stdio.h>
int main() {
	int case1, day, number;
	scanf("%d", &case1);
	while (case1 > 0) {
		int i, j, a[100], b[3650] = { 0 }, sum = 0;
		scanf("%d%d", &day, &number);
		for (i = 0; i < number; i++) {
			scanf("%d", &a[i]);
		}
		for (i = 0; i < number; i++) {
			for (j = 1; a[i] * j <= day; j++) {
				if (b[a[i] * j] < 1) {
					b[a[i] * j]++;
				}
			}
		}
		for (i = 1; i <= day; i++) {
			if (i % 7 != 0 && i % 7 != 6)
				sum = sum + b[i];
		}
		printf("%d\n", sum);
		case1--;
	}
}