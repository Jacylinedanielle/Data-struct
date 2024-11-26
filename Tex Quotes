//the first " that you encounter ->``
//second one -> ''
#include<bits/stdc++.h>
using namespace std;

int main()
{
	char in;//the sentence input
	int cot=0;//count from 0
	
	while(cin.get(in))//getline can only be used by string
	{
		if(in=='"')
		{
			if(cot%2==1)
			{
				cout<<"``";
			}else{
				cout<<"''";
			}
			cot++;
		}
		else{
			cout<<in;
		}
	}
	
	return 0;
}
