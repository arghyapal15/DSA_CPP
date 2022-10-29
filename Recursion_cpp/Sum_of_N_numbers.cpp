//sum of n numbers using recursion

//Functional Way
#include<iostream>
using namespace std;

int sumOf(int n){
	if(n==1){
		return 1;
	}
	return n+sumOf(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<sumOf(n);
	return 0;
}



//Parameterised way
#include<iostream>
using namespace std;

void sumOf(int i,int sum){
	if(i<1){
		cout<<sum;
		return;
	}
	sumOf(i-1,sum+i);
}

int main(){
	int n;
	cin>>n;
	sumOf(n,0);
	return 0;
}
