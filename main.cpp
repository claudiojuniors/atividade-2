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
      else if (Palavra [i] == 'd'){
    cout<<"#3 = 1"<<endl;
     }
      else if (Palavra [i] == 'e'){
    cout<<"#3 = 2"<<endl;
     }
      else if (Palavra [i] == 'f'){
    cout<<"#3 = 3"<<endl;
     }
      else if (Palavra [i] == 'g'){
    cout<<"#4 = 1"<<endl;
     }
      else if (Palavra [i] == 'h'){
    cout<<"#4 = 2"<<endl;
     }
      else if (Palavra [i] == 'i'){
    cout<<"#4 = 3"<<endl;
     }
      else if (Palavra [i] == 'j'){
    cout<<"#5 = 1"<<endl;
     }
      else if (Palavra [i] == 'k'){
    cout<<"#5 = 2"<<endl;
     }
      else if (Palavra [i] == 'l'){
    cout<<"#5 = 3"<<endl;
     }
      else if (Palavra [i] == 'm'){
    cout<<"#6 = 1"<<endl;
     }
      else if (Palavra [i] == 'n'){
    cout<<"#6 = 2"<<endl;
     }
      else if (Palavra [i] == 'o'){
    cout<<"#6 = 3"<<endl;
     }
      else if (Palavra [i] == 'p'){
    cout<<"#7 = 1"<<endl;
     }
      else if (Palavra [i] == 'q'){
    cout<<"#7 = 2"<<endl;
     }
      else if (Palavra [i] == 'r'){
    cout<<"#7 = 3"<<endl;
     }
      else if (Palavra [i] == 's'){
    cout<<"#7 = 4"<<endl;
     }
      else if (Palavra [i] == 't'){
    cout<<"#8 = 1"<<endl;
     }
      else if (Palavra [i] == 'u'){
    cout<<"#8 = 2"<<endl;
     }
      else if (Palavra [i] == 'v'){
    cout<<"#8 = 3"<<endl;
     }
      else if (Palavra [i] == 'w'){
    cout<<"#9 = 2"<<endl;
     }
      else if (Palavra [i] == 'x'){
    cout<<"#9 = 2"<<endl;
     }
      else if (Palavra [i] == 'y'){
    cout<<"#9 = 3"<<endl;
     }
      else if (Palavra [i] == 'z'){
    cout<<"#9 = 4"<<endl;
     } else {
       return 0;
       }
     }
  
}
    


