#include <iostream>
using namespace std;
// no. of 2x2 squares in isos triangle right angled.
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int b = (n/2)-1;
	    cout<<b*(b+1)/2<<"\n";
	}
	return 0;
}
