#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a, b;
	int table[1000000];
	for (int i = 1; i < 1000000; i++) {
		int count = 0;
		long long int val = i;
		while (true) {
			++count;
			if (val == 1)break;
			else if (val % 2 == 0) val /= 2;
			else val = val * 3 + 1;
		}
		table[i] = count;
	}
	while (scanf("%d %d",&a, &b)!=EOF) {
		cout << a << " " << b << " ";
		if (a > b) swap(a,b);
		int max = 0;
		for (a; a <= b; a++)if (table[a] > max)max = table[a];
		cout << max<<endl;
	}
	return 0;
}