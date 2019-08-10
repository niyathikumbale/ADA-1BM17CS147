#include <stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char **argv)
{
	//printf("hello world\n");
	int a[10],n,i,max;
	cout<<"Enter the number of values: ";
	cin>>n;
	cout<<"\nEnter values: ";
	for(i=0;i<n;i++)
	{
	cin>>a[i];	
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
	 if(max<a[i])
		 max=a[i];
	}
	cout<<"\nThe maximun number is: "<<max<<endl;
	return 0;
}
