#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");
char *nome = NULL;
//char texto[] = "123";
char texto[100];
int x=1;
do {
    printf("Digite uma palavra: ");
    scanf("%s",texto);
    nome = malloc (sizeof(texto)+1);
    strcpy(nome,texto);
    printf("Em nome: %s \n",nome);
    char *maisnome = NULL;
    maisnome = (char *) realloc(nome, sizeof(texto)*x +1);
    if (maisnome == NULL){
        printf("Não foi possivel alocar o realloc");
        free(nome);
        exit(1);
    } else {
        nome = maisnome;
    }

    strcat(nome,texto);
    printf("Agora tem: %s\n",nome);
    x++;
} while (!strcmp(texto,"sair")==0);
free(nome);
return(0);
}
