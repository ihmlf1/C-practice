#include<stdio.h>
#include<string.h>
int main() {
	short num;
	scanf("%hd", &num);
	for (; num > 0; num--) {
		short i, count, total = 0, j;
		char fi[30] = { 0 }, se[30] = { 0 }, temp[30] = { 0 };
		scanf("%s", &fi);
		for (;; total++) {
			for (count = strlen(fi) - 1, i = 0; count >= 0; count--, i++) {
				se[i] = fi[count];
			}
			if (strncmp(fi, se, strlen(fi)) == 0 && total != 0)
				break;
			for (i = strlen(fi) - 1; i >= 0; i--) {
				if (fi[i] == '\0' || se[i] == '\0')
					temp[i] = fi[i] + se[i] - '0' - '0';
				else
					temp[i] = fi[i] + se[i] - '0';
				if ((temp[i] - '0') >= 10) {
					if (temp[i + 1] == '\0')
						temp[i + 1] = (temp[i] - '0') / 10 + '0';
					else
						temp[i + 1]++;
					temp[i] = (temp[i] - '0') % 10 + '0';
					for (j = i + 1; temp[i + 1] - '0' >= 10; j++) {
						if (temp[j + 1] == '\0')
							temp[j + 1] = (temp[j] - '0') / 10 + '0';
						else
							temp[j + 1] += (temp[j] - '0') / 10;
						temp[j] = (temp[j] - '0') % 10 + '0';
					}
				}
			}
			strncpy(fi, temp, strlen(temp));
		}
		printf("%d %s\n", total, fi);
	}
}