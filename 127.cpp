#include <iostream>
#include <vector>
#include <sstream>
#include <stack>
using namespace std;

int main()
{
	while (true) {
		string l,f,s;
		int g = 52;
		getline(cin, l);
		istringstream ss(l);
		ss >> f;
		if (f == "#")break;
		vector<stack<string>> v(52, stack<string>());
		v[0].push(f);
		for (int i = 1; i < 26; i++) {
			ss >> f;
			v[i].push(f);
		}
		getline(cin, l);
		ss.clear();
		ss.str(l);
		for (int i = 26; i < 52; i++) {
			ss >> f;
			v[i].push(f);
		}
		for (int i = 1; i < g; i++) {
			f = v[i].top();
			if (i > 2 && (f.at(0) == v[i - 3].top().at(0) || f.at(1) == v[i - 3].top().at(1))) {
				v[i].pop();
				v[i - 3].push(f);
				if (v[i].empty()) {
					g--;
					v.erase(v.begin()+i);
				}
				i -= 4;
			}else if (i > 0 && (f.at(0) == v[i - 1].top().at(0) || f.at(1) == v[i - 1].top().at(1))) {
				v[i].pop();
				v[i - 1].push(f);
				if (v[i].empty()) {
					g--;
					v.erase(v.begin() + i);
				}
				i-=2;
			}
		}
		cout << g << " pile" << (g != 1 ? "s" : "") << " remaining:";
		for (int i = 0; i < g; i++) cout << " " << v[i].size();
		cout << endl;
	}
	return 0;
}