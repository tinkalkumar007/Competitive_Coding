#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        long long no1=n%10;
        n=n/10;
        long long no2=n%10;
        n=n/10;
        if(no2>no1){
            cout<<(n*10)+no2<<endl;
        }
        else{
            cout<<(n*10)+no1<<endl;
        }
    }
    return 0;
}