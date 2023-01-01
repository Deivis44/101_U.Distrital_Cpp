#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;
int main()
{
  time_t tiempo;
  char cad[80];
  struct tm *tmPtr;

  tiempo = time(NULL);
  tmPtr = localtime(&tiempo);
  strftime( cad, 80, "%H:%M.%S, %A de %B de %Y", tmPtr );

  cout<<"La hora local es: "<<asctime(tmPtr);
  return 0;
}