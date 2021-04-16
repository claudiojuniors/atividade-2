#include <iostream>
#include <string>
#include <string.h>

using namespace std;


int main() {

  string Palavra ;
  int i;

  cout<<"Digite uma palavra"<<endl;
  getline (cin, Palavra);
  

for (int i=0; i<Palavra.size(); i++){

    if (Palavra [i] == 'a'){
    cout<<"#2 = 1"<<endl;
    }
     else if (Palavra [i] == 'b'){
    cout<<"#2 = 2"<<endl;
     }
      else if (Palavra [i] == 'c'){
    cout<<"#2 = 3"<<endl;
     }
}
}