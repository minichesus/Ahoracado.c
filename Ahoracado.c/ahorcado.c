#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main() {
  srand (time(NULL));
  char palabra[85][50]={"ahri", "akali", "annie", "ashe", "bardo", "caitlyn", "camile", "corki", "diana", "draven",
                        "elise", "evelynn", "fiora", "fizz", "gangplank", "garen", "illaoi", "irelia", "jax", "jhin",
                        "jinx", "kaisa", "kalista", "karthus", "katarina", "kayle", "kayn", "kindred", "leblanc", "lucian",
                        "lulu", "lux", "yi", "fortune", "mordekaiser", "morgana", "nasus", "nami", "nautilus", "neeko",
                        "nidalee", "nocturne", "olaf", "orianna", "pyke", "quinn", "rakan", "rammus", "renekton", "rengar",
                        "riven", "rumble", "ryze", "shaco", "shen", "shyvana", "singed", "sion", "sivir", "sona",
                        "soraka", "syndra", "taliyah", "taric", "teemo", "thresh", "tristana", "twitch", "urgot", "varus",
                        "vayne", "veigar", "vi", "vladimir", "warwick", "wukong", "xerath", "yasuo", "yoric", "zac",
                        "zed", "ziggs", "zilean", "zoe", "zyra"};
  int contaBien=0, contaMal=0, contador=0, contadorC=0, contadorL=0, num;
  num = rand()%85;
  int largo = strlen(palabra[num]);
  char letra;
  char respuesta[largo];
  char letras[28];
  for(int n = 0; n<largo;n++){
    respuesta[n] = '_';
  }
  for(int n = 0; n<28;n++){

    letras[n] = '_';
  }

  for (int n = 0; n<largo;n++){
    printf("%c", respuesta[n]);
  }
  //printf("%d  %d", num, largo);
  do {

    do {
      if (contadorL>=1){
        scanf("%c", &letra);
      }
      contadorL=0;
      printf("\ndime una letra\n");
      scanf("%c", &letra);

      for (int n =0; n<28; n++){
        if(letras[n] == letra){
          contadorL++;
        }
      }

    } while(contadorL!=0);
    letras[contadorC] = letra;
    contadorC++;
    contador=0;
    for (int n = 0; n<largo;n++){
      if(letra == palabra[num][n]){
        respuesta[n] = letra;
        contaBien++;
        contador++;
      }
    }
    if(contador == 0){
      contaMal++;
    }

    //printf("\n%s", respuesta);
    printf("\n" );
    for (int n = 0; n<largo;n++){
      printf("%c", respuesta[n]);
    }
    printf("\nLetras ya dichas: " );
    for(int n =0; n< contadorC; n++){
      printf("%c ", letras[n]);
    }
    printf("\nte quedan %d vidas\n\n", 10-contaMal);

    /*switch (10-contaMal) {
      case 10: printf(""); break;
      case 9: printf("_________\n");break;
      case 8: printf("|        \n
                      |        \n");
    }*/


    if (contadorL==0){
      scanf("%c", &letra);
    }
  } while(contaMal != 10&&
    contaBien!=largo);
  if (contaMal==10){
    printf("\nperdiste\n");
    printf("La palabra era: ");
    for (int n = 0; n<largo;n++){
      printf("%c", palabra[num][n]);
    }
  }else{
    printf("\nGanaste\n");
  }


  return 0;
}
