#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	int n, p, c=1;
	while (cin >> n >> p, n || p) {
		if (c != 1)cout << endl;
		double tp, bp;//price
		int tc,bc=-1; //compliance
		string tn, bn,null; //name
		while (n-->-1)getline(cin,null); //-1 because \n from line above
		while (p-->0) {
			getline(cin, tn);
			cin>> tp >> tc;
			if ((tc>bc) || ((tc==bc)&&(tp<bp))){
				bn = tn;
				bp = tp;
				bc = tc;
			}
			while (tc-- > -1)getline(cin,null);//-1 because \n from line above
		}
		cout << "RFP #" << c++ << endl << bn << endl;
	}
	return 0;
}