#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans=0;
        char ch;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>ch;
                if(i==n-1 && j!=m-1 && ch=='D'){
                    ans++;
                }
                if(j==m-1 && i!=n-1 && ch=='R'){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}