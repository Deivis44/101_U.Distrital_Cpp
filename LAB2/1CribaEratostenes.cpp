#include <iostream>
using namespace std;
int main(){

    int num,comp,aum;


    do
    {
        cout<<"se analizaran la cantidad de numeros de 1 al n por favor ingrese 'n' para saber cuantos primos hay en ese conjunto: ";
        cin>>num;
        if (num<2)
            cout<<"ingrese un numero valido porfavor."<<endl;
    } while (num<2);

    int vec[num];

    //llenado del vector
    int f=0;
    while (f<num)
    {
        vec[f]=f+1;
        f++;
    }

    aum = 0;


    while (vec[aum]<=num) 
    {
        comp = 2;
        while (comp<=vec[aum])
        {
            if ((vec[aum]%comp)==0)
            {
                if (comp==vec[aum])
                {
                cout<<" "<<comp;
                }
                else{
                break;
                }
            }

            comp++;
        }


        aum++;
    }


    return 0;
}