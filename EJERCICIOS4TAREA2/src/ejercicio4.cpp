#include <iostream>
#include <string>
using namespace std;
int main()
{
int numeroempleados,horasextras=0,contadorempleado=0;
double tarifa,extras,pagohoraextra=0,sueldosemanal=0,sueldobruto=0;
string empleado,respuesta;
const int HORASTRABAJO = 40;

cout<<"Ingrese el numero de empleados a los que les calculara el sueldo bruto de esta semana:"<<endl;
cin>>numeroempleados;
    for (int i = 0; i < numeroempleados; i++)
    {
     cout<<"Ingrese el nombre del empleado                           :"<<endl;
     cin>>empleado;
     cout<<"Ingrese la tarifa por hora que se le paga a este empleado :";
     cin>>tarifa;
     cout<<"Realizo horas extras esta semana " << empleado << " ? S/N ";
     cin>>respuesta;
        while (respuesta == "S" || respuesta == "s" )
        {
            cout<<"Cuantas horas extras realizo?";
            cin>>horasextras;
            pagohoraextra= (tarifa*horasextras)+ (tarifa/2);
            cout<<"Por horas extras se le pagara                        :" << pagohoraextra <<endl;
            cout<<"Escriba ok para mostrarle el sueldo bruto de empleado:";
            cin>>respuesta;
            contadorempleado++;

        }
 sueldosemanal = HORASTRABAJO * tarifa;
 sueldobruto = sueldosemanal + pagohoraextra;
 cout<<"El sudtotal de pago semanal de " <<empleado<< "      es de: " <<sueldosemanal<<endl;
 cout<<"Su pago por hacer horas extras corresponde a              : "<<pagohoraextra<<endl;
 cout<<"Su sueldo bruto semanal es de                             : "<<sueldobruto<<endl;
}
    
  return 0;
}