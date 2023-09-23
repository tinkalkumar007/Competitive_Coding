#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    string ans="";
    while(t){
        if(t==9){
            ans+="9";
            break;
        }
        int rem=t%10;
        if(t>4){
            ans.push_back((9-rem)+'0');
        }
        else{
            ans.push_back(rem+'0');
        }
        t/=10;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}