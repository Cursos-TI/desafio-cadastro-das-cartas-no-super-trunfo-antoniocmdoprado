#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Versão 1 - 30/08/2025 - Nível Novato - Cadastro das cartas
// Versão 2 - 08/09/2025 - Nível Aventureiro - Cálculo da Densidade e PIB Per Capta
// Versão 3 - 11/09/2025 - Nível Aventureiro - Definindo carta vencedora - 1 atributo
// Versão 4 - 15/09/2025 - Nível Aventureiro - Comparando atributos via Menu interativo
// Versão 5 - 17/09/2025 - Nível Mestre - Comparando 2 atributos via Menu interativo


int main()
{
  //Variáveis
  char      v_estado1,              v_estado2;
  char      v_carta1[4] = " ",      v_carta2[4] = " ";
  char      v_nome_cid1[30] = " ",  v_nome_cid2[30] = " ";
  int       v_popul1 = 0,           v_popul2 = 0;
  float     v_area1 = 0,            v_area2 = 0;
  float     v_pib1 = 0,             v_pib2 = 0;
  int       v_pto_turist1 = 0,      v_pto_turist2 = 0;

  //V2
  float     v_densidade1,           v_densidade2;
  float     v_pib_pcapita1,         v_pib_pcapita2;
  
  //V4
  int       opcao = 0;

  //V5
  int       opcao2 = 0;
  float     v_total_carta1,         v_total_carta2;


  //Leitura dos Dados da Carta 1
  printf("DADOS DA CARTA 1\n");
  printf("----------------\n");
  printf("Digite o Estado ..................: ");
  scanf(" %c",&v_estado1);
  printf("Digite o Código da Carta .........: ");
  scanf("%s",v_carta1);
  printf("Digite o Nome da Cidade ..........: ");
  scanf("%s",v_nome_cid1);
  printf("Digite a Populacao ...............: ");
  scanf("%d",&v_popul1);
  printf("Digite a Area ....................: ");
  scanf("%f",&v_area1);
  printf("Digite o PIB .....................: ");
  scanf("%f",&v_pib1);
  printf("Digite a Qtde Pontos Turisticos ..: ");
  scanf("%d",&v_pto_turist1);
  printf("\n");

  v_densidade1 = v_popul1 / v_area1;
  v_pib_pcapita1 = v_pib1 / v_popul1;

//Leitura dos Dados da Carta 2
  printf("DADOS DA CARTA 2\n");
  printf("----------------\n");
  printf("Digite o Estado ..................: ");
  scanf(" %c",&v_estado2);
  printf("Digite o Código da Carta .........: ");
  scanf("%s",v_carta2);
  printf("Digite o Nome da Cidade ..........: ");
  scanf("%s",v_nome_cid2);
  printf("Digite a Populacao ...............: ");
  scanf("%d",&v_popul2);
  printf("Digite a Area ....................: ");
  scanf("%f",&v_area2);
  printf("Digite o PIB .....................: ");
  scanf("%f",&v_pib2);
  printf("Digite a Qtde Pontos Turisticos ..: ");
  scanf("%d",&v_pto_turist2);
  printf("\n");

  v_densidade2 = v_popul2 / v_area2;
  v_pib_pcapita2 = v_pib2 / v_popul2;

  //Apresentação dos Dados da Carta 1
  printf("DADOS DA CARTA 1\n");
  printf("----------------\n");
  printf("Estado ..................: %c\n",v_estado1);
  printf("Código da Carta .........: %s\n",v_carta1);
  printf("Nome da Cidade ..........: %s\n",v_nome_cid1);
  printf("Populacao ...............: %d\n",v_popul1);
  printf("Area ....................: %f\n",v_area1);
  printf("PIB .....................: %f\n",v_pib1);
  printf("Qtde Pontos Turisticos ..: %d\n",v_pto_turist1);
  printf("Densidade Demografica ...: %f\n",v_densidade1);
  printf("PIB per Capita ..........: %f\n",v_pib_pcapita1);
  printf("\n");

  //Apresentação dos Dados da Carta 2
  printf("DADOS DA CARTA 2\n");
  printf("----------------\n");
  printf("Estado ..................: %c\n",v_estado2);
  printf("Código da Carta .........: %s\n",v_carta2);
  printf("Nome da Cidade ..........: %s\n",v_nome_cid2);
  printf("Populacao ...............: %d\n",v_popul2);
  printf("Area ....................: %f\n",v_area2);
  printf("PIB .....................: %f\n",v_pib2);
  printf("Qtde Pontos Turisticos ..: %d\n",v_pto_turist2);
  printf("Densidade Demografica ...: %f\n",v_densidade2);
  printf("PIB per Capita ..........: %f\n",v_pib_pcapita2);
  printf("\n");
  printf("\n");

  //Escolha o primeiro atributo para comparação
  printf("Escolha o primeiro atributo a ser comparado:\n");
  printf("--------------------------------------------\n");
  printf("\n");  
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Qtde Pontos Turísticos\n");
  printf("5 - Densidade Demográfica\n");
  printf("6 - PIB per Capita\n");
  printf("\n");
  printf("Escolha uma opção entre 1 e 6: ");
  scanf("%d",&opcao);
  printf("\n");


  //Comparando as cartas conforme escolha do usuário no menu de opções
  switch (opcao) {

    //Comparando População como primeira opção
    case 1:
      //Menu de escolha do segundo atributo para comparação
      printf("Escolha o segundo atributo a ser comparado:\n");
      printf("-------------------------------------------\n");
      printf("\n");  
      printf("1 - Área\n");
      printf("2 - PIB\n");
      printf("3 - Qtde Pontos Turísticos\n");
      printf("4 - Densidade Demográfica\n");
      printf("5 - PIB per Capita\n");
      printf("\n");
      printf("Escolha uma opção entre 1 e 5: ");
      scanf("%d",&opcao2);
      printf("\n");

      printf("Resultado da Comparação da População:\n");
      printf("Carta 1: %c - %s - %s - População: %d \n",v_estado1,v_carta1,v_nome_cid1,v_popul1);
      printf("Carta 2: %c - %s - %s - População: %d \n",v_estado2,v_carta2,v_nome_cid2,v_popul2);
      printf("\n");

      //População
      if (v_popul1 > v_popul2) {
         printf("Carta 1 com %d habitantes é a vencedora.\n",v_popul1);
         printf("\n");
      } else { if (v_popul1 == v_popul2) {
                   printf("Deu empate. As 2 cartas tem %d habitantes.\n",v_popul1);
                   printf("\n");   
             } else {
                   printf("Carta 2 com %d habitantes é a vencedora.\n",v_popul2);
                   printf("\n");
             }
		  }

      //Verificando a segunda escolha
      switch (opcao2) {
          //Área na segunda escolha
          case 1:
             printf("Resultado da Comparação da Área:\n");
             printf("Carta 1: %c - %s - %s - Área: %f \n",v_estado1,v_carta1,v_nome_cid1,v_area1);
             printf("Carta 2: %c - %s - %s - Área: %f \n",v_estado2,v_carta2,v_nome_cid2,v_area2);
             printf("\n");

             if (v_area1 > v_area2) {
                printf("Carta 1 com Area de %f é a vencedora.\n",v_area1);
                printf("\n");
             } else {
                 if (v_area1 == v_area2)
                 {
                     printf("Deu empate. As 2 cartas tem Area de %f.\n",v_area1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com Area de %f é a vencedora.\n",v_area2);
                   printf("\n");
                 }
             }
             
			       //Somando os atributos e definindo a maior carta geral
             v_total_carta1  = v_popul1 + v_area1;
		         v_total_carta2  = v_popul2 + v_area2;             
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //PIB na segunda escolha
          case 2:
             printf("Resultado da Comparação da PIB:\n");
             printf("Carta 1: %c - %s - %s - PIB: %f \n",v_estado1,v_carta1,v_nome_cid1,v_pib1);
             printf("Carta 2: %c - %s - %s - PIB: %f \n",v_estado2,v_carta2,v_nome_cid2,v_pib2);
             printf("\n");

             if (v_pib1 > v_pib2) {
                printf("Carta 1 com PIB de %f é a vencedora.\n",v_pib1);
                printf("\n");
             } else {
                 if (v_pib1 == v_pib2)
                 {
                     printf("Deu empate. As 2 cartas tem PIB de %f.\n",v_pib1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com PIB de %f é a vencedora.\n",v_pib2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
             v_total_carta1  = v_popul1 + v_pib1;
             v_total_carta2  = v_popul2 + v_pib2;             
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //Pontos Turisticos na segunda escolha
          case 3:
             printf("Resultado da Comparação de Pontos Turísticos:\n");
             printf("Carta 1: %c - %s - %s - Pontos Turísticos: %d \n",v_estado1,v_carta1,v_nome_cid1,v_pto_turist1);
             printf("Carta 2: %c - %s - %s - Pontos Turísticos: %d \n",v_estado2,v_carta2,v_nome_cid2,v_pto_turist2);
             printf("\n");

             if (v_pto_turist1 > v_pto_turist2) {
                printf("Carta 1 com %d Pontos Turísticos é a vencedora.\n",v_pto_turist1);
                printf("\n");
             } else {
                 if (v_pto_turist1 == v_pto_turist2)
                 {
                     printf("Deu empate. As 2 cartas tem %d Pontos Turísticos.\n",v_pto_turist1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com %d Pontos Turísticos é a vencedora.\n",v_pto_turist2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
			       //Multipliquei por 1000 para a qtde de pontos turísticos terem peso na comparação
             v_total_carta1  = v_popul1 + (v_pto_turist1 * 1000);
             v_total_carta2  = v_popul2 + (v_pto_turist2 * 1000);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //Densidade Demográfica na segunda escolha
          case 4:
             printf("Resultado da Comparação da Densidade Demográfica:\n");
             printf("Carta 1: %c - %s - %s - Densidade Demográfica: %f \n",v_estado1,v_carta1,v_nome_cid1,v_densidade1);
             printf("Carta 2: %c - %s - %s - Densidade Demográfica: %f \n",v_estado2,v_carta2,v_nome_cid2,v_densidade2);
             printf("\n");

             if (v_densidade1 < v_densidade2) {
                printf("Carta 1 com Densidade Demográfica de %f é a vencedora.\n",v_densidade1);
                printf("\n");
             } else {
                 if (v_densidade1 == v_densidade2)
                 {
                     printf("Deu empate. As 2 cartas tem Densidade Demográfica de %f.\n",v_densidade1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com Densidade Demográfica de %f é a vencedora.\n",v_densidade2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
			       //A maior densidade demografica do Brasil está em torno de 12 mil habitantes por km2
			       //Estou usando (15 - ) para ficar positivo e depois multiplicar a população para
			       //dar peso a densidade demografica
             v_total_carta1  = v_popul1 * (15 - v_densidade1);
             v_total_carta2  = v_popul2 * (15 - v_densidade2);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //PIB Percapta na segunda escolha
          case 5:
             printf("Resultado da Comparação da PIB Percapta:\n");
             printf("Carta 1: %c - %s - %s - PIB Percapta: %f \n",v_estado1,v_carta1,v_nome_cid1,v_pib_pcapita1);
             printf("Carta 2: %c - %s - %s - PIB Percapta: %f \n",v_estado2,v_carta2,v_nome_cid2,v_pib_pcapita2);
             printf("\n");

             if (v_pib_pcapita1 > v_pib_pcapita2) {
                printf("Carta 1 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita1);
                printf("\n");
             } else {
                 if (v_pib_pcapita1 == v_pib_pcapita2)
                 {
                     printf("Deu empate. As 2 cartas tem PIB Percapta de %f.\n",v_pib_pcapita1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
             //Estou multiplicando o PIB percapta por 10000 para dar peso ao atributo
             v_total_carta1  = v_popul1 + (v_pib_pcapita1 * 10000);
             v_total_carta2  = v_popul2 + (v_pib_pcapita2 * 10000);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		  break;

      default:
             printf("Opção inválida. Tente novamente.\n");
      }
    break;

    //Comparando o Area como primeira opção
    case 2:
      printf("Escolha o segundo atributo a ser comparado:\n");
      printf("-----------------------------------\n");
      printf("\n");  
      printf("1 - PIB\n");
      printf("2 - Qtde Pontos Turísticos\n");
      printf("3 - Densidade Demográfica\n");
      printf("4 - PIB per Capita\n");
      printf("\n");
      printf("Escolha uma opção entre 1 e 4: ");
      scanf("%d",&opcao2);
      printf("\n");

      printf("Resultado da Comparação da Area:\n");
      printf("Carta 1: %c - %s - %s - Area: %f \n",v_estado1,v_carta1,v_nome_cid1,v_area1);
      printf("Carta 2: %c - %s - %s - Area: %f \n",v_estado2,v_carta2,v_nome_cid2,v_area2);
      printf("\n");

      //Area
      if (v_area1 > v_area2)
      {
         printf("Carta 1 com Area de %f é a vencedora.\n",v_area1);
         printf("\n");
      } else {
          if (v_area1 == v_area2)
          {
              printf("Deu empate. As 2 cartas tem Area de %f.\n",v_area1);
              printf("\n");   
          } else {
            printf("Carta 2 com Area de %f é a vencedora.\n",v_area2);
            printf("\n");
          }
      }

      //Verificando a segunda escolha
      switch (opcao2) {
          //PIB na segunda escolha
          case 1:
             printf("Resultado da Comparação da PIB:\n");
             printf("Carta 1: %c - %s - %s - PIB: %f \n",v_estado1,v_carta1,v_nome_cid1,v_pib1);
             printf("Carta 2: %c - %s - %s - PIB: %f \n",v_estado2,v_carta2,v_nome_cid2,v_pib2);
             printf("\n");

             if (v_pib1 > v_pib2) {
                printf("Carta 1 com PIB de %f é a vencedora.\n",v_pib1);
                printf("\n");
             } else {
                 if (v_pib1 == v_pib2)
                 {
                     printf("Deu empate. As 2 cartas tem PIB de %f.\n",v_pib1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com PIB de %f é a vencedora.\n",v_pib2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
             v_total_carta1  = v_area1 + v_pib1;
             v_total_carta2  = v_area2 + v_pib2;             
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //Pontos Turisticos na segunda escolha
          case 2:
             printf("Resultado da Comparação de Pontos Turísticos:\n");
             printf("Carta 1: %c - %s - %s - Pontos Turísticos: %d \n",v_estado1,v_carta1,v_nome_cid1,v_pto_turist1);
             printf("Carta 2: %c - %s - %s - Pontos Turísticos: %d \n",v_estado2,v_carta2,v_nome_cid2,v_pto_turist2);
             printf("\n");

             if (v_pto_turist1 > v_pto_turist2) {
                printf("Carta 1 com %d Pontos Turísticos é a vencedora.\n",v_pto_turist1);
                printf("\n");
             } else {
                 if (v_pto_turist1 == v_pto_turist2)
                 {
                     printf("Deu empate. As 2 cartas tem %d Pontos Turísticos.\n",v_pto_turist1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com %d Pontos Turísticos é a vencedora.\n",v_pto_turist2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
			       //Multipliquei por 1000 para a qtde de pontos turísticos terem peso na comparação
             v_total_carta1  = v_area1 + (v_pto_turist1 * 1000);
             v_total_carta2  = v_area2 + (v_pto_turist2 * 1000);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //Densidade Demográfica na segunda escolha
          case 3:
             printf("Resultado da Comparação da Densidade Demográfica:\n");
             printf("Carta 1: %c - %s - %s - Densidade Demográfica: %f \n",v_estado1,v_carta1,v_nome_cid1,v_densidade1);
             printf("Carta 2: %c - %s - %s - Densidade Demográfica: %f \n",v_estado2,v_carta2,v_nome_cid2,v_densidade2);
             printf("\n");

             if (v_densidade1 < v_densidade2) {
                printf("Carta 1 com Densidade Demográfica de %f é a vencedora.\n",v_densidade1);
                printf("\n");
             } else {
                 if (v_densidade1 == v_densidade2)
                 {
                     printf("Deu empate. As 2 cartas tem Densidade Demográfica de %f.\n",v_densidade1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com Densidade Demográfica de %f é a vencedora.\n",v_densidade2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
			       //A maior densidade demografica do Brasil está em torno de 12 mil habitantes por km2
			       //Estou usando (15 - ) para ficar positivo e depois multiplicar a população para
			       //dar peso a densidade demografica
             v_total_carta1  = v_area1 * (15 - v_densidade1);
             v_total_carta2  = v_area2 * (15 - v_densidade2);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //PIB Percapta na segunda escolha
          case 4:
             printf("Resultado da Comparação da PIB Percapta:\n");
             printf("Carta 1: %c - %s - %s - PIB Percapta: %f \n",v_estado1,v_carta1,v_nome_cid1,v_pib_pcapita1);
             printf("Carta 2: %c - %s - %s - PIB Percapta: %f \n",v_estado2,v_carta2,v_nome_cid2,v_pib_pcapita2);
             printf("\n");

             if (v_pib_pcapita1 > v_pib_pcapita2) {
                printf("Carta 1 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita1);
                printf("\n");
             } else {
                 if (v_pib_pcapita1 == v_pib_pcapita2)
                 {
                     printf("Deu empate. As 2 cartas tem PIB Percapta de %f.\n",v_pib_pcapita1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
             //Estou multiplicando o PIB percapta por 10000 para dar peso ao atributo
             v_total_carta1  = v_area1 + (v_pib_pcapita1 * 10000);
             v_total_carta2  = v_area2 + (v_pib_pcapita2 * 10000);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		  break;

      default:
             printf("Opção inválida. Tente novamente.\n");
      }

    break;
    
    //Comparando o PIB
    case 3:
      printf("Escolha o segundo atributo a ser comparado:\n");
      printf("-----------------------------------\n");
      printf("\n");  
      printf("1 - Qtde Pontos Turísticos\n");
      printf("2 - Densidade Demográfica\n");
      printf("3 - PIB per Capita\n");
      printf("\n");
      printf("Escolha uma opção entre 1 e 3: ");
      scanf("%d",&opcao2);
      printf("\n");

      printf("Resultado da Comparação de PIB:\n");
      printf("Carta 1: %c - %s - %s - PIB: %f \n",v_estado1,v_carta1,v_nome_cid1,v_pib1);
      printf("Carta 2: %c - %s - %s - PIB: %f \n",v_estado2,v_carta2,v_nome_cid2,v_pib2);
      printf("\n");

      if (v_pib1 > v_pib2)
      {
         printf("Carta 1 com PIB de %f é a vencedora.\n",v_pib1);
         printf("\n");
      } else {
          if (v_pib1 == v_pib2)
          {
              printf("Deu empate. As 2 cartas tem PIB de %f.\n",v_pib1);
              printf("\n");   
          } else {
            printf("Carta 2 com PIB de %f é a vencedora.\n",v_pib2);
            printf("\n");
          }
      }

      //Verificando a segunda escolha
      switch (opcao2) {
          //Pontos Turisticos na segunda escolha
          case 1:
             printf("Resultado da Comparação de Pontos Turísticos:\n");
             printf("Carta 1: %c - %s - %s - Pontos Turísticos: %d \n",v_estado1,v_carta1,v_nome_cid1,v_pto_turist1);
             printf("Carta 2: %c - %s - %s - Pontos Turísticos: %d \n",v_estado2,v_carta2,v_nome_cid2,v_pto_turist2);
             printf("\n");

             if (v_pto_turist1 > v_pto_turist2) {
                printf("Carta 1 com %d Pontos Turísticos é a vencedora.\n",v_pto_turist1);
                printf("\n");
             } else {
                 if (v_pto_turist1 == v_pto_turist2)
                 {
                     printf("Deu empate. As 2 cartas tem %d Pontos Turísticos.\n",v_pto_turist1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com %d Pontos Turísticos é a vencedora.\n",v_pto_turist2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
			       //Multipliquei por 1000 para a qtde de pontos turísticos terem peso na comparação
             v_total_carta1  = v_pib1 + (v_pto_turist1 * 1000);
             v_total_carta2  = v_pib2 + (v_pto_turist2 * 1000);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //Densidade Demográfica na segunda escolha
          case 2:
             printf("Resultado da Comparação da Densidade Demográfica:\n");
             printf("Carta 1: %c - %s - %s - Densidade Demográfica: %f \n",v_estado1,v_carta1,v_nome_cid1,v_densidade1);
             printf("Carta 2: %c - %s - %s - Densidade Demográfica: %f \n",v_estado2,v_carta2,v_nome_cid2,v_densidade2);
             printf("\n");

             if (v_densidade1 < v_densidade2) {
                printf("Carta 1 com Densidade Demográfica de %f é a vencedora.\n",v_densidade1);
                printf("\n");
             } else {
                 if (v_densidade1 == v_densidade2)
                 {
                     printf("Deu empate. As 2 cartas tem Densidade Demográfica de %f.\n",v_densidade1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com Densidade Demográfica de %f é a vencedora.\n",v_densidade2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
			       //A maior densidade demografica do Brasil está em torno de 12 mil habitantes por km2
			       //Estou usando (15 - ) para ficar positivo e depois multiplicar a população para
			       //dar peso a densidade demografica
             v_total_carta1  = v_pib1 * (15 - v_densidade1);
             v_total_carta2  = v_pib2 * (15 - v_densidade2);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //PIB Percapta na segunda escolha
          case 3:
             printf("Resultado da Comparação da PIB Percapta:\n");
             printf("Carta 1: %c - %s - %s - PIB Percapta: %f \n",v_estado1,v_carta1,v_nome_cid1,v_pib_pcapita1);
             printf("Carta 2: %c - %s - %s - PIB Percapta: %f \n",v_estado2,v_carta2,v_nome_cid2,v_pib_pcapita2);
             printf("\n");

             if (v_pib_pcapita1 > v_pib_pcapita2) {
                printf("Carta 1 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita1);
                printf("\n");
             } else {
                 if (v_pib_pcapita1 == v_pib_pcapita2)
                 {
                     printf("Deu empate. As 2 cartas tem PIB Percapta de %f.\n",v_pib_pcapita1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
             //Estou multiplicando o PIB percapta por 10000 para dar peso ao atributo
             v_total_carta1  = v_pib1 + (v_pib_pcapita1 * 10000);
             v_total_carta2  = v_pib2 + (v_pib_pcapita2 * 10000);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		  break;

      default:
             printf("Opção inválida. Tente novamente.\n");
      }

    break;
    //Comparando qtde de pontos turísticos
    case 4:
      printf("Escolha o segundo atributo a ser comparado:\n");
      printf("-----------------------------------\n");
      printf("\n");  
      printf("1 - Densidade Demográfica\n");
      printf("2 - PIB per Capita\n");
      printf("\n");
      printf("Escolha uma opção entre 1 e 2: ");
      scanf("%d",&opcao2);
      printf("\n");

      printf("Resultado da Comparação de Pontos Turísticos:\n");
      printf("Carta 1: %c - %s - %s - Pontos Turísticos: %d \n",v_estado1,v_carta1,v_nome_cid1,v_pto_turist1);
      printf("Carta 2: %c - %s - %s - Pontos Turísticos: %d \n",v_estado2,v_carta2,v_nome_cid2,v_pto_turist2);
      printf("\n");

      if (v_pto_turist1 > v_pto_turist2)
      {
         printf("Carta 1 com %d pontos turísticos é a vencedora.\n",v_pto_turist1);
         printf("\n");
      } else {
          if (v_pto_turist1 == v_pto_turist2)
          {
              printf("Deu empate. As 2 cartas tem %d pontos turísticos.\n",v_pto_turist1);
              printf("\n");   
          } else {
            printf("Carta 2 com %d pontos turisticos é a vencedora.\n",v_pto_turist2);
            printf("\n");
          }
      }

      //Verificando a segunda escolha
      switch (opcao2) {
          //Densidade Demográfica na segunda escolha
          case 1:
             printf("Resultado da Comparação da Densidade Demográfica:\n");
             printf("Carta 1: %c - %s - %s - Densidade Demográfica: %f \n",v_estado1,v_carta1,v_nome_cid1,v_densidade1);
             printf("Carta 2: %c - %s - %s - Densidade Demográfica: %f \n",v_estado2,v_carta2,v_nome_cid2,v_densidade2);
             printf("\n");

             if (v_densidade1 < v_densidade2) {
                printf("Carta 1 com Densidade Demográfica de %f é a vencedora.\n",v_densidade1);
                printf("\n");
             } else {
                 if (v_densidade1 == v_densidade2)
                 {
                     printf("Deu empate. As 2 cartas tem Densidade Demográfica de %f.\n",v_densidade1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com Densidade Demográfica de %f é a vencedora.\n",v_densidade2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
			       //A maior densidade demografica do Brasil está em torno de 12 mil habitantes por km2
			       //Estou usando (15 - ) para ficar positivo e depois multiplicar a população para
			       //dar peso a densidade demografica
             v_total_carta1  = (v_pto_turist1 * 1000) * (15 - v_densidade1);
             v_total_carta2  = (v_pto_turist2 * 1000) * (15 - v_densidade2);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		      break;

          //PIB Percapta na segunda escolha
          case 2:
             printf("Resultado da Comparação da PIB Percapta:\n");
             printf("Carta 1: %c - %s - %s - PIB Percapta: %f \n",v_estado1,v_carta1,v_nome_cid1,v_pib_pcapita1);
             printf("Carta 2: %c - %s - %s - PIB Percapta: %f \n",v_estado2,v_carta2,v_nome_cid2,v_pib_pcapita2);
             printf("\n");

             if (v_pib_pcapita1 > v_pib_pcapita2) {
                printf("Carta 1 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita1);
                printf("\n");
             } else {
                 if (v_pib_pcapita1 == v_pib_pcapita2)
                 {
                     printf("Deu empate. As 2 cartas tem PIB Percapta de %f.\n",v_pib_pcapita1);
                     printf("\n");   
                 } else {
                   printf("Carta 2 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita2);
                   printf("\n");
                 }
             }
             
             //Somando os atributos e definindo a maior carta geral
             //Estou multiplicando o PIB percapta por 10000 para dar peso ao atributo
             v_total_carta1  = (v_pto_turist1 * 1000); + (v_pib_pcapita1 * 10000);
             v_total_carta2  = (v_pto_turist2 * 1000); + (v_pib_pcapita2 * 10000);
             v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

		  break;

      default:
             printf("Opção inválida. Tente novamente.\n");
      }

    break;

    //Comparando Densidade Demografica
    case 5:
      printf("Escolha o segundo atributo a ser comparado:\n");
      printf("-----------------------------------\n");
      printf("            Opção Única            \n");
      printf("            -----------            \n");
      printf("\n");  
      printf("1 - PIB per Capita\n");
      printf("\n");
      printf("Escolha uma opção entre 1 e 5: ");
      scanf("%d",&opcao2);
      printf("\n");

      printf("Resultado da Comparação da Densidade Demografica:\n");
      printf("Carta 1: %c - %s - %s - Densidade Demografica: %f \n",v_estado1,v_carta1,v_nome_cid1,v_densidade1);
      printf("Carta 2: %c - %s - %s - Densidade Demografica: %f \n",v_estado2,v_carta2,v_nome_cid2,v_densidade2);
      printf("\n");

      if (v_densidade1 < v_densidade2)
      {
         printf("Carta 1 com Densidade Demografica de %f é a vencedora.\n",v_densidade1);
         printf("\n");
      } else {
          if (v_densidade1 == v_densidade2)
          {
              printf("Deu empate. As 2 cartas tem Densidade Demografica de %f.\n",v_densidade1);
              printf("\n");   
          } else {
            printf("Carta 2 com Densidade Demografica de %f é a vencedora.\n",v_densidade2);
            printf("\n");
          }
      }

      if (v_pib_pcapita1 > v_pib_pcapita2)
      {
         printf("Carta 1 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita1);
         printf("\n");
      } else {
          if (v_pib_pcapita1 == v_pib_pcapita2)
          {
              printf("Deu empate. As 2 cartas tem PIB Percapta de %f.\n",v_pib_pcapita1);
              printf("\n");   
          } else {
            printf("Carta 2 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita2);
            printf("\n");
          }
      }

      //Somando os atributos e definindo a maior carta geral
      //A maior densidade demografica do Brasil está em torno de 12 mil habitantes por km2
      //Estou usando (15 - ) para ficar positivo e depois multiplicar a população para
      //dar peso a densidade demografica
      //Estou multiplicando o PIB percapta por 10000 para dar peso ao atributo
      v_total_carta1  = (15 - v_densidade1) * (v_pib_pcapita1 * 10000);
      v_total_carta2  = (15 - v_densidade1) * (v_pib_pcapita2 * 10000);
      v_total_carta1 > v_total_carta2 ? printf("No geral a carta 1 é a vencedora com %f pontos contra %f pontos da carta 2.\n",v_total_carta1,v_total_carta2) : printf("No geral a carta 2 é a vencedora com %f pontos contra %f pontos da carta 1.\n",v_total_carta2,v_total_carta1);

    break;
    //Comparando o PIB Percapta
    //Esta é a última opção do menu, então, o usuário receberá
    //uma mensagem informando que ele precisa escolher as opções na
    //ordem
    case 6:
      printf("Resultado da Comparação de PIB Percapta:\n");
      printf("Carta 1: %c - %s - %s - PIB Percapta: %f \n",v_estado1,v_carta1,v_nome_cid1,v_pib_pcapita1);
      printf("Carta 2: %c - %s - %s - PIB Percapta: %f \n",v_estado2,v_carta2,v_nome_cid2,v_pib_pcapita2);
      printf("\n");

      if (v_pib_pcapita1 > v_pib_pcapita2)
      {
         printf("Carta 1 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita1);
         printf("\n");
      } else {
          if (v_pib_pcapita1 == v_pib_pcapita2)
          {
              printf("Deu empate. As 2 cartas tem PIB Percapta de %f.\n",v_pib_pcapita1);
              printf("\n");   
          } else {
            printf("Carta 2 com PIB Percapta de %f é a vencedora.\n",v_pib_pcapita2);
            printf("\n");
          }
      }

      printf("Escolha as opções na ordem para comparação de 2 atributos.\n");
      printf("\n");
      printf("Exemplo:\n");
      printf("PIB Percapta e Pontos Turísticos\n");
      printf("Escolha primeiro o atributo que aparece antes no menu principal. Neste\n");
      printf("caso o atributo Pontos Turísticos e depois escolha PIB Percapta no menu seguinte.\n");
      printf("\n");

    break;

    default:
       printf("Opção inválida. Tente novamente.\n");
  }

  //Pular linhas
  printf("\n");
  printf("\n");

  return 0;

}
