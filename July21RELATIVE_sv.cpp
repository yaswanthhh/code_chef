#include <iostream>
using namespace std;

int check(int g, int c){
    if(1<=g<=10 && 1000<=c<=3000 )
    return 1;
    else
    return 0;
}

int main() {
	int t,c,g;
	cin>>t;
	for(int i = 0;i<t;i++){
	    long h = 0;
	    cin>>g>>c;
	    if(check(g,c)){
	        h = (c*c)/(2*g);
	        cout<<h<<"\n";
	    }
	}
	return 0;
}
