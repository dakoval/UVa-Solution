#include <iostream>
using namespace std;

int c[13] = { 10000,5000,2000,1000,500,200,100,50,20,10,5 };
long long com[30001];
int main()
{
	com[0] = 1;
	for (int i = 0; i < 11; ++i) {
		int f = 30001 - c[i];
		for (int j = 0; j < f; ++j) {
			com[j + c[i]] += com[j];
		}
	}
	double n;
	while (scanf("%lf",&n),n>.001) {
		printf("%6.2f%17lld\n", n, com[(int)(n * 100+.1)]);
	}
}