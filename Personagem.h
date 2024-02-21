#pragma once
#include "libUnicornio.h"
#include <stack>

class Personagem
{
public:
	Personagem();
	~Personagem();

	void inicializar();
	void atualizar();
	void desenhar();
	void resetar();


	Sprite getSprite() { return sprite; }
	float getX() { return x; }
	float getY() { return y; }
	int getVida() { return vida; }
	void setVida(int vida){ this-> vida = vida; }
	void colisao();
	void desenharHP();
	
	void limparPilha();
	stack<string>anim;
	
	

protected:
	Sprite sprite;
	int vida;
	bool vivo;
	float x, y;
	
};

