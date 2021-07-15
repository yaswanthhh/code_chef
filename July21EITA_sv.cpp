#include <iostream>
using namespace std;

int check(int d, int x, int y, int z){
    if(1<=d<7 && 1<=z<x<y<=18)
    return 1;
    else 
    return 0;
}

int max(int a, int b){
    return (a>b)?a:b;
}

int main() {
	int d,x,y,z,t;
	cin>>t;
	for(int i = 0;i<t;i++){
	    int s1 = 0;
	    int s2 = 0;
	    cin>>d>>x>>y>>z;
	    if(check(d,x,y,z)){
	        s1 = 7*x;
	        s2 = d*y + (7-d)*z;
	        cout<<max(s1,s2)<<"\n";
	    }
	}
	return 0;
}
