#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll no;
    for(int i=0;i<n;i++){
        cin>>no;
        double p=sqrt(no);
        if(int(p)!=p||int(p)==1){
            cout<<"NO"<<endl;
        }
        else{
            int q=p;
            bool isPrime=false;
            for(int i=2;i<=sqrt(q);i++){
                if(q%i==0){
                    isPrime=true;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(!isPrime) cout<<"YES"<<endl;
        }
    }
    return 0;
}