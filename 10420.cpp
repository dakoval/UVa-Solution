#include <iostream>
#include <string>
#include <map>
using namespace std;
map<string, int> m;
int main() {
	int n;
	cin >> n;
	while (n--) {
		string c;
		cin >> c;
		m[c]++;
		getline(cin, c);
	}
	for (auto &it : m) {
		cout << it.first << " " << it.second << endl;
	}
}