#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int cntM=0,cntC=0;
    int m,c;
    int n=t;
    while(t--){
        cin>>m>>c;
        if(m>c){
            cntM++;
        }
        else if(c>m){
            cntC++;
        }
    }
    if(cntM>cntC){
        cout<<"Mishka"<<endl;
    }
    else if(cntC>cntM){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
