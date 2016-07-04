/* queue.h -- interface for a queue */
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

/* Hier Element-Type definieren */
typedef int Item; //for use_q.c

#define MAXQUEUE 10

typedef struct node
{
    Item item;
    struct node * next;
} Node;

typedef struct queue
{
    Node * front;
    Node * rear;
    int items;
} Queue;

/* Funktion: Initialisieren der Queue mit lauter leeren Elementen
   Vorbedingung: pc zeigt auf Queue
   Nachbedingung: die Queue ist mit leeren Elementen vorbesetzt*/
void InitializeQueue(Queue * pc);

/* Funktion: Prüfe, ob die Queue voll ist. Gibt TRUE zurück, wenn sie voll ist.
   Vorbedingung: pq zeigt auf eine vorher initialisierte Queue
   Nachbedingung: gibt TRUE zurück, wenn die Queue voll ist, sonst FALSE*/
bool QueueIsFull(const Queue * pq);

/* Funktion: Prüfe, ob die Queue leer ist.
   Vorbedingung: pq zeigt auf eine vorher initialisierte Queue
   Nachbedingung: Gibt TRUE zurück, wenn sie leer ist */
bool QueueIsEmpty(const Queue * pq);

/* Funktion: Bestimme Anzahl der Elemente in der Queue.
   Vorbedingung: pq zeigt auf eine vorher initialisierte Queue
   Nachbedingung: Gibt die Anzahl der Elemente in der Queue zurück */
int QueueItemCount(const Queue * pq);

/* Funktion: Füge Element hinzu.
   Vorbedingung: pq zeigt auf eine vorher initialisierte Queue. Das Element
   soll am Ende der Queue eingefügt werden.
   Nachbedingung: Gibt TRUE zurück, wenn Element aufgenommen werden konnte */
bool EnQueue(Item item, Queue * pq);

/* Funktion: Entferne Element aus der Queue.
   Vorbedingung: pq zeigt auf eine vorher initialisierte Queue
   Nachbedingung: das Element am Anfang (front) der Queue wird aus der
   Queue gelöscht und in *pitem kopiert. Wenn ein Element entnommen werden
   konnte, wird TRUE zurück gegeben.
   Falls die Queue leer war, wird FALSE zurück gegeben. */
bool DeQueue(Item *pitem, Queue * pq);

/* Funktion: Queue leeren.
   Vorbedingung: pq zeigt auf eine vorher initialisierte Queue
   Nachbedingung: die Queue ist leer. */
void EmptyTheQueue(Queue * pq);

#endif // _QUEUE_H_


