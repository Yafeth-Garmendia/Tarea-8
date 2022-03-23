#include <iostream>
#include <math.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	float num,raiz;
	
    cout<<"calcular la raiz de un numero\n"<<endl;
	cout<<"Insertar un numero: \n"<<endl;
	cin>>num;
	
	
raiz = sqrt(num);
 
  cout << "La raiz cuadrada de " << num << " es " << raiz << endl;
 
  return 0;
}
