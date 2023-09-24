#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int negs=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<0){
                negs++;
                arr[i]=-arr[i];
            }
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end());
        if(negs&1) sum-=2*arr[0];
        cout<<sum<<endl;
    }
    return 0;
}