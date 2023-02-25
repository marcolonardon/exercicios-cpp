#include <iostream>
using namespace std;
bool primo(int x);
void ePrimo(int x);
void primosAteN(int x);
void nPrimeiros(int x);
bool teste(int x);

int main(){
    int escolha;
    int n;
    int cont = 0;
    int i = 0;
    int calc = 0;
    int q = 0;
    

    cout << endl << "1- Saber se o numero e primo." << 
    endl << "2- Todos numeros primos ate n." << 
    endl << "3- Saber os n primeiros primos." << endl;
    cin >> escolha;
    system("cls");

    
    if (escolha < 1 or escolha > 3){
      cout << endl << "Opcao invalida. " << endl;
      return 0;
    }

      switch(escolha){
        case 1:
          cout << "Informe um valor inteiro e positivo: ";
          cin >> n;
          system("cls");
          if (n < 0){
             cout << endl << "Valores negativos sao invalidos. " << endl;
             system("cls");
             return 0;
        }else{
            ePrimo(n);
            system("pause");
         }
          break;

        case 2:
          cout << "Informe um valor inteiro maior que zero: ";
          cin >> n;
          system("cls"); 

          if (n <= 0){
             cout << endl << "Valores menores ou iguais a 0 sao invalidos. "
             << endl;
             system("cls");
             return 0;
        }else{
            primosAteN(n);
            
         }
          break;

        case 3: 
          cout << "Informe um valor inteiro maior que zero: ";
          cin >> n;
          system("cls");

          if (n <= 0){
             cout << endl << "Valores menores ou iguais a 0 sao invalidos. "
             << endl;
             system("cls");
           return 0; 
           }else{
              nPrimeiros(n);
              
           }
        } 
system("pause");         
return 0;
}  


bool primo(int x){
int cont = 0;
int i = 0;
int calc = 0;
int q = 0;
for (i = 0; i < x; i++){
  calc ++;
  if (x % calc == 0){
        q++;
  }
}

if (q == 2){
  return true;
}else{
  return false; 
 }
}


void ePrimo(int x){
int cont = 0;
int i = 0;
int calc = 0;
int q = 0;
for (i = 0; i < x; i++){
  calc ++;
  if (x % calc == 0){
        q++;
  }
}

if (q == 2){
  cout << endl << x << " E primo.\n";
}else{
  cout << endl << x << " Nao e primo.\n";
 }
}


void primosAteN(int x){
  int contador = 0;
  int i = 0;
  int contador2 = 0;

  for (i = 0; i < x; i++){

     if(primo(i) == true){
       contador ++;
     }      
  }
  if(teste(x) == true){
    contador++;
  }
  cout << endl << "Existem " << contador << " numeros primos ate " << x 
  <<". Sao eles: \n";
  for (i =0; i< x; i++){
    if(primo(i) == true){
      contador2++;
       cout << endl << contador2 << "->  " << i << ";";
    } 
  }
  if (primo(contador2) == true)
  cout << endl << contador2 + 1 << "->  "<< x << "; " << endl;   
}


void nPrimeiros(int x){
int contador = 0;
int i = 0;
cout << "\nOs " << x << " primeiros primos sao: \n";
  for (i = 0; contador < x; i++){
    if (primo(i) == true){
      contador++;
      cout << endl << contador << "->  " << i <<"; ";
    }
  }
}


bool teste(int x){
int cont = 0;
int i = 0;
int calc = 0;
int q = 0;
for (i = 0; i < x; i++){
  calc ++;
  if (x % calc == 0){
        q++;
  }
}

if (q == 2){
  return true;
}else{
  return false;
 }
}

