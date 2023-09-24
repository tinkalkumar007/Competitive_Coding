#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==1){
            cout<<"YES"<<endl;
            cout<<"1 2"<<endl;
        }
        else if(n%2){
            cout<<"YES"<<endl;
            int i=n;
            int j=n+2;
            while(j<=n*2){
                cout<<i<<" "<<j<<endl;
                i--;
                j+=2;
            }
            j=n+1;
            while(i>0){
                cout<<i<<" "<<j<<endl;
                i--;
                j+=2;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}