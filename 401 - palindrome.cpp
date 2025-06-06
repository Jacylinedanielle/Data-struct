#include<bits/stdc++.h>
using namespace std;

string con(string s){
	string t=s;
	for(int i=0;i<s.length();i++){
		switch(s[i]){
			case 'E':t[i]='3';break; case '3':t[i]='E';break;
			case 'S':t[i]='2';break; case '2':t[i]='S';break;
			case 'J':t[i]='L';break; case 'L':t[i]='J';break;
			case 'Z':t[i]='5';break; case '5':t[i]='Z';break;
		}
	}
	return t;
}

int main(){
  string str;
  while(cin>>str){
  	string strr=str;
  	reverse(strr.begin(),strr.end());
  	
  	bool isPalindrome=   str==strr;
  	bool isMirrored= str==con(strr);
  	  
  	if(isMirrored&&isPalindrome) cout<<str<<" -- is a mirrored palindrome.\n";
  	
  	else if(isMirrored) cout<<str<<" -- is a mirrored string.\n";
  	
  	else if(isPalindrome) cout<<str<<" -- is a regular palindrome.\n";
  	
  	else 	cout<<str<<" -- is not a palindrome.\n";
  	cout<<endl;
  }
  return 0;
}
