#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long arr[n];
        long long sum=0,k=0,x=2;
        while(k<n/2){
            arr[k]=x;
            k++;
            sum+=x;
            x+=2;
        }
        x=1;
        for(;k<n-1;k++){
            sum-=x;
            arr[k]=x;
            x+=2;
        }
        if(sum%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            arr[k]=sum;
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
