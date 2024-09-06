#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,5};
    int n = arr.size();
    int target; 
    cout<<"enter target value : ";
    cin>>target;
    //binary search
    int lo = 0;
    int hi = n-1;
    int idx;
    bool flag = true;
    //find index
    while(lo<hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            idx = mid;
            flag = false;
            break;
        }
        else if(arr[mid]<target) lo = mid+1;
        else hi = mid-1;
    }   
    if(flag == true) idx = hi;
    cout<<"the index of the Element is : "<<idx<<endl;
    //create Vector
    int x;
    cout<<"Enter number of element : ";
    cin>>x;
    vector<int>brr(x);
    int j=0;
     brr[j++]=arr[idx];
     lo = idx-1;
     hi = idx+1;
     int i = 1;
     while(i<=x){
        if(lo == -1){
            brr[j++]=arr[hi];
            hi++;
            i++;
        }
        else if(hi == n){
            brr[j++]=arr[lo];
            lo--;
            i++;
        }
        else if((arr[idx]-arr[lo])<=(arr[hi]-arr[idx])){
            brr[j++]=arr[lo];
            lo--;
            i++;
        }
        else{
            brr[j++]=arr[hi];
            hi++;
            i++;
        }
     }
     sort(brr.begin(),brr.end());
     for(int i=0;i<x;i++){
        cout<<brr[i]<<" ";
     } 
    return 0;
}