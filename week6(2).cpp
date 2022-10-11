#include <iostream>
using namespace std;
class Complex_num
{

    int x, y;
    public:

        void inp()
        {
            cout << " Input two complex number: " << endl;
            cin >> x >> y;
        }

        Complex_num operator + (Complex_num obj)
        {
                   Complex_num A;
            // assign values to object
            A.x = x + obj.x;
            A.y = y + obj.y;
            return (A);
        }

        Complex_num operator - (Complex_num obj)
        {

            Complex_num A;
                   A.x = x - obj.x;
            A.y = y - obj.y;
            return (A);
        }

        void print()
        {
            cout << x << " + " << y << "i" << "\n";
        }

                void print2()
        {
            cout << x << " - " << y << "i" << "\n";
        }
};
int main ()
{
Complex_num x1, y1, sum, sub;

    x1.inp();
    y1.inp();

    sum = x1 + y1;
    sub = x1 - y1; // subtract the complex number

    cout << "\n Entered values are: \n";
    cout << " \t";
    x1.print();
    cout << " \t";
    y1.print();
    cout << "\n The addition of two complex (real and imaginary) numbers: ";
    sum.print(); // call print function to display the result of addition
    cout << "\n The subtraction of two complex (real and imaginary) numbers: ";
    sub.print2(); // call print2 function to display the result of subtraction
    return 0;
}
