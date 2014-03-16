int main()
{
    char c = 'a';
    // Pointer to a char
    char *pchar = &c;
    // Array of 10 integers
    int aint[10];
    for (int i = 0; i < 10; ++i)
    {
        aint[i] = i;
    }
    // A reference to an array of 10 integer
    int (&raint)[10] = aint;
    // A pointer to an array of character strings
    char *strings[2] = {"String1", "String2"};
    char* (*pstrings)[2] = &strings;
    // A pointer to a pointer to a character
    char** ppchar = &pchar;
    // A constant integer
    const int i = 10;
    // A pointer to a constant integer
    const int (*pci) = &i;
    // A constant pointer to an integer
    int j = 0;
    int* const cp = &j;
} 
