#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
char startchar[205];
char messa[105][205];
char endchar[205];
char abt[27] = "FGHIJKLMNOPQRSTUVWXYZABCDE";
int compchar(char comp1[], const char comp2[], int compnum)
{
	int i;
	for (i = 0; i <= compnum; i++) if (comp1[i] != comp2[i]) return 0;
	return 1;
}
int main()
{
	int i, j, k;
	while (scanf("%s", startchar) != EOF)
	{
		//printf("startchar=%s\n", startchar);
		if (compchar(startchar,"START",5)==0) {
			memset(startchar, 0, sizeof(startchar)); 
			continue;
		}
		else {
			//printf("startchar=%s\n", startchar);
			for (i = 0;; i++) {
				scanf("%s", messa[i]);
				if (compchar(messa[i], "ENDOFINPUT", 10)) {
					break;
				}
			}
		}
		while (1) {
			scanf("%s", endchar);
			if (compchar(endchar, "END", 3)) {
				break;
			}
			memset(endchar, 0, sizeof(endchar));
		}
		for (j = 0; j < i; j++) {
			for (k = 0; messa[j][k] != '\0'; k++) {
				if (messa[j][k] >= 'A' && messa[j][k] <= 'Z') {
					messa[j][k] = abt[messa[j][k] - 'A'];
				}
			}
			printf("%s\n", messa[j]);
		}
	}
}