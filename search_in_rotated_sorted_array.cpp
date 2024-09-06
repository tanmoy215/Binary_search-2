// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr{4,5,0,1,2,3};
//     int n = arr.size();
//     int pivot = -1;
//     int lo = 0;
//     int hi = n-1;
//     int target;
//     cout<<"enter tagerget value : ";
//     cin>>target;
//     //finding pivot element
//     while(lo<=hi){
//         int mid = lo + (hi-lo)/2;
//         if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1]){
//             pivot = mid;
//             break;
//         }
//         else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1]){
//             pivot = mid+1;
//             break;
//         }
//         else if(arr[mid]>arr[hi]) lo = mid+1;
//         else if(arr[mid]<arr[lo]) hi = mid-1;
//     }
//         //done
        
        
//          if(pivot<0) cout<<"Sorted array Found"<<endl;
//          else cout<<"Pivot index is : "<<pivot<<endl;
//             //
//          if(target >=arr[0] && target <=arr[pivot-1]){
//              lo = 0;
//              hi = pivot-1;
//              while(lo<=hi){
//                  int mid  = lo + (hi-lo)/2;
//                  if(arr[mid]==target){
//                      cout<<"ANS IS : "<<mid<<endl;
//                      break;
//                  }
//                  else if(arr[mid]>target){
//                      hi = mid-1;
//                  }
//                  else {
//                      lo = mid+1;
//                  }
//              }
//          } 
//     return 0;
// }
//optimize method
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{4,5,0,1,2,3};
      int n = arr.size();
      int lo = 0;
      int hi = n-1;
      int target;
      cout<<"enter target value : ";
      cin>>target;
      bool flag = false;
      while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            flag = true;
            cout<<"Index is : "<<mid<<endl;
            break;
        }
        else if(arr[mid]<=arr[hi]){ //is mid-hi sorted
            if(target>=arr[mid] && target<=arr[hi]){
                lo = mid+1;
            }
            else{
               hi = mid-1;
            }
        }
        else{ // is lo-mid sorted
                if(target>=arr[lo] && target<=arr[mid]){
                    hi = mid-1;
                }
                else{
                   lo = mid+1;
                }
        }
      }
      if(flag==false){
        cout<<"Invail input"<<endl;
      }
      return 0;
}