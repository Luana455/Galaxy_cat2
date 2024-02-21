#include "Personagem.h"



Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

void Personagem::inicializar()
{
	if (!gRecursos.carregouSpriteSheet("correndo"))
	{
		gRecursos.carregarSpriteSheet("correndo", "assets/sprites/correndo.png", 1, 8);

	}
	//seta as sprites das animações
	if (!gRecursos.carregouSpriteSheet("caindo"))
	{
		gRecursos.carregarSpriteSheet("caindo", "assets/sprites/caindo.png", 1, 5);

	}

	if (!gRecursos.carregouSpriteSheet("pulando"))
	{
		gRecursos.carregarSpriteSheet("pulando", "assets/sprites/pulando.png", 1, 6);

	}


	vida = 3;//começa com 3 de hp
	x = 50;
	y = 470;
	vivo = true;
}

void Personagem::atualizar()
{
	if (gTeclado.segurando[TECLA_ESPACO] && y > 120) //pilha para setar as animações do personagem
	{
		limparPilha();
		anim.push("pulando"); // animação do personagem subindo 
		sprite.setSpriteSheet(anim.top());
		sprite.avancarAnimacao();
		sprite.setVelocidadeAnimacao(3);
		y -= 1;
	}

	if (y == 120)
	{
		limparPilha();
		anim.push("pulando"); // animação do personagem pulando,porém no limite da tela
		sprite.setSpriteSheet(anim.top());
		sprite.avancarAnimacao();
		sprite.setVelocidadeAnimacao(3);
	}

	if (y < 470 && !gTeclado.segurando[TECLA_ESPACO]) // animação do personagem caindo
	{
		limparPilha();
		anim.push("caindo");
		sprite.setSpriteSheet(anim.top());
		sprite.avancarAnimacao();
		sprite.setVelocidadeAnimacao(3);

		y += 1;
	}
	if (y == 470) // animação do personagem correndo 
	{
		limparPilha();
		anim.push("correndo");
		sprite.setSpriteSheet(anim.top());
		sprite.avancarAnimacao();
		sprite.setVelocidadeAnimacao(3);
	}
}

void Personagem::limparPilha()
{
	while (!anim.empty()) // metodo para limpar a pilha
	{
		anim.pop();
	}
}

void Personagem::desenhar()
{
	sprite.desenhar(x, y);
}

void Personagem::resetar()
{ //reseta o personagem
	x = 50;
	y = 470;
}

void Personagem::colisao()
{
	if(vida != 0) // metodo para colisão, retira 1 de hp 
	{ 
	this->vida -= 1;
    }
}

void Personagem::desenharHP()
{
	//desenha os corações de hp 
	if (!gRecursos.carregouSpriteSheet("HP"))
	{
		gRecursos.carregarSpriteSheet("HP", "assets/sprites/hp.png");
	}

	sprite.setSpriteSheet("HP");
	

	if(vida>=1)
	{
		sprite.desenhar(30, 30);
	}

	if (vida >= 2)
	{
		sprite.desenhar(80, 30);
	}
	
	if (vida >= 3)
	{
		sprite.desenhar(130, 30);
	}

	if (vida >= 4)
	{
		sprite.desenhar(180, 30);
	}
	
}

