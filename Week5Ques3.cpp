/*You have been given two sorted integer arrays of size m and n. Design an algorithm and
implement it using a program to find list of elements which are common to both. (Time
Complexity = O(m+n))*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the size of first array: ";
    cin >> n;
    int arr1[n];
    cout << "Enter the elements in first array";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    sort(arr1, arr1 + n);
    cout << "Enter the size of second array: ";
    cin >> m;
    int arr2[m];
    cout << "Enter the elements in second array";
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    sort(arr2, arr2 + m);
    int maximum = max(n, m);
    int ptr1 = 0, ptr2 = 0;
    for (int i = 0; i < maximum; i++)
    {
        if (arr1[ptr1] == arr2[ptr2])
        {
            cout << arr1[ptr1] << " ";
            ptr1++;
            ptr2++;
        }
        else if (arr1[ptr1] < arr2[ptr2])
            ptr1++;
        else
            ptr2++;
    }
}
