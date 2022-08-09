#include<iostream>

using namespace std;

int main()
{
    long long int n,k,ik,jk;
    long long int arr[1001];
    cin>>n;
    for(int i=1;i<=n;i++){
    cin>>arr[i];
    }
    cin>>k;
    for(int y=0;y<k;y++){
        cin>>ik>>jk;
        for(int i=ik;i<=jk;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}