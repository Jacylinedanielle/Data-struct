#include<bits/stdc++.h>
using namespace std;

int n,m; //n numbers, m modulo m value

bool cmp(int a,int b)
{
	if(a%m==b%m)//value of the mod m the same
	{
		if(a&1==1 && b&1==1)//odd nums
		{
			return a>b;//descending -> highest - lowest
		}else if((a&1)==0 && (b&1)==0)//even nums
		{
			return a<b;//ascending -> lowest - highest
		}else
		{
			return a&1==1;//odd are placed before even
		}		
	}
	return a%m<b%m;//ascending
}

int main()
{
	while(cin>>n>>m)
	{
		if(n==0 && m==0)
		{
			break;
		}
		
		int q[n];
		memset(q,0,sizeof q);
		
		//start inputting the q[i] value
		for(int i=0;i<n;i++)
		{
			scanf("%d",&q[i]);
		}
		
		cout<<n<<" "<<m<<endl;
		
		sort(q,q+n,cmp);
		
		for(int i=0;i<n;i++)
		{
			cout<<q[i]<<endl;
		}		
	}
	cout<<"0 0"<<endl;
}
