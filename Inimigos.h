#pragma once
#include "libUnicornio.h"
using namespace std;

enum TipoInimigo {inimigo1, inimigo2 };// enum com os dois tipos de inimigos

class Inimigos
{
public:
	Inimigos(int i);
	~Inimigos();

	void inicializar(TipoInimigo t, float x, float y);
	void atualizar(TipoInimigo inimigo);
	void desenhar();
	void resetar(TipoInimigo t, float x, float y); 
	void setTipo(TipoInimigo t) { tipo = t; } 

	Sprite getSprite() { return sprite; }
	float getX() { return x; }
	float getY() { return y; }
	void set_x(float x);
	bool getVivo() { return vivo; }
	void andar(float vel);
	void colisao();
	void matar();
	
	
	TipoInimigo tipo;
	int i;
   bool vivo;

protected:
	Sprite sprite;
	
	float x, y;
	Som som;
};

