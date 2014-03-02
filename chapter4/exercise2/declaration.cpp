#include <string>
#include <iostream>
#include <cmath>
#include <complex>
#include "external.h"

using namespace std;

struct Date;
struct Date { int y, m, d;};

int day(Date*);
int day(Date* p)
{
    return p->d;
}

double sqrt(double number)
{
    return sqrt(number);
}

template<class T> T abs(T);
template<class T> T abs(T a)
{
    return a < 0 ? -a : a;
}

typedef complex<short> Point;

struct User;
struct User { string firstname, lastname;};

// I think we need a definition with the declarration for the next 2
// declarations.
enum Beer { Carlsberg, Heineken, Thor };
namespace NS { int a = 1; }

int main()
{
    char ch = 'a';
    cout << ch << endl;

    string s = "Hello";
    cout << s << endl;

    int count;
    count = 1;
    cout << count << endl;

    // Must define it because it is a constant
    const double pi = 3.14;
    cout << pi << endl;

    // Cannot define it because it is extern
    extern int error_number;
    cout << error_number << endl;

    const char* name;
    name = "Njal";
    cout << name << endl;

    // Needs to precise the length of the array
    const char* seasons[4];
    seasons[0] = "spring";
    seasons[1] = "summer";
    seasons[2] = "fall";
    seasons[3] = "winter";
    for (int i = 0 ; i < 3; ++i)
    {
        cout << seasons[i] << " ";
    }
    cout << endl;

    Date* date = new Date;
    date->y = 2014;
    date->m = 2;
    date->d = 25;

    cout << day(date) << endl;

    cout << sqrt(144) << endl;

    cout << abs<int>(-10) << endl;

    Point point(1,1);
    cout << point.real() << " + " << point.imag() << "i" << endl;

    User user;
    user.firstname = "John";
    user.lastname = "Doe";

    cout << user.firstname << " " << user.lastname << endl;


}
