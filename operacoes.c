#include <stdio.h>
#include <locale.h>

int main () {
int x;
int j;
char z;
int total;
setlocale (LC_ALL, "");

printf("Digite o valor do primeiro n�mero: ");
scanf("%d",&x);
printf("Digite o valor do segundo n�mero: ");
scanf("%d",&j);
printf("Digite a opera��o desejada: +, -, *, /, resto: ");
fflush(stdin);  //limpando buffer pra eliminar lixo da memoria.
scanf("%c",&z);

switch (z) {
case '+':
    total = x+j;
    printf("Resultado soma: %d",total);
    break;

case '-':
    total = x-j;
    printf("Resultado subtra��o: %d",total);
    break;

case '*':
    total = x*j;
    printf("Resultado multiplica��o: %d",total);
    break;

case '/':
    total = x/j;
    printf("Resultado divis�o: %d",total);
    break;

case '%':
    total = x%j;
    printf("Resultado resto da divis�o: %d",total);
    break;

default:
    printf("Opera��o inv�lida");

}

}

