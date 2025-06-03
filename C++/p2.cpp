
#include <iostream>
using namespace std;

struct termino{
    float coeficiente;
    int exponente;
};
struct polinomio{
    termino arr[20];
};
void coefyexpo(polinomio p1 ,int n){
    for(int i=0; i<n;i++){
        cout<<"Ingrese coeficiente y exponente del término "<<i+1<<" : ";
        cin>>p1.arr[i].coeficiente>>p1.arr[i].exponente;
        
    }
}
void mostrar(polinomio p1,int n){
    for(int j=0; j<n;j++){
        if(p1.arr[j].coeficiente==1){
            cout<<"x^"<<p1.arr[j].exponente<<" ";
        }
        cout<<p1.arr[j].coeficiente<<"x^"<<p1.arr[j].exponente<<" ";
        if(j>=0&&j<n-1){
            cout<<"+ ";
        }
    }
}
void sumat(polinomio suma,polinomio p1,polinomio p2,int n,int m){
    int k=0,t=0;
    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            
            if(p1.arr[i].exponente==p2.arr[j].exponente){
                suma.arr[k].coeficiente=p1.arr[i].coeficiente+p2.arr[j].coeficiente;
            }else if(i<n) suma.arr[k++].exponente=p1.arr[i++].exponente;
            else if(j<m) suma.arr[k++].exponente=p2.arr[j++].exponente;
            if(t<k){
                t=k;
            }
        }    
    }
    for(int k=0; k<t;k++){
        if(suma.arr[k].coeficiente==1){
            cout<<"x^"<<suma.arr[k].exponente<<" ";
        }
        cout<<suma.arr[k].coeficiente<<"x^"<<suma.arr[k].exponente<<" ";
        if(k>=0&&k<t-1){
            cout<<"+ ";
        }
    }
}
int main()
{
    int n,m,i=0;
    polinomio p1,p2,suma;
    cout<<"ingresa el numero de terminos del primer polinomio: ";
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"Ingrese coeficiente y exponente del término "<<i+1<<" : ";
        cin>>p1.arr[i].coeficiente>>p1.arr[i].exponente;
        
    }
   
    cout<<"\ningresa el numero de terminos del segundo polinomio: ";
    cin>>m;
    for(int y=0; y<m;y++){
        cout<<"Ingrese coeficiente y exponente del término "<<y+1<<" : ";
        cin>>p2.arr[y].coeficiente>>p2.arr[y].exponente;
    }
    cout<<"primer polinomio: ";
    mostrar(p1,n);
    cout<<"\nsegundo polinomio: ";
    mostrar(p2,m);
    cout<<endl;
    sumat(suma,p1,p2,n,m);
    
    
 
  
    
    

    return 0;
}
