#define RES 100
#define CON 100
#define DIO 100
#define TRA 100
#define INT 100
#define IND 100
typedef struct{
    char ohm[5];
    char tolleranza[4];
    int qta;
}Resistenza;
typedef struct{
    char farad[5];
    char tipo[2];
    int qta;
}Condensatore;
typedef struct{
    char tipo[5];
    int qta;
}Diodo;
typedef struct{
    char nome[5];
    char tipo[4];
    int qta;
}Transistor;
typedef struct{
    char nome[5];
    int pin;
    int qta;
}Integrato;
typedef struct{
    char henry[5];
    int qta;
}Induttanza;
Resistenza elenco_res[RES];
Condensatore elenco_con[CON];
Diodo elenco_dio[DIO];
Transistor elenco_tra[TRA];
Integrato elenco_int[INT];
Induttanza elenco_ind[IND];
//Funzioni utili
char comando, qta[4], valore[5], tolleranza[3];  //dim sempre più uno: ['0', '0', '7', '\0']
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
//Scrivi
void scrivi_file_R(Resistenza buffer[] ,int n){
    if((puntatore=fopen("00resistenze.txt","w"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fprintf(puntatore,"%s %s %d\n",elenco_res[i].ohm,elenco_res[i].tolleranza,elenco_res[i].qta);
    }
    fclose(puntatore);
}
void scrivi_file_C(Condensatore buffer[] ,int n){
    if((puntatore=fopen("01condensatori.txt","w"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fprintf(puntatore,"%s %s %d\n",elenco_con[i].farad,elenco_con[i].tipo,elenco_con[i].qta);
    }
    fclose(puntatore);
}
void scrivi_file_D(Diodo buffer[] ,int n){
    if((puntatore=fopen("02diodi.txt","w"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fprintf(puntatore,"%s %d\n",elenco_dio[i].tipo,elenco_dio[i].qta);
    }
    fclose(puntatore);
}
void scrivi_file_T(Transistor buffer[] ,int n){
    if((puntatore=fopen("03transistor.txt","w"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fprintf(puntatore,"%s %s %d\n",elenco_tra[i].nome,elenco_tra[i].tipo,elenco_tra[i].qta);
    }
    fclose(puntatore);
}
void scrivi_file_IC(Integrato buffer[] ,int n){
    if((puntatore=fopen("04integrati.txt","w"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fprintf(puntatore,"%s %d %d\n",elenco_int[i].nome,elenco_int[i].pin,elenco_int[i].qta);
    }
    fclose(puntatore);
}
void scrivi_file_I(Induttanza buffer[] ,int n){
    if((puntatore=fopen("05induttanze.txt","w"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fprintf(puntatore,"%s %d\n",elenco_ind[i].henry,elenco_ind[i].qta);
    }
    fclose(puntatore);
}
//Leggi
void leggi_salva_file_R(Resistenza buffer[],int n){
    if((puntatore=fopen("00resistenze.txt","r"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fscanf(puntatore,"%s %s %d",&elenco_res[i].ohm,&elenco_res[i].tolleranza,&elenco_res[i].qta);
    }
    fclose(puntatore);
}
void leggi_salva_file_C(Condensatore buffer[],int n){
    if((puntatore=fopen("01condensatori.txt","r"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fscanf(puntatore,"%s %s %d",&elenco_con[i].farad,&elenco_con[i].tipo,&elenco_con[i].qta);
    }
    fclose(puntatore);
}
void leggi_salva_file_D(Diodo buffer[],int n){
    if((puntatore=fopen("02diodi.txt","r"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fscanf(puntatore,"%s %d",&elenco_dio[i].tipo,&elenco_dio[i].qta);
    }
    fclose(puntatore);
}
void leggi_salva_file_T(Transistor buffer[],int n){
    if((puntatore=fopen("03transistor.txt","r"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fscanf(puntatore,"%s %s %d",&elenco_tra[i].nome,&elenco_tra[i].tipo,&elenco_tra[i].qta);
    }
    fclose(puntatore);
}
void leggi_salva_file_IC(Integrato buffer[],int n){
    if((puntatore=fopen("04integrati.txt","r"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fscanf(puntatore,"%s %d %d",&elenco_int[i].nome,&elenco_int[i].pin,&elenco_int[i].qta);
    }
    fclose(puntatore);
}
void leggi_salva_file_I(Induttanza buffer[],int n){
    if((puntatore=fopen("05induttanze.txt","r"))==NULL)
        puts("Non puoi aprire il file!");
    else{
        for(i=0;i<n;i++)
            fscanf(puntatore,"%s %d",&elenco_ind[i].henry,&elenco_ind[i].qta);
    }
    fclose(puntatore);
}
//Stampa
void stampa_vettore_R(Resistenza buffer[], int n){
    printf("\n");
    for (i = 0; i < n; i++){
        printf("%s %s %d\n",elenco_res[i].ohm,elenco_res[i].tolleranza,elenco_res[i].qta);
    }
    printf("\n");
}
void stampa_vettore_C(Condensatore buffer[], int n){
    printf("\n");
    for (i = 0; i < n; i++){
        printf("%s %s %d\n",elenco_con[i].farad,elenco_con[i].tipo,elenco_con[i].qta);
    }
    printf("\n");
}
void stampa_vettore_D(Diodo buffer[], int n){
    printf("\n");
    for (i = 0; i < n; i++){
        printf("%s %d\n",elenco_dio[i].tipo,elenco_dio[i].qta);
    }
    printf("\n");
}
void stampa_vettore_T(Transistor buffer[], int n){
    printf("\n");
    for (i = 0; i < n; i++){
        printf("%s %s %d\n",elenco_tra[i].nome,elenco_tra[i].tipo,elenco_tra[i].qta);
    }
    printf("\n");
}
void stampa_vettore_IC(Integrato buffer[], int n){
    printf("\n");
    for (i = 0; i < n; i++){
        printf("%s %d %d\n",elenco_int[i].nome,elenco_int[i].pin,elenco_int[i].qta);
    }
    printf("\n");
}
void stampa_vettore_I(Induttanza buffer[], int n){
    printf("\n");
    for (i = 0; i < n; i++){
        printf("%s %d\n",elenco_ind[i].henry,elenco_ind[i].qta);
    }
    printf("\n");
}
