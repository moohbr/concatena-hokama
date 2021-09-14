#include <stdio.h>

//Voce devera modificar apenas a funcao abaixo, voce
//nao pode modificar a assinatura dela
int concatena(char* s1, char* s2, char* sres, int* espacos){
    int aux1 = 0;
    *espacos = 0;
    while(s1[aux1] != '\0'){
        if(s1[aux1] != '\n'){
            sres[aux1] = s1[aux1];
        }
        else{
            sres[aux1] = ' ';
        }
        if(sres[aux1] == ' '){
            *espacos += 1;            
        }
        aux1++; //  soma 1
    }
    int aux2 = 0;
    while(s2[aux2] != '\0'){
        if (s2[aux2] == ' '){
            *espacos+=1;
        }
        if(s2[aux2] != '\n'){
            sres[aux2 + aux1] = s2[aux2];
        }
        else{
            sres[aux2 + aux1] = '\0';
        }  
        aux2++;
    }
    return (aux1 + aux2 - 1);
}

//Funcao para imprimir uma string, NAO MODIFIQUE
void print_string(char* str){
  int k = 0;
  while(str[k] != '\0'){
    printf("%c", str[k]);
    k++;
  }
  printf("\n");
}

//NAO MODIFIQUE a main
int main(int argc, char * argv[]){
  char frase1[40];
  char frase2[40];
  char fraseResultado[80];
  int tamResultado;
  int espacos;
  
  //lendo a entrada
  fgets(frase1, 40, stdin);
  fgets(frase2, 40, stdin);
  
  tamResultado = concatena(frase1, frase2, fraseResultado, &espacos);
  
  print_string(fraseResultado);
  printf("String com %d caracteres e %d espacos.\n", tamResultado, espacos);
  
  return 0;
}