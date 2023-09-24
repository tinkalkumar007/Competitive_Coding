#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=1){
                arr[i]=INT_MAX;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=INT_MAX){
                cnt++;
            }
        }
        if(cnt>1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}