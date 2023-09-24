#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    int count0=0,count1=0;
    int dangerous=1;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            count0++;
            if(count0>=7) {
                dangerous=0;
                cout<<"YES"<<endl;
                break;
            }
        }
        else{
            count0=0;
        }
        if(s[i]=='1'){
            count1++;
            if(count1>=7){
                dangerous=0;
                cout<<"YES"<<endl;
                break;
            }
        }
        else{
            count1=0;
        }
    }
    if(dangerous) cout<<"NO"<<endl;
    return 0;
}