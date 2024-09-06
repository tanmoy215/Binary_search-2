#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,6,7,4,2,1,0};
    int n =  sizeof(arr)/sizeof(int);
    int fst =0;
    int lst =n-1;
    while(fst<=lst){
        int mid = fst+(lst-fst)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<"Peak Index is : "<<mid<<endl;
            break;
        }
        else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]) fst = mid+1;  
        else if(arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]) lst=mid-1;
    }
}