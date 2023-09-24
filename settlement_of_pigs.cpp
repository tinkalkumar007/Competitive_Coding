#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long m=0,f=0;
        long long cnt=0;
        long long avl=0;
        long long no1=0;
        while(n--){
            int no;
            cin>>no;
            if(no==1){
                if(avl<cnt){
                    avl++;
                }
                else{
                    avl++;
                    cnt++;
                }
                no1++;
            }
            else {
                if(m%2==0){
                    m++;
                    no1--;
                }
                f+=no1;
                no1=0;
                avl=(m/2)+(m%2)+(f/2)+(f%2);
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}