#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> v{1,2,4,7,4,2,1};
    // int n= v.size();
    // int max = v[0];
    // int idx = -1;
    // for(int i=1;i<n;i++){
    //  if(max<v[i]){
    //         max = v[i];
    //         idx =i;
    //  }                                               //O(n) time complexity
    // }
    // cout<<"peak index of a mountain Array : "<<idx<<endl;
    // cout<<"Peak Value of mountain Array : "<<max<<endl;
    // return 0;




    int arr[]={1,2,3,6,7,4,2,1,0};
    int n =  sizeof(arr)/sizeof(int);
    int fst =1;
    int lst =n-2;
    while(fst<=lst){
        int mid = fst+(lst-fst)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){      //O(logN) time complexity
            cout<<"Peak Index is : "<<mid<<endl;
            break;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) fst = mid+1;  
        else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]) lst=mid-1;
    }
}