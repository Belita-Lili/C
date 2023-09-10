#include <stdio.h>
#include <conio.h>
void printOffice(int rows, int cols,int x, int  y){//Aqui se hace la matriz y
    //se especifica donde poner las alarmas y los rociadores
    printf("1.F:La oficina se queman\n2.o:Rociadores\n3.X:Alarma\n");
    for(int i=0;i<rows;i++){
        for (int j=0; j<cols;j++){
            if(i==x-1 && j==y-1){
                printf("|F|");
            }
            else if(((j>=y-2)&&(j<=y))&&((i>=x-2)&&(i<=x))){
                printf("|o|");
            }
             else if(((j>=y-3)&&(j<=y+1))&&((i>=x-3)&&(i<=x+1))){
                printf("|X|");
            }
            else{
                printf("| |");
            }
        }
        printf("\n");
    }
}
void getFirePos(int *x, int *y){//Se solicita la oficina en llamas y se transforman
    // los valores recibidos a coordenadas para la funcion printOffice
    char office[3];
    printf("¿Que oficina se esta incendiando?[LetraNumero]\n");
    scanf("%s",office);
    if (office[0]>=97 && office[0]<=127){//Se transforman las coordenadas tomadas como letra
            //numero como numeros y divididos en x,y para mandar las coordenadas a printOffice
        office[0] = office[0] - 32;
    }
    *x = office[0]-64;//Para mandar dos valores desde una fuincion se les coloca "*"
    *y = office[1]-48;
}
main(){
    int rows,cols;
    int x,y,o;
    printf("Ingrese las dimenciones del numero de oficinas en el departamento[x,y]:\n");
    scanf("%d,%d",&rows,&cols);
    //Se preguntan las dimenciones en [x,y] para las oficinas y que el programa sea mas generico
    while(o!=2){//Se crea un bucle hasta que la persona desee salir y donde se llaman las
                //funciones getFirePos y printOffice.
        printf("1. Seleccionar oficinas\n");
        printf("2. Salir\n");
        printf("Opcion: ");
        scanf("%d",&o);
        switch(o){
        case 1:
        getFirePos(&x, &y);//Preguntar por la oficina en llamas
        printOffice(rows,cols,x,y);//Imprime la matriz de las oficinas con alarma, rociadores y la
        //oficina en llamas
        break;
        case 2:
        printf("Saliendo del programa, vuelva pronto :)");
        break;
        default:
        printf("Opcion invalida seleccione otra.");
        break;
        }
    }
}
