#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=1;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[a[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1;i<n;i++){
        if(b[i]==0)
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}

