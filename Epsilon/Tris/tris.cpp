#include <iostream>

using namespace std;
int stampa (char celle[9]){
	//stampiamo la tabellaa
	cout << "---------" <<endl;
	for(int v=0; v<9; v=v+3){		
		cout << celle[v]<<" | "<<celle[v+1]<<" | "<<celle[v+2]<<endl;
		cout << "---------" <<endl;	
	}
}

int main(){
	// inizializziamo l'aray
	char celle[9];
	//settiamo l'array a spazi
	for(int c=0; c<9; c++){	
		celle[c]=' ';	
	}
	stampa(celle);
	//chiediamo la cella
	cout << "scegli una casella";
 	int scelta;
 	cin >> scelta;
 	//aggiorniamo la tabella
	 celle [scelta] ='x';
 	stampa(celle);
 	//chiediamo la cella
	cout << "scegli una casella";
 	cin >> scelta;
 	//aggiorniamo la tabella
	 celle [scelta] ='o';
 	stampa(celle);
}