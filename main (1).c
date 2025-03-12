/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* Escreva um programa que peça ao usuário para adivinhar um número e informe se o palpite está correto.*/

#include <stdio.h>

int main(){
    int n = 5;
    int resp;
    printf("digite um número de 0 a 10: ");
    scanf(" %d", &resp);
    if(resp!=n){
        printf("Errou!");
    }else{
        printf("Acertou!");
    } 
    return 0;
}