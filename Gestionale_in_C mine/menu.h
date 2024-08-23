//bubblesort 1:32 11/12/19
void menu_00(){
    system("cls");
    printf("----- MAGAZZINO DEL LABORATORIO-----\n\n");
    stampa_file_elemento(2);
    leggi_salva_file_R(elenco_res,RES);
    scanf(" %s",risposta);
    estrai(risposta, &comando, qta, valore, tolleranza);
    printf("Comando:\t%c\nQta:\t\t%s\nValore:\t\t%s\nTolleranza:\t%s\n",comando, qta, valore, tolleranza);
    scrivi_file_R(elenco_res,RES);
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