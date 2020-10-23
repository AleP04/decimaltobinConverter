//CODICE CONVERTITO DA JAVA IN C PER UTILIZZARE I VETTORI AL MEGLIO
#include <stdio.h>

main() {
	int count=0;//contatore per stampare al contrario solo le celle piene dell'array;
	int i=0;//cella array
	int vettore[30000];//array con dimensione provvisoria 30000
		float n;//variabile numero da inserire
        do {//fai
        	printf("Benvenuto in BitVerter, un convertitore di numeri da base decimale a base binaria!\n\n");
            printf("Inserisci il numero in base decimale da convertire in base binaria: ");//sout
            scanf("%f",&n);//input //variabile numero inserito dall'utente
            getchar(); // wait
        } while (n < 0);//check per numeri negativi
        int nc = (int) n;//variabile che splitta il numero in int (casting)
        float nd = n - nc;//variabile che trova la parte decimale attraverso una differenza
        int volte = 0;//volte è la variabile per il numero di cifre dopo la virgola
        if (nd != 0) {// se il numero continene cifre dopo la virgola diverse da zero fai
            printf("\nNumero con la virgola rilevato...");//stampa
            printf("\nInserisci il numero di bit dopo la virgola: ");//stampa
            scanf("%d",&volte);//chiedi il numero di cifre
            getchar(); // wait
        }
        // debug tool System.out.println(nd);
        while (nc > 0) {//ripeti fino a quando non incontri numeri negativi
            if (nc % 2 == 0) {//se la divisione per 2 del numero da resto zero
			vettore[i] = {0};//nella cella i del vettore scrvi zero (nella prima iterazione i è zero)
			i++;//aumenta il valore della cella
			count++;//aumenta di 1 il contatore
    }
             else {//altrimenti
              vettore[i] = {1};//nella cella i del vettore scrvi uno (nella prima iterazione i è zero)
			i++;//aumenta il valore della cella
			count++;//aumenta di 1 il contatore
            }
            
            nc = nc / 2;//dividi il valore per 2, così è pronto per il prossimo giro e controllo
            //System.out.println(n);// debug tool used to check if the value of n is correct
            //ERRORE STAMPA AL CONTRARIO I NUMERI INTERI USA UN VETTORE IN C PER RISOLVERE: IMMAGAZZINA AL CONTRARIO E STAMPA DRITTO. IN JAVA DOVRESTI IMPARARE AD USARE I VETTORI
        }
        for(int i = count-1; i>=0; i=i-1){ //per i=contatore-1; i>=0; i--.
        printf("%d",vettore[i]);//stampa vettore
		}
        if (nd != 0) {// se il numero continene cifre dopo la virgola diverse da zero fai
            printf(".");
            int c = 0;
            while (c != volte)//chiedi all'utente
            {
                nd = nd * 2;//moltiplica per 2
                if (nd >= 1) {//se è maggiore di 1
                    printf("1");//1//stampa 1
                    nd = nd - 1;
                }// e togli 1 per continuare a moltiplicare correttamente
                else {
                    printf("0");//altrimenti 0//stampa 0
                }
                c++;//aumenta di 1 il counter per il numero di cifre decimali(bit)
            }
        }
        printf("\nGrazie per aver usato BitVerter By AleP");
        getchar(); // wait
        return 0;

    }
