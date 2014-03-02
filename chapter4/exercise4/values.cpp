#include <iostream>

const int NUMBER_CHARACTERS_TO_DISPLAY = 36;

void print_as_decimal(char* characters)
{
    for(int i = 0; i < NUMBER_CHARACTERS_TO_DISPLAY; ++i) 
    {
        char c = characters[i];
        std::cout << c << " -> " << int(c) << std::endl;
    }
}

void print_as_hexadecimal(char* characters)
{
    for(int i = 0; i < NUMBER_CHARACTERS_TO_DISPLAY; ++i) 
    {
        char c = characters[i];
        std::cout << c << " -> " << std::hex << int(c) << std::endl;
    }
}

int main()
{
    char characters[NUMBER_CHARACTERS_TO_DISPLAY];
    int counter = 0;
    for(char c = 'a'; c <= 'z' ; ++c)
    {
        characters[counter++] = c;
    }
    for(char c = '0'; c <= '9' ; ++c)
    {
        characters[counter++] = c;
    }
    std::cout << "Decimal Values" << std::endl;
    print_as_decimal(characters);
    std::cout << "Hexadecimal Values" << std::endl;
    print_as_hexadecimal(characters);
    std::cout << "Another printable character" << std::endl;
    std::cout << L'é' << " -> " << std::dec << int(L'é') << std::endl;
    return 0;
}
