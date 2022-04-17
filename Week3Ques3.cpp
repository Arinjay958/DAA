/*Given an unsorted array of positive integers, design an algorithm and implement it using a
program to find whether there are any duplicate elements in the array or not. (use sorting) (Time
Complexity = O(n log n))
*/
#include <iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int L[n1], R[n2], i;
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];
    int j = 0, k = l;
    i = 0;
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
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
void findDuplicates(int arr[], int n)
{
    mergeSort(arr, 0, n - 1);
    int flag = 0, i;
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "Yes"
             << "\n";
    else
        cout << "No"
             << "\n";
}
int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the size of array: ";
        cin >> n;
        int arr[n];
        cout << "Enter " << n << " Elements in the array"
             << "\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        findDuplicates(arr, n);
    }
    return 0;
}