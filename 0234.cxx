#include<iostream>
#include<string>
using namespace std;

string arr[201][201];
int main()
{
    int n,m,k,x,y,t=0;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            arr[i][j]=".";
        }
    }
    for (int i=0;i<k;i++){
        cin>>x>>y;
        arr[x][y]="*";
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if (arr[i][j]!="*"){
            if(arr[i+1][j]=="*"){t++;}
            if(arr[i+1][j-1]=="*"){t++;}
            if(arr[i][j-1]=="*"){t++;}
            if(arr[i-1][j-1]=="*"){t++;}
            if(arr[i-1][j]=="*"){t++;}
            if(arr[i-1][j+1]=="*"){t++;}
            if(arr[i][j+1]=="*"){t++;}
            if(arr[i+1][j+1]=="*"){t++;}
            if (t>0){arr[i][j]=to_string(t);}
            t=0;}
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}