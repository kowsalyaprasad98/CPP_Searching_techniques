#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,s;//k is length of array,s is searching element
	cin>>k>>s;
	int arr[k];
	for(int i=0;i<k;i++)
	{
	cin>>arr[i];//read the array elements
    } 
	int fl=0;
	for(int i=0;i<k;i++)//for checking the elements
	{
		if(arr[i]==s)//array element equals to searching element
		{
			fl=1;//true
			cout<<i<<" ";//if the searching element founds in array it prints index value of that element
			break;
		}
	}
	if(fl==0)//element not found means false
	{
		cout<<-1<<"\n";
	}
	
}
