#include<iostream>
using namespace std;
int main(){
	//initializing
	int n=5;
	//loop for number of rows
	for(int i=0;i<n;i++){
	//condition for printing first and last row
	if(i==0||i==4){
	//print n-1 stars
	for(int j=0;j<n;j++)
	cout<<"*";
	}
	//printing rest rows
	else{
	cout <<"*";
	//printing n-2 spaces
	for(int j=0;j<(n-2);j++){
	cout <<" ";}
	cout <<"*";}
	cout<<endl;}
return 0;}
	
	
