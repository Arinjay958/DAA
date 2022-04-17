/*Given an unsorted array of integers, design an algorithm and implement it using a program to
sort an array of elements by dividing the array into two subarrays and combining these subarrays
after sorting each one of them. Your program should also find number of comparisons and
inversions during sorting the array.*/
#include <iostream>
using namespace std;
long long mergeSort(int arr[], int l, int r);
long long merge(int arr[], int l, int m, int r);
// void inversionCount(int arr[], int n);
int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        int arr[n];
        cout << "Enter elements in the array"
             << "\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long inversions = mergeSort(arr, 0, n - 1);
        cout << "Sorted array is : "
             << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "Total Number of inversions are: " << inversions;
    }
    return 0;
}
long long mergeSort(int arr[], int l, int r)
{
    int invCount = 0;
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        invCount += mergeSort(arr, l, mid);
        invCount += mergeSort(arr, mid + 1, r);
        invCount += merge(arr, l, mid, r);
    }
    return invCount;
}
long long merge(int arr[], int l, int mid, int r)
{
    int invCount = 0;
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int L[n1], R[n2], i;
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }
    int j, k;
    i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            k++;
            invCount = invCount + (n1 - i);//as two halves which is going to be merged are individually sorted so if there is an inversion due to any element then all the element after it would be going to count for inversion
        }
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
    return invCount;
}
