#include<bits/stdc++.h>
using namespace std;
long long solve(){
    long long a,b;
    cin>>a>>b;
    long long ans=abs(a-b);
    int count=(ans)/10;
    if(ans%10!=0) count++;
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}