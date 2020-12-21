#include <iostream>
#include <string.h>

#include "visitante.h"

using namespace std;

int main(){

    int trabajador;

    cout<<"\n1. Acceso a administrativos.";
    cout<<"\n2. Acceso a monitores.";
    cout<<"\nAcceder a: ";
    cin>>trabajador;

    if(trabajador==1){

        int option;

        do{

            cout<<"\nMENU\n";
            cout<<"\n1. Obtener información.\n";
            cout<<"\n2. Mostrar rutas";
            cout<<"\n3. Crear ruta.\n";
            cout<<"\n4. Añadir visitante.";
            cout<<"\n5. Eliminar visitante.\n";
            cout<<"\n6. Mostrar senderos.";
            cout<<"\n7. Actualizar sendero\n";
            cout<<"\n8. Mostrar monitores.\n";
            cout<<"\n9. Mostrar incidencias.\n";
            cout<<"\n10. Salir.\n";

            cout<<"\nIntroduzca su elección: ";
            cin>>option;

            switch (option){
            case 1:
                /* code */
                break;
            
            case 2:

                break;
            
            case 3:

                break;

            case 4:
            {
                int ruta;
                cout<<"Ruta a la que desea añadir al visitante: ";
                cin>>ruta;
                Visitante aux;
                string nombre, dni, direccion, nacimiento, problemas;
                int telefono;
                cout<<"Nombre: ";
                cin>>nombre;
                cout<<"DNI: ";
                cin>>dni;
                cout<<"Dirección: ";
                cin>>direccion;
                cout<<"Fecha de nacimiento: ";
                cin>>nacimiento;
                cout<<"Problemas de salud: ";
                cin>>problemas;
                cout<<"Teléfono: ";
                cin>>telefono;
                aux.setInfo(nombre, dni, direccion, nacimiento, problemas, telefono);
            }
                break;

            case 5:
            {
                string dni;
                cout<<"Introduzca el DNI del visitante que desea eliminar: ";
                cin>>dni;
                
            }
                break;

            case 6:

                break;

            case 7:

                break;

            case 8:

                break;

            case 9:

                break;
            }

        }while(option!=10);
        
        return 0;

    }else if(trabajador==2){

        int option;

        do{
            cout<<"\nMENU\n";
            cout<<"\n1. Mostrar mis rutas.";
            cout<<"\n2. Modificar ruta.\n";
            cout<<"\n3. Mostrar visitantes.";
            cout<<"\n4. Mostrar senderos.\n";
            cout<<"\n5. Añadir incidencia.\n";
            cout<<"\n6. Salir.\n";

            cout<<"\nIntroduzca su elección: ";
            cin>>option;

            switch (option){
            case 1:
                /* code */
                break;
            
            case 2:

                break;
            
            case 3:

                break;

            case 4:

                break;

            case 5:

                break;

            case 6:

                break;
            }

        }while(option!=6);

        return 0;
    
    }else{

        cout<<"\nError. Elección no permitida.\n";
        return 0;

    }
}