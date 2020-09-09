#include <stdio.h>
#include <locale.h>

int main () {
int x;
int j;
char z;
int total;
setlocale (LC_ALL, "");

printf("Digite o valor do primeiro número: ");
scanf("%d",&x);
printf("Digite o valor do segundo número: ");
scanf("%d",&j);
printf("Digite a operação desejada: +, -, *, /, resto: ");
fflush(stdin);  //limpando buffer pra eliminar lixo da memoria.
scanf("%c",&z);

switch (z) {
case '+':
    total = x+j;
    printf("Resultado soma: %d",total);
    break;

case '-':
    total = x-j;
    printf("Resultado subtração: %d",total);
    break;

case '*':
    total = x*j;
    printf("Resultado multiplicação: %d",total);
    break;

case '/':
    total = x/j;
    printf("Resultado divisão: %d",total);
    break;

case '%':
    total = x%j;
    printf("Resultado resto da divisão: %d",total);
    break;

default:
    printf("Operação inválida");

}

}

