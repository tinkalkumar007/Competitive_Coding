#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        unordered_map<char,int> mp1,mp2;
        int arr1[n];
        int arr2[n];
        arr1[0]=1;
        mp1[s[0]]=1;
        for(int i=1;i<n;i++){
            if(mp1.find(s[i])!=mp1.end()){
                arr1[i]=arr1[i-1];
            }
            else{
                arr1[i]=1+arr1[i-1];
            }
            mp1[s[i]]++;
        }
        mp2[s[n-1]]=1;
        arr2[n-1]=1;
        for(int i=n-2;i>=0;i--){
            if(mp2.find(s[i])!=mp2.end()){
                arr2[i]=arr2[i+1];
            }
            else{
                arr2[i]=1+arr2[i+1];
            }
            mp2[s[i]]++;
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=max(ans,arr1[i]+arr2[i+1]);
        }
        mp1.clear();
        mp2.clear();
        cout<<ans<<endl;
    }
    return 0;
}