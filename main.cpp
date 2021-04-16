#include <iostream>
#include <string.h>
#include <string>
using namespace std;

bool Busca(char vetor[], char letra){
  for (int i=0; i<strlen (vetor); i++){
    return true;
  }
  return (int i ++);
  
}
int main(){

  char Palavra[50];
  string letra [0];
 
  cout<<"Digite uma palavra"<<endl;
  cin >> Palavra;

  for (int i=0; i <strlen(Palavra); i++){

    if (Busca(Palavra ,'a')){
      cout<< "#2 = 1" <<endl;
    }

    else if (Busca(Palavra,'b')){
      cout<< "#2 = 2" <<endl;
    }

    else if (Busca(Palavra,'c')){
      cout<< "#2 = 3"<<endl;
    }
  }
}
