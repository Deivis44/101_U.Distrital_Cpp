//programa matriz
#include <iostream>
using namespace std;
int main(){
	int i,j,n,m;
	
	cout<<"ingrese el numero de filas de la M.A: "<<endl;
	cin>>m;
	cout<<"ingrese el numero de columnas de la M.A: "<<endl;
	cin>>n;
	
	int MA [m][n];
	i=0;
	do{
		j=0;
		do{
			cout<<"digite un numero entero en M.A["<<i<<"]["<<j<<"]"<<endl;
			cin>>MA[i][j];
			j++;
		}
			while(j<n);
		
		i++;
	}
	while(i<m);
	
	i=0;
	while(i<m){
		
		j=0;
		while(j<n){
			
			cout<<" "<<MA[i][j];
			j++;
			
		}
		cout<<endl;
		i++;
	}
	
	cout<<"el tamanio M.A es: "<<m<<","<<n<<endl;
	system("PAUSE");
	return 0;
}