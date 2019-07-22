#include<stdio.h>
#include<string.h>
int main() {
	short num, i, j, temp, k, te;
	scanf("%hd", &num);
	while (num != 0) {
		char in[100][100] = { 0 };
		for (i = 0; i < num; i++) {
			scanf("%s", &in[i]);
			for (temp = i, j = 0; j < i; j++) {
				if (in[temp][0] > in[j][0]) {
					char tem[100] = { 0 };
					strcpy(tem, in[temp]);
					strcpy(in[temp], in[j]);
					strcpy(in[j], tem);
					te = temp;
					temp = i;
					i = temp;
				}
				else if (in[temp][0] == in[j][0]) {
					char temp1[100] = { 0 }, temp2[100] = { 0 };
					strcpy(temp1, in[temp]);
					strcat(temp1, in[j]);
					strcpy(temp2, in[j]);
					strcat(temp2, in[temp]);
					if (strcmp(temp1, temp2) > 0) {
						char tem[100] = { 0 };
						strcpy(tem, in[temp]);
						strcpy(in[temp], in[j]);
						strcpy(in[j], tem);
						te = temp;
						temp = i;
						i = temp;
					}
				}
			}
		}
		for (i = 0; i < num; i++) {
			printf("%s", in[i]);
		}
		puts("");
		scanf("%hd", &num);
	}
}