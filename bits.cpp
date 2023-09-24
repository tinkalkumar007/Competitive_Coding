#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<32> bit(4);
    for(int i=31;i>=0;i--){
        cout<<bit[i];
    }
    cout<<endl;
    return 0;
}