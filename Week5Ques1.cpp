/*Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and
implement it using a program to find which alphabet has maximum number of occurrences and print it. (Time Complexity = O(n)) (Hint: Use counting sort)*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n, i;
        cout << "Enter the size of array: ";
        cin >> n;
        char ch[n];
        int temp[200] = {0};
        cout << "Enter the alphabets in the array";
        for (i = 0; i < n; i++)
        {
            cin >> ch[i];
            temp[ch[i]]++;
        }
        int index = -1, mx = 0;
        for (int i = 0; i < 200; i++)
        {
            if (temp[i] > mx)
            {
                index = i;
                mx = temp[i];
            }
        }
        if (mx > 1)
            cout << (char)index << " " << mx << endl;
        else
            cout << "No Duplicates Present"
                 << "\n";
    }
}