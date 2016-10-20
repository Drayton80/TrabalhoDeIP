#include <stdlib.h>
#include <stdio.h>

int EncontroZumbi (int terminoBatalha){
    int escolha1, escolha2;
    int turnos;
    int lifeJogador, lifeZumbi;

    printf ("Um humano de aspecto cadaverico aparece a sua frente. Suas vestes sao trapos\n"
            "sujos. De sua pele magra e pregada aos ossos exala um fedor putrefato e nau-\n"
            "seante e por entre seus labios escoa apenas grunhidos tremidos e melancoli-\n"
            "cos. O que desejas fazer?\n\n");
    printf ("<1>Eu ataco ele.  <2>Tento falar com ele.  <3>Corro dele.\n\n");

  retornoEscolha1:
    scanf ("%i", &escolha1);
    printf ("\n");

    if (escolha1 == 1){
     retornoInicioBatalha:
         printf ("");

         while (1){

            if (lifeJogador <= 0){
              return 1;
              //VALOR QUE RETORNA RUMO AO GAME OVER
            }

            if (lifeZumbi <= 0){
              //DISTRIBUI XP E RETORNA UM NUMERO QUALQUER

            }

            turnos = turnos + 1;
         }
    }

    if (escolha1 == 2){
        printf ("O que desejas falar?\n"
                "<1>O que aconteceu com voce?\n"
                "<2>Voce esta bem?\n"
                "<3>Nao se aproxime ou lhe atacarei.\n"
                "<4>[Permanecer em silencio.]\n\n");

     retornoEscolha2:
        scanf ("%i", &escolha2);

            if (escolha2 > 4 || escolha2 < 1){
                printf ("\n<      Essa escolha nao eh uma das opcoes validas, caro aventureiro.      >\n"
                        "<Por favor. Coloque um valor abaixo dentre aqueles exibidos anteriormente.>\n\n");
                goto retornoEscolha2;
            }

        printf("\nEnquanto aproximava-se lentamente, ele olhou em sua direcao. Os olhos dele ja-\n"
               "ziam palidos e desprovidos de qualquer fagulha de vida. De subito, os grunhidos\n"
               "tornaram-se histericos e mergulharam em profunda agonia. Ele corre rumo a voce\n"
               "e te ataca.\n\n");
        goto retornoInicioBatalha;
    }

    if (escolha1 == 3){
        printf ("Voce corre em uma direcao qualquer sem olhar para tras. Depois de um tempo a-\n"
                "caba observando de onde veio para saber se ele te seguiu. Nao havia qualquer\n"
                "indicio disso, entao poderas tomar outro rumo que desejares.\n\n");

      return 3;  //VALOR IRRELEVANTE, POIS QUALQUER VALOR QUE RETORNE SERÁ GUIADO RUMO A ESCOLHA DO NOVO BLOCO DE REGIÃO.
    }

    if (escolha1 > 3 || escolha1 < 1){
        printf ("<      Essa escolha nao eh uma das opcoes validas, caro aventureiro.      >\n"
                "<Por favor. Coloque um valor abaixo dentre aqueles exibidos anteriormente.>\n\n");
        goto retornoEscolha1;
    }

}

int main (void){
    int resultadoBatalha;

    EncontroZumbi(resultadoBatalha);

    if (resultadoBatalha == 1){
        printf ("\n\n\###GAME OVER###\n\n");
    }

  return 0;
}
