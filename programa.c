#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int tempo;
    printf("Desenvolvido por: john.portilho@gmail.com\n");
    printf("Digite, em minutos, o tempo a aguardar antes de desligar: ");
    scanf("%d", &tempo);
    tempo = tempo * 60;
    printf("Iniciando procedimento de encerramento do sistema...\n");
    for(int i = tempo; i > 0; i--){
        printf("Desligando em [%d] segundos...\n", i);
        sleep(1);
    }
    printf("Desligando em alguns instantes...\n");
    system("shutdown -s");
    return 0;
}
