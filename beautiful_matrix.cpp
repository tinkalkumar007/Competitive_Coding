#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    bool ans=false;
    int solve(int arr[5][5],int i,int j,int vis[5][5]){
        if(i==2 && j==2){
            ans=true;
            return 0;
        }
        int res=1e9;
        vis[i][j]=true;
        for(int k=0;k<4;k++){
            int r=i+dx[k];
            int c=j+dy[k];
            if(r>=0 && c>=0 && r<5 && c<5 && !vis[r][c]){
                res=min(res,1+solve(arr,r,c,vis));
            }
        }
        vis[i][j]=false;
        return res;
    }
    void print(int arr[5][5]){
        int vis[5][5];
        int idxi=-1,idxj=-1;
        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                idxi=i;
                idxj=j;
            }
            vis[i][j]=false;
        }
        }
        int steps=solve(arr,idxi,idxj,vis);
        if(steps>=1e9) cout<<"0"<<endl;
        else cout<<steps<<endl;
    }
};
int main() {
    int arr[5][5];
    int idxi=-1,idxj=-1;
    Solution ob;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    ob.print(arr);
    return 0;
}