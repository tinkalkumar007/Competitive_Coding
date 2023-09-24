#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s=to_string(n);
        vector<int> ans;
        int size=s.length();
        int no=1;
        for(int i=size-1;i>=0;i--){
            if(s[i]!='0'){
                ans.push_back(no*(s[i]-'0'));
            }
            no=no*10;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}