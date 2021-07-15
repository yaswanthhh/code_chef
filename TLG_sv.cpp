#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int s,t,lead[n],sum1=0,sum2=0,max_diff=0,w;
    
    for(int i=0;i<n;i++)
    {
        cin>>s>>t;
        sum1+=s;
        sum2+=t;
        lead[i]=abs(sum1-sum2);
        if(sum1>=sum2 && lead[i]>max_diff)
        {
            w=1;
            max_diff=lead[i];
        }
        else if (sum2>sum1 && lead[i]>max_diff)
        {
            w=2;
            max_diff=lead[i];
        }
    }
    cout<<w<<" "<<max_diff;
	return 0;
}
