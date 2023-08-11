// Programa para calcular los multiplos de cualquier Número 
//Utilizaremos metodos 
// Author : José Roberto Martínez Morales
// date: august 10 2023
// nickname: Ragnaros504     
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <string>
using namespace std;

std:: string numeroInput;
std:: string cantidad_de_veces;

double numero;

int cantidad;
bool correcto1 = false;

//Realizar las multiplicaciones necesarias
void multiplier( double number, double quantity)
{
   
    std:: cout << quantity << ":\t" << number * quantity << std:: endl;
    
    if (quantity != 0)
    {
     multiplier(number, quantity -1);
    }
    if (quantity < 0)
    {
        multiplier(number,quantity + 1);
    }
}


int main ()
{
    setlocale(LC_ALL, "en_US.utf8"); //Permite el uso de tildes y caracteres del español
    while (!correcto1 )
    {
        try
        {

        system ("cls");
        std:: cout << "Ingrese el Número que desea saber sus multiplos" << std ::endl;
        std:: cout <<"Número:";

        std:: cin >> numeroInput;
        numero = std:: stod(numeroInput);
        
        std:: cout << "Éxito, ha ingresado el número correctamente"<< std::endl;

            try
            {
                std:: cout << "Ingrese hasta que múltiplo lo desea"<< std::endl;
                std:: cout <<"Número:";

                std:: cin >> cantidad_de_veces;

                cantidad = std:: stoi (cantidad_de_veces);
                correcto1 = true;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                std:: cout << "ERROR .Ingrese un número"<< std:: endl;
                system ("pause");
                correcto1 = false;
            }
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            std:: cout << "ERROR .Ingrese un número"<< std:: endl;
            system ("pause");
            correcto1 = false;
        }
    }
    multiplier(numero,cantidad);
}