#include <stdio.h>
#include <locale.h>

int main () {
int i;
int tam;
char texto[10];
for(int i=0;i<10;i++)
    texto[i]='\0';

printf("Digite uma srting de até 9 caracteres: \n");
fgets(texto, 10, stdin);

char *txt  = texto;
//tam = (strlen(texto));
tam = (strlen(txt));
tam =  tam - 2;

for (i=tam; i>=0; i--) {
    printf("%c",txt[i]);
}
}