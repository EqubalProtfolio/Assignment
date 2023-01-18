//Write a program to print the area of two rectangles having sides (4,5)
// and (5,8) respectively by creating a class named 'Rectangle' with a 
//function named 'Area' which returns the area. Length and breadth are 
//passed as parameters to its constructor.



#include <iostream>

using namespace std;

class Rect
{
private:
int a, b;

public:
Rect(int a, int b)
{
this->a = a;
this->b = b;
}
int area()
{
return this->a * this->b;
}
};

int main()
{
Rect obj = Rect(3, 4);
cout << obj.area() << "\n";

return 0;
}



