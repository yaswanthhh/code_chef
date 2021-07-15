#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    int f = 1;
	    for(int i = 1;i<=n;i++){
	        f = f*i;      //factorial
	    }
	    cout<<f<<"\n";
	    t--;
	}
	return 0;
}
