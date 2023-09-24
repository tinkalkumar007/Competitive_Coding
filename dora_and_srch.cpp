#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxVal=n;
        int minVal=1;
        int l=0,r=n-1;
        bool find=false;
        while(l<r){
            if(arr[l]==maxVal||arr[l]==minVal){
                if(arr[l]==maxVal) maxVal--;
                else if(arr[l]==minVal) minVal++;
                l++;
            }
            if(arr[r]==maxVal||arr[r]==minVal){
                if(arr[r]==maxVal) maxVal--;
                else if(arr[r]==minVal) minVal++;
                r--;
            }
            if(arr[l]!=maxVal && arr[l]!=minVal && arr[r]!=maxVal && arr[r]!=minVal){
                cout<<l+1<<" "<<r+1<<endl;
                find =true;
                break;
            }
        }
        if(!find) cout<<"-1"<<endl;
    }

    return 0;
}