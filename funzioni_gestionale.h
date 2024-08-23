FILE *puntatore;
char s[100];
char risposta[10];
int i,n,risposta_dec;//n rappresenta il numero di dati presenti nel documento


//void ritira();
void stampa_file(char file[],int n){
	
	if((puntatore=fopen(file,"r"))==NULL)
		puts("Non puoi aprire il file!");
	else {
		
		for(i=1;i<n;i++){
			fscanf(puntatore,"%s",s);
			printf("%s\n",s);
			}
		}
	
	fclose(puntatore);
}

void stampa_file_elemento(int n){
	
	if((puntatore=fopen("magazzino.txt","r"))==NULL)
		puts("Non puoi aprire il file!");
	else {
		
		for(i=1;i<n;i++){
			fscanf(puntatore,"%s",s);
			
			}
			printf("%s\n",s);
		}
	
	fclose(puntatore);
}

