#include <iostream>
using namespace std;
int sum(int a){
    int s = 0;
    while(a!=0){
        s+=a%10;
        a= a/10;
    }
    return s;
}
int main() {
	int t,a;
    cin>>t;
    while(t--){
        cin>>a;
        cout<<sum(a)<<"\n";
    }
	return 0;
}
