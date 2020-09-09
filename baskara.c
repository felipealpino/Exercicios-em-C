#include <stdio.h>
#include <locale.h>
#include <math.h>

int main () {
setlocale(LC_ALL, "");
float a;
float b;
float c;
float delta;
float raiz_delta;

printf("Lembrar que caso for adicionar valores float, o certo é usado o ponto '.' \n\n");

printf("Defina o valor de a: ");
scanf("%f", &a);
printf("Defina o valor de b: ");
scanf("%f", &b);
printf("Defina o valor de c: ");
scanf("%f", &c);

delta = (pow(b,2) - (4*a*c));

//printf("%f",delta);

if (delta>0){
    raiz_delta = (-b + (sqrt(delta)))/(2*a);
    printf("A raiz 1 é: %.2f \n",raiz_delta);
    raiz_delta = (b + (sqrt(delta)))/(2*a);
    printf("A raiz 2 é: %.2f",raiz_delta);
} else if (delta == 0) {
    printf("A equação terá somente um valor real ou dois resultados iguais ");
} else if (delta < 0) {
    printf("A equação não possui valores reais");
}

return (0);

}
