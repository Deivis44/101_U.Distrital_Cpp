#include<iostream>
using namespace std;
int main(){

    int fil1,col1,fil2,col2;
    
    do
    {
    cout<<"Ingrese el valor de la primera matriz"<<endl;cin>>fil1;
    cout<<"Ingrese el valor de la primera matriz"<<endl;cin>>col1;
    cout<<"Ingrese el valor de la primera matriz"<<endl;cin>>fil2;
    cout<<"Ingrese el valor de la primera matriz"<<endl;cin>>col2;
    } while (fil1<0 || col1<0 || fil2<0 || col2<0);

    if(col1==fil2) {
        int A[fil1][col1], B[fil2][col2], C[100][100];
        
        cout<<string(40, '-')<<endl;
        for( int i=0;i<fil1;i++){
            for(int j=0;j<col1;j++){
                cout<<"A["<<i<<"]["<<j<<"]:";
                cin>>A[i][j];
            }
        }
        
        cout<<string(20, '-')<<endl;
        
        for (int i=0;i<fil2;i++){
            for(int j=0;j<col2;j++){
                cout<<"B["<<i<<"]["<<j<<"]:";
                cin>>B[i][j];
            }
        }
        //CALCULO DE C
        for (int i=0;i<fil1;i++) {
            for(int j=0;j<col2;j++) {
                C[i][j] =0;
                for(int k=0; k<fil2 ;k++) {
                    C[i][j] = C[i][j] + (A[i][k]*B[k][j]);
                }
            }
        }

        cout<<"\n";
        cout<<string(40, '-')<<endl;
        cout<<"EL RESULTADO DE LA MATRIZ ES: "<<endl;
        cout<<string(40, '-')<<endl;
        
        for (int i=0;i<fil1;i++) {
            for(int j=0;j<col2;j++) {
                    cout<<"["<<C[i][j]<<"]";
            }
            cout<<"\n";
        }
    }
    else
        cout<<"NO SE PUEDE HACER PRODUCTO DE MATRICES";
    
    return 0;
}