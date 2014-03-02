#include <iostream>
#include <string>

struct A {
    int a;
    int b;
};

namespace n1 {
    namespace n2 {
        enum {A, B};
    }
}
int main()
{
    A* p = new A;
    std::string s;
    std::cout << "Hello World" << std::endl;
    std::cout << p->a << std::endl;
    std::cout << n1::n2::A << std::endl;
}
