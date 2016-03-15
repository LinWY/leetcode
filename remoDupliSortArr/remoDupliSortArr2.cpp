#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

void main()
{
	int a[]={1,1,1,2,2,3,3,3,3};
	int count=0;
	for(int i=2;i<9;i++)
	{
        if(a[count]!=a[i])
		{
			a[count+2]=a[i];
			count++;
		}
	}
	for(int j=0;j<count+2;j++)
	{
		cout<<a[j]<<endl;
	}
	system("pause");
}