//1.28N LIBRERIA
//bubblesort 1:32 11/12/19
void menu_00(){	
	system("cls");
	printf("----- MAGAZZINO DEL LABORATORIO-----\n\n");
	stampa_file_elemento(2);
    leggi_salva_file_resistenze(elenco_res,RES);
    //stampa_vettore_resistenze(elenco_res, RES);				CONTROLLA CHE HA SALVATO BENE I DATI
    printf("Inserisci un comando (tipo R007100k05):\nR\tritira\nD\tdeposita\nS\tstampa");
	scanf(" %s",risposta);
    estrai(risposta, comando, qta, valore, tolleranza);
    //printf("Comando:\t%s\nQta:\t\t%s\nValore:\t\t%s\nTolleranza:\t%s\n",comando, qta, valore, tolleranza);
    //															CONTROLLA IL COMANDO INSERITO
	int a=0;
	a=cerca_elemento(valore,4,elenco_res);
	elenco_res[a].qta-=atoi(qta);
	//stampa_vettore_resistenze(elenco_res, RES);
	
	switch(comando[0]){
		case 's':{
			stampa_vettore_resistenze(elenco_res, RES);
			break;
		}
		case 'S':{
			stampa_vettore_resistenze(elenco_res, RES);
			break;
		}
		case 'r':{
			elenco_res[a].qta-=atoi(qta);
			break;
		}
		case 'R':{
			elenco_res[a].qta-=atoi(qta);
			break;
		}
		case 'd':{
			elenco_res[a].qta+=atoi(qta);
			break;
		}
		case 'D':{
			elenco_res[a].qta+=atoi(qta);
			break;
		}
		
	}
	scrivi_file_resistenze(elenco_res,RES);
	}
	

void menu_01(){
	system("cls");
	printf("----- MAGAZZINO DEL LABORATORIO-----\n\n");
	stampa_file_elemento(3);
	
}
void menu_02(){
	system("cls");
	printf("----- MAGAZZINO DEL LABORATORIO-----\n\n");
	stampa_file_elemento(4);
	
}
void menu_03(){
	system("cls");
	printf("----- MAGAZZINO DEL LABORATORIO-----\n\n");
	stampa_file_elemento(5);
	
}
void menu_04(){
	system("cls");
	printf("----- MAGAZZINO DEL LABORATORIO-----\n\n");
	stampa_file_elemento(6);
	
}
void menu_05(){
	system("cls");
	printf("----- MAGAZZINO DEL LABORATORIO-----\n\n");
	stampa_file_elemento(7);

}
