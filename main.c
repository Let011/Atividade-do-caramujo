#include <stdio.h>

int main(void) {
 
  int altura, sobe, desce, dias, metros; 

  do{printf("Qual a altura do muro?\n");
  scanf("%d", &altura);
  }while(altura <= 1 && altura >= 10000);

  do{printf("Qual a distancia que ele sobe por dia?\n");
  scanf("%d", &sobe);
  }while(sobe >= 10000 && sobe <= desce);

  do{printf("Qual a distancia que ele escorrega por noite?\n");
  scanf("%d", &desce);
  }while(desce >= 1 && desce >= sobe);

  metros = sobe - desce;
  dias = metros * (altura-1);
  
  printf("O caramujo levará %d dias para chegar ao topo do muro.\n", dias);


  return 0;
}