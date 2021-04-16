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

    if ((Palavra [i] == 'a')||(Palavra [i] =='A')){
    cout<<"#2 = 1"<<endl;
    }
     else if ((Palavra [i] == 'b')||(Palavra [i] =='B')){
    cout<<"#2 = 2"<<endl;
     }
      else if ((Palavra [i] == 'c')||(Palavra [i] =='C')){
    cout<<"#2 = 3"<<endl;
     }
      else if ((Palavra [i] == 'd')||(Palavra [i] =='D')){
    cout<<"#3 = 1"<<endl;
     }
      else if ((Palavra [i] == 'e')||(Palavra [i] =='E')){
    cout<<"#3 = 2"<<endl;
     }
      else if ((Palavra [i] == 'f')||(Palavra [i] =='F')){
    cout<<"#3 = 3"<<endl;
     }
      else if ((Palavra [i] == 'g')||(Palavra [i] =='G')){
    cout<<"#4 = 1"<<endl;
     }
      else if ((Palavra [i] == 'h')||(Palavra [i] =='H')){
    cout<<"#4 = 2"<<endl;
     }
      else if ((Palavra [i] == 'i')||(Palavra [i] =='I')){
    cout<<"#4 = 3"<<endl;
     }
      else if ((Palavra [i] == 'j')||(Palavra [i] =='J')){
    cout<<"#5 = 1"<<endl;
     }
      else if ((Palavra [i] == 'k')||(Palavra [i] =='K')){
    cout<<"#5 = 2"<<endl;
     }
      else if ((Palavra [i] == 'l')||(Palavra [i] =='L')){
    cout<<"#5 = 3"<<endl;
     }
      else if ((Palavra [i] == 'm')||(Palavra [i] =='M')){
    cout<<"#6 = 1"<<endl;
     }
      else if ((Palavra [i] == 'n')||(Palavra [i] =='N')){
    cout<<"#6 = 2"<<endl;
     }
      else if ((Palavra [i] == 'o')||(Palavra [i] =='O')){
    cout<<"#6 = 3"<<endl;
     }
      else if ((Palavra [i] == 'p')||(Palavra [i] =='P')){
    cout<<"#7 = 1"<<endl;
     }
      else if ((Palavra [i] == 'q')||(Palavra [i] =='Q')){
    cout<<"#7 = 2"<<endl;
     }
      else if ((Palavra [i] == 'r')||(Palavra [i] =='R')){
    cout<<"#7 = 3"<<endl;
     }
      else if ((Palavra [i] == 's')||(Palavra [i] =='S')){
    cout<<"#7 = 4"<<endl;
     }
      else if ((Palavra [i] == 't')||(Palavra [i] =='T')){
    cout<<"#8 = 1"<<endl;
     }
      else if ((Palavra [i] == 'u')||(Palavra [i] =='U')){
    cout<<"#8 = 2"<<endl;
     }
      else if ((Palavra [i] == 'v')||(Palavra [i] =='V')){
    cout<<"#8 = 3"<<endl;
     }
      else if ((Palavra [i] == 'w')||(Palavra [i] =='W')){
    cout<<"#9 = 2"<<endl;
     }
      else if ((Palavra [i] == 'x')||(Palavra [i] =='X')){
    cout<<"#9 = 2"<<endl;
     }
      else if ((Palavra [i] == 'y')||(Palavra [i] =='Y')){
    cout<<"#9 = 3"<<endl;
     }
      else if ((Palavra [i] == 'z')||(Palavra [i] =='Z')){
    cout<<"#9 = 4"<<endl;
     } else {
       return 0;
       }
     }
  
  }