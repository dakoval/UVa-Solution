#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int codes[] = { 0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2 };

int main()
{
	string in;
	cout << setw(13) << "NAME" << setw(33) << "SOUNDEX CODE" << endl;
	while (cin >> in) {
		string s(1,in[0]);
		for (int i = 1; i < in.size(); i++) {
			if (codes[in[i] - 'A'] > 0 && codes[in[i] - 'A'] != codes[in[i - 1] - 'A']) {
				s += to_string(codes[in[i] - 'A']);
				if (s.length() > 3)break;
			}
		}
		for (int i = s.size(); i < 4; i++)s += '0';
		cout << setw(9 + in.size()) << in << setw(25 - in.size()) <<" "<< s << endl;
	}
	cout << setw(19) << " " << "END OF OUTPUT" << endl;
	return 0;
}