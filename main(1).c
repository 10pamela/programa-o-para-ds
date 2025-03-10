/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
    int main() {
        int n;
        printf("digite um numero: ");
        scanf("%d", &n);
        
        if (n >0)
            printf("o numero é positivo. \n");
        else if(n <0)
            printf("o numero é negativo. \n");
        else 
        printf("o numero é zero, \n");
  
    return 0;
}