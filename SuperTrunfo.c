#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Versão 1 - 30/08/2025 - Nível Novato - Cadastro das cartas
// Versão 2 - 08/09/2025 - Nível Aventureiro - Cálculo da Densidade e PIB Per Capta


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
  float     v_pib_pcapita1,          v_pib_pcapita2;
  

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

  return 0;

}
