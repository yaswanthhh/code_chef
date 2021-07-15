#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int q,p;
	    cin>>q>>p;
	    double s = q*p;
	    if(q>1000)
	    cout<<fixed<<setprecision(6)<<0.9*s<<"\n";
	    else
	    cout<<fixed<<setprecision(6)<<s<<"\n";
	}
	return 0;
}
