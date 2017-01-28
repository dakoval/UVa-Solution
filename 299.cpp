#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, l, swaps;
	cin >> n;
	while (n-- > 0) {
		swaps = 0;
		cin >> l;
		vector<int> v(l);
		for (int i = 0; i < l; i++)cin >> v[i];
		for (int i = 0; i < l; i++) {
			for (int j = i + 1; j < l; j++) {
				if (v[i] > v[j]) {
					swap(v[i], v[j]);
					swaps++;
				}
			}
		}
		cout << "Optimal train swapping takes " << swaps << " swaps." << endl;
	}
	return 0;
}