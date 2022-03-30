#include<bits/stdc++.h>
using namespace std;
void arrrotate( int arr[],int d,int n)
{
	  int newarr1[n-d];//array for before rotation part
	for( int i = 0;i<(n-d); i++)
	{
		newarr1[i] = arr[d + i];
	//cout<<"The newarr1 = "<<newarr1[i]<<" ";
	}
	//cout<<endl;
	int newarr2[d];//array for after rotation part
	for( int i = 0 ; i<d;i++)
	{
		newarr2[i] = arr[i];
//		cout<<"The newarr2 = "<<newarr2[i]<<" ";
	}
	//cout<<endl;
	for(int i = 0 ; i<n ;i++)
	{
		if( i <(n-d))
		{
			arr[i] = newarr1[i];
		}
		else {
			arr[i] = newarr2[i-(n-d)];
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for( int i = 0 ; i< n; i++){
		cin>>arr[i];
	}
	int d;
	cin>>d;
	arrrotate( arr,d,n);
	for( int i = 0 ;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
