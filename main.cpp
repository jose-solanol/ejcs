#include <iostream>

//Variables globales y macros
#define TAM (int)50

using namespace std;

int main()
{
    char a[TAM] = "AB11CD4418548X48";

    for (int var = 0;var<TAM ;++var ) {
        if (a[var]!= '\0'){
        cout << a[var] << endl;
}

    }
    cout << "Imprimir solo los numeros de la cadena original"<< endl;
    for (int var = 0;var<TAM ;++var ) {
        if ( a[var]>='0' and a[var]<= '9'){
            cout << a[var] << endl;
        }

    }
    return 0;
}
