#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long negNo=0;
        long long posNo=0;
        long long n;
        cin>>n;
        while(n--){
            long long no;
            cin>>no;
            if(no<0) negNo++;
            else posNo++;
        }
        long long i=posNo;
        long long count=1;
        while(i--) cout<<count++<<" ";
        i=negNo;
        count--;
        while(i--) cout<<--count<<" ";
        cout<<endl;
        i=posNo;
        long long j=negNo;
        count=0;
        bool x=true;
        while(i||j){
            if(x && i){
                i--;
                cout<<++count<<" ";
            }
            else if(!x && j){
                j--;
                cout<<--count<<" ";
            }
            else if(i){
                i--;
                cout<<++count<<" ";
            }
            else{
                j--;
                cout<<--count<<" ";
            }
            x=!x;
        }
        cout<<endl;
    }
    return 0;
}