#include<iostream>
using namespace std;

int main(){
    int t,a,b;
    cin>>t;
    int s[t];
    for(int i = 0; i<t; i++){
        cin>>a>>b;
        s[i] = a+b;
    }
    for(int i = 0;i<t;i++){
        cout<<s[i]<<"\n";
    }
    return 0;   
}
