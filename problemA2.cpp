#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        queue<long long> q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        long long aliceW=q.front();
        q.pop();
        n--;
        long long bobW=0,bobB=0,aliceB=0;
        int no=2;
        int i=2;
        while(n){
            int i=no;
            while(n>0 && i>0){
                int n1=q.front();
                q.pop();
                if(n<=n1){
                    bobB+=n-(n/2);
                    bobW+=(n/2);
                    n=0;
                    break;
                }
                else{
                    bobB+=n1-(n1/2);
                    bobW+=(n1/2);
                    n-=n1;
                }
                i--;
            }
            i=no;
            while(n>0 && i--){
                int no2=q.front();
                q.pop();
                if(n<=no2){
                    aliceW+=n-(n/2);
                    aliceB+=(n/2);
                    q.pop();
                    n=0;
                    break;
                }
                else {
                    aliceW+=no2-(no2/2);
                    aliceB+=(no2/2);
                    n-=no2;
                }
            }
        }
        cout<<aliceW<<" "<<aliceB<<" "<<bobW<<" "<<bobB<<endl;
    }
}
