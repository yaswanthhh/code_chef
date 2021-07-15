#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    if(a==b)
    return a;
    if(a>b)
    return gcd(a-b,b);
    return gcd(a,b-a);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    cout<<gcd(a,b)<<" "<<lcm(a,b)<<"\n";
	}
	return 0;
}
//////////////////////////////////////////////////////////////
# cook your dish here
from math import gcd
for _ in range(int(input())):
    a,b=map(int,input().split())
    print(gcd(a,b),int(a*b/(gcd(a,b))))
