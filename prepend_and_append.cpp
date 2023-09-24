#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        int i=0,j=n-1;
        bool empty=false;
        while(i<=j){
            if(s[i]==s[j]){
                empty=true;
                cout<<(j-i+1)<<endl;
                break;
            }
            i++;
            j--;
        }
        if(!empty){
            cout<<"0"<<endl;
        }
    }
    return 0;
}