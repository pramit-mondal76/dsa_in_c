#include<stdio.h>
void printarray(int *arr,int n)
{
    for(int i=0; i<n; i++)
     {
         printf(" %d ", arr[i]);
     }

}
void insert(int *arr,int n,int key)
{
    int j=n-1;
    while(j>=0 && arr[j]>key)
    {
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
    
}
int main()
{
    int a[20],n,item,i;

     printf("size of the array :");
     scanf("%d",&n);
     printf("Enter elements in the sorted order:\n ");
     for(i=0; i<n; i++)
     {
            scanf("%d", &a[i]);
     }
     printf("\nEnter item to be inserted : ");

     scanf("%d", &item);
     insert(a,n,item);
     n=n+1;
     printf("After insertion of the array: \n");
     printarray(a,n);
     return 0;


}
