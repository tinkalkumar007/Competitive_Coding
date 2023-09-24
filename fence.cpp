#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=1;
    int maxheight=0;
    for(int i=0;i<k;i++){
        maxheight+=arr[i];
    }
    int height=maxheight;
    for(int i=k,j=0;i<n;i++,j++){
        height+=(arr[i]-arr[j]);
        if(height<maxheight){
            maxheight=height;
            ans=j+2;
        }
    }
    cout<<ans<<endl;
    return 0;
}