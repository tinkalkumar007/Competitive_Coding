#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    bitset<32> bit(n);
    for(int i=31;i>=0;i--){
        if(bit[i]==1){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
