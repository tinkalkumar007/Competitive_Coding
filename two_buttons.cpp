#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int cnt=0;
    while(n!=m){
        if(n>m){
            m++;
            cnt++;
        }
        else{
            if(m%2){
                m++;
                cnt++;
            }
            else{
                m=m/2;
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}