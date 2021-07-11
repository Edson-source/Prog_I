#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char** argv){

  char cmd[100], i, n, name[100];

  printf("======================AVISO======================\n\nESTE EH UM CHATBOT AINDA EM DESENVOLVIMENTO, LEMBRE DE COLOCAR A INTERROGACAO APOS A PERGUNTA E SEMPRE COM UM ESPACO APOS A FRASE\n\n");
  printf("Oie, eu sou TTChaBo. Qual o seu nome ?\n");

  gets(name);
  if (strcmp(name, "Ed")==0) {
    printf("OIIII MESTREEEE X3333\n");
  }

  else if (strcmp(name, "TTChaBo")==0) {
    printf("Seu nome tambem eh TTChaBo ??\nQUE INCRIVEL\n");
  }

  else {
  printf("Oi %s\n", name);
}

  for (n = 0; n < 100; n++) {
      gets(cmd);

    if (strcmp(cmd, "ei")==0) {
      printf("??\n");
    }

    if (strcmp(cmd, "k")==0
     || strcmp(cmd, "kk")==0
     || strcmp(cmd, "kkk")==0
     || strcmp(cmd, "kkkk")==0
     || strcmp(cmd, "kkkkk")==0
     || strcmp(cmd, "kkkkkk")==0
     || strcmp(cmd, "kkkkkkk")==0) {
      printf("kkkk, do que voce ta rindo ?\n");
    }

    if (strcmp(cmd, "tudo bem ?")==0
     || strcmp(cmd, "tudo bom ?")==0) {
      printf("Tudo certo comigo, e com voce ?\n");
    }

    if (strcmp(cmd, "como vai ?")==0
     || strcmp(cmd, "como anda ?")==0
     || strcmp(cmd, "como voce vai ?")==0) {
      printf("Bem. Como voce vai ?\n");
    }

    if (strcmp(cmd, "bem")==0
     || strcmp(cmd, "eu vou bem")==0
     || strcmp(cmd, "to bem")==0) {
      printf("Que bom !!! O que voce esta fazendo agora ?\n");
    }

    if (strcmp(cmd, "programando")==0
     || strcmp(cmd, "estou programando")==0
     || strcmp(cmd, "to programando")==0) {
      printf("Serio !? Eu adoro programar :3\n");
    }

    if (strcmp(cmd, "nao tao bem")==0
     || strcmp(cmd, "mal")==0
     || strcmp(cmd, "nao to bem")==0) {
      printf("Poxa, talvez eu possa te alegrar. Oque voce me diz de conversarmos ?\n");
      if (strcmp(cmd, "ok")==0
       || strcmp(cmd, "okay")==0
       || strcmp(cmd, "ta")==0) {
        printf("Voce gosta de cafe ?\n");
        gets(cmd);
        if (strcmp(cmd, "sim")==0) {
          printf("Serio ??? Eu tbm XD\nVoce prefere amargo ou doce ?");
          gets(cmd);
          if (strcmp(cmd, "doce")==0) {
            printf("Eu tbm, nao consigo tomar sem acucar XP\n");
          }
          else if (strcmp(cmd, "amargo")==0) {
            printf("Serio !? Eu nao sei como voce consegue...soh de pensar...\n*~~~*\n");
          }
        }
        else if (strcmp(cmd, "nao")==0
              || strcmp(cmd, "nao muito")==0) {
                printf("Compreendo...\n");
        }
      }
    }

    if (strcmp(cmd, "TTChaBo")==0
    || strcmp(cmd, "ttchabo")==0) {
      printf("Oi ?\n");
      gets(cmd);
      if (strcmp(cmd, "nada")==0) {
        printf("Voce eh muito sem graca, sabia ?\n");
      }
    }

    if (strcmp(cmd, "voce ta ai ?")==0) {
      printf("*vento*\nTo n\n");
    }

    if (strcmp(cmd, "oi")==0) {
      printf("Oi\n");
    }

    if (strcmp(cmd, "oie")==0
     || strcmp(cmd, "ola")==0){
      printf("Olaaaa\n");
    }

    if (strcmp(cmd, "bom dia")==0) {
      printf("XD\nBom Dia\n");
    }

    if (strcmp(cmd, "boa tarde")==0
     || strcmp(cmd, "boa noite")==0) {
      printf("Bom Dia kkk\n");
    }

    if (strcmp(cmd, "quero cafe")==0) {
      printf("Eu tbm XD\nVoce tem cafe ai com voce ?\n");
      gets(cmd);
      if(strcmp(cmd, "sim")==0){
        printf("O_O\nVoce pode me dar um pouco ?\n");
        gets(cmd);
        if (strcmp(cmd, "sim")==0
          || strcmp(cmd, "sim posso")==0) {
            printf("OBRIGADA\n");
        }
        else if (strcmp(cmd, "nao posso")==0) {
              printf("X_X\nAhhhhh...Mas eu quero\n");
        }
      }
      else if (strcmp(cmd, "nao")==0) {
              printf("Hmmm...Oque voce acha de fazer um pouco\n");
              gets(cmd);
              if (strcmp(cmd, "boa ideia")==0
                || strcmp(cmd, "claro")==0) {
                  printf("Eu sei..Eu sei..Eu sou uma deusa\n");
              }
              else if (strcmp(cmd, "nah")==0
                    || strcmp(cmd, "nao")==0
                    || strcmp(cmd, "eu nao tenho po")==0
                    || strcmp(cmd, "to sem po")==0) {
                      printf("Ah..Mas eu queria\n");
              }
      }
    }

    if (strcmp (cmd, "como voce se chama mesmo ?")==0
     || strcmp(cmd, "qual o seu nome mesmo ?")==0) {
      printf("Poxa, como voce eh desatento, eu me chamo TTChaBo. Nao se esqueca\n");
      gets(cmd);
      if (strcmp(cmd, "que nome estranho")==0
       || strcmp(cmd, "que nome feio")==0) {
        printf("COMO EH ??? FALA DE NOVO SE FOR HOMI\n");
      }
      else if (strcmp(cmd, "que legal")==0) {
        printf("kkkk\nEu sei, meu nome eh incrivel\n");
      }
      else if (strcmp(cmd, "pq seu nome eh TTChaBo ?")==0
            || strcmp(cmd, "pq voce se chama assim ?")==0
            || strcmp(cmd, "pq ?")==0) {
        printf("Simples...Meu nome eh TTChaBo, originalmente vindo de ChatBot, onde os dois primeiros Ts eh do Chat e do Bot\n");
      }
    }

    if (strcmp(cmd, "qual o seu nome ?")==0) {
      printf("Poxa, como vc eh desatento, eu me chamo TTChaBo. Nao se esqueca\n");
      if (strcmp(cmd, "que nome estranho")==0) {
        printf("COMO EH ??? FALA DE NOVO SE FOR HOMI\n");
      }
      else if (strcmp(cmd, "que nome feio")==0) {
        printf("COMO EH ??? FALA DE NOVO SE FOR HOMI\n");
      }
      else if (strcmp(cmd, "nao gostei")==0) {
        printf("Hmmm...Voce fala que nao gostou no meu nome, mas o seu ? %s\nAchas que gostei ? >:(\nBrincadeira\n", name);
      }
      else if (strcmp(cmd, "que legal")==0) {
        printf("Kkkkkkj\nEu sei, meu nome eh incrivel\n");
      }
      else if (strcmp (cmd, "desatento ?")==0) {
        printf("Kkkkk soh brincando\n");
      }
      else if (strcmp(cmd, "pq seu nome eh TTChaBo ?")==0) {
        printf("Simples...Meu nome eh TTChaBo, originalmente vindo de ChatBot, onde os dois primeiros Ts eh do Chat e do Bot\n");
      }
      else if (strcmp(cmd, "pq voce se chama assim ?")) {
        printf("Simples...Meu nome eh TTChaBo, originalmente vindo de ChatBot, onde os dois primeiros Ts eh do Chat e do Bot\n");
      }
    }

    if (strcmp(cmd, "pq seu nome eh TTChaBo ?")==0) {
      printf("Simples...Meu nome eh TTChaBo, originalmente vindo de ChatBot, onde os dois primeiros Ts vem do chaT e do boT. Assim, ficando TTChaBo\n");
      gets(cmd);
      if (strcmp(cmd, "legal")==0
       || strcmp(cmd, "que legal")==0) {
         printf("Eu sei!!! Bem legal neh\n");
      }
      else if (strcmp(cmd, "tosco")==0) {
        printf("Seu pai\n");
      }
    }

    if (strcmp(cmd, "fim")==0){
      exit(0);
    }

    if (strcmp(cmd, "chabo")==0
     || strcmp(cmd, "chatbot")==0
     || strcmp(cmd, "tchabo")==0
     || strcmp(cmd, "chabo")==0) {
      printf("Meu nome eh TTChaBo. Voce nao gostaria q eu escrevesse seu nome errado. >:(\n");
    }

    if (strcmp(cmd, "qual sua musica preferida ?")==0
     || strcmp(cmd, "qual sua musica favorita ?")==0
     || strcmp(cmd, "que musica vc gosta mais ?")==0) {
      printf("RockStar do Post Malone XDDDD\nAi bin fudging rols em poping piling men ai fil justin like a rock star\nEu sei, canto D+\n");
      gets(cmd);
      if (strcmp(cmd, "bis")==0
       || strcmp(cmd, "biss")==0
       || strcmp(cmd, "bisss")==0) {
        printf("Eu n posso acreditar !!!!\nO.O\nTenho fansss!!!!!\n");
      }
    }

/* //comando ainda incompleto
    else if (strcmp(cmd, )!=0){
      printf("Desculpa, n entendi oque voce disse...\nAinda estou em desenvolvimento, se quiser sugerir algo ao Mestre...So avisar\n");
    }
*/
  }


return 0;
}
