#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
	for(int i=0;i<n;i++)
	{
	    int s;
	    int v;
	    cin>>s>>v;
	    if(s>0 and v>0 and s==v)
	    {
	            cout<<"YES"<<"\n";
	    }
	    else
	    {
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}