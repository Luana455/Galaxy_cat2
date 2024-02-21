#pragma once
#include "libUnicornio.h"
#include <ctime>

enum TipoMoeda{dinheiro,pontos};

class Moedas
{
public:
	Moedas();
	~Moedas();

	void inicializar(TipoMoeda t, float x, float y);
	void atualizar();
	void desenhar();
	void resetarPontuacao();

	TipoMoeda tipo;
	Sprite getSprite() { return sprite; }
	float getX() { return x; }
	float getY() { return y; }
	bool getViva() { return viva; }
	int getPontuacao(TipoMoeda t);
	void gastarDinheiro(int dinheiro) { valorDinheiro -= dinheiro; }

	void andar(float vel);
	void aumentar(TipoMoeda t);
	void pegar();
	void resetar(TipoMoeda t, float x, float y);

protected:
	Sprite sprite;
	float x, y;
	int valorPontos=0,valorDinheiro=0;
	bool viva;
	Som som;
	

};

