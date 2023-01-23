#include<iostream>
using namespace std;
int main()
{
    int arr[] = { 10, 20, 70, 40, 50 };

    int i = 0;
    int j = 0;

    int diff = 0;

    diff = arr[1] - arr[0];

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (arr[j] - arr[i] > diff)
                diff = arr[j] - arr[i];
        }
    }

    cout<<"Difference is: "<<diff;
    return 0;
}