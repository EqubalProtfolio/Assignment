#include <iostream>
using namespace std;
int main()
{
    int a[10], i, j, sum = 0, temp, n;
    printf("Enter array size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
            }
        }
    }
    sum = a[0] + a[1];
    printf("\nsum of minimum two elements are : %d ", sum);
}