#include <iostream>
using namespace std;
int sqrt(int x)
{
 if(x==0)
  return 0;
 
 if(x==1)
  return x;
 
 int start=0,end=x,val;
 
  while(start<=end)
  {
	int mid=(start+end)/2;
	if(mid*mid==x)
	{
	 val=mid;
	 return val;
	}
	
   if(mid*mid<x)
    {
	start=mid+1;
	val=mid;
    }  
	else
	end=mid-1;
   }
   return val;
}

int main()
{
	int n;
	cout<<"\nEnter the number: ";
	cin>>n;
	int a=sqrt(n);
	cout<<"\nValue= "<<a<<endl;
	return 0;
}
