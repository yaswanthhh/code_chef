#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,d=0,l;
	    cin>>n;
	    l = n;
	    while(n>0){
	        d = (d*10) + (n%10);
	        n = n/10;
	    }
	    if(d==l)
	    cout<<"wins\n";
	    else
	    cout<<"loses\n";
	}
	return 0;
}
