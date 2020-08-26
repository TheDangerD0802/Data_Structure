/*
 You are given an array a, size of the array N and an integer x. Follow the  algorithm and print the state of the array after x iterations have been performed.
 
SAMPLE INPUT 
5 2
1 2 3 4 5

SAMPLE OUTPUT 
1 2 3 4 5
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
void selection_sort(int *arr, int n,int x)
{
	int min;
	for(int i=0;i<x;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			min = j;
		}
		swap(arr[min],arr[i]);
	}
	
}
int main()
{
	int n,x;
	cin>>n>>x;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selection_sort(arr,n,x);
    for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
