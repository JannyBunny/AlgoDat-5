#include <stdio.h>
#include <stdlib.h>
#include "queue.h" //Selbtgeschriebene Headerdateien müssen in " " stehen nicht in < >

int main()
{
    Queue line;
    Item temp; //int!!
    char choice;
//    char choice[256]; // test mit einem ARRAY
    bool loop=true;

    InitializeQueue(&line); //Initialize


    while (loop==true) {
    printf("Was soll getan werden?( a:einfuegen; d:herausnehmen; q:quit ) \n");
    //scanf("%c", &choice);
    //getchar();

    choice=getchar();
    getchar();

    //gets(choice); //test mit einem ARRAY
    //switch(choice[0] { //test mit einem ARRAY
    switch (choice) {
        case 'a':
            printf("Bitte einen Wert angeben: ");
            scanf("%d",&temp);
            getchar();
            if(EnQueue(temp,&line))
                printf("Eintrag %d ok\n",temp);
            else
                printf("Fehler: Die Queue ist voll!\n");

            break;

        case 'd':
        if(DeQueue(&temp,&line))
            printf("Item: %d\n",temp);
        else
            printf("Fehler: Die Queue ist leer!\n");
            break;

        case 'q':
            printf("Alles klar. Ciao");
            loop=false;
            break;
//
//        default: //Debug & co
//            printf("Es wurde nichts eingegeben!%d\n",choice);
//            break;
    } //endcase

    } //endwhile
    return 0;
}
