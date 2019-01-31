/*********************************************************************
 *
 *  Aufgabe 206h
 *
  Ihr Programm dieser Aufgabe soll das Bitmuster einer ganzen Zahl
  (int) ausgeben. Hierfür wenden Sie Bitoperatoren (>> und &) an.
 
  Auf dem Arbeitsblatt 2 im Internet finden Sie den Algorithmus in
  verbalisierter Form. Setzen Sie nun den Algorithmus in der Sprache
  C um.

 
 Your program should calcualte the bit pattern of an integer
 (int). To do this, you use bit operators (>> and &).
 
  On the worksheet 2 on the Internet you will find the algorithm in
  verbalized form. Now set the algorithm in the language
  C.
 *********************************************************************/


#include <stdio.h>


int main()
{
int aktBit = 0;
int dezimal = 0;
int i = 0;

printf("Geben Sie bitte eine Dezimalzahl ein: ");
scanf("%i", &dezimal);

if(dezimal < 0)
{
  printf("Die Zahl muss groesser gleich Null sein!\n");
}
else
{
  printf("Die zugehoerige Binaerzahl lautet: ");
  for(i=30; i>=0; i--)
  {
    aktBit = (dezimal >> i);
    aktBit = aktBit & 0x00000001;
    printf("%i", aktBit);
  }
  printf("\n");
}

}
