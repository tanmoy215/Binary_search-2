#include<bits/stdc++.h>
using namespace std;
bool isqu(int n){
    int root = sqrt(n);
    if(root*root == n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int x = 0;
    int y = n;
    bool flag = false;
    while(x<=y){
        if(isqu(x) && isqu(y)){
            cout<<"TRUE";
            flag = true;
            break;
        }
       else if(!isqu(y)){
        y = (int)sqrt(y)*(int)sqrt(y);
        x=n-y;
       }
       else{
        x = ((int)sqrt(x)+1)*((int)sqrt(x)+1);
        y=n-x;
       }

    }
    if(flag==false){
        cout<<"FALSE";
    }
    else{
cout<<endl<<"Where "<<endl<<"A is : "<<x<<endl<<"B is : "<<sqrt(y)<<endl;
    }
    return 0;
}