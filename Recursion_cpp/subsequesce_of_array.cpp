//Print all subsequences
//arr=[3,1,2] subsequences of this array=>
//{},3,1,2,3 1,3 2,1 2,3 1 2

#include<bits/stdc++.h>
using namespace std;

void printF(int i,vector<int> &ds,int arr[],int n){
	if(i==n){
		for(int i=0;i<n;i++){
			cout<<ds[i]<<" ";
		}
		cout<<endl;
		return;
	}
	ds.push_back(arr[i]);
	printF(i+1,ds,arr,n);
	ds.pop_back();
	printF(i+1,ds,arr,n);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<int> ds;
	printF(0,ds,arr,n);
}
