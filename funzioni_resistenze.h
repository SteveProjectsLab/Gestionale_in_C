typedef struct{
	char ohm[5];
	char tolleranza[4];
	int qta;
}Resistenza;
#define RES 100
 Resistenza elenco_res[RES];
 


 
void scrivi_file_resistenze(Resistenza buffer[] ,int n){
	
	if((puntatore=fopen("00resistenze.txt","w"))==NULL)
		puts("Non puoi aprire il file!");
	else{
		for(i=0;i<n;i++)
		
		fprintf(puntatore,"%s %s %d\n",elenco_res[i].ohm,elenco_res[i].tolleranza,elenco_res[i].qta);
	}
	fclose(puntatore);
	
}
void leggi_salva_file_resistenze(Resistenza buffer[],int n){

	
	if((puntatore=fopen("00resistenze.txt","r"))==NULL)
		puts("Non puoi aprire il file!");
	else{
		for(i=0;i<n;i++)
		
		fscanf(puntatore,"%s %s %d",&elenco_res[i].ohm,&elenco_res[i].tolleranza,&elenco_res[i].qta);
	}
	fclose(puntatore);
	
}
void stampa_vettore_resistenze(Resistenza buffer[], int n)
{
    printf("\n");
    for (i = 0; i < n; i++){
       
        printf("%s %s %d\n",elenco_res[i].ohm,elenco_res[i].tolleranza,elenco_res[i].qta);
		}
    printf("\n");
}

char comando[1], qta[4], valore[5], tolleranza[3];  //dim sempre più uno: ['0', '0', '7', '\0']

void operazione(char risposta[],int from, int to, char estratto[]){
	int i, j;
	
	for (j = 0, i = from; i <= to; j++, i++)
		estratto[j] = risposta[i];
		
	estratto[j+1]= '\0';
}

void getComando(char risposta[],char estratto[]) {
	operazione(risposta, 0, 0, estratto);
}

void getQta(char risposta[],char estratto[]) {
	operazione(risposta, 1, 3, estratto);
}

void getValore(char risposta[],char estratto[]) {
	operazione(risposta, 4, 7, estratto);
}

void getTolleranza(char risposta[],char estratto[]) {
	operazione(risposta, 8, 9, estratto);
}

void estrai(char risposta[], char comando[], char qta[], char valore[], char tolleranza[]) {
	getComando(risposta, comando);
    getQta(risposta, qta);
	getValore(risposta, valore);
	getTolleranza(risposta, tolleranza);
}

int cerca_elemento(char cercato[], int dim_cercato,Resistenza elenco_res[]){
	for(i=0;i<RES;i++){
		if(strncmp(elenco_res[i].ohm,cercato,dim_cercato)==0)
		return i;
	 
	}
	return -1;
	
	

}





