#include "Itens.h"



Itens::Itens()
{
}


Itens::~Itens()
{
}

void Itens::comprar(Moedas * dinheiro, int valor)
{
	dinheiro->gastarDinheiro(valor); //metodo de comprar o item
}

void Itens::usarItem(string item, Personagem * personagem)
{
	if (item == "pocaoVida")
	{
		if (personagem->getVida() != 4)
		{
			personagem->setVida(personagem->getVida() + 1); //metodo de usar a poão de cura
		}
	}

	if (item == "vidaExtra")
	{
		personagem->setVida(4); // metodo de usar a melhoria de HP
	}
}
