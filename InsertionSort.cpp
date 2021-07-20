
#include<iostream>
using namespace std;


void print(int t, int *a){
    for(int i=0; i<t; ++i) 
    {
	cout << "Elemento: " << i << " = " << a[i] << endl;
    
	}
	cout << "-----------------" << endl;
}

void insertion_Sort(int t, int *a){
   if(t<=1)
   return;

   int  valor,atual, aux;

   atual = t -1;
   valor = a[atual];
   aux = atual - 1;

   insertion_Sort(atual, a);

   while (aux >= 0 && a[aux] > valor)
   {
       a[aux + 1] = a[aux];
       aux--;
   }

   a[aux + 1 ] = valor;
     
}

int main(int argc, char **argv){
int v[8] = {26, 49, 38, 13, 58, 87, 34, 93};
	print(8, v);

	insertion_Sort(8, v);
	print(8, v);
	
	return 0;
}