#include<iostream>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        
        int a,b;
        cin>>a>>b;
        
        int x=1;
        int y=2;
        
        int discount1 = 100 -(a *x);
        int discount2 = 200 -(b *y);
        
        if(discount1==discount2){
            
            cout<<"BOTH"<<endl;
        }
        else if(discount1 > discount2){
            
            cout<<"SECOND";
        }else
        {
            cout<<"FIRST";
        }
        
        
        
        
        
        
    }
    
}
