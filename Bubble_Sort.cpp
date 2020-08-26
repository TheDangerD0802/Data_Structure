/* No of Swaps needed for bubble sort to sort the given array */


#include<bits/stdc++.h>
using namespace std;
int bubble_sort(int *arr, int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<bubble_sort(arr,n);
}
