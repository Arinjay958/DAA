/*Ques--> Given an array of nonnegative integers, design an algorithm and a program to count the number 
of pairs of integers such that their difference is equal to a given key, K. */
#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        int n, count = 0;
        cout<<"Enter the size of the array: ";
        cin>>n;
        cout<<"Enter "<<n<<" Elements in the array"<<"\n";
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cout<<"Enter the key: ";
        cin>>key;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int diff = 0;
                diff = abs(arr[i]-arr[j]);
                if(diff == key)
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}