/*********************************************************************
 *
 *  Aufgabe 406e
 *
 *  Implementieren Sie eine Warteschlange in C als einfach verkettete
 *  Liste, indem Sie die vorgegebenen Funktionen
 *
 *    void push(struct Queue *queue, struct SMS *new) und
 *    struct SMS *pop(struct Queue *queue)
 *
 *  füllen. Die main-Funktion ist bereits an anderer Stelle von uns
 *  vorgegeben. Sie erzeugt die SMS-Elemente, füllt diese und übergibt
 *  sie an Ihre Funktion push. Später ruft sie die Elemente wieder mit
 *  Ihrer Funktion pop ab, gibt sie am Bildschrim aus und gibt
 *  abschließend ihren Speicher wieder frei. All das brauchen Sie
 *  nicht zu machen. Sie benötigen in dieser Aufgabe also kein malloc!
 *
 *  Ihre Aufgabe besteht lediglich darin, die bestehenden Elemente in
 *  die Liste einzufügen und aus ihr wieder zu entfernen. All das sind
 *  einfach Zeigeroperationen:
 *
 *  push: Hängen Sie in dieser Funktion das Element new an die Liste
 *    queue hinten (nach dem letzten Element) an. Prüfen Sie dazu
 *    zuerst, ob die Liste leer ist (queue->front und queue->back
 *    gleich NULL); dieser Fall erfordert eine gesonderte
 *    Behandlung. Stellen Sie in jedem Fall auch sicher, dass der
 *    Zeiger next des letzten Elements in der verketteten Liste den
 *    Wert NULL hat.
 *
 *  pop: Nehmen Sie in dieser Funktion das erste Element aus der Liste
 *    heraus und geben Sie einen Zeiger darauf als Rückgabewert
 *    zurück. (Das entnommene Element ist nach dieser Funktion nicht
 *    mehr Teil der Liste!) Sollte die Liste bereits zu Anfang leer
 *    sein (siehe oben), geben Sie NULL zurück. Sollte die Liste nach
 *    der Entnahme leer sein, setzten Sie bitte beide Listenzeiger
 *    (queue->front und queue->back) auf NULL.
 ***************************ENGLISH*****************************
 Implement a queue in C by filling this list of functions

 *
 * void push(struct Queue *queue, struct SMS *new) und
 *    struct SMS *pop(struct Queue *queue)
 *
 * The main function is already elsewhere
 * specified. It creates the SMS elements, fills them and passes them
 *  them to your Push function. Later she calls the elements again
 * with your function pop , outputs them on screen and 
 * free their memory. All that you need
 *  not to make. So you do not need malloc in this task!
 *
 Your task is simply to add the elements in
 * the list and remove them. All these are
 * simple pointer operations:
 *
 * push: In this function, add the element new to the list
  queue behind (after the last element). Check this
 * First, if the list is empty (queue-> front and queue-> back
 *    equals zero); this case requires a separate
 * Treatment. In any case, make sure that the
 * Pointer next to the last item in the linked list
 * Value has zero.
 *
 * pop: this function takes the first item from the list
 * and give a pointer to it as the return value
 * (The removed element is not more part of the list after this function!)
   Should the list already empty at the beginning
 * (see above), return NULL. Should the list after
 * that empty, please set both list pointers
 * (queue-> front and queue-> back) to zero.
 *********************************************************************/


#include <stdio.h>
#include <stdlib.h>


struct SMS 
{
	char number[14];
	char text[161];

	struct SMS *next;
};


struct Queue 
{
	struct SMS *front;
	struct SMS *back;
};


void push(struct Queue *queue, struct SMS *new)
{

}


struct SMS *pop(struct Queue *queue)
{

}
