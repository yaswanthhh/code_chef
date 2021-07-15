#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	int a[n];
	int e = 0,o = 0;
	for(i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]%2==0)
	    e++;
	    else 
	    o++;
	}
	if(e>o)
	cout<<"READY FOR BATTLE";
	else
	cout<<"NOT READY";
	return 0;
}
