#include<iostream>
using namespace std;
int n,a,q=10000,w=10001,b,c;
int arr[100001];
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if (a==1){
            cin>>b;
            arr[q]=b;
            //cout<<arr[q]<<" q=";
            q--;
            //cout<<q<<endl;    
        }
        if (a==2){
            cin>>b;
            arr[w]=b;
            //cout<<arr[w]<<" w=";
            w++;
            //cout<<w<<endl;
        }
        if (a==3){
            cout<<arr[q+1]<<" ";
            arr[q]=0;
            q++;
        }
        if (a==4){
            cout<<arr[w-1]<<" ";
            arr[w]=0;
            w--;
        }
    }
    return 0;
}