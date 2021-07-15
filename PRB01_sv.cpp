#include <iostream>
using namespace std;
//prime number
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,flag = 0,i;
	    cin>>n;
	    for(i=2;i<=n/2;i++){
	        if(n%i==0){
	            cout<<"no\n";
	            flag = 1;
	            break;
	        }
	    }
	    if(n == 1){
	    cout<<"no\n";
	    flag = 1;
	    }
        if(flag==0)
	    cout<<"yes\n";
	}
	return 0;
}
