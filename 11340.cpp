/*
#include <string>
#include <iostream>
#include <map>
using namespace std;

int main() {
    int cases,n,p;
    string line;
    char l;
    map<char,int> m;
    cin>>cases;
    while(cases-->0){
        m.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>l;
            cin>>p;
            m[l]=p;
        }
        cin>>n;
        getline(cin,line);
        double tot=0;
        for(int i=0;i<n;i++){
            getline(cin,line);
            for(int j=0;j<line.length();j++){
                if(m.find(line[j])!=m.end())tot+=m[line[j]];
            }
        }
        printf("%.2F$\n",tot/100);
    }
    return 0;
}
 */
