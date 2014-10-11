int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *p = array;

    /* With gcc 4.9 on a 64 bits arch.
       Explicit 64bits conversion or reg eax.

        movl    $0, -12(%rbp)
        jmp L2
    L3:
        movl    -12(%rbp), %eax
        cltq
        movl    -64(%rbp,%rax,4), %eax
        movl    %eax, -16(%rbp)
        addl    $1, -12(%rbp)
    L2:
        cmpl    $8, -12(%rbp)
        jle L3
    */
    for (int i=0; i<9; ++i) {
        int n = array[i];
    }

    /* With gcc 4.9 on a 64 bits arch.
       Direct pointer arithmetic.

        jmp L4
    L5:
        movq    -8(%rbp), %rax
        movl    (%rax), %eax
        movl    %eax, -20(%rbp)
        addq    $4, -8(%rbp)     <---- moving direcly in the array
    L4:
        movq    -8(%rbp), %rax
        movl    (%rax), %eax
        testl   %eax, %eax
        jne L5
    */
    while (*p != 0) {
        int n = *p;
        p++;
    } 
}
