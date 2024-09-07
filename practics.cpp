#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums{1,2,3,4,3,2,1};
     int lo = 0;
     int hi = nums.size()-1;
     while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            cout<<nums[mid]<<endl;
            break;
        }
        else if(nums[mid]<nums[mid+1] && nums[mid]>nums[mid-1]) lo =mid+1;
        else hi = mid-1;
     }
    return 0;
}