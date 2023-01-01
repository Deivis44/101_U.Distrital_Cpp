#include <iostream> // ertrada y salida :v
#include <string> // entrada y salida de variables tipo string
#include <fstream> // para la lectura del archivo .txt
#include <charconv> // Convierte un valor entero o de coma flotante en una secuencia de caracteres.
#include <iterator> // ITERAR= repetir una accion varias veces funcionando como un apuntador "se usa para los getline's"
#include <stdio.h> // input/output del programa

#ifdef __unix__ // biblioteca para .sleep (depende de la version del TDM o unicamente se usarian la 3 primeras)
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif
using namespace std;

int direccion(string orient) {
	int aux;
	if (orient == "E") {
		aux = 62;
	}
	else if (orient == "O") {
		aux = 60;
	}
	else if (orient == "N") {
		aux = 94;
	}
	else if (orient == "S") {
		aux = 118;
	} else {
		cout<<"pa donde miras gil"<<endl;
		aux = 0;
	}
	return(aux);	
}

int error(string str) {
    int num = 0, errores = 0, esp1, esp2, esp3, espacios = 0;
		for(int i = 0; i < str.length(); i++) {  //miro cuantos digitos hay en total
			if(isdigit(str[i])) {
				num++;
			} else {
				espacios++;
			}
		}
    if(espacios > 1) {
        errores++;
    	}

    if (num < 2 or num > 4) {//(test1) el rango de digitos es de 2 a 4/
        errores ++;
    	}

    if(str.length() > 5) {//(test2) para verifiricar que este bien el formato n n o nn nn, tendiendo en cuenta que n es un digito/
         errores ++;
   	 	}

    esp1 = str[1];      //si no hay un espacio en la posicion 1 debe haber uno en el 2 o biseversa/
    esp2 = str[2];
    esp3 = str[0];		//la posicion 0 no debe estar vacia/


    if ((esp1 != 32 and esp2!= 32) or (esp3 == 32) or (esp1  == 32 and esp2 == 32)) {		//(test3) un condicional para verificar que los espacios esten bien/
        errores++;
    }
    return(errores);
}

int posicion_f(string str) {

    int  f,n,errores = 0;

    errores = error(str);

		n = str.length();
		if (errores == 0) {
			switch(n) {
					case 3: //caso donde es (n n)
						f = str[0]-48;
					break;
					case 4: //caso donde es (n nn)o (nn n)
						if(str[1] == 32) {
							f = str[0]-48;
						} else {
							f = (((str[0]-48)*10)+(str[1]-48));
						}
					break;
					case 5: //caso donde es (nn nn)
						f = (((str[0]-48)*10)+str[1]-48);
					break;
				}
		} else {
			cout<<"el formato del texto debe estar de la manera (n n) o (nn nn) "<<endl;
			system("PAUSE");
		}
		return(f);
}

int posicion_c(string str) {

    int  c, n, errores = 0;

		errores = error(str);

		n = str.length();
		if( errores == 0 ) {
			switch(n) {
					case 3: //caso donde es (n n)
						c = str[2]-48;
					break;
					case 4:// caso donde es (nn n) o (nn n)
						if(str[1]==32) {
							c = (((str[2]-48)*10)+(str[3]-48));
						} else {
							c = str[3]-48;
						}
					break;
					case 5: // caso donde es (nn nn)
						c = (((str[3]-48)*10)+str[4]-48);
					break;
				}
		} else{
			cout<<"el formato del texto debe estar de la manera (n n) o (nn nn) "<<endl;
			system("PAUSE");
		}
		return(c);
}

