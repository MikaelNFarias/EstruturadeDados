#include<stdio.h>
// Implemente um programa que leia 5 registros de uma estrutura que contenha o nome e idade de operador. (utilize struct)
typedef struct{
  char * Nome[100];
  int Idade;
} Membro;

void ImprimeMembro(Membro M){
  printf("Nome: %s  Idade: %d\n", *M.Nome, M.Idade);
}

void Membros(Membro *M, char nome[], int idade){
  *M->Nome = nome;  
  (*M).Idade = idade;  
}

int main(){
  Membro Cassio;
  Membros(&Cassio, "Cassio", 21);
  ImprimeMembro(Cassio);
  
  Membro Gabriel;
  Membros(&Gabriel, "Gabriel", 18);
  ImprimeMembro(Gabriel);
  
  Membro Mikael;
  Membros(&Mikael, "Mikael", 22);
  ImprimeMembro(Mikael);
  
  Membro Correa;
  Membros(&Correa, "Correa", 18);
  ImprimeMembro(Correa);
  
  Membro Mano;
  Membros(&Mano, "Mano", 18);
  ImprimeMembro(Mano);

  return 0;
}
