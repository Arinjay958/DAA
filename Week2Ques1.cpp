/*QUES--> Given a sorted array of positive integers containing few duplicate elements, design an algorithm 
and implement it using a program to find whether the given key element is present in the array 
or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the size of the array: ";
        cin>>n;
        cout<<"Enter "<<n<<" Elements in the array"<<"\n";
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int key;
        cout<<"Enter the key to search: ";
        cin>>key;
        int occur1 = 0, occur2 = 0, l = 0, r = n;
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(arr[mid]>key)
                r = mid-1;
            else if(arr[mid]<key)
                l = mid+1;
            else
            {
                occur1 = mid;
                occur2 = mid;
                while(arr[occur1] == arr[mid])
                    occur1--;
                while(arr[occur2] == arr[mid])
                    occur2++;
                break;
            }
        }
        cout<<key<<" occurs "<<((occur2-occur1)-1)<<" times"<<"\n";
    }
    return 0;
}

