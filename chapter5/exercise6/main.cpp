void f(char) {}
void g(char&) {}
void h(const char&) {}

int main()
{
    f('a'); // OK: this is a const char
    // g('a'); KO: You need a l-value
    h('a'); // OK: Temporary variable created. See p.98.
    
    f(49); // OK: this can be stored in an unsigned byte
    //g(49);  KO: need a l-value
    h(49); // OK: Temporary variable created. See p.98.

    f(3300); // OK: but will be converted to char -28
    // 3300 = CE4
    // E4 = 11100100
    // 11100100 - 1 = 11100011
    // Complement to 1: 11100 = 2**4 + 2**3 + 2**2 = 28
    // Completement to 2 = -28
    
    //g(3300); KO: need a l-value
    h(3300); // OK: but will be converted to char -28. Temporary variable created
    
    char c = 'a';
    f(c); // OK
    g(c); // OK c is a l-value of the good type.
    h(c); // OK

    unsigned char uc = 'b';
    f(uc);
    //g(uc); // KO, p.98 "The initializer for a plain T& must be a l-value of
             // type Y
    h(uc);   // OK. Implicit convertion + Temporary variable created. 

    signed char sc = 'c';
    f(sc);
    //g(sc); // KO, p.98 "The initializer for a plain T& must be a l-value of
             //type T
    h(sc);   // OK. Implicit convertion + Temporary variable created. 
}

