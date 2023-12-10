#include<iostream>
using namespace std;

int main () {
	int n;
	cout<<"Enter  the number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	if(i%5==0)
	cout<<"hooray"<<endl;
	else
	cout<<i<<endl;
}
return 0;
