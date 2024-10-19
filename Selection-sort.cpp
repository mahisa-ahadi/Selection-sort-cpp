#include<iostream>
using namespace std;
int main(void)
{
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
	{
		cout<<"a["<<i<<"]= ";
		cin>>a[i];
	}
	int small,temp,index;
	//selection sort
	for(int i=0;i<size;i++)
	{
		small=a[i];
		for(int j=i+1;j<size;j++)
		{
			if(small>a[j])
			{
		   	 small=a[j];
		   	 index=j;
			}
		}
		temp=a[i];
		a[i]=small;
		a[index]=temp;
	}
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}