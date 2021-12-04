#include<stdio.h>
#include<math.h>
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
void poly(int *a,int *b,int *c,int m,int n,int p)
{
    int i,j;
    for(i=0;i<m;i++){
        c[i]=a[i];
    }
    for(i=0;i<n;i++){
        c[i]=c[i]+b[i];
    }
    printf("updated part:\n");
    for(i=0;i<p;i++){
        if(c[i]!=0){
            printf("%d",c[i]);
            if(i!=0)
            printf("x^%d",i);
            if(i!=p-1)
            printf("+");
        }
    }
}

int main()
{
    int a[30],b[30],c[30];
    int i,j,n,m,p;
    printf("Enter the size of the first array: ");
    scanf("%d",&m);
    printf("Enter the size of the second array: ");
    scanf("%d",&n);

    printf("Elements of the 1st array: \n");
    for ( i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of the 2nd array: \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }

    p=max(m,n);

    for(i=0;i<p;i++){
        c[i]=0;
    }
    poly(a,b,c,m,n,p);

    return 0;
}