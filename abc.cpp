#include<iostream>
using namespace std;

int main()
{
	int t,n,tem,az,bz,sum,js;
	int a[1000];
	cin>>t;
	while (t--)
	{
		cin>>n;
		sum=0;
		for (int i=0;i<n;i++)
			cin>>a[i];
		for (int i=0;i<n-1;i++)
		{
			for (int j=i+1;j<n;j++)
			{
				if (a[i]*a[j]<0)
				{
					a[j]+=a[i];
					a[i]=0;
					sum+=abs(a[i])*(j-i);
					break;
				}
			}
		}
		cout <<sum<<endl;
	}
	

}


