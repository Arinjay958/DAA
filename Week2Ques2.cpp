/* Given a sorted array of positive integers, design an algorithm and implement it using a program
to find three indices i, j, k such that arr[i] + arr[j] = arr[k].*/
#include <iostream>
using namespace std;
int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    start:
    while (t)
    {
        
        int n, flag =0;
        cout << "Enter the size of the array: ";
        cin >> n;
        cout << "Enter " << n << " Elements in the array"
             << "\n";
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 1; j < n; j++)
            {
                sum = arr[i] + arr[j];
                for (int k = 0; k < n; k++)
                {
                    if (arr[k] == sum)
                    {
                        cout << i << " " << j << " " << k << "\n";
                        flag =1;
                        t--;
                        goto start;
                    }
                }
            }
        }
        if(flag == 0)
        {
            cout<<"No Sequence Found"<<"\n";
        }
        t--;
    }
}