#include "Inimigos.h"



Inimigos::Inimigos(int i)
{
	this->i = i;

	this->vivo = true;
}


Inimigos::~Inimigos()
{
}

void Inimigos::inicializar(TipoInimigo t,float x, float y)
{
	if (!gRecursos.carregouSpriteSheet("inimigo1"))
		gRecursos.carregarSpriteSheet("inimigo1", "assets/armadilhas/inimigo1.png",1,6);

	if (!gRecursos.carregouSpriteSheet("inimigo2"))
		gRecursos.carregarSpriteSheet("inimigo2", "assets/armadilhas/inimigo2.png",1,5);
	//seta as sprites dos inimigos


	if (!gRecursos.carregouAudio("somInimigo"))
		gRecursos.carregarAudio("somInimigo", "assets/som/inimigo.wav");
	som.setAudio("somInimigo"); // seta o som para colisão com inimigo
	

	
	this->tipo = t;
	this->x = x;
	this->y = y;
}

void Inimigos::atualizar(TipoInimigo inimigo)
{
	if (inimigo == inimigo1)
	{
		sprite.setSpriteSheet("inimigo1");
	}
	//atualiza os dois tipos de inimigos
	if (inimigo == inimigo2)
	{
		sprite.setSpriteSheet("inimigo2");
	}
	sprite.avancarAnimacao();
}

void Inimigos::desenhar()
{
	sprite.desenhar(x, y);
}

void Inimigos::resetar(TipoInimigo t, float x, float y)
{
	this->vivo = true; // reseta o inimigo 
	this->tipo = t;
	this->x = x;
	this->y = y;
}

void Inimigos::set_x(float x)
{
	this->x = x;
}

void Inimigos::andar(float vel)
{
	x -= vel; //faz o inimgo andar
}

void Inimigos::colisao()
{
	vivo = false; // faz o inimigo sumir quando tiver colisão e toca um som 
	som.tocar();
}

void Inimigos::matar()
{
	vivo = false;
}
