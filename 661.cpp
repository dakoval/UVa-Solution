#include <iostream>
using namespace std;

int main()
{
	int n, m, c, seq = 1, max, tot;
	bool b;
	while (scanf("%d %d %d", &n, &m, &c) != EOF) {
		if (n == 0 && m == 0 && c == 0)break;
		max = tot = 0;
		b = false;
		int* val = new int[n];
		bool* st = new bool[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &val[i]);
			st[i] = false;
		}
		for (int i = 0; i < m; i++) {
			scanf("%d", &n);
			if (!st[n - 1]) {
				tot += val[n - 1];
				st[n - 1] = !st[n - 1];
			}
			else {
				tot -= val[n - 1];
				st[n - 1] = !st[n - 1];
			}
			if (tot > c)b = true;
			else {
				if (tot > max)max = tot;
			}
		}
		if (b)printf("Sequence %d\nFuse was blown.\n\n", seq);
		else printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n", seq, max);
		seq++;
	}
	return 0;
}