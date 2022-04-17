// Ques 2--> Given an unsorted array of integers, design an algorithm and implement it using a program to
//  find whether two elements exist such that their sum is equal to the given key element. (Time
//  Complexity = O(n log n))

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n, key, flag = 0;
        cout << "Enter the size of the array: ";
        cin >> n;
        int a[n];
        cout << "Enter elements in the array"
             << "\n";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << "Enter the key element: ";
        cin >> key;
        sort(a, a + n);
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (a[i] + a[j] == key)
            {
                cout << a[i] << " " << a[j] << endl;
                flag = 1;
                break;
            }
            else if (a[i] + a[j] < key)
            {
                i++;
            }
            else
                j--;
        }
        if (flag == 0)
            cout << "No such element exist" << endl;
    }
    return 0;
}