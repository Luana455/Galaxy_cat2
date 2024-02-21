#include "Moedas.h"



Moedas::Moedas()
{
	
}


Moedas::~Moedas()
{
}

void Moedas::inicializar(TipoMoeda t, float x, float y)
{

	if (!gRecursos.carregouSpriteSheet("dinheiro"))
		gRecursos.carregarSpriteSheet("dinheiro", "assets/sprites/moedas.png", 1, 10);

	//seta os tipos de pontos
	if (!gRecursos.carregouSpriteSheet("pontos"))
		gRecursos.carregarSpriteSheet("pontos", "assets/sprites/pontos.png", 1, 10);

	if (!gRecursos.carregouAudio("somMoeda"))
		gRecursos.carregarAudio("somMoeda", "assets/som/coin.mp3");
	som.setAudio("somMoeda"); // som para colisão com as moedas

	viva = true;
	this->tipo=t;
	this->x = x;
	this->y = y;
	

}

void Moedas::atualizar()
{
	
		if (tipo == dinheiro)
		{
			sprite.setSpriteSheet("dinheiro");
			sprite.avancarAnimacao();
				
		}
		//atualiza moedas
		if (tipo == pontos)
		{
			sprite.setSpriteSheet("pontos");
			sprite.avancarAnimacao();
				
	    }
	
}

void Moedas::desenhar()
{
	if(viva)
	{
		sprite.desenhar(x, y);
    }		
}

void Moedas::resetarPontuacao()
{
	valorPontos = 0; //reseta a pontuação
	
}


int Moedas::getPontuacao(TipoMoeda t)
{
	if (t == pontos)
	{
		return valorPontos;
	}
	//retorna o valor de alguma das moedas
	if (t == dinheiro)
	{
		return valorDinheiro;
	}
}

void Moedas::andar(float vel)
{ 
	x -= vel;	//faz as moedas andarem 
}

void Moedas::pegar()
{
	som.tocar(); // toca o som das moedas e faz elas sumirem 
	viva = false;
	
}

void Moedas::aumentar(TipoMoeda t) 
{
	if (t == dinheiro) 
	{
		this->valorDinheiro += 1;
	}
	//aumenta a pontuação ou o dinheiro
	else 
	{
		this->valorPontos += 2;
	}
}

void Moedas::resetar(TipoMoeda t, float x, float y)
{ 
	// reseta as moedas
	viva = true;
	this->tipo = t;
	this->x = x;
	this->y = y;
}
