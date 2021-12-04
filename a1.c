#include <stdio.h>
#include <stdlib.h>
void display(int *arr, int n)
{

    printf(" the elements are :\n");

    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}
void insert(int *arr, int n, int k, int item)
{
    n = n + 1;

    for (int j = n; j >= k; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[k - 1] = item;
}
void delete (int *arr, int n, int k)
{
    for (int j = k; j <= n - 1; j++)
    {
        arr[j - 1] = arr[j];
    }
    n = n - 1;
}
void serach(int *arr, int n, int item)
{
    int i, c = 0;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == item)
        {
            printf("The element %d is present in %d", item, i + 1);
            c++;
        }
    }
    if (c == 0)
    {
        printf("Not found");
    }
}
void update(int *arr, int k, int item)
{
    arr[k - 1] = item;
}
int main()
{
    int arr[5] = {1, 2, 3, 5, 6};
    int n = 5;
    int ch;
    int k;
    int item;
    while (1)
    {
        printf("\n1:INSERT\n");
        printf("2:DELETE\n");
        printf("3:SEARCH\n");
        printf("4:UPDATE\n");
        printf("5:DISPLAY\n");

        printf("Enter your choice:");
        scanf("%d", &ch);

        int data;
        switch (ch)
        {
        case 1:
            printf("Enter item which is to be inserted...");
            //
            scanf("%d", &item);
            scanf("%d", &k);

            insert(arr, n, k, item);
            break;

        case 2:
            scanf("%d", &k);
            delete (arr, n, k);

            break;

        case 3:
            scanf("%d", &item);
            serach(arr, n, item);

            break;

        case 4:
            scanf("%d", &item);
            scanf("%d", &k);

            update(arr, k, item);

        case 5:
            display(arr, n);
            break;

        default:
            exit(1);
        }
    }
}