#include<stdio.h>
void insertionSort(int arr[],int n)
{
    int i,j,m=1,key;
    for(i=1;i<=n-1;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
        printf("\npass %d is: ",m);
    for(int k=0;k<n;k++)
    {
        printf(" %d ",arr[k]);
    }
    printf("\n");
    m++  ; 
    }
   
    
    printf("\nAfter sorting array is: ");
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
}

int main()
{
	int arr[10],n,i;
	printf("\nNO. of element: ");
	scanf("%d",&n);
	printf("\nEnter the elements of the array:\n");
	for(i=0;i<n;i++)
    {
	scanf("%d",&arr[i]);
    }
    printf("\nThe array before sorting is:\n");
    for(i=0;i<n;i++)
    {
    printf(" %d ",arr[i]);
    }
    printf("\n");
    insertionSort(arr,n);

}