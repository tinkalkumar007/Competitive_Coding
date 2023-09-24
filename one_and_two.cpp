#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long leftArr[n];
        long long rightArr[n];
        if(arr[0]==2) leftArr[0]=1;
        else leftArr[0]=0;
        for(int i=1;i<n;i++){
            if(arr[i]==2){
                leftArr[i]=leftArr[i-1]+1;
            }
            else{
                leftArr[i]=leftArr[i-1];
            }
        }
        if(arr[n-1]==2) rightArr[n-1]=1;
        else rightArr[n-1]=0; 
        for(int i=n-2;i>=0;i--){
            if(arr[i]==2){
                rightArr[i]=rightArr[i+1]+1;
            }
            else{
                rightArr[i]=rightArr[i+1];
            }
        }
        bool possible=false;
        for(int i=0;i<n-1;i++){
            if(leftArr[i]==rightArr[i+1]){
                cout<<i+1<<endl;
                possible=true;
                break;
            }
        }
        if(!possible) cout<<"-1"<<endl;
    }
    return 0;
}