#include<iostream>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    if(k%10==0||k%10==r){
        cout<<"1"<<endl;
    }
    else{
        int no=k%10;
        for(int i=2;i<=9;i++){
            if((no*i)%10==0||(no*i)%10==r){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}