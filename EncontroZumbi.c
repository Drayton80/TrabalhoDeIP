#include <stdlib.h>
#include <stdio.h>


int EncontroZumbi (int terminoBatalha){
    int escolha1, escolha2, escolhaHabilidade;
    int turnos = 1;
    int hpJogador = 100, hpZumbi = 15;
    int danoZumbi, danoJogador;
    int estamina = 20;
    int tipoDeAtaque;
    int xp;

  retornoInicio:
    printf ("   Um humano de aspecto cadaverico aparece a sua frente. Suas vestes sao tra-\n"
            " pos sujos. De sua pele magra e pregada aos ossos exala um fedor putrefato e \n"
            " nauseante e por entre seus labios escoa apenas grunhidos tremidos e melanco-\n"
            " licos.\n\n");
    printf ("   O que desejas fazer?    \n"
            "    <1>Eu ataco ele.       \n"
            "    <2>Tento falar com ele.\n"
            "    <3>Corro dele.       \n\n");
    printf ("     ");

  retornoEscolha1:
    scanf ("%i", &escolha1);
    printf ("\n");

    /*|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|*/
      /*|#|#|#|#|#|#|#|#|#|#|#|#|#|#| COMBATE CONTRA O MONSTRO |#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|*/
    /*|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|*/
    if (escolha1 == 1){
     retornoInicioBatalha:

         /*|#|#|#|#|#|#|#|#|#|#| \/\/ CASO O JOGADOR TENTE FALAR COM ELE \/\/ |#|#|#|#|#|#|#|#|#|#|*/
         if (escolha1 == 2){

            /* TURNO DO MONSTRO */

            printf ("|:| Rodada - %i |:|----|----|----|----|----|----|:| |[Turno do Inimigo]|\n", turnos);
            printf ("\nHP do Homem de Aspecto Cadaverico = [|[-%i-]|]\n\n", hpZumbi);
            printf ("Seu HP = [|[-%i-]|]", hpJogador);    //COLOCAR UM IF AQUI PARA CHECAR, A PARTIR DE UM VALOR, SE O JOGADOR É
                                                        //GUERREIRO OU MAGO
            printf ("\nSua Estamina = I#I-%i-I#I\n", estamina);
            printf ("Pontos de Experiencia =  { %i }", xp);

            danoZumbi = rand () % (8 - 0 + 1) + 0;

            printf ("\n\n\n\n");

            switch (danoZumbi){
                case 0:
                  printf (" O homem de aspecto cadaverico lhe ataca, mas voce consegue desviar.\n");
                  break;
                case 1:
                  printf (" O homem te ataca, porem apenas o arranha de leve.\n");
                  break;
                case 8:
                  printf (" O ser avança rapidamente em sua direcao e morde seu braço violen-\n"
                          " tamente arrancando parte de sua carne");
                  break;
                default:
                  printf (" Ele usa as unhas para te arranhar.\n");
            }

            printf ("\n");
            printf ("Voce toma %i de dano.\n", danoZumbi);
            printf ("\n\n");

            hpJogador = hpJogador - danoZumbi;

            if (hpJogador <= 0){
              return 1;      //VALOR QUE RETORNA RUMO AO GAME OVER
            }

            printf ("|:| Rodada - %i |:|----|----|----|----|----|----|:| |[  Fim da Rodada ]|\n", turnos);
            turnos = turnos + 1;
            escolha1 = 1;
            printf ("\n\n\n\n");

            system ("pause");
         }
         /*|#|#|#|#|#|#|#|#|#|#| /\/\ CASO O JOGADOR TENTE FALAR COM ELE /\/\ |#|#|#|#|#|#|#|#|#|#|#|#|*/

         while (1){

            /*###### TURNO DO JOGADOR ######*/
           retornoEscolhaBatalha:
            system ("cls");
            printf ("|:| Rodada - %i |:|----|----|----|----|----|----|:| |[Turno do Jogador]| |:|\n", turnos);
            printf ("\n\tHP do Homem de Aspecto Cadaverico = [|[-%i-]|]\n\n", hpZumbi);
            printf ("\tSeu HP = [|[-%i-]|]", hpJogador);    //COLOCAR UM IF AQUI PARA CHECAR, A PARTIR DE UM VALOR, SE O JOGADOR É
                                                        //GUERREIRO OU MAGO
            printf ("\n\tSua Estamina = I#I-%i-I#I\n", estamina);
            printf ("\tPontos de Experiencia =  { %i }", xp);

            printf ("\n\n");
            printf ("\n"
                    "  O que desejas fazer?\n"
                    "   <1>Ataque normal.\n"
                    "   <2>Usar habilidade.\n"
                    "   <3>Usar item.\n\n");
            printf ("    ");
            scanf ("%i", &tipoDeAtaque);
            printf ("\n");

            /* ATAQUE BASE */
            if (tipoDeAtaque == 1){
                danoJogador = rand () % (9 - 0 + 1) + 0;
                switch (danoJogador){
                    case 0:
                      printf ("    Voce ataca, mas erra.\n");
                      break;
                    case 9:
                      printf ("    Voce disfere um golpe brutal com sua espada.\n");
                      break;
                    default:
                      printf ("    Seu ataque fere o inimigo.\n");
                }
            }

            /* USAR HABILIDADE */
            if (tipoDeAtaque == 2){
                system ("cls");
                printf ("|:| Rodada - %i |:|----|----|----|----|----|----|:| |[Turno do Jogador]| |:|\n", turnos);
                printf ("\n\tHP do Homem de Aspecto Cadaverico = [|[-%i-]|]\n\n", hpZumbi);
                printf ("\tSeu HP = [|[-%i-]|]", hpJogador);
                printf ("\n\tSua Estamina = I#I-%i-I#I\n", estamina);
                printf ("\tPontos de Experiencia =  { %i }", xp);
                printf ("\n\n");
                printf ("\n");

              retornoEscolhaHabilidade1:
                printf ("  Qual habilidade desejas usar?\n");
                printf ("   <1>Ataque Poderoso.\n"
                        "   <2>Investida.\n"
                        "   <3>{Retornar para as Escolhas Anteriores.}\n\n");
              retornoEscolhaHabilidade2:
                printf ("    ");
                scanf ("%i", &escolhaHabilidade);
                printf ("\n");

                switch (escolhaHabilidade){
                    case 1:
                        if (estamina < 12){
                            printf ("\n{ Voce nao pode fazer isso, pois sua estamina esta muito baixa. }\n");
                            goto retornoEscolhaHabilidade1;
                        }
                      danoJogador = rand () % (16 - 0 + 1) + 0;
                      estamina = estamina - 12;
                        switch (danoJogador){
                            case 0:
                              printf ("    Voce ataca, mas erra.\n");
                              break;
                            case 16:
                              printf ("    Voce usa toda sua furia em um ataque magistral no inimigo.\n");
                              break;
                            default:
                              printf ("    Voce brandi sua espada com o maximo de forca que reuni e ataca ele.\n");
                        }
                      break;
                    case 2:
                        if (estamina < 8){
                            printf ("\n{ Voce nao pode fazer isso, pois sua estamina esta muito baixa. }\n");
                            goto retornoEscolhaHabilidade1;
                        }
                      danoJogador = rand () % (11 - 0 + 1) + 0;
                      estamina = estamina - 8;
                        switch (danoJogador){
                            case 0:
                              printf ("    Voce avança correndo, mas erra o inimigo.\n");
                              break;
                            case 11:
                              printf ("    Voce corre com toda sua potencia e derruba o inimigo com o impacto.\n");
                              break;
                            default:
                              printf ("    Voce corre em direcao a ele e usa o impulso para atacar.\n");
                        }
                      break;
                    case 3:
                      goto retornoEscolhaBatalha;
                      break;
                    default:
                      printf ("<      Essa escolha nao eh uma das opcoes validas, caro aventureiro.      >\n"
                              "<Por favor. Coloque um valor abaixo dentre aqueles exibidos anteriormente.>\n\n");
                      goto retornoEscolhaHabilidade2;
                }
            }

            /* USAR ITEM */
            if (tipoDeAtaque == 3){
                printf ("Eu disse para voce nao fazer isso. :v \n"); //ALTERAR ISSO, SERIO, LEMBRAR DE FAZER.
            }

            printf ("\n");
            printf (" Ele toma %i de dano.\n", danoJogador);
            printf ("\n");

            hpZumbi = hpZumbi - danoJogador;

            if (hpZumbi <= 0){          //DISTRIBUI XP E RETORNA UM NUMERO QUALQUER
                printf ("|:| Rodada - %i |:|----|----|----|----|----|----|:| |[ Fim da Batalha ]|\n", turnos);
                printf ("\n");

                xp = xp + 8;

                printf ("   Voce disfere um golpe fatal no cranio do homem de aspecto cadaverico e com\n"
                        " um baque ele vai ao chao enquanto seu corpo para de reagir.\n");
                printf ("\n { Voce acaba de receber + %i pontos de experiencia. }\n\n", xp);
              return 2;
            }

            printf ("\n");

            /*####### TURNO DO MONSTRO #######*/

            danoZumbi = rand () % (8 - 0 + 1) + 0;

            switch (danoZumbi){
                case 0:
                  printf ("    O homem de aspecto cadaverico lhe ataca, mas voce consegue desviar.\n");
                  break;
                case 1:
                  printf ("    O homem te ataca, porem apenas o arranha de leve.\n");
                  break;
                case 8:
                  printf ("    O ser avanca rapidamente em sua direcao e morde seu braco violentamente ar-\n"
                          " rancando parte de sua carne.\n");
                  break;
                default:
                  printf ("    Ele usa as unhas para te arranhar.\n");
            }

            printf ("\n");
            printf (" Voce toma %i de dano.\n", danoZumbi);
            printf ("\n\n");

            hpJogador = hpJogador - danoZumbi;

            if (hpJogador <= 0){
              return 1;
              //VALOR QUE RETORNA RUMO AO GAME OVER
            }

            printf ("|:| Rodada - %i |:|----|----|----|----|----|----|:| |[  Fim da Rodada ]| |:|\n", turnos);
            printf ("\n\n\n\n\n\n");

            system ("pause");
            turnos = turnos + 1;
         }
    }
    /*|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|*/
      /*|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|*/
    /*|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|#|*/

    if (escolha1 == 2){
        system("cls");
        printf ("   Um humano de aspecto cadaverico aparece a sua frente. Suas vestes sao tra-\n"
                " pos sujos. De sua pele magra e pregada aos ossos exala um fedor putrefato e \n"
                " nauseante e por entre seus labios escoa apenas grunhidos tremidos e melanco-\n"
                " licos.\n\n");
        printf ("   O que desejas falar?\n"
                "    <1>O que aconteceu com voce?\n"
                "    <2>Voce esta bem?\n"
                "    <3>Nao se aproxime ou lhe atacarei.\n"
                "    <4>[Permanecer em silencio]\n"
                "    <5><Retornar para as Escolhas Anteriores.>\n\n"
                "     ");

     retornoEscolha2:
        scanf ("%i", &escolha2);

            if (escolha2 > 5 || escolha2 < 1){
                printf ("\n<      Essa escolha nao eh uma das opcoes validas, caro aventureiro.      >\n"
                        "<Por favor. Coloque um valor abaixo dentre aqueles exibidos anteriormente.>\n\n");
                goto retornoEscolha2;
            }

            if (escolha2 == 5){
                system ("cls");
                goto retornoInicio;
            }

        system ("cls");
        printf("    Enquanto aproximava-se lentamente, ele olhou em sua direcao. Os olhos dele\n"
               " jaziam palidos e desprovidos de qualquer fagulha de vida. De subito, os gru-\n"
               " nhidos tornaram-se histericos e mergulharam em profunda agonia. Ele corre ru-\n"
               " mo a voce e te ataca.\n\n");
        goto retornoInicioBatalha;
    }

    if (escolha1 == 3){
        system ("cls");
        printf ("   Um humano de aspecto cadaverico aparece a sua frente. Suas vestes sao tra-\n"
                " pos sujos. De sua pele magra e pregada aos ossos exala um fedor putrefato e \n"
                " nauseante e por entre seus labios escoa apenas grunhidos tremidos e melanco-\n"
                " licos.\n\n");
        printf ("   Voce corre em uma direcao qualquer sem olhar para tras. Depois de um tempo\n"
                " acaba observando de onde veio para saber se ele te seguiu. Nao havia qualquer\n"
                " indicio disso, entao poderas tomar outro rumo que desejares.\n\n");

      return 3;  //VALOR IRRELEVANTE, POIS QUALQUER VALOR QUE RETORNE SERÁ GUIADO RUMO A ESCOLHA DO NOVO BLOCO DE REGIÃO.
    }

    if (escolha1 > 3 || escolha1 < 1){
        printf (" <      Essa escolha nao eh uma das opcoes validas, caro aventureiro.      >\n"
                " <Por favor. Coloque um valor abaixo dentre aqueles exibidos anteriormente.>\n\n");
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
