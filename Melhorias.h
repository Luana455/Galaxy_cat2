#pragma once
#include "Itens.h"
#include "libUnicornio.h"


class Melhorias : public Itens
{
public:
	Melhorias();
	~Melhorias();

	void setPocaoVida(bool b) { pocaoVida = b; } //metodo para setar se tem ou não o item
	bool getPocaoVida() { return pocaoVida; } //metodo para testar se tem o item 

protected:
	bool pocaoVida = false; //bool do item

};

