#include<iostream>
using namespace std;

int main(){
    int n,k,c,t;
    c=0;
    cin>>n>>k;
    for (int i = 0; i<n ; i++) {
        cin>>t;
        if(t%k==0)
        c++;
    }
    cout<<c;
    return 0;
}
