#include<bits/stdc++.h>
using namespace std;
int digit_sum(int n){
    int sum=0;
    while(n){
        sum+=(n%10);
        n=n/10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2==0){
            cout<<(n/2)<<" "<<(n/2)<<endl;
        }
        else{
            long long no1=(n/2);
            long long no2=(n-no1);
            int digNo1=digit_sum(no1);
            int digNo2=digit_sum(no2);
            if(abs(digNo1-digNo2)<=1){
                cout<<no1<<" "<<no2<<endl;
            }
            else{
                while(abs(digNo1-digNo2)>1){
                if(digNo1>digNo2){
                    no1=no1-((digNo1-digNo2)/2);
                    no2=no2+((digNo1-digNo2)/2);
                }
                else{
                    no1=no1+((digNo1-digNo2)/2);
                    no2=no2-((digNo1-digNo2)/2);
                }
                digNo1=digit_sum(no1);
                digNo2=digit_sum(no2);
                }
                cout<<no1<<" "<<no2<<endl;
            }
        }
    }
    return 0;
}