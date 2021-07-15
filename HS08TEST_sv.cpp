#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int x;
	float y;
	cin>>x>>y;
	if(x%5==0 && y-0.5>=x){
	        y = y-x-0.5;
	}
	cout<<fixed<<setprecision(2)<<y;
	return 0;
}
