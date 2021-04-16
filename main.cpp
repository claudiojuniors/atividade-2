#include <iostream>
#include <string.h>
using namespace std;

bool Busca( char vetor[], char letra){
  for (int i=0; i<strlen (vetor); i++){
    if (vetor[i]==letra)
    return true;
  }
  return false;
}
int main(){

  char Palavra[50];
  char letra [0];
 
  cout<<"Digite uma palavra"<<endl;
  cin >> Palavra;

  for (int i=0; i <strlen(Palavra); i++){

    if (Busca(Palavra,'a')){
      cout<< "#2 = 1" <<endl;
    }

    else if (Busca(Palavra,'b')){
      cout<< "#2 = 1" <<endl;
    }

    else if (Busca(Palavra,'c')){
      cout<< "#2 = 1"<<endl;
    }
  }
  }