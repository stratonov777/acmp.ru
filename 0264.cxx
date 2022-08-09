#include<iostream>
#include<algorithm>
using namespace std;
int n,t=0,l=0;
int arr[101];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){t++;l=max(l,t);}
        else{l=max(l,t);t=0;}
    }
    cout<<l;
    return 0;
}