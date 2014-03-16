#include <iostream>

void swapUsingPointers(int *a, int *b)
{
    int tempStorage = *a;
    *a = *b;
    *b = tempStorage;
}

void swapUsingReferences(int &a, int &b)
{
    int tempStorage = a;
    a = b;
    b = tempStorage;
}

int main()
{
    int v1 = 1;
    int v2 = 2;
    std::cout << v1 << " - " << v2 << std::endl;
    swapUsingPointers(&v1, &v2);
    std::cout << v1 << " - " << v2 << std::endl;
    swapUsingReferences(v1, v2);
    std::cout << v1 << " - " << v2 << std::endl;
}


