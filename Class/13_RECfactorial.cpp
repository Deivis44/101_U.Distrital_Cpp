#include <iostream>
using namespace std;

long int factorial_recursivo(long int n)
{
	if(n==0){
		return 1;
	}	
	else{
		return(n* factorial_recursivo(n-1));
	}
	
}
int main(){
	int n;
	do{
	cout<<"Ingrese un numero mayor o igual a 0: ";cin>>n;
	}while(n<0);
	int n1=n;
	cout<<"el factorital de "<<n<<" es: "<<factorial_recursivo(n);
}