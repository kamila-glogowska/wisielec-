#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int choose_category_eng(int c){
    int d;
    drawing_numbers(d);
   printf("Choose category\n 1.sport\n 2.art\n 3.history\n");
    scanf("%d", &c);
    if(c==1){
        printf("category sport\n");
  char answer[128]={"goal"};
  fflush(stdout);
  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }
  int gameover = 0;
  while (! gameover) {
    printf("The word is : ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");
    char guess;
    printf("Type letter ");
    fflush(stdout);
    scanf(" %c", &guess);

    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }

    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }

  printf("Victory! The word is \"%s\".\n", answer);

  return 0;
}
    if(c==2){
        printf("category art\n");
  char answer[128]={"painting"};
  fflush(stdout);

  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }

  int gameover = 0;
  while (! gameover) {
    printf("The word is : ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");

    char guess;
    printf("Type letter ");
    fflush(stdout);
    scanf(" %c", &guess);

    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }
    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Victory! The word is \"%s\".\n", answer);

  return 0;
}
    
    
    if(c==3){
        printf("category history\n");
  char answer[128]={"battle"};
  fflush(stdout);

  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }

  int gameover = 0;
  while (! gameover) {
    printf("The word is : ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");

    char guess;
    printf("Type letter ");
    fflush(stdout);
    scanf(" %c", &guess);

    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }

    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Victory! The word is \"%s\".\n", answer);

  return 0;

    }
}
int choose_category_pl(int c){
   printf("Choose category\n 1.sport\n 2.sztuka\n 3.historia\n");
    scanf("%d", &c);
    if(c==1){
        printf("kategoria sport\n");
  char answer[128]={"bramka"};
  fflush(stdout);

  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }
  int gameover = 0;
  while (! gameover) {
    printf("Slowo to : ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");

    char guess;
    printf("Podaj litere? ");
    fflush(stdout);
    scanf(" %c", &guess);

    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }

    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }

  printf("Zwyciestwo! Slowo to \"%s\".\n", answer);

  return 0;
}
    
    if(c==2){
        printf("kategoria sztuka\n");
  char answer[128]={"rysunek"};
  fflush(stdout);

  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }

  int gameover = 0;
  while (! gameover) {
    printf("Slowo to: ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");
    char guess;
    printf("Podaj litere? ");
    fflush(stdout);
    scanf(" %c", &guess);

    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }
    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Zwyciestwo, slowo to \"%s\".\n", answer);

  return 0;
}
    
    if(c==3){
        printf("kategoria historia\n");
  char answer[128]={"grunwald"};
  fflush(stdout);
  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }
  int gameover = 0;
  while (! gameover) {
    printf("Slowo to : ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");

    char guess;
    printf("Podaj litere? ");
    fflush(stdout);
    scanf(" %c", &guess);

    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }
    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Zwyciestwo, slowo to \"%s\".\n", answer);

  return 0;
}
    }

int choose_category_d(int c){
   printf("Kategorien auswahlen\n 1.Sport\n 2.Kunst\n 3.Beruf\n");
    scanf("%d", &c);
    if(c==1){
        printf("Kategorie Sport\n");
  char answer[128]={"BALL"};
  fflush(stdout);
  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }
  int gameover = 0;
  while (! gameover) {
    printf("das wort ist : ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");

    char guess;
    printf("Geben Sie den Buchstaben ein ");
    fflush(stdout);
    scanf(" %c", &guess);
    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }
    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Sieg! das wort ist \"%s\".\n", answer);

  return 0;
}
    
    if(c==2){
        printf("Kategorie Kunst\n");
  char answer[128]={"pinsel"};
  fflush(stdout);

  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }
  int gameover = 0;
  while (! gameover) {
    printf("das wort ist: ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");
    char guess;
    printf("Geben Sie den Buchstaben ein");
    fflush(stdout);
    scanf(" %c", &guess);
    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }
    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Sieg das wort ist \"%s\".\n", answer);

  return 0;
}
    if(c==3){
        printf("Kategorie Beruf\n");
  char answer[128]={"klempner"};
  fflush(stdout);
  int N = strlen(answer);
  int mask[N];
  for (int i=0; i < N; ++i) {
    mask[i] = 0;
  }
  int gameover = 0;
  while (! gameover) {
    printf("das wort ist: ");
    for(int j=0; j < N; ++j) {
      if (mask[j]) {
        printf("%c", answer[j]);
      }
      else {
        printf("*");
      }
    }
    printf("\n");
    char guess;
    printf("Geben Sie den Buchstaben ein");
    fflush(stdout);
    scanf(" %c", &guess);
    for(int k=0; k < N; ++k) {
      if (answer[k] == guess) {
	mask[k] = 1;
      }
    }
    gameover = 1;
    for(int m = 0; m < N; ++m) {
      if (!mask[m]) {
        gameover = 0;
        break;
      }
    }
  }
  printf("Sieg das wort ist \"%s\".\n", answer);

  return 0;
}
}