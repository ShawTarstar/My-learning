#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int tree[10005];
int main()
{
	memset(tree, 0, sizeof(tree));
	int l, m, i, j, start, end, ans = 0;
	scanf("%d%d", &l, &m);
	for (i = 0; i <= l; i++) {
		tree[i] = 1;
	}
	for (i = 0; i < m; i++) {
		scanf("%d%d", &start, &end);
		for (j = start; j <= end; j++) {
			tree[j] = 0;
		}
	}
	for (i = 0; i <= l; i++) {
		if (tree[i] == 1) ans++;
	}
	printf("%d", ans);
}