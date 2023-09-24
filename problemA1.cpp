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
        long long alice=q.front();
        q.pop();
        n--;
        long long bob=0;
        int no=2;
        int i=2;
        while(n){
            int i=no;
            while(n>0 && i>0){
                int n1=q.front();
                q.pop();
                if(n<=n1){
                    bob+=n;
                    n=0;
                    break;
                }
                else{
                    bob+=n1;
                    n-=n1;
                }
                i--;
            }
            i=no;
            while(n>0 && i--){
                int no2=q.front();
                q.pop();
                if(n<=no2){
                    alice+=n;
                    q.pop();
                    n=0;
                    break;
                }
                else {
                    alice+=no2;
                    n-=no2;
                }
            }
        }
        cout<<alice<<" "<<bob<<endl;
    }
}
