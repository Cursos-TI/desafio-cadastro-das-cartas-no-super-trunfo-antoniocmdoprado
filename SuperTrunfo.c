#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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

  //Apresentação dos Dados da Carta 1
  printf("DADOS DA CARTA 1\n");
  printf("----------------\n");
  printf("Digite o Estado ..................: %c\n",v_estado1);
  printf("Digite o Código da Carta .........: %s\n",v_carta1);
  printf("Digite o Nome da Cidade ..........: %s\n",v_nome_cid1);
  printf("Digite a Populacao ...............: %d\n",v_popul1);
  printf("Digite a Area ....................: %f\n",v_area1);
  printf("Digite o PIB .....................: %f\n",v_pib1);
  printf("Digite a Qtde Pontos Turisticos ..: %d\n",v_pto_turist1);
  printf("\n");

  //Apresentação dos Dados da Carta 2
  printf("DADOS DA CARTA 2\n");
  printf("----------------\n");
  printf("Digite o Estado ..................: %c\n",v_estado2);
  printf("Digite o Código da Carta .........: %s\n",v_carta2);
  printf("Digite o Nome da Cidade ..........: %s\n",v_nome_cid2);
  printf("Digite a Populacao ...............: %d\n",v_popul2);
  printf("Digite a Area ....................: %f\n",v_area2);
  printf("Digite o PIB .....................: %f\n",v_pib2);
  printf("Digite a Qtde Pontos Turisticos ..: %d\n",v_pto_turist2);
  printf("\n");

  return 0;

}
