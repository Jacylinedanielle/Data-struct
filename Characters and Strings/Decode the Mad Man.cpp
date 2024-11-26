#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c,s[]="`1234567890-=""qwertyuiop[]\\""asdfghjkl;'""zxcvbnm,./";
	
	while(cin.get(c))
	{
		c=tolower(c); //everything should be in lowercase
		
		char *p = strchr(s,c); //from c, look for the content in s
		
		if(p)
		{
			cout<<*(p-2);
		}else{
			cout<<c;
		}
	}
	
	
	return 0;
	
	
}
