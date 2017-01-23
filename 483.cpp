#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string s;
	bool sp;
	while (getline(cin, s)) {
		istringstream is(s);
		sp = false;
		while (is >> s) {
			if (sp) cout << " ";
			sp = true;
			for (int i =s.size()- 1; i >= 0; i--)cout << s[i];
		}
		cout << endl;
	}
	return 0;
}