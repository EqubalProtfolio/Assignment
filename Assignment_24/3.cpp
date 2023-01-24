#include <iostream>
using namespace std;
int main()
{
    int n;
    for (int i = 0; i < n; i++)
    {
        int ar[]={1,2,3,4};
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j && (ar[i] > ar[j]))
            {
                count++;
            }
        }
        printf("%lld ", count);
    }
    return 0;
}