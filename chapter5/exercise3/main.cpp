int main()
{
    typedef unsigned char UnsignedChar;
    typedef const unsigned char ConstantUnsignedChar;
    typedef int* PointerToInteger;
    typedef char** PointerToPointerToChar;
    typedef char *PointerToArrayOfChar[];
    typedef int* ArrayOfSevenPointersToInt[7];
    typedef int* (*PointerToArrayOf7PointersToInt)[7];
    typedef int* ArrayOf8ArraysOf7PointersToInt[8][7];
}
