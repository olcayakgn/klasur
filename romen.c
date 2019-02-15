/*********************************************************************
 *
 *  Aufgabe 304d
 *
 *  Ihr Programm soll eine römische Zahl in eine arabische Zahl
 *  übersetzen. Lesen Sie dazu eine Zeichenfolge mit einer maximalen
 *  Länge von 15 Zeichen ein. Benutzen Sie hierfür den Text
 *
 *    "Geben Sie bitte eine roemische Zahl ein: "
 *
 *  Berechnen Sie nun die Dezimaldarstellung, wobei Sie Groß- und
 *  Kleinschreibung gleichermaßen berücksichtigen. Geben Sie
 *  anschließend die Zahl in einer eigenen Zeile mit dem Text
 *
 *    "Die arabische Zahl lautet x."
 *
 *  aus. x ist eine einfache ganze Zahl. Sollten Sie auf ein
 *  ungültiges Zeichen stoßen, brechen Sie ihr Programm ohne Ausgabe
 *  ab. Ihr Programm muss aber nicht erkennen, ob die eingegebene Zahl
 *  allen syntaktischen Regeln für römische Zahlen entspricht.
 *
 *  Beachten Sie bitte die Hinweise zu römischen Zahlen auf dem
 *  Arbeitsblatt.
 *
 *********************************************************************/


 #include <stdio.h>


 int main()
 {

   int i = 0, a = 0, b = 0,  c = 0; // a vergleiche mit b, c: ergebnis
   char eingabe[16];

   printf("Geben Sie bitte eine roemische Zahl ein: ");
   scanf("%15s", eingabe);

   for(i=0; eingabe[i]!=0; ++i){
     switch(eingabe[i]){
     case 'i':
     case 'I': a = 1; break;
     case 'v':
     case 'V': a = 5; break;
     case 'x':
     case 'X': a = 10; break;
     case 'l':
     case 'L': a = 50; break;
     case 'c':
     case 'C': a = 100; break;
     case 'd':
     case 'D': a = 500; break;
     case 'm':
     case 'M': a = 1000; break;
         default : return 0;   // wenn schmarnd steht

     }


     switch(eingabe[i+1]){
     case 'i':
     case 'I': b = 1; break;
       case 'v':
     case 'V': b = 5; break;
     case 'x':
     case 'X': b = 10; break;
     case 'l':
     case 'L': b = 50; break;
     case 'c':
     case 'C': b = 100; break;
     case 'd':
     case 'D': b = 500; break;
     case 'm':
     case 'M': b = 1000; break;
     case '\0' : b = 0; break;
         default : return 0;
     }
     if(a<b){
       c = c - a +b ;
       i = i + 1;
     }
     else c = c + a;

   }



   printf("Die arabische Zahl lautet %i.\n", c);


 }
