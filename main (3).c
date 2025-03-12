/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Faça um programa que calcule a soma dos números de 1 a 50 usando um loop while.*/

#include <stdio.h>  

int main(){
    int soma=0;
    int n=1;
    while (n<=50){
        soma = soma + n;
        n++;
    }
    printf ("A soma do valor é %d", soma);
    return 0;
}