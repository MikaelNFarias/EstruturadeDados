#include<stdio.h>
#include<string.h>

int verifica(char * p1, char * p2){
  int i;
  int c = strcmp(p1,p2);
  if(c==0){
    return printf("strings iguais");
  }
  else{
    char pres[1][30];
    strcat(pres,p1);
    strcat(pres,p2);
    return printf("%s", pres);
  }
}

int main(){
  char p1[1][30];
  char p2[1][30];
  gets(p1);
  gets(p2);
  verifica(p1,p2);
}