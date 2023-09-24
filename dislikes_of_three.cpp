#include<bits/stdc++.h>
using namespace std;
int solve(){
    int k;
    cin>>k;
    int no=1;
    while(k){
        if(no%3!=0 && no%10!=3){
            k--;
        }
        if(k==0) return no;
        no++;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}