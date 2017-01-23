#include <iostream>
#include <sstream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
	int c;
	cin >> c;
	cin.ignore();
	string s;
	while (c-->0) {
		cin.ignore();
		getline(cin, s);
		istringstream is1(s);
		vector<int> vi = vector<int>(istream_iterator<int>(is1), istream_iterator<int>());
		getline(cin, s);
		istringstream is2(s);
		vector<string> vs = vector<string>(istream_iterator<string>(is2), istream_iterator<string>());
		vector<string> sort(vi.size()+1);
		for (int i = 0; i < sort.size()-1; i++)sort[vi[i]] = vs[i];
		for (int i = 1; i < sort.size(); i++)cout << sort[i] << endl;
		if (c > 0)cout << endl;
	}
}