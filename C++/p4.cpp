
#include <iostream>
using namespace std;
int crearArreglo(int n){
    int *arr=new int[n];
    return *arr;
}
void leerRespuestas(int* arr, int n){
    cout<<"ingresa las respuestas del 1 al 5: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
float calcularPromedio(int* arr, int n){
    int suma=0;
    float promedio=0;
    for(int i=0;i<n;i++){
        suma=+arr[i];
    }
    promedio=suma/n;
    cout<<"promedio de satisfaccion es: ";
    return promedio;
    
}
void mostrarFrecuencias(int* arr, int n){
    cout<<"Frecuencia de respuestas: "<<endl;  
    for(int j=1;j<5;j++){
        int frecuencia=0;
        for(int i=0;i<n;i++){
            if(arr[i]==j){
                frecuencia++;
            }
            cout<<i+1<<": "<<frecuencia;
        }
    };
}
int calcularModa(int* arr, int n){
    int moda=0,lugar;
    for(int j=1;j<5;j++){
        int frecuencia=0;
        for(int i=0;i<n;i++){
            if(arr[i]==j){
                frecuencia++;
            }
            
        }
        cout<<j+1<<": "<<frecuencia;
        if(frecuencia>moda){
                moda=frecuencia;
            }
    };
    for(int j=1;j<5;j++){
        int frecuencia=0;
        for(int i=0;i<n;i++){
            if(arr[i]==j){
                frecuencia++;
            }
        }
        if(frecuencia==moda){
            lugar=j;
        }
            
    };
    cout<<"moda: ";
    return lugar;
    
};
void destruirArreglo(int*& arr){
    delete[] arr;
};
int main()
{
    int n;
    cout<<"ingrese la cantidad de respuestas: ";
    cin>>n;
    
    int *arr= crearArreglo(n);
    leerRespuestas(arr,n);
    calcularPromedio(arr,n);
    mostrarFrecuencias(arr,n);
    calcularModa(arr,n);
    
    

    return 0;
}
