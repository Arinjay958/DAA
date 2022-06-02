#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, u, v, m;
    cout<<"Enter the number of vertices "<<"\n";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n+1;i++)
    {
       
        for(int j=0;j<n+1;j++)
        {
            arr[i][j] = 0;
        }
    }
    cout<<"Enter the number of edges "<<"\n";
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    // int src, dest;
    // cout<<"Enter the source vertex ";
    // cin>>src;
    // cout<<"Enter the destination vertex ";
    // cin>>dest;
    

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}