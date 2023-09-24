#include <bits/stdc++.h>
using namespace std;
int dp[4][4001];
int solve(int arr[],int i,int wt){
    if(wt==0){
        return 0;
    }
    if(i>=3){
        return INT_MIN;
    }
    if(dp[i][wt]!=-1){
        return dp[i][wt];
    }
    if(arr[i]<=wt){
        return dp[i][wt]=max(1+solve(arr,i,wt-arr[i]),solve(arr,i+1,wt));
    }
    return dp[i][wt]=solve(arr,i+1,wt);
}
int main() {
    int n;
    cin>>n;
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    sort(arr,arr+3);
    memset(dp,-1,sizeof(dp));
    cout<<solve(arr,0,n)<<endl;
    //cout<<ans<<endl;
    return 0;
}
