#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	cout << setprecision(2) << fixed << setfill('0');
	int h, m, s, time = 0, speed = 0,newTime;
	double dis = 0;
	char a;
	while (cin >> h >> a >> m >> a >> s) {
		newTime = h * 3600 + m * 60 + s;
		dis += speed *((newTime - time) / 3600.0);
		time = newTime;
		if (cin.peek() == ' ') {
			cin >> speed;
		}
		else {
			cout << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << s << " " << dis << " km\n";
		}
	}
}