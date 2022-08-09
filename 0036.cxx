#include <iostream>


using namespace std;

int main()

{
    
bool arr[100000];
    
int n;
    
cin>>n;
    
n=n*2;
    
for(int i=2;i<=n;i++)
{
        
arr[i]=true;
    
}
    
for(int i=2;i<=n;i++){
        
if(arr[i]==true){
            
for(int j=i+i;j<=n;j+=i){
                
arr[j]=false;
            
}
        
}
    
}
    
int p=0;
    
for(int i=n/2+1;i<n;i++){
        
if (arr[i]==true){p++;}
    
}
    
cout<<p;
    
return 0;

}