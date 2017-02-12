#include <iostream>
#include <stack>
using namespace std;

int main()
{
	int n,p,pt, c[1000];
	while (true) {
		cin >> n;
		if (n == 0)break;
		while (true) {
			stack<int> st;
			cin >> c[0];
			if (c[0] == 0) {
				cout << endl;
				break;
			}
			for (int i = 1; i < n; i++) cin >> c[i];
			p = 1, pt = 0;
			while (p <= n) {
				st.push(p++);
				while (!st.empty() && pt<n && st.top() == c[pt] ) {
					st.pop();
					pt++;
				}
			}
			if (st.empty())cout << "Yes" << endl;
			else cout<<"No"<<endl;
		}
	}
}