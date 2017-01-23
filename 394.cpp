#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

typedef map<string, int> msi;

 struct Array {

	int dim;
	int base;
	int size;
	string name;
	int U[10];
	int L[10];
	int C0;
	int C[10];
};

int main()
{
	int N(0), R(0);
	cin >> N >> R;
	msi nameIndexMap;
	vector<Array> arrays;
	struct Array arr = {};

	for (int i = 0; i < N; i++) {
		cin >> arr.name >> arr.base >> arr.size >> arr.dim;
		for (int d = 0; d < arr.dim; d++) {
			cin >> arr.L[d] >> arr.U[d];
		}
		arr.C[arr.dim - 1] = arr.size;
		arr.C0 = arr.base - (arr.C[arr.dim - 1] * arr.L[arr.dim - 1]);
		for (int j = arr.dim - 2; j >= 0; j--) {
			arr.C[j] = arr.C[j + 1] * (arr.U[j + 1] - arr.L[j + 1] + 1);
			arr.C0 = arr.C0 - (arr.C[j] * arr.L[j]);
		}
		nameIndexMap[arr.name] = i;
		arrays.push_back(arr);
	}
	string arrName;
	int indice(0);
	long long address(0);
	for (int i = 0; i < R; i++) {
		cin >> arrName;
		indice = nameIndexMap[arrName];
		cout << arrName << "[";
		arr = arrays[indice];
		address = arr.C0;
		for (int j = 0; j < arr.dim; j++) {
			cin >> indice;
			address += arr.C[j] * indice;
			cout << indice;
			if (j != arr.dim - 1) {
				cout << ", ";
			}
			else {
				cout << "]";
			}
		}
		cout << " = " << address << endl;
	}
	return 0;
}