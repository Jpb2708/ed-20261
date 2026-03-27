#ifndef AGENDA.H
#include AGENDA.H

#define LIMITE 100
typedef struct contato_t {
    char nome[100];
    char telefone[21];
}
typedef struct agenda_t{

    Contato contatos [LIMITE];
    int tamanho;
    int quantidade;

}
Agenda criar_agenda(int_tamanho);
void adicionar_contato(Agenda *agenda,Contato contato);
void remover_contato(Agenda *agenda,Contato contato);
void bloquear_contato(Agenda *agenda,Contato contato);
void editar_contato(Agenda *agenda,Contato contato);
void listar_contato(Agenda *agenda);
void desbloquear_contato(Agenda *agenda,Contato contato);
#endif


