/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package decimal.to.binary.converter;

import java.util.Scanner;

/**
 *
 * @author Ale
 */
public class DecimalToBinaryConverter {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);// costruttore scanner
        float n;//variabile numero da inserire
        do {
            System.out.println("Inserisci il numero da convertire");//sout
            n = sc.nextFloat();//input //variabile numero inserito dall'utente
        } while (n < 0);//check per numeri negativi
        int nc = (int) n;//variabile che splitta il numero in int (casting)
        float nd = n - nc;//variabile che trova la parte decimale attraverso una differenza
        int volte = 0;
        if (nd != 0) {
            System.out.println("Numero con la virgola rilevato...");
            System.out.println("Inserisci il numero di bit dopo la virgola");
            volte = sc.nextInt();
        }
        // debug tool System.out.println(nd);
        while (nc > 0) {//ripeti fino a quando non incontri numeri negativi
            if (nc % 2 == 0) {//se la divisione per 2 del numero da resto zero
                System.out.print("0");//0//stampa zero
            } else {//altrimenti
                System.out.print("1");//1//stampa 1
            }
            nc = nc / 2;//dividi il valore per 2, così è pronto per il prossimo giro e controllo
            //System.out.println(n);// debug tool used to check if the value of n is correct
            //unico problema l'output al contrario
            //finisci suddividento tutto in classi intero e decimale
            //ERRORE STAMPA AL CONTRARIO I NUMERI INTERI
        }
        if (nd != 0) {
            System.out.print(".");

            /*else exit*/
            int c = 0;
            while (c != volte)//chiedi all'utente
            {
                nd = nd * 2;//moltiplica per 2
                if (nd >= 1) {//se è maggiore di 1
                    System.out.print("1");//1//stampa 1
                    nd = nd - 1;
                }// e togli 1 per continuare a moltiplicare correttamente
                else {
                    System.out.print("0");//altrimenti 0//stampa 0
                }
                c++;//aumenta di 1 il counter per il numero di cifre decimali(bit)
            }
        }

    }

}
