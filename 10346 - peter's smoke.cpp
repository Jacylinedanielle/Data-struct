#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	
	while(cin>>n>>k)
	{
		int sum=n,used=n;
		
		while(used>=k)//suppsed to be >= instead of only >
		{
			n=used/k;
			used=used%k+n;
			sum+=n;
		}
		cout<<sum<<endl;
	}
}
