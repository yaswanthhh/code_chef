#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    int n,d = 0;
	    cin>>n;
	    while(n){
	        d = (d*10) + (n%10);
	        n = n/10;
	    }
	    cout<<d<<"\n";
	    t--;
	}
	return 0;
}
