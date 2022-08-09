#include<iostream>
#include<algorithm>
using namespace std;
char arr[1001]="";
int main()
{
    int n,mx=0,mn=0;
    cin>>arr;
    
    for(int i : arr){
        if (i=='0'){mn++;}
        else {
            mx=max(mn,mx);
            mn=0;
        }
    }
    cout<<mx;
    return 0;
}