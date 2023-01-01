#include <iostream>
using namespace std;

int main () {
	int n, i, pos, neg, cer, num;
	i = 1, n = 0; pos = 0; neg = 0; cer = 0; num = 0;

    n=20;
    cout<<string(40, '-')<<endl;
    cout<<"CONTAR 20 NUMEROS Y SU TIPO"<<endl;
    cout<<string(40, '-')<<endl;

	while(i<=20)
	{
        cout << "Digite un N° entero a analizar" << endl;
        cin >> num;
        if(num>0)
        {
            cout << "Es positivo" <<endl;
            cout<<"\n";
            pos++;
        }
        else
        {
            if(num<0)
            {
                cout << "Es negativo" <<endl;
                cout<<"\n";
                neg++;
            }
            else
            {
                cout << "Es neutro" <<endl;
                cout<<"\n";
                cer++;
            }
        }
	i++;
	}
    cout<<string(40, '-')<<endl;
	cout << "La cantidad de N° positivos es: " << pos << endl;
	cout << "La cantidad de N° negativos es: " << neg << endl;
	cout << "La cantidad de N° que son neutros son: " << cer << endl;
	cout << "La cantidad de N° analizados fueron: " << n << endl;
    cout<<string(40, '-')<<endl;

	return 0;
}