#include <stdio.h>
int main()
{
    int t,n,c,i;
    printf("enter the number of test cases:");
    scanf("%d",&t);
    while(t){
        c=0;
        printf("enter the size of array:");
        scanf("%d",&n);
        int arr[n];
        printf("enter the array elements:");
        for( i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int key;
        printf("enter the key to search:");
        scanf("%d",&key);
         for( i=0;i<n;i++){
             c++;
            if(key==arr[i]){
                printf("Key found\n");
                printf("Comparisions : %d",c);
                break;
            }
         }
         if(i==n){
            printf("Key not found\n");
            printf("Comparisions : %d",c);
         }

        t--;
        printf("\n");
    }
}