#include <iostream>
#include <string>

typedef std::string* p_string;

enum Seasons { SPRING, SUMMER, FALL, WINTER };
enum Boolean { TRUE, FALSE };

int main()
{
    std::cout << "Size of bool: " << sizeof(bool) << std::endl;
    std::cout << "Size of char: " << sizeof(char) << std::endl;
    std::cout << "Size of short: " << sizeof(short) << std::endl;
    std::cout << "Size of int: " << sizeof(int) << std::endl;
    std::cout << "Size of long: " << sizeof(long) << std::endl;
    std::cout << "Size of float: " << sizeof(float) << std::endl;
    std::cout << "Size of double: " << sizeof(double) << std::endl;
    std::cout << "Size of std::string: " << sizeof(std::string) << std::endl;
    std::cout << "Size of pointer to int: " << sizeof(int*) << std::endl;
    std::cout << "Size of pointer to void: " << sizeof(void*) << std::endl;
    std::cout << "Size of pointer to string: " << sizeof(std::string*) << std::endl;
    std::cout << "Size of enum: " << sizeof(Boolean) << std::endl;
    std::cout << "Size of enum: " << sizeof(Seasons) << std::endl;
    // Just a test of sizeof with a value.
    std::string my_string = "This is longer string";
    std::cout << "Size of std::string: " << sizeof(my_string) << std::endl;
    return 0;
}
