#include <iostream>
using namespace std;
 
int main()
{
    int first[] = {1, 2, 3};
    int second[] = {4, 5};
 
    int m = sizeof(first) / sizeof(*first);
    int n = sizeof(second) / sizeof(*second);
 
    int result[m + n];
    std::copy(first, first + m, result);
    std::copy(second, second + n, result + m);
 
    for (int &i: result) {
        std::cout << i << ' ';
    }
 
    return 0;
}