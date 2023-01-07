#include <stdio.h>
#include <stdlib.h>

struct Array
{

    int *A;
    int size;
    int length;
};

void display(struct Array arr)
{
    int i;
    printf("Elements of the array are : \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
        printf(" ");
    }
}
int main()
{
    int n, i;
    struct Array arr;

    printf("Enter the size of array \n ");
    scanf("%d", &arr.size);

    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter no. of elements u want inside array :\n");
    scanf("%d",&n);

    printf("Enter all the elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }
    arr.length = n;
    display(arr);

    return 0;
}
