#include <bits/stdc++.h>
using namespace std;

int main() {
	int n_;
    cin>>n_;
	for(int i=0;i<n_;i++)
	{
	    int x;
	    int y;
	    cin>>x>>y;
	    float p_ = 0;
	    p_ = (x*107)/100;
	    if(y <= p_)
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