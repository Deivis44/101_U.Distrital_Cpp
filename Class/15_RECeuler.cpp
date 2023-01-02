#include <iostream>
using namespace std;

int fact(int);
int main(){
    int s;
    cout<<"Escriba un numero: ";
    cin>>s;
    float e=0;
    for(int i=0;i<s;i++){
        float u=fact(i);//muy importante
        e+=1/u;//e+=1/fact(i)
    }
    cout.precision(12);
    cout<<"\nel valor aproximado de e en base a su numero "<<s<<" es "<<e<<endl;
}
int fact(int f){
    int factorial=f;
    if(factorial>1){
        factorial=f*fact(f-1);
        return factorial;
    }
    else{
        return 1;
    }
}