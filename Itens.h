#pragma once
#include "libUnicornio.h"
#include "Moedas.h"
#include "Personagem.h"
#include "Moedas.h"


class Itens
{
public:
	Itens();
	~Itens();
	
	void comprar(Moedas* dinheiro, int valor);
	void usarItem(string item, Personagem *personagem);
	
protected:
	int quantidade,valor;
	float x, y;
};

