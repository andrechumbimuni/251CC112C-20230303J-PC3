
#include <iostream>
#include<cstring>
using namespace std;


struct visitas{
    string url;
    string titulo;
    string fecha;
    string hora;
    int id;
    
};

void agregar(visitas *web,int i){
    cin.ignore();
    cout<<"Ingrese la URL: ";
    
    getline(cin,web[i].url);
    
    cout<<"Título de la página: ";
    getline(cin,web[i].titulo);
    cout<<"Fecha (dd/mm/aaaa): ";
    getline(cin,web[i].fecha);
    cout<<"Hora (hh:mm): ";
    getline(cin,web[i].hora);
    cout<<">> Entrada agregada con ID: ";
    web[i].id=i+1;
    cout<<web[i].id<<endl;
    
}
void mostrar(visitas *web, int j){
    for(int i=0;i<j;i++){
        cout<<"ID: "<<web[i].id<<"| URL: "<<web[i].url<<"| Título: "<<web[i].titulo<<"| Fecha: "<<web[i].fecha<<"| Hora: "<<web[i].hora<<endl;
    }
        
    
}
void buscarurl(visitas *web, int j,string buscar){
    for(int i=0;i<j;i++){
        cout<<"Resultados encontrados:"<<endl;
        if(web[i].url==buscar){
            cout<<"ID: "<<web[i].id<<"| URL: "<<web[i].url<<"| Título: "<<web[i].titulo<<"| Fecha: "<<web[i].fecha<<"| Hora: "<<web[i].hora<<endl;
        }
    }
        
}
void eliminar(visitas *web,int m,int e){
    for(int i=0;i<m;i++){
        
        if(web[i].id==e){
            delete[] web;
            cout<<"Entrada eliminada exitosamente. "<<endl;
        }
    }
    
}
void limpiar(visitas *web,int m){
    for(int i=0;i<m;i++){
        delete[] web;
    }
    cout<<">> Historial limpiado correctamente."<<endl;
    
}
int main()
{
    int n,m=0;
    string buscar,sn;
    visitas *web=new visitas [10];
    do{
        if(n==1){
            agregar(web,m);
            m++;
        }
        if(n==2){
            mostrar(web,m);
        }
        if(n==3){
            int e;
            cout<<"ingrese el ID de la entrada a eliminar: ";
            cin>>e;
            eliminar(web,m,e);
            m--;
        }
        if(n==4){
            cout<<"ingrese la url a buscar: ";
            cin.ignore();
            getline(cin, buscar);
            buscarurl(web,m,buscar);
        }
        if(n==5){
            cout<<"¿Estás seguro que deseas borrar todo el historial? (s/n): ";
            cin.ignore();
            getline(cin,sn);
            if(sn=="s"){
                limpiar(web,m);
            } 
        }
            
        
        
        cout<<"--- HISTORIAL DE NAVEGACIÓN WEB ---\n";
        
        cout<<"1. Agregar entrada al historial\n";
        
        cout<<"2. Mostrar historial completo\n";
        cout<<"3. Eliminar una entrada por ID\n";
        cout<<"4. Buscar visitas por URL\n";
        cout<<"5. Limpiar historial completo\n";
        cout<<"0. Salir\n";
        cout<<"opcion ";
        cin>>n;
    }while(n!=0);

    return 0;
}