int main () {
    string str, file, nombre;
    ifstream fi;
    int esp1, esp2, esp3, f, c, n, guar, digito, cd, espacios, colum, fin;
    int num = 0, errores = 0, aux, verif, con = 0, cont, auxesp, aux1, aux2, h;
    int posf,posc;
    int objf,objc;

	cout<<"\n"<<endl;
	cout<<string(92, '-')<<endl;
	cout<<"     LL       OOOOO   SSSSS     PPPPPP  IIIII RRRRRR    AAA   TTTTTTT   AAA    SSSSS "<<endl;
	cout<<"     LL      OO   OO SS         PP   PP  III  RR   RR  AAAAA    TTT    AAAAA  SS     "<<endl;
	cout<<"     LL      OO   OO  SSSSS     PPPPPP   III  RRRRRR  AA   AA   TTT   AA   AA  SSSSS "<<endl;
	cout<<"     LL      OO   OO      SS    PP       III  RR  RR  AAAAAAA   TTT   AAAAAAA      SS"<<endl;
	cout<<"     LLLLLLL  OOOO0   SSSSS     PP      IIIII RR   RR AA   AA   TTT   AA   AA  SSSSS "<<endl;
	cout<<"\n"<<endl;
	cout<<"IIIIIL NN   NN FFFFFFF OOOOO  RRRRRR  MM    MM   AAA TTTTTTT IIIII  CCCCC  OOOOO   SSSSS"<<endl;
	cout<<" III   NNN  NN FF     OO   OO RR   RR MMM  MMM  AAAAA  TTT    III  CC     OO   OO SS      "<<endl;
	cout<<" III   NN N NN FFFF   OO   OO RRRRRR  MM MM MM AA   AA TTT    III  CC     OO   OO  SSSSS  "<<endl;
	cout<<" III   NN  NNN FF     OO   OO RR  RR  MM    MM AAAAAAA TTT    III  CC     OO   OO      SS "<<endl;
	cout<<"IIIII  NN   NN FF      OOOO0  RR   RR MM    MM AA   AA TTT   IIIII  CCCCC  OOOO0   SSSSS  "<<endl;
	cout<<string(92, '-')<<endl;
	cout<<string(92, '-')<<endl;
	cout<<"              888888888888888888888888888888888888888888888888888888888888"<<endl;
	cout<<"              888888888888888888888888888888888888888888888888888888888888"<<endl;
	cout<<"              8888888888888888888888888P''  ''9888888888888888888888888888"<<endl;
	cout<<"              8888888888888888P'88888P          988888'9888888888888888888"<<endl;
	cout<<"              8888888888888888  '9888            888P'  888888888888888888"<<endl;
	cout<<"              888888888888888888bo '9  d8o  o8b  P' od88888888888888888888"<<endl;
	cout<<"              888888888888888888888bob 98'  '8P dod88888888888888888888888"<<endl;
	cout<<"              888888888888888888888888    db    88888888888888888888888888"<<endl;
	cout<<"              88888888888888888888888888      8888888888888888888888888888"<<endl;
	cout<<"              88888888888888888888888P'9bo  odP'98888888888888888888888888"<<endl;
	cout<<"              88888888888888888888P' od88888888bo '98888888888888888888888"<<endl;
	cout<<"              888888888888888888   d88888888888888b   88888888888888888888"<<endl;
	cout<<"              8888888888888888888oo8888888888888888oo888888888888888888888"<<endl;
	cout<<"              888888888888888888888888888888888888888888888888888888888888"<<endl;
	cout<<string(92, '-')<<endl;
	cout<<"                     (BIENVENIDO AL JUEGO DE LA BUSQUEDA DEL TESORO)"<<endl;
	cout<<"                          Argh! Ingrese su nombre, pirata: ";cin>>nombre;
	cout<<string(92, '-')<<endl;

    cout <<"Dame el nombre del mapa del tesoro pirata "<<nombre<<" (nombre.txt): ";
    cin >> file;

    fi.open( file );

    if(fi.is_open()) {//verificar si el archivo existe
        getline( fi, str ); // linea 1 = tamaÃ±o del mapa

        f=posicion_f(str);
        c=posicion_c(str);
		if(error(str)!=0){
			cout<<"hay algun error en el txt"<<endl;
			system("PAUSE");
			return 0;
		}else{

        cout<<"El tamanio del mapa es de: ["<<f<<"]"<<"["<<c<<"]"<<endl;
        cout<<string(58, '-')<<endl;
		}

		char mapa[f][c];

		for(int i=0; i < f; i++) { //repeticion para leer cada linea de la matriz
			getline( fi, str ); // linea de la matriz del mapa con minas (1,0)
			colum = 0;
			espacios = 0;

			for(int j=0; j < str.length(); j++) { //columnas
				auxesp = 0;
				auxesp = str[j];
				if (auxesp == 48 or auxesp == 49) {
					mapa[i][colum] = str[j];
					colum++;
				}
				if (j%2 != 0 and auxesp == 32) {
					espacios++;
				}
			}
			if ((c != colum)&&(espacios!=(c-1))) {
				i = f;
				errores = 1;
                cout<<"la matriz esta mal definida verifique los datos"<<endl;
                return 0;
			}
		}
        // imprimir el mapa uwu
		if(errores == 0) {
			for(int i=0; i < f; i++) {
				for(int j=0; j < c; j++) {
					cout<<mapa[i][j]<<" ";
				}
				cout<<endl;
			}
		}

        cout<<string(58, '-')<<endl;
		//posicion del barco

		getline( fi, str ); // linea de la posicion inicial
        posf=posicion_f(str)-1;
        posc=posicion_c(str)-1;

        if (posf<=(f-1) && posc<=(c-1) && error(str)==0) { // posicion basica
        	cout<<"Posicion inicial del barco: "<<"["<<posf+1<<"]"<<"["<<posc+1<<"]"<<endl;
        }
		
		else if(posf>(f-1)||posc>(c-1)||(posf)<0||posc<0){ // si se llega a salir del mapa 
			cout<<"te saliste del mapa"<<endl;
			system("PAUSE");
			return 0;
		}
		if (mapa[posf][posc] == 49){ //si lo llega a poner donde esta una mina
			cout<<"Hay una mina donde quiere poner el barquito"<<endl;
			system("PAUSE");
			return 0;
		}

        getline( fi, str ); // linea del destino final
        objf=posicion_f(str)-1;
        objc=posicion_c(str)-1;

		if (posf==objf &&posc==objc){ //por si el objetivo esta en el mismo lugar inicial
			cout<<"la pocicion del tesoro debe ser diferente a la inicial"<<endl;
			system("PAUSE");
			return 0;
		}
		
        if (objf<=(f-1) && objc<=(c-1) && error(str)==0 ) {
        	cout<<"Destino final del barco: "<<"["<<objf+1<<"]"<<"["<<objc+1<<"]"<<endl;
        	
        }else if (mapa[objf][objc] == 49){//por si hay una mina en la posicion final
			cout<<"Hay una mina donde quiere poner el tesoro"<<endl;
			system("PAUSE");
			return 0;
		}else if(objf<0||objc<0||objf>(f-1)||objc>(c-1)){ //se salio del mapa
            cout<<"destino final del barco invalido, por favor verifique."<<endl;
			system("PAUSE");
			return 0;
        }

        // orientacion del barco
        getline( fi, str ); // linea de la orientacion ("N","O","S","E")
		string orient;
		int auxo = str[0];

        orient=str[0];
		if (auxo==69 or auxo==78 or auxo==79 or auxo==83) { //69=E 78=N 79=O 83=S
        cout<<"Orientacion del barco: "<<orient<<endl; //pasar de ascii al caracter xd
		} else {
			cout<<"La orientacion esta mal"<<endl;
		}

        // guardar la cantidad de movs que hara
		getline(fi, str); // linea de cantidad de movs
		int moves;
		auxo = 0;
		for (int i = 0; i < 2; i++ ) { //cuenta la cantidad de digitos que haya
			if (isdigit(str[i])) {
				auxo++;
			}
		}
		if (str.length() == 1 && auxo ==1) { //un solo digito
			moves = str[0]-48;
		}
		if (str.length() == 2 && auxo ==2) { // dos digitos
			moves = (((str[0]-48)*10)+str[1]-48);
		}
		cout<<"Movimientos del barco: "<<moves<<endl;

		int cond = 0, espa=0;
        char ctrl[moves];
		if (moves > 1 && moves <= 40) { // guardar los movs ("A","D","I") y luego comparar con la cantidad
			getline(fi, str); // linea de los movs que hace

			for(int j = 0; j < str.length(); j++) {
				auxo = 0;
				auxo = str[j];
                if (auxo == 68 or auxo == 65 or auxo == 73) {
					ctrl[cond] = auxo;
					cond++; //cond == moves /
				} else {
					espa++;
				}
            }
		} else {
			cout<<"Los movimientos exceden el rango (40) o hay mas espacios de los necesarios"<<endl;
		}

        //movimientos dados por el usuario en el txt
		int aux1;
		if (moves == cond && espa == (moves-1)) {
			cout<<"Secuencia de movimientos: ";
			for (int i = 0; i < moves; i++) {
				cout<<ctrl[i]<<" ";
			}
		}//termina de leer el txt
		if (moves != cond || espa != (moves-1)) {
		    cout<<"el numero de movimientos no coincide con los movimientos dados."<<endl;
			cout<<"Tambien puede ser que el formato este mal, ya que no deben haber espacios al principio, ni al final."<<endl;
			cout<<"Ejemplo de formato: (D D A A A I)."<<endl;
		}
		
		cont=0;
		cout<<endl;
		cout<<endl;
		while(!fi.eof()) {  //si hay datos de mas en el txt, los detectos con la herramienta .eof()/
            getline(fi,str); // busco linea por linea donde esta el error  // .eof(), sirve para mirar si ya no hay nada en el txt. ! -> negar lo que hace la herramienta/
        	aux2 = str.length(); //si el string tiene algo, sera mayor a 0 (aux > 0)/
            if(aux2 > 0) { //ejecuto el condicional cuando encuentre la linea con el error/
                cout<<"Hay datos innecesarios en la linea "<<((f+7)+cont)<<", como: "<<str<<endl; //digo exactamente en que linea esta el dato/
                system("PAUSE");
				return 0;
            }
            cont++;
        }
		
        cout<<"\n";
        cout<<string(58, '-')<<endl;
		system("PAUSE");
		
		mapa[posf][posc]=direccion(orient);//posicion inicial
		mapa[objf][objc]=2;  //posicion objetivo

		//condicionales para ubicar el tanque tener en cuenta posf y posc ya que es la ubicacion dada
		system("cls");
			cout<<"  ______________________________________________________"<<endl; 
			cout<<" /  \\                                                   \\"<<endl; 
			cout<<"|    |    d8P                                            |"<<endl; 
			cout<<" \\___| d888888P                                          |"<<endl; 
			cout<<"     |   ?88'   d8888b .d888b, d8888b   88bd88b d8888b   |"<<endl;
			cout<<"     |   88P   d8b_,dP ?8b,   d8P' ?88  88P'  `d8P' ?88  |"<<endl; 
			cout<<"     |   88b   88b       `?8b 88b  d88 d88     88b  d88  |"<<endl; 
			cout<<"     |   `?8b  `?888P'`?888P' `?8888P'd88'     `?8888P'  |"<<endl;
			cout<<"     |                                                   |"<<endl; 


			for (int i =0; i < f; i++) {
				cout<<"                 ";
				for (int k = 0; k < c; k++) {
					cout<<"[ "<<mapa[i][k]<<" ]";
				}
				cout<<endl;
			}
			cout<<"     |   ________________________________________________|__"<<endl; 
    		cout<<"     |  /                                                  /"<<endl; 
    		cout<<"     \\_/__________________________________________________/ "<<endl; 
			sleep(1);
		char guard = 0;
		h=0;
		do {//movimientos del txt cobrando vida
			ctrl[h];
			if (ctrl[h] == 'A') {//cuando se mueve para la derecha
				if (mapa[posf][posc]=='>') {//cuando se estrella contra un muro
					if ((posc+1)>(c-1))
					{
						cout<<"exploto por estrellarce contra un muro"<<endl;
						mapa[posf][posc]=157;
						break;
					} else {
						if (mapa[posf][posc+1]==49) { // explota por una mina
							cout<<"exploto por una mina"<<endl;
							guard=mapa[posf][posc];
							mapa[posf][posc]=48;
							mapa[posf][posc+1]=178;
							posc=posc+1;
							break;
						} else {
						guard=mapa[posf][posc];
						mapa[posf][posc]=48;
						mapa[posf][posc+1]=guard;
						posc=posc+1;
						if (mapa[posf][posc]==mapa[objf][objc]) {	//cuando llega al objetivo
							mapa[posf][posc]=1;												
								break;
							}
						}
					}
					
				} else if (mapa[posf][posc]=='v') { // cuando se mueve para abajo
					if ((posf+1)>(f-1)){// explota por estrellarce contra un muro
						cout<<"exploto por estrellarce contra un muro"<<endl;
						mapa[posf][posc]=157;
						break;
					}
					if (mapa[posf+1][posc]==49) { // explota por una mina
						cout<<"exploto por una mina"<<endl;
						guard=mapa[posf][posc];
						mapa[posf][posc]=48;
						mapa[posf+1][posc]=178;
						posf=posf+1;
						break;
					} else {
						guard=mapa[posf][posc];
						mapa[posf][posc]=48;
						mapa[posf+1][posc]=guard;
						posf=posf+1;
						if (mapa[posf][posc]==mapa[objf][objc]) {	//llega al objetivo
							mapa[posf][posc]=1;													
							break;
						}
					}
					 
				} else if (mapa[posf][posc]=='^') {//cuando se mueve para arriba
					if ((posf-1)<0){//cuando se estrella contra un muro
						cout<<"exploto por estrellarce contra un muro"<<endl;
						mapa[posf][posc]=157;
						break;
					}
					if (mapa[posf-1][posc]==49) { // explota por una mina
						cout<<"exploto por una mina"<<endl;
						guard=mapa[posf][posc];
						mapa[posf][posc]=48;
						mapa[posf-1][posc]=178;
						posf=posf-1;
						break;
					} else {
						guard=mapa[posf][posc];
						mapa[posf][posc]=48;
						mapa[posf-1][posc]=guard;
						posf=posf-1;
						if (mapa[posf][posc]==mapa[objf][objc]) { //cuando llega al objetivo
							mapa[posf][posc]=1;														
							break;
						}
					}
					
				} else if (mapa[posf][posc]=='<') {//moverse para la izquierda
					if ((posc-1)<0){//cuando explota por estrellarce contra un muro
						cout<<"exploto por estrellarce contra un muro"<<endl;
						
						mapa[posf][posc]=157;
						break;
					}
					if (mapa[posf][posc-1]==49) { // explota por una mina
						cout<<"exploto por una mina"<<endl;
						guard=mapa[posf][posc];
						mapa[posf][posc]=48;
						mapa[posf][posc-1]=178;
						posc=posc-1;
						break;
					} else {
						guard=mapa[posf][posc];
						mapa[posf][posc]=48;
						mapa[posf][posc-1]=guard;
						posc=posc-1;
						if (mapa[posf][posc]==mapa[objf][objc]) {//cuando llega al objetivo
							mapa[posf][posc]=1;						
							break;
						}
					}
				}

			} if (ctrl[h] == 'I') {//girar a la izquierda
				if (mapa[posf][posc]=='>') {
					mapa[posf][posc]=94;
				} else if (mapa[posf][posc]=='v') {
					mapa[posf][posc]=62;
				} else if (mapa[posf][posc]=='^') {
					mapa[posf][posc]=60;
				} else if (mapa[posf][posc]=='<') {
					mapa[posf][posc]=118;
				}
			} if (ctrl[h] == 'D') {//girar a la derecha
				if (mapa[posf][posc]=='>') {
					mapa[posf][posc]=118;
				} else if (mapa[posf][posc]=='v') {
					mapa[posf][posc]=60;
				} else if (mapa[posf][posc]=='^') {
					mapa[posf][posc]=62;
				} else if (mapa[posf][posc]=='<') {
					mapa[posf][posc]=94;
				}
			} 
			
			system("cls");
			cout<<"  ______________________________________________________"<<endl; 
			cout<<" /  \\                                                   \\"<<endl; 
			cout<<"|    |    d8P                                            |"<<endl; 
			cout<<" \\___| d888888P                                          |"<<endl; 
			cout<<"     |   ?88'   d8888b .d888b, d8888b   88bd88b d8888b   |"<<endl;
			cout<<"     |   88P   d8b_,dP ?8b,   d8P' ?88  88P'  `d8P' ?88  |"<<endl; 
			cout<<"     |   88b   88b       `?8b 88b  d88 d88     88b  d88  |"<<endl; 
			cout<<"     |   `?8b  `?888P'`?888P' `?8888P'd88'     `?8888P'  |"<<endl;
			cout<<"     |                                                   |"<<endl; 


			for (int i =0; i < f; i++) {
				cout<<"                 ";
				for (int k = 0; k < c; k++) {
					cout<<"[ "<<mapa[i][k]<<" ]";
				}
				cout<<endl;
			}
			cout<<"     |   ________________________________________________|__"<<endl; 
    		cout<<"     |  /                                                  /"<<endl; 
    		cout<<"     \\_/__________________________________________________/ "<<endl; 
			sleep(1);
			h++;
		} while(h<moves);

			system("cls");
			cout<<"  ______________________________________________________"<<endl; 
			cout<<" /  \\                                                   \\"<<endl; 
			cout<<"|    |    d8P                                            |"<<endl; 
			cout<<" \\___| d888888P                                          |"<<endl; 
			cout<<"     |   ?88'   d8888b .d888b, d8888b   88bd88b d8888b   |"<<endl;
			cout<<"     |   88P   d8b_,dP ?8b,   d8P' ?88  88P'  `d8P' ?88  |"<<endl; 
			cout<<"     |   88b   88b       `?8b 88b  d88 d88     88b  d88  |"<<endl; 
			cout<<"     |   `?8b  `?888P'`?888P' `?8888P'd88'     `?8888P'  |"<<endl;
			cout<<"     |                                                   |"<<endl; 
			
			for (int i =0; i < f; i++) {
				cout<<"                 ";
				for (int k = 0; k < c; k++) {
					cout<<"[ "<<mapa[i][k]<<" ]";
				}
				cout<<endl;
			}
			cout<<"     |   ________________________________________________|__"<<endl; 
    		cout<<"     |  /                                                  /"<<endl; 
    		cout<<"     \\_/__________________________________________________/ "<<endl;
			sleep(1);
			system("PAUSE");

			
			fin = mapa[posf][posc];
			
			//system("cls");
		if (mapa[posf][posc]==1) {//cuando gana
			cout<<"--------------- EUREKA! ---------------"<<endl;
			cout<<"En "<<h+1<<" pasos llegamos al tesoro pirata "<<nombre<<endl;
			cout<<"---------------------------------------"<<endl;
			cout<<"\\_/                                   "<<endl;
    		cout<<" |._                                   "<<endl;
    		cout<<" |'.'-._.-''--.-'-.__.-'/              "<<endl;
    		cout<<" |  \\       .-.        (              "<<endl;
    		cout<<" |   |     (@.@)        )              "<<endl;
    		cout<<" |   |   '=.|m|.='     /               "<<endl;
			cout<<" |  /    .='`'``=.    /                "<<endl;
    		cout<<" |.'                 (                 "<<endl;
			cout<<" |.-'-.__.-''-.__.-'-.)                "<<endl;
    		cout<<" |                                     "<<endl;
   	 		cout<<" |                                     "<<endl;
    		cout<<" |                                     "<<endl;
			cout<<"---------------------------------------"<<endl;
			system("PAUSE");
             
		} 
		if (mapa[posf][posc]=='<' || mapa[posf][posc]=='v'||mapa[posf][posc]=='^'||mapa[posf][posc]=='>') {//cuando no llega al objetivo pero no muere
			cout<<"----- Por las barbas de Neptuno! ------"<<endl;
			cout<<"  Nos hemos perdido pirata "<<nombre<<endl;
			system("PAUSE");
		}
		if (fin==-99) {//cuando muere por estrellarce
			cout<<string(40, '-')<<endl;
			cout<<"se estrello contra un muro"<<endl;
			cout<<string(40, '-')<<endl;
			cout<<"   d8b                                     "<<endl;
			cout<<"   ?88                                     "<<endl;
			cout<<"    88b                                    "<<endl;
			cout<<"    888888b   d8888b   d8888b   88bd8b,d88b  "<<endl;
			cout<<"    88P `?8b d8P' ?88 d8P' ?88  88P'`?8P'?8b "<<endl;
			cout<<"   d88,  d88 88b  d88 88b  d88 d88  d88  88P "<<endl;
			cout<<"  d88'`?88P'  ?8888P'`?8888P' d88' d88'  88b "<<endl;
			system("PAUSE");
		} 
		if (fin==-78) { //cuando muere por una mina
			cout<<string(40, '-')<<endl;
			cout<<"se exploto por una mina"<<endl;
			cout<<string(40, '-')<<endl;
			cout<<"   d8b                                     "<<endl;
			cout<<"   ?88                                     "<<endl;
			cout<<"    88b                                    "<<endl;
			cout<<"    888888b   d8888b   d8888b   88bd8b,d88b  "<<endl;
			cout<<"    88P `?8b d8P' ?88 d8P' ?88  88P'`?8P'?8b "<<endl;
			cout<<"   d88,  d88 88b  d88 88b  d88 d88  d88  88P "<<endl;
			cout<<"  d88'`?88P'  ?8888P'`?8888P' d88' d88'  88b "<<endl;
			system("PAUSE");
		}

		fi.close();
	} else {//condicional para mostrar que no existe el archivo
		cout << "\nEl archivo no existe"<<endl;
		system("PAUSE");
		return 0;
	} 
	
	string nombreArchivo = "ROBCOM.txt"; //Creo un txt para la salida llamada "ROBCOM.txt/
        ofstream archivo; //creo el txt
        archivo.open(nombreArchivo.c_str(), fstream::out); // abro el archivo

    if(errores == 0) { //si no hubo errores en el txt de los datos del juego/
        if(  fin == 1 ) { ///si gano el robot, la salida sera "C"/
            archivo << "C";
        } else{ 
            archivo << "E"; //si perdio el robot, la salida en el txt sera "E"
        }
    } else{ //Si hubo un error en la lectura del txt de los datos del juegos/
        cout<<"hay errores en el txt";
        archivo << ""; //limpio el txt "ROBCOM.txt"/
		system("PAUSE");
    }
    archivo.close(); //Cierro el archivo ROBCOM.txt/
	return 0;
}