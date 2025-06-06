#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;//input
	int count;
	int sum;
	
	while(cin>>a>>b)
	{
		sum=0;
		
		cout<<a<<" "<<b<<" ";
		
		if(a>b)
		{
			swap(b,a);
		}
		
		//looping based on the range
		for(int i=a;i<=b;i++)
		{
			count=1;
			
			int j=i;
			
			while(j>1)
			{
				if (j%2!=0)
				{
					j=(3*j)+1;
				}else{
					j=j/2;
				}
				count++;
			}
			
			//inside the for
			if(count>sum)
			{
				sum=count;
			}
		}
		
		cout<<sum<<endl;
	}
}
