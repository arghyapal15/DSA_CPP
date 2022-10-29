//1) Print Name n times

#include<iostream>
using namespace std;

void printingName(int n){
	if(n==0){
		return;
	}
	cout<<"Arghya"<<endl;
	printingName(n-1);
}

int main(){
	int n;
	cin>>n;
	printingName(n);
	return 0;
}

//2) Print linearly from 1 to N using recursion

#include<iostream>
using namespace std;

void print1ToN(int i,int n){
	if(i>n){
		return;
	}
	cout<<i<<endl;
	print1ToN(i+1,n);
}


int main(){
	int n;
	cin>>n;
	print1ToN(1,n);
	return 0;
}

//3) Print N to 1 using recursion

#include<iostream>
using namespace std;

void printNTo1(int n){
	if(n==0){
		return;
	}
	cout<<n<<endl;
	printNTo1(n-1);
}

int main(){
	int n;
	cin>>n;
	printNTo1(n);
	return 0;
}

//4) Print linearly 1 to N using recursion by backtracking

#include<iostream>
using namespace std;

void print1ToN(int n){
	if(n==0){
		return;
	}
	print1ToN(n-1);
	cout<<n<<endl;
}

int main(){
	int n;
	cin>>n;
	print1ToN(n);
}
