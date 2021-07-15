#include <iostream>
#include<ctype.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char a;
	    cin>>a;
	    a = toupper(a);
	    if(a == 'B')
	    cout<<"BattleShip\n";
	    if(a == 'C')
	    cout<<"Cruiser\n";
	    if(a == 'D')
	    cout<<"Destroyer\n";
	    if(a == 'F')
	    cout<<"Frigate\n";
	}
	return 0;
}
