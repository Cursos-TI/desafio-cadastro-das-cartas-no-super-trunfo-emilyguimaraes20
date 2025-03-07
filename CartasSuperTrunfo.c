#include <stdio.h>

int main(){
    int Numerodepontosturisticos,populaçao,resultado;
    char tipocomparaçao;

    // Inicio do jogo 
    printf("Bem-vindo ao jogo Maior,menor ou igual!\n");
    printf("Voce deve escolher uma carta e o tipo de comparaaço.\n");
    printf("M.Maior\n");
    printf("N.Mneor\n");
    printf("T.igual\n");

    printf("Escolha a comparaçao:");
    scanf("%c", &TipoComparaçao);

    printf("Digite sua carta");
    scanf("%d", numero jogador);

    //exibir numero de pontos turisticos 

    printf("O numero de pontos turisticos e: 5d\n", numerodepontosturisticos);
    
    switch (tipocomparaçao)
    {
    case M:
       /*code*/
       break;
  case N:
       /*code*/
       break;
  case T:
       /*code*/
default
 printf("Voce escolheu a opçao igual!\n");
 resultado = Numerodepontosturisticos == populaçao ? 1 : 0;
 break;
    }
default:
printf(" opçao de jogo invalida\n");
break;

}
 if (resultado == 1)
 {
    printf ("Voce venceu!")
 }

    return 0;
}
