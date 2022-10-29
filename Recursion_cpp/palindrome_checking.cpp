//check a string is a palindrome or not
#include<bits/stdc++.h>
using namespace std;

bool check(int i,string &str){
	if(i>=(str.size()/2)){
		return true;
	}
	if(str[i]!=str[str.size()-i-1]){
		return false;
	}
	check(i+1,str);
}

int main(){
	string str;
	cin>>str;
	if(check(0,str))
	cout<<str +" is a palindrome";
	else
	cout<<str+" is not a palindrome";
}
