/*Ques-->  Given an unsorted array of integers, design an algorithm and a program to sort the array using 
insertion sort. Your program should be able to find number of comparisons and shifts ( shifts total 
number of times the array elements are shifted from their place) required for sorting the array.*/
#include<iostream>
using namespace std;
void insertSort(int arr[], int n)
{
    int c=0, s=0;
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            c++;
            s++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        s++;
    }
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    cout<<"Number of comparisions = "<<c<<"\n";
    cout<<"Number of shifts = "<<s<<"\n";
}
int main()
{
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"\n Enter the size of the array: ";
        cin>>n;
        cout<<"Enter "<<n<<" Elements in the array"<<"\n";
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertSort(arr, n);
    }
    return 0;
}