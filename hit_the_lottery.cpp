#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    if(n>=100){
        ans+=(n/100);
        n=n%100;
    }
    if(n>=20){
        ans+=(n/20);
        n=n%20;
    }
    if(n>=10){
        ans+=(n/10);
        n=n%10;
    }
    if(n>=5){
        ans+=(n/5);
        n=n%5;
    }
    if(n>=1){
        ans+=(n/1);
        n=n%1;
    }
    cout<<ans<<endl;
    return 0;
}
