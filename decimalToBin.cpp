//CODICE CONVERTITO DA JAVA IN C PER UTILIZZARE I VETTORI AL MEGLIO
#include <stdio.h>

main() {
	int revarr[x];//
		float n;//variabile numero da inserire
        do {
            printf("Inserisci il numero da convertire: ");//sout
            scanf("%f",&n);//input //variabile numero inserito dall'utente
        } while (n < 0);//check per numeri negativi
        int nc = (int) n;//variabile che splitta il numero in int (casting)
        float nd = n - nc;//variabile che trova la parte decimale attraverso una differenza
        int volte = 0;
        if (nd != 0) {
            printf("\nNumero con la virgola rilevato...");
            printf("\nInserisci il numero di bit dopo la virgola: ");
            scanf("%d",&volte);
        }
        // debug tool System.out.println(nd);
        while (nc > 0) {//ripeti fino a quando non incontri numeri negativi
            if (nc % 2 == 0) {//se la divisione per 2 del numero da resto zero
                printf("0");//0//stampa zero
            } else {//altrimenti
                printf("1");//1//stampa 1
            }
            nc = nc / 2;//dividi il valore per 2, così è pronto per il prossimo giro e controllo
            //System.out.println(n);// debug tool used to check if the value of n is correct
            //ERRORE STAMPA AL CONTRARIO I NUMERI INTERI USA UN VETTORE IN C PER RISOLVERE: IMMAGAZZINA AL CONTRARIO E STAMPA DRITTO. IN JAVA DOVRESTI IMPARARE AD USARE I VETTORI
        }
        if (nd != 0) {
            printf(".");

            /*else exit*/
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

    }

