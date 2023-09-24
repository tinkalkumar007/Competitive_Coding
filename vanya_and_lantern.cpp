#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n,l;
    cin>>n>>l;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double mx=max(l-arr[n-1],arr[0]-0);
    for(int i=1;i<n;i++){
        if((arr[i]-arr[i-1])/double(2)>mx){
            mx=(arr[i]-arr[i-1])/double(2);
        }
    }
    cout<<fixed<<setprecision(10)<<mx<<endl;
    return 0;
}
