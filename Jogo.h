#pragma once
#include "libUnicornio.h"
#include "ctime"
#include <list>
#include <queue>
#include "Personagem.h"
#include "Moedas.h"
#include "Inimigos.h"
#include "Melhorias.h"

enum Telas
{
	tMenu, tPause, tLevelComplete, tJogo, tGameOver, tGameComplete, tCreditos,
	tLoja, tSair
};

enum Botao
{
	bPlay, bProxfase, bPause, bMenu, bLoja, bReset, bFechar, bSair, bCreditos, bJogar, bMusica, bMelhoria,bPocao, bPoder,bPoder2
};

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();
	void resetar();
	void executar();


	void telaMenu();
	void telaJogo();
	void telaGameOver();
	void telaPause();
	void telaCreditos();
	void telaLevelComplete();
	void telaGameComplete();
	void telaLoja();


	void criar_fase();
	void adicionar_fila(Inimigos *i);
    TipoInimigo inimigoAleatorio();

	void setVelocidadeCenario(float v) { this-> velocidadeCenario = v; }
	int getVelocidadeCenario() { return this->velocidadeCenario; }

	void set_fase(int fase) { this->fase = fase; }
	int get_fase() { return this->fase; }

	void set_fundo(string f) { this->f = f; }
	string get_fundo() { return this->f; }


	void salvar_jogo();
	void carregar_jogo();

protected:
	Sprite fundo, chao,icon,icon2;

	Personagem *personagem = new Personagem();
	Moedas *texto = new Moedas();
	Melhorias *melhorias = new Melhorias();
	
	float velocidadeCenario;
	Vetor2D posicaoChao[2], posicaofundo2[2];
	int contador;
	int fase, fases_completas;
	int mX;
	string f;
	bool poder=false,poder2=false;

	int cont_inimigos = 0;
	queue < Inimigos* > filaInimigos; 

	list<Moedas> moedas;
	list<Moedas> :: iterator it;

	Texto tPontuacao, tDinheiro;
	Som som,somGameOver;

	Telas telaAtual;
	BotaoSprite botoes[15];

	
};

