#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int d,n;
	    cin>>d>>n;
	    for(int i=0;i<d;i++){
	        int k =0;
	        for(int j=1;j<=n;j++){
	            k = k+j;
	        }
	        n = k;
	    }
	    cout<<n<<"\n";
	}
	return 0;
}
