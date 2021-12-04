#include<stdio.h>
void merge(int a[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++)
    {
        a1[i]=a[l+i];
       // printf("%d ",a1[i]);
    }

    for(int i=0;i<n2;i++)
    {
        a2[i]=a[mid+1+i];
       // printf("%d ",a2[i]);
    }
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a1[i]<=a2[j])
        {
            a[k]=a1[i];
            k++; i++;
        }
        else
        {
             a[k]=a2[j];
             k++ ; j++;
        }
    }
    while(i<n1)
    {
        a[k]=a1[i];
        k++; i++;
    }
    while(j<n2)
    {
        a[k]=a2[j];
        k++; j++;
    }
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);

    }
}
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
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
    printArray(arr,n);
    mergesort(arr,0,n-1);
    printf("\nAfter applying merge sort, the array elements are - \n");  
    printArray(arr,n);
    
    return 0;
}