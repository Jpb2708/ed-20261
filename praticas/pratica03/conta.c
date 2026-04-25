#include <stdio.h>
#include "conta.h"
#include <stdlib.h>

Conta conta_criar(int numero)
{
   Conta c = (Conta) malloc(sizeof(struct conta_t));
    conta.numero = numero;
    conta.saldo = 0.0;
    return conta;
}

void conta_depositar(Conta c, double valor)
{
    conta->saldo += valor;
}

void conta_sacar(Conta c, double valor)
{
    if (conta->saldo >= valor)
    {
        conta->saldo -= valor;
    }
}

double conta_ver_saldo(Conta c)
{
    return conta->saldo;
}