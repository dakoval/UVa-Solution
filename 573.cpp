#include <iostream>
using namespace std;

int main()
{
	float H, U, D, F, up;
	int i;
	while (scanf("%f %f %f %f", &H, &U, &D, &F) && H) {
		F = U*F / 100;
		up = 0;
		for (int i = 1;; i++) {
			if (U > 0)up += U;
			U -= F;
			if (H < up) {
				printf("success on day %d\n", i);
				break;
			}
			up -= D;
			if (up < 0) {
				printf("failure on day %d\n", i);
				break;
			}
		}
	}
}