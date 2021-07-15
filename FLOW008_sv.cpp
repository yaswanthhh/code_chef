#include <iostream>
using namespace std;

int check(int n){
    if(-20<=n<=20)
    return 1;
    else
    return 0;
}

int main() {
	int t;
	int o = -1;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(check(n)){
	        if(n<10){  //takes for negative numbers also
	                cout<<"Thanks for helping Chef!\n";
	        }
	        else
	            cout<<o<<"\n";  //if number greater than 10 
	    }
	}
	return 0;
}
