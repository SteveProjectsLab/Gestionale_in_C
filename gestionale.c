#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "funzioni_gestionale.h"
#include "funzioni_resistenze.h"
#include "menu.h"


int main(int argc, char *argv[]){
	char fine;
    do{
    printf("----- MAGAZZINO DEL LABORATORIO-----\n\n");
    stampa_file("magazzino.txt",7);
    puts("\nSeleziona una categoria:");
    scanf("%s",risposta);
    if(strcmp(risposta,"00")==0)menu_00();
    else if (strcmp(risposta,"01")==0)menu_01();
    else if (strcmp(risposta,"02")==0)menu_02();
    else if (strcmp(risposta,"03")==0)menu_03();
    else if (strcmp(risposta,"04")==0)menu_04();
    else if (strcmp(risposta,"05")==0)menu_05();
    printf("Continuare? (Premi s per continuare)\n");
    scanf(" %c",&fine);
    }while(fine=='s'||fine=='S');
    puts("\n\t\t\t\t\tArrivederci");
	
	return 0;
	
}

