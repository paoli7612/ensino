# Epsilon 2022-2023
## Tris
### 03.11.2022

Dichiariamo l'esistenza di una funzione chiamata "stampa" che prende un array di 9 **char** e va a stampare a monitor la tabella del tris con quei valori (1, 2...8)
```c++
int stampa (char celle[9]){
	//stampiamo la tabellaa
	cout << "---------" <<endl;
	for(int v=0; v<9; v=v+3){		
		cout << celle[v]<<" | "<<celle[v+1]<<" | "<<celle[v+2]<<endl;
		cout << "---------" <<endl;	
	}
}
```


---

Dichiariamo l'esistenza di un array di **char** e lo riempiamo di "carattere spazio". Dopodichè chiamiamo la funzione stampa passandogli questo array
```c++
	char celle[9];
	for(int c=0; c<9; c++){	
		celle[c]=' ';	
	}
	stampa(celle);
```

---

Chiediamo all'utente un numero intero (presumendolo dallo 0 al 8) e aggiorniamo la tabella secondo tale deisione. In seguito ristampiamo la tabella

```c++
	//chiediamo la cella
	cout << "scegli una casella";
 	int scelta;
 	cin >> scelta;
 	//aggiorniamo la tabella
	celle [scelta] ='x';
 	stampa(celle);
```
