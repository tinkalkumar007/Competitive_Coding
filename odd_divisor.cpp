#include<bits/stdc++.h>
using namespace std;
bool solve(){
    long long n;
    cin>>n;
    if(n&(n-1)) return true;
    return false;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        bool isOdd=solve();
        if(isOdd){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}