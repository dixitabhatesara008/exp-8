#include <stdio.h>
int main()
{
    int a[10], n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 1 || n > 10)
    {
        printf("Please enter size between 1 and 10.");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nSum = %d", sum);
    return 0;
}


