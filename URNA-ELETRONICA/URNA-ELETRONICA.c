#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
 /* Declaração das variáveis, aqui se dá o nome de algumas coisas para poder receber os votos */

    setlocale (LC_ALL, "Portuguese");
    int numcan[11] = {24316,15461,54216,45136,45126,15462,15648,98745,64125,54134,97845}, codv, iniciar = 0, candidato[11] = {0,0,0,0,0,0,0,0,0,0,0}, brnulo, encerrar = 0, voto, ganhador = 0, totalv;
    char nome0[5] = "Joao", nome1[5] = "Jair", nome2[8]="Toninho",nome3[5] = "Saci", nome4[6] = "Ramos", nome5[8] = "Claudia", nome6[8] = "Tamires", nome7[5] = "Elly", nome8[5] = "Ebby",nome9[5] = "Joel", nome10[6] = "Tommy";
    codv = 40028922;

 /* Aqui é onde começa, é onde se vota, logo depois tem uma grande estrutura para fazer esses votos funcionarem */

    while(iniciar!=codv) {
        printf("Digite o código para iniciar a votação:\n");
        scanf("%d", &iniciar);
    }

 /* Aqui, entra a parte onde os votos vão ligar com os candidatos e com o sistema, é aqui que a máquina começa a funcionar como uma Urna Eletrônica */

    while(encerrar!=codv) {
        printf("\nDigite o numero de seu candidato (tecle 00 para votar branco ou nulo): \n");
        scanf("%d", &voto);

        if(voto == 00)
            brnulo++;
        else if(voto == numcan[0])
            candidato[0]++;
        else if(voto == numcan[1])
            candidato[1]++;
        else if(voto == numcan[2])
            candidato[2]++;
        else if(voto == numcan[3])
            candidato[3]++;
        else if(voto == numcan[4])
            candidato[4]++;
        else if(voto == numcan[5])
            candidato[5]++;
        else if(voto == numcan[6])
            candidato[6]++;
        else if(voto == numcan[7])
            candidato[7]++;
        else if(voto == numcan[8])
            candidato[8]++;
        else if(voto == numcan[9])
            candidato[9]++;
        else if(voto == numcan[10])
            candidato[10]++;
        else if(voto != 00 || numcan[0] || numcan[1] || numcan[2] || numcan[3] || numcan[4] || numcan[5] || numcan[6] || numcan[7] || numcan[8] || numcan[9] || numcan[10])
            brnulo++;

 /* Estrutura de decisão para fazer com que a Urna revele o possível ganhador desta eleição */

        if(candidato[0]>ganhador)
            ganhador = candidato[0];
        else if(candidato[1] > ganhador)
            ganhador = candidato[1];
        else if(candidato[2] > ganhador)
            ganhador = candidato[2];
        else if(candidato[3] > ganhador)
            ganhador = candidato[3];
        else if(candidato[4] > ganhador)
            ganhador = candidato[4];
        else if(candidato[5] > ganhador)
            ganhador = candidato[5];
        else if(candidato[6] > ganhador)
            ganhador = candidato[6];
        else if(candidato[7] > ganhador)
            ganhador = candidato[7];
        else if(candidato[8] > ganhador)
            ganhador = candidato[8];
        else if(candidato[9] > ganhador)
            ganhador = candidato[9];
        else if(candidato[10] > ganhador)
            ganhador = candidato[10];

        printf("\nDigite qualquer numero para o proximo funcionário votar ou digite\no codigo para finalizar a votação:\n");
        scanf("%d", &encerrar);

 /* Aqui é revelado o "ganhador", o resultado final dessa eleição e o mais votado dentre os candidatos */

        }
        if(ganhador == candidato[0])
            printf("\n\nO ganhador é o candidato %s\n\n", nome0);
        else if(ganhador == candidato[1])
            printf("\n\nO ganhador é o candidato %s\n\n", nome1);
        else if(ganhador == candidato[2])
            printf("\n\nO ganhador é o candidato %s\n\n", nome2);
        else if(ganhador == candidato[3])
            printf("\n\nO ganhador é o candidato %s\n\n", nome3);
        else if(ganhador == candidato[4])
            printf("\n\nO ganhador é o candidato %s\n\n", nome4);
        else if(ganhador == candidato[5])
            printf("\n\nO ganhador é o candidato %s\n\n", nome5);
        else if(ganhador == candidato[6])
            printf("\n\nO ganhador é o candidato %s\n\n", nome6);
        else if(ganhador == candidato[7])
            printf("\n\nO ganhador é o candidato %s\n\n", nome7);
        else if(ganhador == candidato[8])
            printf("\n\nO ganhador é o candidato %s\n\n", nome8);
        else if(ganhador == candidato[9])
            printf("\n\nO ganhador é o candidato %s\n\n", nome9);
        else if(ganhador == candidato[10])
            printf("\n\nO ganhador é o candidato %s\n\n", nome10);

 /* Essa parte, mostramos o final do algoritmo, onde mostra todos os votos e o resultado desta eleição */

    totalv = candidato[0] + candidato[1] + candidato[2] + candidato[3] + candidato[4] + candidato[5] + candidato[6] + candidato[7] + candidato[8] + candidato[9] + candidato[10] + brnulo;
    printf("\nNo total houveram %d votos\n",totalv);

    printf("\nCandidato %s de numero %d teve %d votos\n",nome0,numcan[0],candidato[0]);
    printf("\nCandidato %s de numero %d teve %d votos\n",nome1,numcan[1],candidato[1]);
    printf("\nCandidato %s de numero %d teve %d votos\n",nome2,numcan[2],candidato[2]);
    printf("\nCandidato %s de numero %d teve %d votos\n",nome3,numcan[3],candidato[3]);
    printf("\nCandidato %s de numero %d teve %d votos\n",nome4,numcan[4],candidato[4]);
    printf("\nCandidata %s de numero %d teve %d votos\n",nome5,numcan[5],candidato[5]);
    printf("\nCandidata %s de numero %d teve %d votos\n",nome6,numcan[6],candidato[6]);
    printf("\nCandidata %s de numero %d teve %d votos\n",nome7,numcan[7],candidato[7]);
    printf("\nCandidato %s de numero %d teve %d votos\n",nome8,numcan[8],candidato[8]);
    printf("\nCandidato %s de numero %d teve %d votos\n",nome9,numcan[9],candidato[9]);
    printf("\nCandidato %s de numero %d teve %d votos\n",nome10,numcan[10],candidato[10]);
    printf("\nVotos nulos %d\n", brnulo);

    return 0;
}
