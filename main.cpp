#include "Funciones.h"

int main(){

    // -------------------------------------------------------------------------------------------------

    long int ejer, A, B, D, E, i, j;
    char letra, salir;
    char C[50];
    bool conf;
    int P[6][8]={{0,3,4,0,0,0,6,8},
                 {5,13,6,0,0,0,2,3},
                 {2,6,2,7,3,0,10,0},
                 {0,0,4,15,4,1,6,0},
                 {0,0,7,12,6,9,10,4},
                 {5,0,6,10,6,4,8,0}};
    int l_A[4];
    int l_B[4];
    char T[15][20]={{'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'},
                    {'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'}};

    //---------------------------------------------------------------------------------------------------

    int num=0;

    while(true){
        cout << "\n\n\tIngrese el numero del problema: ";
        cin >> ejer;cout<<"\n\n\n";
        switch(ejer){


            case 1:{
                cout << "Para concer que cantidad de las nomicaciones definidad le entregaria un cajero\n\nIngresar el valor: ";
                cin >> A;
                for(B=50000;B>=50;B=B/2){
                    if(B/1000==25 or B/100==25 or B/10==25) B=B-(B/5);
                A=ejercicio1(B, A);
                }
                if(A < B) cout << "Faltante: " << A << endl;
            break;
        }
        case 2:{
            /*Elabore un programa que genre un arreglo de 200 letras mayúsculas aleatorias, imprima este arreglo
            y luego imprima cuantas veces se repite cada letra en el arreglo*/

            char *cadena  = new char [201];
            crear_2(cadena);

            for (i=0;i<=200;i++) cout << cadena[i];//<< "\t" << i << endl;
            cout << "\n\n";
            rep_2 (cadena);

            break;
        }

            case 3:{
                cout << "Se ingresan dos cadenas y se comprueba si son iguales\n\nIngresar el tamano de las cadenas: ";
                cin >> A;
                ejercicio3(A);
            break;
        }

        case 4:{

            /*Haga una funcion que reciba una cadena de caracteres numéricos, la convierta a un numero entero y retorne
            dicho número, Escriba un programa de prueba*/

            cout << "\n\nIngrese un numero, que se ingresara en cadena de caracteres y se convertira a numero entero\n\n";
            cout << "Cuantos digitos tiene el numero\n\n --> ";cin >> num;
            char *cad_4 = new char [num];
            cout << "\n\n\nIngrese el numero = "; cin >> cad_4;
            cad_int (cad_4,num);
            break;
        }

           case 5:{
                cout << "ingrese un numero entero: ";
                cin >> A;
                ejercicio5(A);
            break;
        }

        case 6:{
            /*Escriba un programa que reciba un cadena de caracteres y cambie la letra minuscula, por mayuscula,
            los demas caracteres no deben ser alterados*/
            cout << "\n\nIngrese una cadena de caracteres y cada letra en mnsucula pasa a mayuscula\n\n";
            cout << "Cuatos caracteres tiene la cadena ?\n\n --> ";cin >> num;
            char *cad_6 = new char [num];
            cout << "\n\n\nIngrese la cadena = ";cin >> cad_6;
            min_may (cad_6,num);
         break;
     }

            case 7:{
                cout << "Ingrese la longitud de la cadena: ";
                cin >> A;
                ejercicio7(A);
            break;
        }

        case 8:{
            /*Escriba un programa que reciba una cadena de caracteres y separe los números del resto de
            caracteres, generando una cadena que no tiene números y otra con los numeros que habia en la
            cadena original*/
            cout << "\n\nIngrese una cadena de caracteres y se separaram numeros de letras\n\n";
            cout << "Cuatos caracteres tiene la cadena ?\n\n --> ";cin >> num;
            char *cad_8 = new char [num];
            cout << "\n\nIngrese la cadena = "; cin >> cad_8;
            cout << "\n\n\n\nOriginal =  ";
            for (int i=0; i < num; i++) cout << cad_8[i];
            cout << "\n\n";
            num_cad (cad_8,num);
         break;
     }

            case 9:{
                cout << "ingresar numero: ";
                cin >> A;
                cout << "Ingrese el numero a sumar: ";
                cin >> C;
                B=contar_caracteres(C);
                ejercicio9(A, C, B);
            break;
        }

        case 10:{
            /*Escriba un programa que permita convertir un numero en el sistema ROMANO al sistema arábigo usado
            actualmente*/
            cout << "\n\nIngrese un numero en Sistema Romano y lo convierte a sistema arabigo\n\n";
            cout << "Cuatos caracteres tiene el numero Romano ?\n\n --> ";cin >> num;
            char *cad_10 = new char [num];
            cout << "\n\n\nIngrese el numero = "; cin >> cad_10;
            rom_ara (cad_10,num);
         break;
        }

            case 11:{
            for(salir='s';salir!='n';){
                //Mostrar La tabla
                letra=65;
                cout << "\n \n";
                cout << "   1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 19 20 " << endl;
                for (i=0;i<15;i++){
                    cout << letra << "  ";
                    letra+=1;
                    for (j=0;j<20;j++) cout << T[i][j] << "  ";
                    cout << endl;
                }
                cout << "ingresar s si quiere cambiar un asiento o n si quiere salir: ";
                cin >> salir;
                if (salir=='s'){
                    T[15][20]=ejercicio11(T);
                }

                else if (salir!='n') cout << "Debe de poner s o n minusculas" << endl;
            }
            break;
        }

        case 12:{
            /*Un cuadro mágico es una matriz, de numeros enteros sin repetir, en la que la suma de los numeros
            en cada columna, cad fila, y cada diagonal prinsipal, tienen como resultado el mismo constante
            escriba un progama que permita al usuario ingresar, una matriz cuadrada, imprima la matriz, y verifique si
            la matriz es cuadrado mágico*/
            int a,b,c,d,e,f,g,h,i;
            cout << "\n\nCuadrado magico 3x3\n\n";
            cout << "\t _____________\n";
            cout << "\t | A | B | C |\n";
            cout << "\t _____________\n";
            cout << "\t | D | E | F |\n";
            cout << "\t _____________\n";
            cout << "\t | G | H | I |\n";
            cout << "\t _____________\n";
            cout << "\nIngrese los valores de cada punto: \n\n";
            cout << "\t | A --> ";cin >> a;cout << "\t | B --> ";cin >> b;cout << "\t | C --> ";cin >> c;cout << "\n\n";
            cout << "\t | D --> ";cin >> d;cout << "\t | E --> ";cin >> e;cout << "\t | F --> ";cin >> f;cout << "\n\n";
            cout << "\t | G --> ";cin >> g;cout << "\t | H --> ";cin >> h;cout << "\t | I --> ";cin >> i;cout << "\n\n";

            char *cad_10 = new char [num];
            cout << "\n\n\nIngrese el numero = "; cin >> cad_10;
            rom_ara (cad_10,num);
         break;
        }

            case 13:{
                //Imprimir la matriz
                for (int cont=0;cont<6;cont++){
                    for (int cont2=0;cont2<8;cont2++){
                        cout << P[cont][cont2] << "  ";
                    }
                    cout << endl;
                }
                cout << "Ingrese la fila: ";
                cin >> A;
                A-=1;
                cout << "Ingrese la columna: ";
                cin >> B;
                B-=1;
                conf=ejercicio13(A, B, P);
                if (conf) cout << "Si hay una estrella" << endl;
                else cout << "No hay una estrella" << endl;
            break;
        }

            case 15:{

                cout << "ingrese los valores del rectangulo A en el orden X, Y, Ancho y Altura (uno por uno): " << endl;
                for(A=0;A<4;A++){
                    cin >> l_A[A];
                }

                cout << "ingrese los valores del rectangulo B en el orden X, Y, Ancho y Altura (uno por uno): " << endl;
                for(A=0;A<4;A++){
                    cin >> l_B[A];
                }

                ejercicio15(l_A, l_B);


            break;
        }

            case 17:{
                cout << "Ingresar el primer numero: ";
                cin >> A;
                B=ejercicio17(A);
                cout << "Ingresar el segundo numero: ";
                cin >> D;
                E=ejercicio17(D);
                if (A==E){
                    if (B==D) cout << "Si son numeros amigables" << endl;

                    else cout << "No son numeros amigables" << endl;
                }

                else cout << "No son numeros amigables" << endl;
            break;
        }

        default:{
            cout << "Ejercicio no definido." << endl;
        break;
        }

        }
        cout << "\n\nDesea continuar ? \n\n NO = 1\n\n --> ";cin >> ejer;
        if (ejer == 1) break;
    }
    return 0;
}
