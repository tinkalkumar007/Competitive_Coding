#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,n,m;
        cin>>a>>b>>n>>m;
        if(m>=n){
            cout<<min(a,b)*n<<endl;
        }
        else{
            long long no=m+1;
            long long xamt=0;
            int rem=n%(no);
            long long buy=(n-rem);
            xamt+=((buy*a)-(n/no)*a);
            xamt+=(min(a,b)*rem);
            long long yamt=min(a,b)*n;
            cout<<min(xamt,yamt)<<endl;
        }
    }

    return 0;
}