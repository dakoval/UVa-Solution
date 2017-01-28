#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string key = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c;
	while (cin.get(c)) {
		if (c == '\n' || c == ' ')cout << c;
		else cout << key[key.find(c) - 1];
	}
	return 0;
}