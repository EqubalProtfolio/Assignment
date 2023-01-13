
QUESTION 1

#include <iostream>
using namespace std;

class Factorial
{
private:
    int num;
    int factorial = 1;

public:
    void calculateFactorial();
    void show();
};

void
Factorial::calculateFactorial()
{
    cout << "Enter a number : " << endl;
    cin >> num;

    if (num == 0 || num == 1)
    {
        factorial = 1;
    }
    else
    {
        while (num > 1)
        {
            factorial = factorial * num;
            num--;
        }
    }
}

void Factorial::show()
{
    cout << "Factorial : " << factorial << endl;
}

int main()
{
    Factorial factorial;
    factorial.calculateFactorial();
    factorial.show();
}



QUESTION 2



#include <iostream>
using namespace std;


class Reverse 
{
 private:
 int number;
 public:
 void reverse(int n) 
  {
    number = n;
    int remain, reverse = 0;
    while (number) 
    {
      remain = number % 10;
      reverse = (reverse * 10) + remain;
      number = number / 10;
    }

   
    cout << "Reverse of " << n << " is " << reverse << endl;
  }
};

int main()
{
  Reverse R;
  int number;
  cout << "Enter Number: ";
  cin >> number;
  R.reverse(number);
  return 0;
}



QUESTION 3


#include<iostream>
using namespace std;

class complex
{
        int re,im;
        public:
                void get()
                {
                    cout<<"\nEnter Real Part :: ";
                        cin>>re;
                        cout<<"\nEnter Imag. Part :: ";
                        cin>>im;
                }

                void disp()
                {
                        cout<<re<<"+"<<im<<"i"<<"\n";

                }
                void sum(complex,complex);
};

void complex::sum(complex c1,complex c2)
{
        re=c1.re+c2.re;
        im=c1.im+c2.im;
}

int main()
{
        complex c1,c2,c3;
        cout<<"Enter 1st complex no.: \n";
        c1.get();
        cout<<"\nEnter 2nd complex no.: \n";
        c2.get();
        cout<<"\nThe 1st complex no. is :: ";
        c1.disp();
        cout<<"\nThe 2nd complex no. is :: ";
        c2.disp();

        c3.sum(c1,c2);

        cout<<"\nThe Sum of two complex no.s are :: ";
        c3.disp();

        return 0;

}


QUESTION 4


#include<iostream>
using namespace std;
class greatest
{
        private:
                int x,y,z;
    public:
        void input()
        {
                cout<<"Enter 3 nos.";
                cin>>x>>y>>z;
        }
        void calc()
        {
                int r;
                r=((x>y)&&(x>z)?x:(y>x)&&(y>z)?y:z);
                cout<<"Greatest no:"<<r;
        }
};
int main()
{
        greatest g;
        g.input();
        g.calc();
        
}


QUESTION 5


#include<iostream>
using namespace std;
class sum
{
   private:
        int n,s=0;
        public:
          void calc();
                void display();
                
};
void sum::calc()
{
        for(n=1;n<=100;n+=2)
        s=s+n;
        
}
void sum::display()
{
        cout<<"Sum of all odd numbers between 1-100:"<<s;
}
int main()
{
        sum s;
        s.calc();
        s.display();
        
}


QUESTION 6


#include<iostream>
using namespace std;

class Num
{
    public:
        static int i;
        Num()
        {
            cout<<i++<<" ";
        }
};

int Num::i=1;

int main()
{
    int n;
    cout<<"Enter value on n :: ";
    cin>>n;
    cout<<"\n";
    Num obj[n];
    cout<<"\n";

    return 0;
}
    


QUESTION 7


#include <iostream>  
using namespace std;  
int main()  
{  
int a=5, b=10;      
cout<<"Before swap a= "<<a<<" b= "<<b<<endl;      
a=a*b; //a=50 (5*10)    
b=a/b; //b=5 (50/10)    
a=a/b; //a=10 (50/5)    
cout<<"After swap a= "<<a<<" b= "<<b<<endl;      
return 0;  
}  

  
