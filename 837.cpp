#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point {
	double x;
	int index;
	bool operator()(const Point& l, const Point& r) {
		return l.x < r.x;
	}
};
struct trans {
	bool on;
	double w;
};
int main()
{
	int c;
	cin >> c;
	for (int k = 0; k < c; k++) {
		int np;
		cin >> np;
		vector<Point> p(np * 2);
		vector<trans> t(np);
		for (int i = 0; i < np; i++) {
			double x1, y1, x2, y2, w;
			cin >> x1 >> y1 >> x2 >> y2 >> w;
			p[i * 2].x = x1;
			p[i * 2].index = i;
			p[i * 2 + 1].x = x2;
			p[i * 2 + 1].index = i;
			t[i].w = w;
			t[i].on = false;
		}
		sort(p.begin(), p.end(),Point());
		cout << (np * 2 + 1) << endl;
		for (int i = 0; i < np * 2+1; i++) {
			if (i == 0)printf("-inf ");
			else printf("%.3f ", p[i - 1].x);
			if (i == np * 2) printf("+inf ");
			else printf("%.3f ", p[i].x);
			double c = 1.0;
			if ((i > 0) && (i < np * 2)) {
				for (int j = 0; j < np; j++)
					if (t[j].on) c *= t[j].w;
			}
			printf("%.3f\n", c);
			if (i != np * 2)t[p[i].index].on = !t[p[i].index].on;
		}
		if (k != c - 1)printf("\n");
	}
	return 0;
}