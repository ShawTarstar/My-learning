#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
int score[15];
struct stu {
	char num[25];
	int stuscore;
	int solved[15];
};
struct stu temp, student[1005], upstudent[1005];
int main()
{
	int n, m, g, i, j, k, solvenum, solve;
	while (scanf("%d", &n) != EOF && n)
	{
		scanf("%d%d", &m, &g);
		k = 0;
		memset(student, 0, sizeof(student));
		memset(upstudent, 0, sizeof(upstudent));
		memset(score, 0, sizeof(score));
		for (i = 0; i < m; i++) scanf("%d", &score[i]);
		for (i = 0; i < n; i++) {
			student[i].stuscore = 0;
			scanf("%s %d", student[i].num, &solve);
			for (j = 0; j < solve; j++) {
				scanf("%d", &solvenum);
				student[i].stuscore += score[solvenum - 1];
			}
			//printf("stuscore[%d]=%d\n", i, student[i].stuscore);
			if (student[i].stuscore >= g) upstudent[k++] = student[i];
		}
		printf("%d\n", k);
		for (i = 0; i < k - 1; i++) {
			for (j = 0; j < k - 1 - i; j++) {
				if (upstudent[j].stuscore < upstudent[j + 1].stuscore) {
					temp = upstudent[j];
					upstudent[j] = upstudent[j + 1];
					upstudent[j + 1] = temp;
				}
				if (upstudent[j].stuscore == upstudent[j + 1].stuscore) {
					if (strcmp(upstudent[j].num, upstudent[j + 1].num) > 0) {
						temp = upstudent[j];
						upstudent[j] = upstudent[j + 1];
						upstudent[j + 1] = temp;
					}
				}
			}
		}
		for (i = 0; i < k; i++) {
			printf("%s %d\n", upstudent[i].num, upstudent[i].stuscore);
		}
	}
	return 0;
}