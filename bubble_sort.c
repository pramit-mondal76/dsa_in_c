#include<stdio.h>
void bubbleSort(int arr[],int n)
{
    int i,j,m=1,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
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
    bubbleSort(arr,n);

}