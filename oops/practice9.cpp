// #include <iostream>

// using namespace std;

// class Complex
// {
// public:
//     int real1, imaginary1, real2, imaginary2;
//     int sum()
//     {
//         int a = 0, b = 0;
//         a = real1 + real2;
//         b = imaginary1 + imaginary2;
//         cout << "The sum of two complex numbers is: " << a << " + " << b << "i" << endl;
//         return 0;
//     }

//     int difference()
//     {
//         int a = 0, b = 0;
//         a = real1 - real2;
//         b = imaginary1 - imaginary2;
//         if (b > 0)
//         {
//             cout << "The difference of two complex numbers is: " << a << " + " << b << "i" << endl;
//         }
//         else
//         {
//             cout << "The difference of two complex numbers is: " << a << b << "i" << endl;
//         }
//         return 0;
//     }

//     int multiplication()
//     {
//         int a, b;
//         a = (real1 * real2) - (imaginary1 * imaginary2);
//         b = (real1 * imaginary2) + (imaginary1 * real2);
//         if (b > 0)
//         {
//             cout << "The multiplication of two complex numbers is: " << a << " + " << b << "i" << endl;
//         }
//         else
//         {
//             cout << "The multiplication of two complex numbers is: " << a << b << "i" << endl;
//         }
//         return 0;
//     }
// };

// int main()
// {
//     Complex t;
//     t.real1 = 12;
//     t.imaginary1 = 7;
//     t.real2 = 45;
//     t.imaginary2 = 3;
//     t.sum();
//     t.difference();
//     t.multiplication();
//     return 0;
// }

#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    int get_real()
    {
        return real;
    }
    int get_imag()
    {
        return imag;
    }

    void add(Complex c1)
    {
        cout << c1.get_real() + real << "+i" << c1.get_imag() + imag << endl;
    }

    void difference(Complex c1)
    {
        cout << real - c1.get_real() << "+i" << imag - c1.get_imag() << endl;
    }

    void multiply(Complex c1)
    {
        cout << ((real * c1.get_real()) - (imag * c1.get_imag())) << "+i" << ((real * c1.get_imag()) + (imag * c1.get_real())) << endl;
    }
};

int main()
{
    Complex c1(4, 5);
    Complex c2(2, 3);
    c1.add(c2);
    c1.difference(c2);
    c1.multiply(c2);
    return 0;
}