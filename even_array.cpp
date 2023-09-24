#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i%2!=arr[i]%2){
            if(i%2) odd++;
            else even++;
        }
    }
    if(odd!=even) cout<<"-1"<<endl;
    else cout<<odd<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}