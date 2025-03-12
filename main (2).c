/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Crie um programa que imprima os números de 10 a 1 em ordem decrescente.*/

#include <stdio.h>

int main(){
    int n = 10;
    while(n<=10 && n>=1){
        printf(" %d", n);
        n = n - 1;
    }
    return 0;
}