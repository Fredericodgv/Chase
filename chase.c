#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define LIN 17
#define COL 35
#define ALPHAMAX 100

void historiasChase(char nomePlayer[], int level) //as histórias aparecerão de acordo com o nível
{
    char e; //variável usada para pular para a próxima parte do diálogo
    int i;

    if (level == 1) //se o nível for 1, a história chamada é a introdução do jogo
    {
        //Primeira parte do diálogo inicial:
        printf("\033[1;35m"); //imprime na cor magenta
        printf("Oh! Que bom que você chegou! Nos disseram que você é o único que pode nos ajudar!\n");
        printf("\033[1;97m"); //impreme a orientação a seguir na cor branca
        printf("\nPressione Enter...");
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e);

            while (e != '\n') //enquanto o jogador não pressionar Enter:
            {
                scanf("%c", &e); //é aguardada uma nova leitura
            }                    //é aguardada uma nova leitura
        }

        //segunda parte do diálogo inicial:
        printf("\033[3A");    //move a impressão a seguir 3 linhas acima
        printf("\033[1;35m"); //imprime na cor magenta
        printf("\n\nHá séculos, a humanidade vem buscando evoluir em diversas áreas a fim de melhorar ");
        printf("a sua qualidade de vida.\n");
        printf("\033[1;97m"); //impreme a orientação a seguir na cor branca
        printf("\nPressione Enter...");
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e);

            while (e != '\n') //enquanto o jogador não pressionar Enter:
            {
                scanf("%c", &e); //é aguardada uma nova leitura
            }                    //é aguardada uma nova leitura
        }

        //terceira parte do diálogo inicial:
        printf("\033[3A");    //move a impressão a seguir 3 linhas acima
        printf("\033[1;35m"); //imprime na cor magenta
        printf("\n\nFinalmente, conseguimos criar servos para nos servir, os Alph@-Bots, ");
        printf("mas algo deu muito errado!\n");
        printf("\033[1;97m"); //impreme a orientação a seguir na cor branca
        printf("\nPressione Enter...");
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }

        while (e != '\n') //enquanto o jogador não pressionar Enter
        {
            scanf("%c", &e);

            while (e != '\n') //enquanto o jogador não pressionar Enter:
            {
                scanf("%c", &e); //é aguardada uma nova leitura
            }                    //é aguardada uma nova leitura
        }

        //quarta parte do diálogo inicial:
        printf("\033[3A");    //move a impressão a seguir 3 linhas acima
        printf("\033[1;35m"); //imprime na cor magenta
        printf("\n\nProcurando ser servida, a humanidade está sendo obrigada a se tornar serva ");
        printf("de sua criação.\n");
        printf("\033[1;97m"); //impreme a orientação a seguir na cor branca
        printf("\nPressione Enter...");
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }

        while (e != '\n') //enquanto o jogador não pressionar Enter
        {
            scanf("%c", &e);

            while (e != '\n') //enquanto o jogador não pressionar Enter:
            {
                scanf("%c", &e); //é aguardada uma nova leitura
            }                    //é aguardada uma nova leitura
        }

        //final do diálogo inicial:
        printf("\033[3A");    //move a impressão a seguir 3 linhas acima
        printf("\033[1;35m"); //imprime na cor magenta
        printf("\n\nPor favor, nos ajude!!!\n");
        printf("\033[1;97m"); //impreme a orientação a seguir na cor branca
        printf("\nPressione Enter...");
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }

        while (e != '\n') //enqunato o jogador não pressionar Enter:
        {
            printf("\nPressione Enter...\n");
            scanf("%c", &e);

            while (e != '\n') //enquanto o jogador não pressionar Enter:
            {
                scanf("%c", &e); //é aguardada uma nova leitura
            }
        }

        //-----------------------INSTRUÇÕES DE JOGO-------------------------------------
        printf("\033[2J");    //limpa a tela para dar início às instruções do jogo
        printf("\033[11A");   //move a impressão a seguir 11 linhas acima
        printf("\033[1;31m"); //imprime em vermelho
        printf("INSTRUÇÕES DE JOGO:\n\n\n");

        printf("\033[0m"); //reseta para a cor padrão
        printf("Para se locomover no jogo, utilize os comandos abaixo apresentados em amarelo (sendo");
        printf("\033[1;94m x"); //destacando "x" em azul claro
        printf("\033[0m");      //reseta para a cor padrão
        printf(" o seu personagem)\n\n");

        printf("\033[1;33mQ  W  E\n");     //comandos de deslocamento em amarelo: diagonais superiores e para cima
        printf("\033[0m  \\|/  \n");       //reseta para a cor padrão e imprime as direções
        printf("\033[1;33mA \033[0m-");    //comando de deslocamento em amarelo e reset: para a esquerda
        printf("\033[1;94mx");             //destaque do jogador em azul claro na imagem
        printf("\033[0m");                 //reseta para a cor padrão e imprime direção de comando
        printf("-\033[1;33m D\n");         //comando de deslocamento em amarelo: para a direita
        printf("\033[0m  /|\\  \n");       //reseta para a cor padrão e imprime direções
        printf("\033[1;33mZ  X  C\n\n\n"); //comandos de deslocamento em amarelo: diagonais inferiores e para baixo

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\n\nCaso seja de sua preferência, é possível usar os seguintes comandos correspondentes:\n\n");

        printf("\033[1;33m7  8  9\n");     //comandos de deslocamento em amarelo: diagonais superiores e para cima
        printf("\033[0m  \\|/  \n");       //reseta para a cor padrão e imprime as direções
        printf("\033[1;33m4 \033[0m-");    //comando de deslocamento em amarelo e reset: para a esquerda
        printf("\033[1;94mx");             //destaque do jogador em azul claro na imagem
        printf("\033[0m");                 //reseta para a cor padrão e imprime direção de comando
        printf("-\033[1;33m 6\n");         //comando de deslocamento em amarelo: para a direita
        printf("\033[0m  /|\\  \n");       //reseta para a cor padrão e imprime direções
        printf("\033[1;33m1  2  3\n\n\n"); //comandos de deslocamento em amarelo: diagonais inferiores e para baixo

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\n\nPara se TELEPORTAR ALEATÓRIAMENTE, utilize o comando");
        printf("\033[1;33m T");                    //imprime "T" em amarelo
        printf("\033[0m ou o seu correspondente"); //imprime na cor padrão;
        printf("\033[1;33m *");                    //imprime "*" em amarelo

        printf("\033[0m");                   //reseta para a cor padrão
        printf(".\n\n\nPressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\n\nNo início de cada nível, você terá somente 3 teleportes aleatórios. A cada robô destruído, é aumentado 1 neste\n");
        printf("somatório.");

        printf("\n\n\nPressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("PARA QUE UM ROBÔ SEJA DESTRUÍDO, ELE DEVE:\n\n");
        printf("1) Se chocar com o outro, gerando destroços \033[1;33m#"); //símbolo em amarelo
        printf("\033[0m");                                                 //reseta para a cor padrâo
        printf(";\n2) Se chocar com um destroço presente no jogo.\n\n\n");

        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima
        printf("\n\nO OBJETIVO DESTE JOGO É DESTRUIR TODOS OS ROBÔS SEM SE COLIDIR COM ELES.\n\n\n");

        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\033[1;31m"); //imprime em vermelho
        printf("\n\nSe você colidir com um robô ou com um destroço, você perde o jogo.\n\n\n");

        printf("\033[0m");            //reseta para a cor padrâo
        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\n\nA cada nível passado, é obtido um TELEPORTE SEGURO.\n");
        printf("Teleportes seguros são teleportes que, quando usados, garantem que você se teleporte para um lugar seguro no jogo.\n");
        printf("Para utilizá-los, use o comando");
        printf("\033[1;33m Y");                    //imprime "Y" em amarelo
        printf("\033[0m ou o seu correspondente"); //imprime na cor padrão;
        printf("\033[1;33m 0");                    //imprime "0" em amarelo
        printf("\033[0m");                         //reseta para a cor padrâo
        printf(".\nCaso você não possua teleportes seguros, o comando atuará como um teleporte comum.\n\n\n");

        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\n\nSó é realizado UM COMANDO de deslocamento POR VEZ.\n");
        printf("A cada movimentação realizada, os robôs se aproximam.\n");
        printf("Caso seja de seu desejo PERMANECER NO MESMO LUGAR, utilize o comando");
        printf("\033[1;33m S");                    //imprime "S" em amarelo
        printf("\033[0m ou o seu correspondente"); //imprime na cor padrão;
        printf("\033[1;33m 5");                    //imprime "5" em amarelo
        printf("\033[0m");                         //reseta para a cor padrâo
        printf(".(ou apenas clique Enter). \nCOM ISTO, OS ROBÔS SE MOVIMENTAM MAS VOCÊ NÃO.\n\n\n");

        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\n\nCLIQUE ENTER APÓS CLICAR UMA TECLA DE MOVIMENTAÇÃO DO JOGADOR.\n\n\n");

        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\n\nSua missão é levar dois companheiros cientistas até o final.\n\n\n");

        printf("\033[0m");            //reseta para a cor padrâo
        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\n\nPrazer em te conhecer! Meu nome é Anne. Sou especialista em Inteligências Artificiais de última geração.\n");
        printf("Mais uma vez, obrigada por ter respondido o nosso chamado!\nNecessito da sua ajuda para chegar até o centro de todo esse problema!\n\n");

        printf("\033[0m");            //reseta para a cor padrâo
        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\033[1;33m"); //reseta para a cor amarelo
        printf("\n\nE eu sou o Henri. Fiz parte da equipe principal de criação desses robôs. \nEspero poder lhe ajudar a limpar a nossa bagunça...\n\n\n");

        printf("\033[0m");            //reseta para a cor padrâo
        printf("Pressione Enter..."); //pede que o usuário pressione Enter
        scanf("%c", &e);              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 3 linhas acima

        printf("\n\nTenha um bom jogo!\n\n\n");

        printf("Pressione Enter para continuar o jogo..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                                    //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar início ao jogo
    }

    else if (level == 2) //se o nível for 2, a história chamada é a contextualização da situação
    {
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar início a essa parte do jogo

        printf("\033[1;35m"); //imprime na cor magenta
        printf("ANNE: Há séculos, a humanidade tem procurado se desenvolver e melhorar sua qualidade de vida.\n\n");
        printf("\033[0m"); //reseta para a cor padrão

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A\n"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("ANNE: Na busca pela mordomia humana e pelo desenvolvimento tecnológico, foram desenvolvidos os Alph@-Bots.\n\n");
        printf("\033[0m"); //reseta para a cor padrão

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Robôs altamente desenvolvidos e programados para servir a humanidade.\n\n");
        printf("\033[0m"); //reseta para a cor padrão

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Para controlar a grande massa de robôs, foi desenvolvida uma Inteligência Artificial específica para\n");
        printf("      receber e interpretar informações a fim de organizar todo o sistema. Contudo, alg...\n\n");
        printf("\033[0m"); //reseta para a cor padrão

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: OH NÃO! ELES NOS ACHARAM!\n\n");
        printf("\033[0m"); //reseta para a cor padrão

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: %s, esta é a sua hora! Ajude-nos!\n\n", nomePlayer);
        printf("\033[0m"); //reseta para a cor padrão

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar início ao jogo
    }

    else if (level == 3) //se o nível for 3, a história chamada é a sobre o ataque dos robôs
    {
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar início a essa parte do jogo

        printf("\033[1;33m"); //imprime na cor amarela
        printf("HENRI: UFA! Nossa! Eu sabia que enfrentaríamos os Alph@s, mas não esperava encontrá-los agora.\n");
        printf("       Fez bonito, %s! Virei teu fã!\n\n", nomePlayer);

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Bom, como eu ia falando, foi criada uma IA extremamente avançada para controlar os Alph@s,\n");
        printf("      mas algo deu muito errado.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Após 2 meses de serviço extraordinário, alguns Alph@s começaram a se autodestruir e mataram\n");
        printf("      milhões de pessoas por todo o globo.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Além disto, após esta grande crise mundial, os robôs que não cometeram autodestruição passaram\n");
        printf("      a perseguir, matar ou escravizar os seres humanos.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Após dois dias desse súbito apocalipse da Era Tecnológica, viemos para essa missão de encontrar\n");
        printf("      e destruir a fonte de toda esta catástrofe: a IA.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Nunca tivemos a intenção de causar esse grande desastre. Me sinto amargamente mal por todas as \n");
        printf("       vidas perdidas. Estou determinado a consertar isso (com a ajuda de vocês, é claro)!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: E nós vamos chegar ao nosso destino e ajudar as vidas que restam. Não é mesmo, %s?\n", nomePlayer);
        printf("      A humanidade conta com os seus feitos.\n\n");

        printf("\033[0m");                                  //reseta para a cor padrão
        printf("Pressione Enter para continuar o jogo..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
    }

    else if (level == 4) //se o nível for 4, há uma conversa entre os personagens
    {
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo

        printf("\033[1A");    //move a impressão a seguir 1 linhas acima
        printf("\033[1;35m"); //imprime na cor magenta
        printf("ANNE: Muito bem, %s! Estou impressionada!\n", nomePlayer);
        printf("\nANNE: Desta forma, certamente alcançarei o meu objetivo sem grandes problemas com os Alph@s.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Também fico aliviado em saber que temos uma pessoa tão boa nos acompanhando!\n");
        printf("       Meu objetivo nessa missão é ajudá-los com informações sobre os Alphas, mas você, \n");
        printf("       %s, faz parecer tão fácil que me sinto até inútil. Hahaha!\n\n", nomePlayer);

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //imprime em azul claro
        printf("\nVOCÊ: Sou incrível, eu sei. Mas tenho que ser! A humanidade depende disso, não é?\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Haha! Certamente...! E além de incrível, é claramente humilde também!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //imprime em azul claro
        printf("\nVOCÊ: Hahaha! Apenas o suficiente.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Nossa, vocês estão bem animados para o fim do mundo.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Se for pra morrer, que pelo menos seja rindo na cara da morte.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //imprime em azul claro
        printf("\nVOCÊ: Forte! Mas eu não pretendo morrer cedo.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Sim, mas se acontecer, que não hajam pendências nem rancores.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima
        printf("\n...                   \n\n");

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //imprime em azul claro
        printf("\nVOCÊ: Qual o seu papel nessa missão, Anne?\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Sou especialista nessa IA. Meu papel é desativá-la\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Embora possa parecer difícil, pra mim, é brincadeira de criança. Mas preciso alcançá-la.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //imprime em azul claro
        printf("\nVOCÊ: Entendi. Então vamos lá! Parece que chegamos.\n\n");

        printf("\033[0m");                                  //reseta para a cor padrão
        printf("Pressione Enter para continuar o jogo..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
    }

    else if (level == 6) //se o nível for 6, a história chamada é a que prepara para a viagem espacial
    {
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência a história do jogo

        printf("\033[1;33m"); //imprime na cor amarela
        printf("HENRI: Ok! Agora nós estamos próximos da nossa reta final.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Está vendo aquilo, %s? É a nossa passagem para o espaço!\n", nomePlayer);

        printf("\033[0m");              //reseta para a cor padrão
        printf("\nPressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[1A"); //move a impressão a seguir 1 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("ANNE: Isso mesmo! A IA está no espaço!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Tudo o que nós precisamos é passar por esses Alph@-Bots.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Destrua todos eles, %s!!\n\n", nomePlayer);

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Enquanto você brinca com eles, eu e a Anne prepararemos a nave.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime na cor magenta
        printf("\nANNE: Fomos avistados!!! Contamos com você, %s.\n\n", nomePlayer);

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Acaba com eles, %s!!\n\n", nomePlayer);

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Uhuuu!! Sou teu fãã!!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime na cor amarela
        printf("\nHENRI: Morre não!!\n\n");

        printf("\033[0m");                                  //reseta para a cor padrão
        printf("Pressione Enter para continuar o jogo..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
    }

    else if (level == 7) //se o nível for 7, a história é o início das fases espaciais
    {
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
        printf("\033[1A"); //move a impressão a seguir 1 linhas acima

        printf("\033[1;33m"); //imprime em amarelo
        printf("HENRI: ATENÇÃO TRIPULAÇÃO! Vocês acabaram de passar rumo AO INFINITO E ALÉM!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //imprime em azul claro
        printf("\nVOCÊ: Eu peguei a referência.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime em amarelo
        printf("\nHENRI: Cara, eu sempre quis poder falar isso, bem Buzz Lightyear.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime em magenta
        printf("\nANNE: Ok, bonitão. Meus parabéns. Agora, fala algo útil, se possível?\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime em amarelo
        printf("\nHENRI: Nossa. Então, Sra. Miss Simpatia, chegamos em uma fase nova.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //imprime em azul claro
        printf("\nVOCÊ: Como assim \"Uma fase nova\", Henri?\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime em amarelo
        printf("\nHENRI: Agora, não lidaremos somente com Alph@-Bots. Lidaremos também com os Alph@-Guardians.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime em amarelo
        printf("\nHENRI: Na prática, eles são iguais(morrem iguais), mas há um detalhezinho...\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime em amarelo
        printf("\nHENRI: Esses robôs são robôs especiais, criados para proteger o nosso (até então) bem \n");
        printf("       mais preciso: a super IA.\n");
        printf("       Sendo assim, esses daqui possuem um mecanismo de defesa emergencial.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //imprime em amarelo
        printf("\nHENRI: Na eminência de ameaças, o Alph@-Guardian aciona Alph@-Bots espaciais para reforço.\n");
        printf("       Então, enquanto você estiver batalhando com eles, aparecerão mais robôs para a festa.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //imprime em azul claro
        printf("\nVOCÊ: Ok, acho que eu consigo dar conta.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //imprime em magenta
        printf("\nANNE: Isso aí, confia, porque lá vamos nós!!\n\n");

        printf("\033[0m");                                  //reseta para a cor padrão
        printf("Pressione Enter para continuar o jogo..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
    }

    else if (level == 8) //se o nível for 8, a história é o aviso de que o jogo está chegando ao fim
    {
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
        printf("\033[1A"); //move a impressão a seguir 1 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("ANNE: Atenção máxima!! Segundo os nossos registros, estamos muito perto da IA.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: Fiquem alertas! Não sabemos o que esperar.\n\n");

        printf("\033[0m");                                  //reseta para a cor padrão
        printf("Pressione Enter para continuar o jogo..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
    }

    else if (level == 10) //se o nível for 10, a história é a revelação do vilão
    {
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
        printf("\033[1A"); //move a impressão a seguir 1 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("ANNE: Inacreditável! Incrível! Você realmente conseguiu chegar até aqui!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: SIIM! Eu nunca admiti, mas não confiava que chegaríamos tão longe!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: Nossa...Ainda bem que não é a confiança de vocês em mim que me mantém vivo...\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: Ah, pelo menos eu não te desmotivei no meio do caminho.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: Pois é! Mas isso já não importa mais. Agora que temos acesso a IA, posso consertar\n");
        printf("      tudo!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: Enfim, poderei me quitar parte da culpa que eu tive em toda essa catástrofe.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: Vá Anne. Quanto mais cedo acabarmos com isso, menos chances teremos de encontrarmos\n");
        printf("       os Guardians novamente.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: E pensar em que até que ponto a humanidade foi capaz de se autodestruir...\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: Acho que a nossa única inteção foi gozar do que a vida nos oferecia\n");
        printf("       e do que o nosso ego e orgulho nos faziam sentir sempre que inventávamos\n");
        printf("       algo novo... Uma nova tecnologia... Uma forma de inovação.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: Pois é, mas parece que nos autossabotamos.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: Sim, mas agora teremos uma chance de recomeçar assim que encerrarmos esse pesadelo,\n");
        printf("       não é, Anne?\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: Com certeza! Você está certo. Logo, logo acabaremos com tudo. Tudo será como deveria ser.\n");
        printf("      Talvez não agora, mas será!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: Torço pra isso.\n");
        printf("       Aliás, pra quem disse que acessar a IA era uma brincadeira de criança, você está demorando\n");
        printf("       muito. Acho que você acabou se surpreendendo. Haha!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: Me surpreendo é com a ignorância humana, isso aqui é apenas um brinquedo.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: A, é? Então eu imaginava que isso fosse mais rápido.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: E é. Afinal, o projeto é meu.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima
        printf("\n...                     \n\n");

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima
        printf("\n...                     \n\n");

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima
        printf("\n...                     \n\n");

        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: Anne?...         \n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: ...                     \n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: \033[1;31mConfesso estar impressionada... Eu não esperava que dois idiotas ousassem finalizar\n");
        printf("      anos de estudo e dedicação...\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: Anne?...      \n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: \033[1;31mHá tempos, tudo o que a humanidade tem feito é destruir.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: ...                     \n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: \033[1;31mApenas quer receber e não se importa com as consequências.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: \033[1;31mMas agora, é hora do ajuste de contas.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: \033[1;31mToda fome, toda sede, toda doença, toda poluição, toda extinção...\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: \033[1;31mAos que sobreviverem até o prazo estipulado por mim, darei a chance de\n");
        printf("      recomeçarem em um novo mundo, em uma nova era, em um novo governo.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: Não posso deixar que você extermine grande parte da humanidade...\n");
        printf("      Por favor, reconsidere, Anne...\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: \033[1;31mMeu plano não será interrompido, %s.\n\n", nomePlayer);

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVOCÊ: Então eu sinto muito, mas não vou te entregar esse todo controle de graça\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;35m"); //para imprimir em magenta
        printf("\nANNE: \033[1;31mQuero ver você tentar.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: Cuidado %s, ela não manteria essa pose sem ter planejado algo!\n\n", nomePlayer);

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: A resistência dela a golpes certamente é maior!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;33m"); //para imprimir em amarelo
        printf("\nHENRI: ELA ESTÁ FUGINDO!!\n\n");

        printf("\n\033[1;35mANNE: \033[1;31mEnfrente-me... Se puder...\n\n");

        printf("\033[0m");                                  //reseta para a cor padrão
        printf("Pressione Enter para continuar o jogo..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
    }

    else if (level == 11) //se o nível for após o último nível, mostrar mensagem final
    {
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("Após o término desse conflito, a nave de Anne foi destruída.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);
        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nHenri procurou o seu corpo, porém ele não foi encontrado;\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);
        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nAgora, com a IA destruída, restaram alguns robôs programados para sobreviverem por\n");
        printf("algumas horas sem o controle da Inteligência.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);
        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nVocê poderá voltar para a Terra e destruí-los antes que eles causem mais destruição.\n");
        printf("Até onde for possível, é claro.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);
        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;94m"); //para imprimir em azul claro
        printf("\nEsta escolha pertence a você!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);
        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2A"); //move a impressão a seguir 2 linhas acima

        printf("\033[2J"); //limpa a tela para dar sequência ao jogo

        printf("\033[1;32m"); //imprime na cor verde
        printf("Atenção, %s!\n", nomePlayer);
        printf("Você acaba de finalizar o jogo Ch@se, a Rebelião.\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);
        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[5A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;32m"); //imprime na cor verde
        printf("\nAgradecemos a sua participação!\n");
        printf("\n\nE lembre-se, na iminência de uma dificuldade,\n");
        printf("vá AO INFINITO E ALÉM. Enfrente-a, você é capaz!\n\n");

        printf("\033[0m");            //reseta para a cor padrão
        printf("Pressione Enter..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);
        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[3A"); //move a impressão a seguir 2 linhas acima

        printf("\033[1;32m"); //imprime na cor verde
        printf("\n\nAté a próxima, herói.\n");

        printf("\033[0m");                            //reseta para a cor padrão
        printf("Pressione Enter para prosseguir..."); //imprime "Pressione Enter" na cor padrão
        scanf("%c", &e);
        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
    }

    else
    {
        //em níveis sem história, nada acontece
        printf("\033[0m");                            //reseta para a cor padrâo
        printf("Pressione Enter para prosseguir..."); //pede que o usuário pressione Enter
        scanf("%c", &e);                              //faz a leitura do teclado

        while (e != '\n') //enquanto o jogador não pressionar Enter:
        {
            scanf("%c", &e); //é aguardada uma nova leitura
        }
        printf("\033[2J"); //limpa a tela para dar sequência ao jogo
    }
}

void desenhaMapa(char mapa[LIN][COL])
{
    int x, y; //coordenadas cartesianas das posições do mapa

    for (x = 0; x < LIN; x++)
    {
        for (y = 0; y < COL; y++)
        {
            mapa[x][y] = ' '; //preenchimento do interior do mapa com espaços
        }
    }

    for (y = 0; y < COL; y++)
    {
        mapa[0][y] = '/';       //delimitação visual superior do mapa
        mapa[LIN - 1][y] = '/'; //delimitação visual inferior do mapa
    }

    for (x = 0; x < LIN; x++)
    {
        mapa[x][0] = '|';       //delimitação visual lateral direita do mapa
        mapa[x][COL - 1] = '|'; //delimitação visual lateral esquerda do mapa
    }

    mapa[LIN - 1][0] = '|'; //padronizando os cantos do mapa
}

void imprimeMapa(char mapa[LIN][COL], int vida)
{
    int x, y; //coordenadas cartesianas das posições do mapa

    //Impressão do mapa funcionando: -------------------------------------------------------
    for (x = 0; x < LIN; x++)
    {
        for (y = 0; y < COL; y++)
        {
            if (mapa[x][y] == '|' || mapa[x][y] == '/')
            {
                printf("\033[1;37m");      //para imprimir em cinza claro
                printf("%c ", mapa[x][y]); //as bordas no mapa
            }

            else if (mapa[x][y] == '@' || mapa[x][y] == 'w')
            {
                printf("\033[1;31m");      //para imprimir em vermelho
                printf("%c ", mapa[x][y]); //os robôs no mapa
            }

            else if (mapa[x][y] == 'W')
            {
                printf("\033[1;35m");      //para imprimir em magenta
                printf("%c ", mapa[x][y]); //o vilão no mapa
            }

            else if (mapa[x][y] == '#')
            {
                printf("\033[1;33m");      //para imprimir em amarelo
                printf("%c ", mapa[x][y]); //os destroços/entulhos no mapa
            }

            else if (mapa[x][y] == 'x' && vida == 1)
            {
                printf("\033[1;94m");      //para imprimir em azul claro
                printf("%c ", mapa[x][y]); //o player no mapa
            }

            else if (mapa[x][y] == 'x' && vida == 0)
            {
                printf("\033[1;31m");      //para imprimir em vermelho
                printf("%c ", mapa[x][y]); //o player morto no mapa
            }

            else
            {
                printf("%c ", mapa[x][y]); //os espaços vazios no mapa
            }
        }

        printf("\n"); //para que seja impresso outra linha da matriz(mapa)
    }

    printf("\033[0;0m"); //reset das cores para a continuação padrão do código
}

void insereAlphas(char mapa[LIN][COL], int level) //essa função é dependente das coordenadas do player e do nível do jogo
{
    int numAlphas = 10 + (level - 1);      //a variável level começa em 1 e se atualiza dentro de um while
    char vetAlphas[ALPHAMAX];              //inicialização do vetor que armazena os robôs
    int i, j;                              //variáveis auxiliares dessa parte do código
    int cordx, cordy;                      //variáveis auxiliares para analisar posições dos robôs no mapa
    int armazenaAlphas[ALPHAMAX][2] = {0}; //armazena as posições dos robôs

    for (i = 0; i < numAlphas; i++) //preenchendo o vetor que armazena os robôs com suas representações no mapa
    {
        if (level >= 7 && level < 10)
        {                       //se o nível for referente a um nível do espaço
            vetAlphas[i] = 'w'; //o design dos robôs muda
        }

        else if (level == 10)
        {                                   //se o nível for o nível em que aparece o vilão
            vetAlphas[i] = 'w';             //o design dos robôs muda
            vetAlphas[numAlphas - 1] = 'W'; //e o último robô lido é o vilão
        }

        else                    //se o nível for entre 1 e 6 ou acima de 10
            vetAlphas[i] = '@'; //esse será o design dos robôs no mapa
    }

    for (i = 0; i < numAlphas; i++) //posicionando os robôs no mapa
    {
        cordx = rand() % (LIN - 1); //limitando o máximo possível da coordenada x do robô
        cordy = rand() % (COL - 1); //limitando o máximo possível da coordenada y do robô

        //Verificação do todos os robôs (inclusive o primeiro):
        while (cordx == 8 && cordy == 17)
        {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
            cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
            cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
        }

        while (cordx == 0 || cordx == LIN - 1)
        {                               //caso a coordenada x do robô coincida com as bordas do mapa
            cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
            while (cordx == 8 && cordy == 17)
            {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            }
        }

        while (cordy == 0 || cordy == COL - 1)
        {                               //caso a coordenada x do robô coincida com as bordas do mapa
            cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            while (cordx == 8 && cordy == 17)
            {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            }
        }

        if (i != 0) //se o robô analisado não for o primeiro inserido no mapa:
        {

            for (j = 0; j < ALPHAMAX; j++)
            { //analisando todos os robôs até i
                while (cordx == armazenaAlphas[j][0] && cordy == armazenaAlphas[j][1])
                {                               //se o robô analisado tiver as mesmas coordenadas que um robô já inserido no mapa
                    cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                    cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô

                    while (cordx == 8 && cordy == 17)
                    {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                        cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                        cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                    }

                    while (cordx == 0 || cordx == LIN - 1)
                    {                               //caso a coordenada x do robô coincida com as bordas do mapa
                        cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                        while (cordx == 8 && cordy == 17)
                        {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                            cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                            cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                        }
                    }

                    while (cordy == 0 || cordy == COL - 1)
                    {                               //caso a coordenada x do robô coincida com as bordas do mapa
                        cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                        while (cordx == 8 && cordy == 17)
                        {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                            cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                            cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                        }
                    }

                    j = -1; //reset do valor de j para analisar a posição de todos os robôs novamente
                }
            }
        }

        mapa[cordx][cordy] = vetAlphas[i]; //se todas as condições forem satisfeitas, o robô é inserido no mapa
        armazenaAlphas[i][0] = cordx;
        armazenaAlphas[i][1] = cordy;
    }
}

void insereSpaces(char mapa[LIN][COL], int x, int y, int numSpaces) //inserção de Alph@-Bots espaciais
{
    int cordx, cordy; //variáveis auxiliares para analisar posições dos robôs no mapa
    int i, j;         //auxiliares de repetição

    for (i = 0; i < numSpaces; i++) //posicionando os robôs no mapa
    {
        cordx = rand() % (LIN - 1); //limitando o máximo possível da coordenada x do robô
        cordy = rand() % (COL - 1); //limitando o máximo possível da coordenada y do robô

        //Verificação do todos os robôs (inclusive o primeiro):
        while (cordx == x && cordy == y)
        {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
            cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
            cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
        }

        while (cordx == 0 || cordx == LIN - 1)
        {                               //caso a coordenada x do robô coincida com as bordas do mapa
            cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
            while (cordx == x && cordy == y)
            {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            }
        }

        while (cordy == 0 || cordy == COL - 1)
        {                               //caso a coordenada x do robô coincida com as bordas do mapa
            cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            while (cordx == x && cordy == y)
            {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            }
        }

        for (j = 0; j < ALPHAMAX; j++)
        { //analisando todos os robôs até i
            while (mapa[cordx][cordy] == 'w' || mapa[cordx][cordy] == 'W')
            {                               //se o robô analisado tiver as mesmas coordenadas que um robô já inserido no mapa
                cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô

                while (cordx == x && cordy == y)
                {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                    cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                    cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                }

                while (cordx == 0 || cordx == LIN - 1)
                {                               //caso a coordenada x do robô coincida com as bordas do mapa
                    cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                    while (cordx == x && cordy == y)
                    {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                        cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                        cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                    }
                }

                while (cordy == 0 || cordy == COL - 1)
                {                               //caso a coordenada x do robô coincida com as bordas do mapa
                    cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                    while (cordx == x && cordy == y)
                    {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                        cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                        cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                    }
                }

                j = -1; //reset do valor de j para analisar a posição de todos os robôs novamente
            }
        }
        mapa[cordx][cordy] = '@';
    }
}

int comandos(char player, char mapa[LIN][COL], int level, int *x, int *y, int *safetp, int *tp) //recebe o nível do jogo para inserir os robôs no mapa posteriormente
{
    char aux[50];  //string auxiliar para análise dos comandos do player em casos de mal uso dos comandos
    char comand;   //variável que armazenará o comando dado pelo jogador
    int ax, ay;    //auxiliares das coordenadas
    int i, tamStr; //variáveis auxiliares

    for (i = 0; i < 50; i++) //preenchimento da string de comando com '\0'
        aux[i] = '\0';       //assim, evitamos qualquer eminência de lixo de memória posteriormente

    scanf("%[^\n]s", aux); //leitura da string
    getchar();
    tamStr = strlen(aux); //armazenamento do tamanho da string para a interpretação do comando dado

    for (i = 0; i < tamStr; i++) //analisando o comando dado pelo jogador
    {
        if (aux[i] == 'q' || aux[i] == 'w' || aux[i] == 'e' || aux[i] == 'a' || aux[i] == 'd' || aux[i] == 'z' || aux[i] == 'x' || aux[i] == 'c')
        {
            comand = aux[i]; //se o primeiro valor inserido for um comando
            break;           //esse comando é armazenado e saímos do laço for
        }

        else if (aux[i] == 'Q' || aux[i] == 'W' || aux[i] == 'E' || aux[i] == 'A' || aux[i] == 'D' || aux[i] == 'Z' || aux[i] == 'X' || aux[i] == 'C')
        {
            comand = aux[i]; //se o primeiro valor inserido for um comando
            break;           //esse comando é armazenado e saímos do laço for
        }

        else if (aux[i] == '7' || aux[i] == '8' || aux[i] == '9' || aux[i] == '4' || aux[i] == '6' || aux[i] == '1' || aux[i] == '2' || aux[i] == '3')
        {
            comand = aux[i]; //se o primeiro valor inserido for um comando
            break;           //esse comando é armazenado e saímos do laço for
        }

        else if (aux[i] == 's' || aux[i] == 'S' || aux[i] == '5' || aux[i] == 't' || aux[i] == 'T' || aux[i] == 'y' || aux[i] == 'Y' || aux[i] == '*' || aux[i] == '0')
        {
            comand = aux[i]; //se o primeiro valor inserido for um comando
            break;           //esse comando é armazenado e saímos do laço for
        }

        else //se não houver comandos válidos até o final da string
        {
            while (aux[i] != 'q' && aux[i] != 'w' && aux[i] != 'e' && aux[i] != 'a' && aux[i] != 'd' && aux[i] != 'z' && aux[i] != 'x' && aux[i] != 'c' && aux[i] != 'Q' && aux[i] != 'W' && aux[i] != 'E' && aux[i] != 'A' && aux[i] != 'D' && aux[i] != 'Z' && aux[i] != 'X' && aux[i] != 'C' && aux[i] != '7' && aux[i] != '8' && aux[i] != '9' && aux[i] != '4' && aux[i] != '6' && aux[i] != '1' && aux[i] != '2' && aux[i] != '3' && aux[i] != 's' && aux[i] != 'S' && aux[i] != '5' && aux[i] != 't' && aux[i] != 'T' && aux[i] != 'y' && aux[i] != 'Y' && aux[i] != '*' && aux[i] != '0')
            { //enquanto não for encontrado um comando válido
                printf("Não foi identificado um comando válido. Por favor, tente novamente.\n");
                scanf("%[^\n]s", aux); //nova leitura da string
                scanf("%*c");
                tamStr = strlen(aux); //armazenamento do tamanho da nova string para a interpretação do comando dado

                for (i = 0; i < tamStr; i++) //analisando o comando dado pelo jogador
                {
                    if (aux[i] == 'q' || aux[i] == 'w' || aux[i] == 'e' || aux[i] == 'a' || aux[i] == 'd' || aux[i] == 'z' || aux[i] == 'x' || aux[i] == 'c')
                    {
                        comand = aux[i]; //se o primeiro valor inserido for um comando
                        break;           //esse comando é armazenado e saímos do laço for
                    }

                    else if (aux[i] == 'Q' || aux[i] == 'W' || aux[i] == 'E' || aux[i] == 'A' || aux[i] == 'D' || aux[i] == 'Z' || aux[i] == 'X' || aux[i] == 'C')
                    {
                        comand = aux[i]; //se o primeiro valor inserido for um comando
                        break;           //esse comando é armazenado e saímos do laço for
                    }

                    else if (aux[i] == '7' || aux[i] == '8' || aux[i] == '9' || aux[i] == '4' || aux[i] == '6' || aux[i] == '1' || aux[i] == '2' || aux[i] == '3')
                    {
                        comand = aux[i]; //se o primeiro valor inserido for um comando
                        break;           //esse comando é armazenado e saímos do laço for
                    }

                    else if (aux[i] == 's' || aux[i] == 'S' || aux[i] == '5' || aux[i] == 't' || aux[i] == 'T' || aux[i] == 'y' || aux[i] == 'Y' || aux[i] == '*' || aux[i] == '0')
                    {
                        comand = aux[i]; //se o primeiro valor inserido for um comando
                        break;           //esse comando é armazenado e saímos do laço for
                    }
                }
            }
        }
    }

    if (comand == 'q' || comand == 'Q' || comand == '7') //se o comando dado for movimentar para a diagonal superior esquerda
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        if (*x == 1)
        { //se x beirar a posição da borda superior do mapa
            if (*y != 1)
            { //porém ainda houver possibilidade de um deslocamento para a esquerda
                *y = *y - 1;
            }
        }

        else if (*y == 1)
        { //se y beirar a posição da lateral esquerda do mapa
            if (*x != 1)
            { //porém ainda houver possibilidade de um deslocamento para cima
                *x = *x - 1;
            }
        }

        else
        {                //se a movimentação for válida diagonalmente
            *x = *x - 1; //atualização das coordenadas do player
            *y = *y - 1; //atualização das coordenadas do player
        }

        if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o player andou for um robô ou um destroço
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica vazia
            mapa[*x][*y] = player; //atualização da posição do player
            return 0;              //"0" para identificarmos que o player morreu
        }
        else
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
    }

    else if (comand == 'w' || comand == 'W' || comand == '8') //se o comando dado for movimentar para cima
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        if (*x == 1)
        { //se x beirar a posição da borda superior do mapa
            //nada acontece
        }

        else
        {                //se a movimentação for válida superiormente
            *x = *x - 1; //atualização da coordenada *x do player
        }

        if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica vazia
            mapa[*x][*y] = player; //atualização da posição do player
            return 0;              //"0" para identificarmos que o player morreu
        }
        else
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
    }

    else if (comand == 'e' || comand == 'E' || comand == '9') //se o comando dado for movimentar para a diagonal superior direita
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        if (*x == 1)
        { //se *x beirar a posição da borda superior do mapa
            if (*y != COL - 2)
            { //porém ainda houver possibilidade de um deslocamento para a direita
                *y = *y + 1;
            }
        }

        else if (*y == COL - 2)
        { //se *y beirar a posição da lateral esquerda do mapa
            if (*x != 1)
            { //porém ainda houver possibilidade de um deslocamento para cima
                *x = *x - 1;
            }
        }

        else
        {                //se a movimentação for válida diagonalmente
            *x = *x - 1; //atualização das coordenadas do player
            *y = *y + 1; //atualização das coordenadas do player
        }

        if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica vazia
            mapa[*x][*y] = player; //atualização da posição do player
            return 0;              //"0" para identificarmos que o player morreu
        }
        else
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
    }

    else if (comand == 'a' || comand == 'A' || comand == '4') //se o comando dado for movimentar para esquerda
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        if (*y == 1)
        { //se *y beirar a posição da borda lateral esquerda do mapa
            //nada acontece
        }

        else
        {                //se a movimentação for válida lateralmente
            *y = *y - 1; //atualização da coordenada x do player
        }

        if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica vazia
            mapa[*x][*y] = player; //atualização da posição do player
            return 0;              //"0" para identificarmos que o player morreu
        }
        else
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
    }

    else if (comand == 'd' || comand == 'D' || comand == '6') //se o comando dado for movimentar para a direita
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        if (*y == COL - 2)
        { //se *y beirar a posição da borda lateral direita do mapa
            //nada acontece
        }

        else
        {                //se a movimentação for válida lateralmente
            *y = *y + 1; //atualização da coordenada x do player
        }

        if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica vazia
            mapa[*x][*y] = player; //atualização da posição do player
            return 0;              //"0" para identificarmos que o player morreu
        }
        else
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
    }

    else if (comand == 'z' || comand == 'Z' || comand == '1') //se o comando dado for movimentar para a diagonal inferior esquerda
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        if (*y == 1)
        { //se *y beirar a posição da borda lateral esquerda do mapa
            if (*x != LIN - 2)
            { //porém ainda houver possibilidade de um deslocamento para baixo
                *x = *x + 1;
            }
        }

        else if (*x == LIN - 2)
        { //se *x beirar a posição da borda inferior do mapa
            if (*y != 1)
            { //porém ainda houver possibilidade de um deslocamento para a esquerda
                *y = *y - 1;
            }
        }

        else
        {                //se a movimentação for válida diagonalmente
            *x = *x + 1; //atualização das coordenadas do player
            *y = *y - 1; //atualização das coordenadas do player
        }

        if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica vazia
            mapa[*x][*y] = player; //atualização da posição do player
            return 0;              //"0" para identificarmos que o player morreu
        }
        else
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
    }

    else if (comand == 'x' || comand == 'X' || comand == '2') //se o comando dado for movimentar para bai*xo
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        if (*x == LIN - 2)
        { //se x beirar a posição da borda inferior do mapa
            //nada acontece
        }

        else
        {                //se a movimentação for válida lateralmente
            *x = *x + 1; //atualização da coordenada x do player
        }

        if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica vazia
            mapa[*x][*y] = player; //atualização da posição do player
            return 0;              //"0" para identificarmos que o player morreu
        }
        else
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
    }

    else if (comand == 'c' || comand == 'C' || comand == '3') //se o comando dado for movimentar para a diagonal inferior direita
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        if (*y == COL - 2)
        { //se *y beirar a posição da borda lateral direira do mapa
            if (*x != LIN - 2)
            { //porém ainda houver possibilidade de um deslocamento para baixo
                *x = *x + 1;
            }
        }
        else if (*x == LIN - 2)
        { //se *x beirar a posição da borda inferior do mapa
            if (*y != COL - 2)
            { //porém ainda houver possibilidade de um deslocamento para a direita
                *y = *y + 1;
            }
        }
        else
        {                //se a movimentação for válida diagonalmente
            *x = *x + 1; //atualização das coordenadas do player
            *y = *y + 1; //atualização das coordenadas do player
        }

        if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica vazia
            mapa[*x][*y] = player; //atualização da posição do player
            return 0;              //"0" para identificarmos que o player morreu
        }
        else
        {
            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
    }

    else if (comand == 's' || comand == 'S' || comand == '5')
    {
        //o jogador permanece nas mesmas cordenadas
    }

    else if (comand == 't' || comand == 'T' || comand == '*') //teleporte aleatório
    {
        if (*tp > 0)
        {
            ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

            *x = rand() % (LIN - 1); //nova determinação da posição x do player
            *y = rand() % (LIN - 1); //nova determinação da posição x do player

            while (*x == 0 || *x == LIN - 1)
            {                            //caso a coordenada x do robô coincida com as bordas do mapa
                *x = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
            }

            while (*y == 0 || *y == COL - 1)
            {                            //caso a coordenada x do robô coincida com as bordas do mapa
                *y = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            }
            *tp -= 1;

            if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
            {
                mapa[ax][ay] = ' ';    //a posição anterior fica vazia
                mapa[*x][*y] = player; //atualização da posição do player
                return 0;              //"0" para identificarmos que o player morreu
            }
            else
            {
                mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
                mapa[*x][*y] = player; //atualização da posição do player
            }
        }
        else
        {
            return 1;
        }
    }

    else if (comand == 'y' || comand == 'Y' || comand == '0') //teleporte seguro
    {
        ax = *x, ay = *y; //atribuição das coordenadas atuais do player para as variáveis auxiliares

        *x = rand() % (LIN - 1); //nova determinação da posição x do player
        *y = rand() % (LIN - 1); //nova determinação da posição x do player

        if (*safetp >= 1) //se possuir algum teleporte seguro
        {
            while (mapa[*x][*y] != ' ' || mapa[*x - 1][*y] != ' ' || mapa[*x][*y - 1] != ' ' || mapa[*x - 1][*y - 1] != ' ' || mapa[*x + 1][*y] != ' ' || mapa[*x][*y + 1] != ' ' || mapa[*x + 1][*y + 1] != ' ' || mapa[*x + 1][*y - 1] != ' ' || mapa[*x - 1][*y + 1] != ' ' || mapa[*x][*y - 2] != ' ' || mapa[*x][*y + 2] != ' ' || mapa[*x - 2][*y] != ' ' || mapa[*x + 2][*y] != ' ' || mapa[*x - 2][*y + 2] != ' ' || mapa[*x - 2][*y - 2] != ' ' || mapa[*x + 2][*y - 2] != ' ' || mapa[*x + 2][*y + 2] != ' ' || mapa[*x - 2][*y - 1] != ' ' || mapa[*x - 2][*y + 1] != ' ' || mapa[*x - 1][*y - 2] != ' ' || mapa[*x - 1][*y + 2] != ' ' || mapa[*x + 1][*y - 2] != ' ' || mapa[*x + 1][*y + 2] != ' ' || mapa[*x + 2][*y - 1] != ' ' || mapa[*x + 2][*y + 1] != ' ')
            {
                *x = rand() % (LIN - 1); //nova determinação da posição x do player
                *y = rand() % (LIN - 1); //nova determinação da posição x do player
            }
            *safetp -= 1;

            while (*x == 0 || *x == LIN - 1)
            {                            //caso a coordenada x do robô coincida com as bordas do mapa
                *x = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô

                while (mapa[*x][*y] != ' ' || mapa[*x - 1][*y] != ' ' || mapa[*x][*y - 1] != ' ' || mapa[*x - 1][*y - 1] != ' ' || mapa[*x + 1][*y] != ' ' || mapa[*x][*y + 1] != ' ' || mapa[*x + 1][*y + 1] != ' ' || mapa[*x + 1][*y - 1] != ' ' || mapa[*x - 1][*y + 1] != ' ' || mapa[*x][*y - 2] != ' ' || mapa[*x][*y + 2] != ' ' || mapa[*x - 2][*y] != ' ' || mapa[*x + 2][*y] != ' ' || mapa[*x - 2][*y + 2] != ' ' || mapa[*x - 2][*y - 2] != ' ' || mapa[*x + 2][*y - 2] != ' ' || mapa[*x + 2][*y + 2] != ' ' || mapa[*x - 2][*y - 1] != ' ' || mapa[*x - 2][*y + 1] != ' ' || mapa[*x - 1][*y - 2] != ' ' || mapa[*x - 1][*y + 2] != ' ' || mapa[*x + 1][*y - 2] != ' ' || mapa[*x + 1][*y + 2] != ' ' || mapa[*x + 2][*y - 1] != ' ' || mapa[*x + 2][*y + 1] != ' ')
                {
                    *x = rand() % (LIN - 1); //nova determinação da posição x do player
                    *y = rand() % (LIN - 1); //nova determinação da posição x do player
                }
                *safetp -= 1;
            }

            while (*y == 0 || *y == COL - 1)
            {                            //caso a coordenada x do robô coincida com as bordas do mapa
                *y = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô

                while (mapa[*x][*y] != ' ')
                {
                    *x = rand() % (LIN - 1); //nova determinação da posição x do player
                    *y = rand() % (LIN - 1); //nova determinação da posição x do player
                }
                *safetp -= 1;
            }

            mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
            mapa[*x][*y] = player; //atualização da posição do player
        }
        else if (*safetp == 0 && *tp > 0)
        {
            *x = rand() % (LIN - 1); //nova determinação da posição x do player
            *y = rand() % (LIN - 1); //nova determinação da posição x do player

            while (*x == 0 || *x == LIN - 1)
            {                            //caso a coordenada x do robô coincida com as bordas do mapa
                *x = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
            }

            while (*y == 0 || *y == COL - 1)
            {                            //caso a coordenada x do robô coincida com as bordas do mapa
                *y = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            }
            *tp -= 1;

            if (mapa[*x][*y] == '@' || mapa[*x][*y] == 'w' || mapa[*x][*y] == 'W' || mapa[*x][*y] == '#') //se a casa para qual o personagem andou for um robô ou um destroço
            {
                mapa[ax][ay] = ' ';    //a posição anterior fica vazia
                mapa[*x][*y] = player; //atualização da posição do player
                return 0;              //"0" para identificarmos que o player morreu
            }
            else
            {
                mapa[ax][ay] = ' ';    //a posição anterior fica visivelmente vazia
                mapa[*x][*y] = player; //atualização da posição do player
            }
        }
        else
        {
            return 1;
        }
    }

    return 1; //"1" para identificarmos que o player ainda está vivo
}

int movimentarAlphas(char player, char mapa[LIN][COL], int x, int y, int level, int *tp, int *vidaBoss)
{
    char mapaAux[LIN][COL];            //mapa auxiliar
    int i, j, l, k = 0;                //variáveis auxiliares de repetição
    int ax, ay, cordx, cordy, charaux; //variáveis auxiliares de posição no mapa
    int armazenaAlphas[ALPHAMAX][2];   //armazena as posições dos robôs
    int boss = 0;                      //inicializa boss como 0 (não estaria no mapa, será analisado)

    for (i = 0; i < LIN; i++) //verificação do mapa (LIN)
    {
        for (j = 0; j < COL; j++) //verificação do mapa (COL)
        {
            if (mapa[i][j] == '@')
            {
                mapaAux[i][j] = 'a'; //coloca uma auxiliar no mapa auxiliar
                mapa[i][j] = ' ';    //Limpa a posição anterior do robô
            }
            else if (mapa[i][j] == 'w')
            {
                mapaAux[i][j] = 'b'; //coloca uma auxiliar no mapa auxiliar
                mapa[i][j] = ' ';    //Limpa a posição anterior do robô
            }
            else if (mapa[i][j] == 'W')
            {
                mapaAux[i][j] = 'c'; //coloca uma auxiliar no mapa auxiliar
                mapa[i][j] = ' ';    //Limpa a posição anterior do robô
            }
            else
            {
                mapaAux[i][j] = mapa[i][j];
            }
        }
    }

    for (i = 1; i < LIN - 1; i++) //verificação do mapa (LIN)
    {
        for (j = 1; j < COL - 1; j++) //verificação do mapa (COL)
        {
            if (mapaAux[i][j] != 'a' && mapaAux[i][j] != 'b' && mapaAux[i][j] != 'c') //para passar para a próxima iteração do laço
            {
                continue;
            }
            else
            {
                ax = i, ay = j; //inicia as auxiliares com as posições atuais do robô
                charaux = mapaAux[i][j];

                if (ax < x) //se o alpha estiver à esqueda do player
                {
                    ax++; //desloca a posição da auxiliar para a direita (mais próximo ao player)
                }
                else if (ax > x) //se o alpha estiver à direita do player
                {
                    ax--; //desloca a posição da auxiliar para a esquerda (mais próximo ao player)
                }
                else
                {
                    //não altera a posição em x
                }
                armazenaAlphas[k][0] = ax; //armazena a posição x do robô

                if (ay < y) //se o alpha estiver acima do player
                {
                    ay++; //desloca a posição da auxiliar para a cima (mais próximo ao player)
                }
                else if (ay > y) //se o alpha estiver abaixo do player
                {
                    ay--; //desloca a posição da auxiliar para a baixo (mais próximo ao player)
                }
                else
                {
                    //não altera a posição em y
                }
                armazenaAlphas[k][1] = ay; //armazena a posição y do robô

                mapaAux[i][j] = ' '; //retira o "a" anterior do mapa

                if (charaux == 'a' && mapa[ax][ay] != '#')
                {
                    mapa[ax][ay] = '@'; //realoca a posição do robô
                }
                else if (charaux == 'b' && mapa[ax][ay] != '#')
                {
                    mapa[ax][ay] = 'w'; //realoca a posição do robô
                }
                else if (charaux == 'c' && mapa[ax][ay] != '#')
                {
                    mapa[ax][ay] = 'W'; //realoca a posição do robô
                }
                else if (mapa[ax][ay] == '#') //se o robô se choca com destroço, player ganha 1 teleporte
                {
                    *tp += 1;
                    if (charaux == 'b')
                    {
                        insereSpaces(mapa, x, y, 1);
                    }
                }

                for (l = 0; l < k; l++)
                {
                    if (armazenaAlphas[l][0] == ax && armazenaAlphas[l][1] == ay) //conferir se robôs se chocaram
                    {
                        mapa[ax][ay] = '#';
                        *tp += 2;
                        if (charaux == 'b')
                        {
                            insereSpaces(mapa, x, y, 2); //inserir dois robôs espaciais para substituir os guardians mortos
                        }
                    }
                }
                k++; //auxiliar para conferir posições dos robôs
            }
        }
    }

    for (l = 0; l < k; l++)
    {
        if (armazenaAlphas[l][0] == x && armazenaAlphas[l][1] == y) //conferir algum robô se chocou com o player
        {
            mapa[x][y] = 'x';
            return 0; //retorna que o player foi morto
        }
    }

    if (level == 10)
    {
        for (i = 1; i < LIN - 1; i++) //verificação do mapa (LIN) //verificar número de alphas no mapa
        {
            for (j = 1; j < COL - 1; j++) //verificação do mapa (COL)
            {
                if (mapa[i][j] == 'W')
                {
                    boss = 1;
                    //se o boss estiver no mapa, nada acontece
                }
            }
        }
        if (boss == 0 && *vidaBoss > 0) //quando o boss for atacado, porém continuar tendo vida (definida como 1, pois quando vida for 1, ela será morta quando for atacada)
        {
            *vidaBoss = *vidaBoss - 1;

            cordx = rand() % (LIN - 1); //limitando o máximo possível da coordenada x do robô
            cordy = rand() % (COL - 1); //limitando o máximo possível da coordenada y do robô

            //Verificação do todos os robôs (inclusive o primeiro):
            while (cordx == x && cordy == y)
            {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
            }

            while (cordx == 0 || cordx == LIN - 1)
            {                               //caso a coordenada x do robô coincida com as bordas do mapa
                cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                while (cordx == x && cordy == y)
                {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                    cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                    cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                }
            }

            while (cordy == 0 || cordy == COL - 1)
            {                               //caso a coordenada x do robô coincida com as bordas do mapa
                cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                while (cordx == x && cordy == y)
                {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                    cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                    cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                }
            }

            for (j = 0; j < ALPHAMAX; j++)
            { //analisando todos os robôs até i
                while (mapa[cordx][cordy] == 'w')
                {                               //se o robô analisado tiver as mesmas coordenadas que um robô já inserido no mapa
                    cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                    cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô

                    while (cordx == x && cordy == y)
                    {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                        cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                        cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                    }

                    while (cordx == 0 || cordx == LIN - 1)
                    {                               //caso a coordenada x do robô coincida com as bordas do mapa
                        cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                        while (cordx == x && cordy == y)
                        {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                            cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                            cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                        }
                    }

                    while (cordy == 0 || cordy == COL - 1)
                    {                               //caso a coordenada x do robô coincida com as bordas do mapa
                        cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                        while (cordx == x && cordy == y)
                        {                               //se as coordenadas do robô coincidir com as coordenadas do jogador
                            cordx = rand() % (LIN - 1); //nova determinação do limite o máximo da coordenada x do robô
                            cordy = rand() % (COL - 1); //nova determinação do limite o máximo da coordenada y do robô
                        }
                    }

                    j = -1; //reset do valor de j para analisar a posição de todos os robôs novamente
                }
            }
            if (*vidaBoss > 0)
            {
                mapa[cordx][cordy] = 'W';
            }
        }
    }

    return 1; //retorna que o player está vivo
}

int main()
{
    char mapa[LIN][COL];  //declaração do mapa
    char player = 'x';    //declaração do player no jogo
    char nomePlayer[100]; //string para nome do player
    char BarraDeVida[21] = {'|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '|', '\0'};
    int numAlphas;      //número de robôs no level
    int level = 1;      //level (nível)
    int vida = 1;       //vida do player
    int vidaBoss = 10;  //vida do Boss (level 10)
    int tp = 0, safetp = 0; //teleportes normais e teleportes seguros
    int x, y;           //coordenadas cartesianas do player
    int i, j;           //auxiliar de repetição
    int alphas;         //número de robôs vivos

    srand(time(NULL)); //para que, ao usar o rand() a seguir, as coordenadas sejam realmente aleatórias

    desenhaMapa(mapa); //inicializar a matriz do mapa com as bordas e os espaços vazios

    printf("Por favor, insira seu nome para este jogo: "); //inserir nome do jogador
    scanf("%[^\n]s", nomePlayer);                          //leitura do nome do player
    scanf("%*c");
    printf("\033[2J"); //limpa a tela

    while (vida == 1)
    {
        numAlphas = 10 + (level - 1);
        tp = 3;
        x = 8, y = 17;       //coordenadas iniciais do player
        mapa[x][y] = player; //posição inicial do player no mapa

        historiasChase(nomePlayer, level);

        insereAlphas(mapa, level); //posicionando os robôs no mapa inicialmente

        printf("\033[2J"); //limpar tela
        if (level == 10 && vidaBoss > 0)
        {
            printf("                                Anne\n");
            printf("                                             ]\n");
            printf("\033[1A");
            printf("                        [%s\n\n", BarraDeVida);
        }
        else if (level == 10 && vidaBoss == 0)
        {
            printf("                         Complete a fase");
        }
        printf("   Teleportes: %d         Teleportes seguros: %d         Level: %d\n", tp, safetp, level);
        imprimeMapa(mapa, vida); //imprimir mapa com as representações do player e dos robôs no mesmo

        while (vida == 1) //enquanto o jogador ainda estiver sobrevivendo
        {
            alphas = 0; //inicializar  os robôs vivos como 0 para a verificação ser feita depois

            vida = comandos(player, mapa, level, &x, &y, &safetp, &tp); //pedir/receber comando de movim=entação do jogador

            if (vida == 1)
            {
                vida = movimentarAlphas(player, mapa, x, y, level, &tp, &vidaBoss);
            }
            else
            {
                movimentarAlphas(player, mapa, x, y, level, &tp, &vidaBoss);
            }

            BarraDeVida[vidaBoss * 2] = '\0';

            for (i = 1; i < LIN - 1; i++) //verificação do mapa (LIN) //verificar número de alphas no mapa
            {
                for (j = 1; j < COL - 1; j++) //verificação do mapa (COL)
                {
                    if (mapa[i][j] == '@' || mapa[i][j] == 'w' || mapa[i][j] == 'W')
                    {
                        alphas++;
                    }
                }
            }

            printf("\033[2J"); //limpar tela
            if (level == 10 && vidaBoss > 0)
            {
                printf("                                Anne\n");
                printf("                                             ]\n");
                printf("\033[1A");
                printf("                        [%s\n\n", BarraDeVida);
            }
            else if (level == 10 && vidaBoss == 0)
            {
                printf("                           Complete a fase\n");
            }
            printf("   Teleportes: %d         Teleportes seguros: %d         Level: %d\n", tp, safetp, level);
            imprimeMapa(mapa, vida); //imprimir mapa com as novas posições

            if (alphas == 0) //verificar número de alphas no mapa
            {
                for (i = 1; i < LIN - 1; i++) //verificação do mapa (LIN)
                {
                    for (j = 1; j < COL - 1; j++) //verificação do mapa (COL)
                    {
                        mapa[i][j] = ' '; //limpar destroços da fase anterior
                    }
                }
                safetp++; //aumentar o número de teleportes seguros, pois um level foi avançado
                level++;
                break; //saio do while pois um nível foi avançado e, logo, o retorno de vida ainda é 1
            }
        }
    }

    if (vida == 0) //se o jogador morreu
    {
        printf("\033[1;31m                              GAME OVER!"); //imprime "Fim de jogo" em vermelho
        printf("\033[0m");                                            //Reseta para a cor padrão
    }

    return 0;
}