#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << "(bool) Min: " << numeric_limits<bool>::min() << 
        ", Max: " << numeric_limits<bool>::max() << endl;
    cout << "(char) Min: " << numeric_limits<char>::min() << 
        ", Max: " << numeric_limits<char>::max() << endl;
    cout << "(short) Min: " << numeric_limits<short>::min() << 
        ", Max: " << numeric_limits<short>::max() << endl;
    cout << "(int) Min: " << numeric_limits<int>::min() << 
        ", Max: " << numeric_limits<int>::max() << endl;
    cout << "(long) Min: " << numeric_limits<long>::min() << 
        ", Max: " << numeric_limits<long>::max() << endl;
    cout << "(float) Min: " << numeric_limits<float>::min() << 
        ", Max: " << numeric_limits<float>::max() << endl;
    cout << "(double) Min: " << numeric_limits<double>::min() << 
        ", Max: " << numeric_limits<double>::max() << endl;
    cout << "(long double) Min: " << numeric_limits<long double>::min() << 
        ", Max: " << numeric_limits<long double>::max() << endl;
    cout << "(unsigned short) Min: " << numeric_limits<unsigned short>::min() << 
        ", Max: " << numeric_limits<unsigned short>::max() << endl;
    cout << "(unsigned int) Min: " << numeric_limits<unsigned int>::min() << 
        ", Max: " << numeric_limits<unsigned int>::max() << endl;
    cout << "(unsigned long) Min: " << numeric_limits<unsigned long>::min() << 
        ", Max: " << numeric_limits<unsigned long>::max() << endl;
}
