#include<stdio.h>
int main()
{
	int y, m, d, i, sum;
	while (scanf_s("%d%d%d", &y, &m, &d) != EOF)
	{
		sum = 0;
		for (i = m - 1; i > 0; i--) {
			switch (i) {
			case 1:case 3:case 5:case 7:case 8:case 10:sum += 31; break;
			case 2:if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) sum += 29;
				  else sum += 28; break;
			case 4:case 6:case 9:case 11:sum += 30; break;
			}
		}
		sum += d;
		printf("%d\n", sum);
	}
}