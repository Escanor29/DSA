#include<bits/stdc++.h>
using namespace std;

int getbit(int n,int pos){
	return (n&(1<<pos))!=0;
}

int setbit(int n ,int pos){
	return n|(1<<pos);
}

int clearbit(int n , int pos){
	return n&~(1<<pos);
}

int updatebit(int n, int pos , int value){
	n=n&~(1<<pos);
	return n|(value<<pos);
}

bool powof2(int n){
	return n && !(n&n-1);
}

int noofones(int n){
	int count=0;
	while(n!=0){
		n=n&n-1;
		count++;
	}
	return count;
}

int main() {
	

	cout<<getbit(5,2)<<endl;
	cout<<setbit(5,3)<<endl;
	cout<<clearbit(5,0)<<endl;
	cout<<updatebit(5,1,1)<<endl;

	if(powof2(16))
		cout<<"power of 2"<<endl;
	else
		cout<<"not power of 2"<<endl;

	cout<<noofones(69)<<endl;

	return 0;
	
}


