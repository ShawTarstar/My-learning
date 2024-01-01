#include<stdio.h>
struct gas {
	double d;
	double p;
	int num;
};
struct gas gastation[1000],ori;
struct gas* smaller;
double d1, c, d2, ps, money; int n;
int findgas(struct gas *pos)
{
	double maxdis = pos->d + c * d2; int find = 0, i, change = 0;
	double smallnum = 10000;
	for (i = 0; i < n; i++) {
		if (gastation[i].d> pos->d && gastation[i].d <= maxdis) {
			find = 1; 
			if (gastation[i].p <= pos->p) {
				if (gastation[i].d < smallnum) {
					smaller = &gastation[i]; smallnum = gastation[i].d;
					change = 1;
				}
			}
		}
	}
	if (find == 0) return 0;//一个加油站都没找到->能到终点/不能到终点
	if (change == 0) return 1;//找到了，但是全都是比现在所处的位置贵的->能到终点/不能到终点
	return 2;//找到并改变了smaller
}
int main()
{
	int i, judge;
	double money = 0, gasum, maxdis;
	scanf("%lf%lf%lf%lf%d", &d1, &c, &d2, &ps, &n);
	ori.d = 0; ori.num = -1; ori.p = ps;
	for (i = 0; i < n; i++) {
		scanf_s("%lf%lf", &gastation[i].d, &gastation[i].p);
		gastation[i].num = i;
	}
	smaller = &ori; gasum = 0;
	while (1) {
		struct gas* oripos = smaller;
		judge = findgas(smaller);
		if (judge == 0) {
			if (smaller->d + c * d2 >= d1) {
				money += ((d1 - smaller->d) / d2 - gasum) * smaller->p;
				printf("%.2lf", money);
				break;
			}
			else {
				printf("No Solution");
				break;
			}
		}
		else if (judge == 1) {
			if (smaller->d + c * d2 < d1) {
				money += smaller->p * c; gasum = c;
				double max = 100000; int maxnum;
				maxdis = smaller->d + c * d2;
				for (i = 0; i < n; i++) {
					if (gastation[i].d > smaller->d && gastation[i].d <= maxdis) {
						if (gastation[i].p < max) {
							max = gastation[i].p;
							maxnum = i;
						}
					}
				}
				gasum -= (gastation[maxnum].d - smaller->d) / d2;
				smaller = &gastation[maxnum];
			}
			else {
				money+= ((d1 - smaller->d) / d2 - gasum) * smaller->p;
				printf("%.2lf", money);
				break;
			}
		}
		else if (judge == 2) {
			money += oripos->p * ((smaller->d - oripos->d) / d2 - gasum);
		}
	}
}
