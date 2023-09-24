#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<char,pair<int,int>> dir;
    dir['U']={0,1};
    dir['R']={1,0};
    dir['L']={-1,0};
    dir['D']={0,-1};
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int idxi=0,idxj=0;
        int reached=0;
        for(int i=0;i<n;i++){
            auto it=dir[s[i]];
            idxi+=it.first;
            idxj+=it.second;
            if(idxi==1 && idxj==1){
                cout<<"YES"<<endl;
                reached=1;
                break;
            }
        }
        if(!reached){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}