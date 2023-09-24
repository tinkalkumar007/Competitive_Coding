#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minIdx=INT_MAX,maxIdx=INT_MIN;
    int minVal=INT_MAX,maxVal=INT_MIN;
    for(int i=0;i<n;i++){
        if(minVal>=arr[i]){
            minVal=arr[i];
            minIdx=i;
        }
        if(maxVal<arr[i]){
            maxVal=arr[i];
            maxIdx=i;
        }
    }
    //cout<<maxIdx<<" "<<minIdx<<endl;
    if(maxIdx>minIdx){
        cout<<maxIdx+(n-minIdx-1)-1<<endl;
    }
    else{
        cout<<maxIdx+(n-minIdx-1)<<endl;
    }
}
