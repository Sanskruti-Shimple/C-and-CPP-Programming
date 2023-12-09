#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    
    for(int i=a; a<=b; i++)
    {
    	if(a>=1 && a<=9)
    	{
    		string name[10] = {"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine", "Ten"};
    		
    		for(;a<=b; a++)
    		{
    			if(a<=9)
    			cout << name[a] <<"\n";
    			if(a>9)
    			{
    				for(;a<=b; a++)
    				{
    					if(a%2==0)
    					cout << "even\n";
    					if(a%2==1)
    					cout << "odd\n";
					}
				}
			}
    		
		}
	}
  return 0;  
}
