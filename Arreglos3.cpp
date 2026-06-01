#include <iostream>
using namespace std;

int main()
{

    int numeros[] = {5, 10, 15, 20, 25, 6};
    int altura = sizeof(numeros[0]);
    int suma = 0;

    for (int i = 0; i < altura; i++)
    {
        suma += numeros[i];
    }
    float promedio = static_cast<float>(suma) / altura;
    cout << "La suma de todos los elementos es: " << suma << endl;
    cout << "El promedio de la suma es: " << promedio << endl;

    return 0;
}