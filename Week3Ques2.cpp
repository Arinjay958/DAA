/* Ques--> Given an unsorted array of integers, design an algorithm and implement a program to sort this 
array using selection sort. Your program should also find number of comparisons and number of 
swaps required.*/
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int c=0,s=0;
    int i, j;
    for(i=0;i<=n-2;i++)
    {
        int min = i;
        for(j=i+1;j<=n-1;j++)
        {
            c++;
            if(arr[j]<arr[min])
                min = j;
        }
        s++;
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    cout<<"Total number of comparisons: "<<c<<"\n";
    cout<<"Total number of comparisons: "<<s<<"\n";
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
        selectionSort(arr, n);
    }
    return 0;
}