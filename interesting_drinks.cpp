#include<bits/stdc++.h>
using namespace std;
void binSrch(int arr[],int s,int e,int key,int &idx){
    if(s>e){
        return;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]<=key){
        binSrch(arr,mid+1,e,key,idx);
    }
    else{
        idx=min(idx,mid);
        binSrch(arr,s,mid-1,key,idx);
    }
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int amt;
        cin>>amt;
        if(amt<arr[0]){
            cout<<"0"<<endl;
        }
        else if(amt>=arr[n-1]){
            cout<<n<<endl;
        }
        else{
            int idx=INT_MAX;
            binSrch(arr,0,n-1,amt,idx);
            cout<<idx<<endl;
        }
    }
    return 0;
}