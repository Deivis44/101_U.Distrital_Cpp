#include<iostream>
using namespace std;

int fib(int x) {
    if (x == 0){
        return 0;
    }
    if (x == 1){
        return 1;
    }
    return  fib(x-2)+fib(x-1);
}

int main() {
    int n;
    cout<<"Ingrese n: ";cin>>n;
    cout << fib(n) << endl;
    return 0;
}