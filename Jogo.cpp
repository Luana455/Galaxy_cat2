#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(800, 600, false);

	//carrregamento de sprites 
	if (!gRecursos.carregouSpriteSheet("bSair")) { gRecursos.carregarSpriteSheet("bSair", "assets/botoes/bSair.png"); } botoes[bSair].setSpriteSheet("bSair"); botoes[bSair].setPos(420, 400);
	if (!gRecursos.carregouSpriteSheet("bJogar")) { gRecursos.carregarSpriteSheet("bJogar", "assets/botoes/bJogar.png"); } botoes[bJogar].setSpriteSheet("bJogar"); botoes[bJogar].setPos(420, 200);
	if (!gRecursos.carregouSpriteSheet("bCreditos")) { gRecursos.carregarSpriteSheet("bCreditos", "assets/botoes/bCreditos.png"); } botoes[bCreditos].setSpriteSheet("bCreditos"); botoes[bCreditos].setPos(420, 300);


	if (!gRecursos.carregouSpriteSheet("fundo1")) { gRecursos.carregarSpriteSheet("fundo1", "assets/sprites/fundo1.png"); }
	if (!gRecursos.carregouSpriteSheet("fundo2")) { gRecursos.carregarSpriteSheet("fundo2", "assets/sprites/fundo2.png"); }
	if (!gRecursos.carregouSpriteSheet("fundo3")) { gRecursos.carregarSpriteSheet("fundo3", "assets/sprites/fundo3.png"); }
	if (!gRecursos.carregouSpriteSheet("fundo4")) { gRecursos.carregarSpriteSheet("fundo4", "assets/sprites/fundo4.png"); }
	

	if (!gRecursos.carregouSpriteSheet("chao")) { gRecursos.carregarSpriteSheet("chao", "assets/sprites/chao.png"); }
	if (!gRecursos.carregouSpriteSheet("chao2")) { gRecursos.carregarSpriteSheet("chao2", "assets/sprites/chao2.png"); }
	if (!gRecursos.carregouSpriteSheet("chao3")) { gRecursos.carregarSpriteSheet("chao3", "assets/sprites/chao3.png"); }
	if (!gRecursos.carregouSpriteSheet("chao4")) { gRecursos.carregarSpriteSheet("chao4", "assets/sprites/chao4.png"); }
	

	if (!gRecursos.carregouFonte("fonte")) { gRecursos.carregarFonte("fonte", "assets/fontes/fonte_padrao.ttf", 26); }

	if (!gRecursos.carregouSpriteSheet("icon_pontos")) { gRecursos.carregarSpriteSheet("icon_pontos", "assets/sprites/ponto.png"); icon.setSpriteSheet("icon_pontos"); }
	if (!gRecursos.carregouSpriteSheet("icon_dinheiro")) { gRecursos.carregarSpriteSheet("icon_dinheiro", "assets/sprites/dinheiro.png"); icon2.setSpriteSheet("icon_dinheiro");}

	if (!gRecursos.carregouSpriteSheet("menu")) { gRecursos.carregarSpriteSheet("menu", "assets/telas/menu.png"); }
	if (!gRecursos.carregouSpriteSheet("loja")) { gRecursos.carregarSpriteSheet("loja", "assets/telas/loja.png"); }
	if (!gRecursos.carregouSpriteSheet("paused")) { gRecursos.carregarSpriteSheet("paused", "assets/telas/paused.png"); }
	if (!gRecursos.carregouSpriteSheet("creditos")) { gRecursos.carregarSpriteSheet("creditos", "assets/telas/creditos.jpg"); }
	if (!gRecursos.carregouSpriteSheet("gameover")) { gRecursos.carregarSpriteSheet("gameover", "assets/telas/gameover.jpg"); }
    if (!gRecursos.carregouSpriteSheet("levelcomplete")) { gRecursos.carregarSpriteSheet("levelcomplete", "assets/telas/levelcomplete.png"); }
	if (!gRecursos.carregouSpriteSheet("gamecomplete")) { gRecursos.carregarSpriteSheet("gamecomplete", "assets/telas/GameComplete.png"); }


	if (!gRecursos.carregouSpriteSheet("bPlay")) { gRecursos.carregarSpriteSheet("bPlay", "assets/botoes/bPlay.png"); } botoes[bPlay].setSpriteSheet("bPlay");
	if (!gRecursos.carregouSpriteSheet("bLoja")) { gRecursos.carregarSpriteSheet("bLoja", "assets/botoes/bLoja.png"); } botoes[bLoja].setSpriteSheet("bLoja");
	if (!gRecursos.carregouSpriteSheet("bMenu")) { gRecursos.carregarSpriteSheet("bMenu", "assets/botoes/bMenu.png"); } botoes[bMenu].setSpriteSheet("bMenu");
	if (!gRecursos.carregouSpriteSheet("bPause")) { gRecursos.carregarSpriteSheet("bPause", "assets/botoes/bPause.png"); } botoes[bPause].setSpriteSheet("bPause");
	if (!gRecursos.carregouSpriteSheet("bReset")) { gRecursos.carregarSpriteSheet("bReset", "assets/botoes/bReset.png"); } botoes[bReset].setSpriteSheet("bReset");
	if (!gRecursos.carregouSpriteSheet("bFechar")) { gRecursos.carregarSpriteSheet("bFechar", "assets/botoes/bFechar.png"); } botoes[bFechar].setSpriteSheet("bFechar");
	if (!gRecursos.carregouSpriteSheet("bProxfase")) { gRecursos.carregarSpriteSheet("bProxfase", "assets/botoes/bProxfase.png"); } botoes[bProxfase].setSpriteSheet("bProxfase");
	if (!gRecursos.carregouSpriteSheet("bMusica")) { gRecursos.carregarSpriteSheet("bMusica", "assets/botoes/bMusica.png"); } botoes[bMusica].setSpriteSheet("bMusica");
	if (!gRecursos.carregouSpriteSheet("bPocao")) { gRecursos.carregarSpriteSheet("bPocao", "assets/botoes/bPocao.png"); } botoes[bPocao].setSpriteSheet("bPocao");
	if (!gRecursos.carregouSpriteSheet("bMelhoria")) { gRecursos.carregarSpriteSheet("bMelhoria", "assets/botoes/bMelhoria.png"); } botoes[bMelhoria].setSpriteSheet("bMelhoria");
	if (!gRecursos.carregouSpriteSheet("bPoder")) { gRecursos.carregarSpriteSheet("bPoder", "assets/botoes/bPoder.png"); } botoes[bPoder].setSpriteSheet("bPoder");
	if (!gRecursos.carregouSpriteSheet("bPoder2")) { gRecursos.carregarSpriteSheet("bPoder2", "assets/botoes/bPoder2.png"); } botoes[bPoder2].setSpriteSheet("bPoder2");


	if (!gRecursos.carregouAudio("som")) { gRecursos.carregarAudio("som", "assets/som/botao.wav"); som.setAudio("som"); }

	//texto de pontuação e de dinheiro 
	tPontuacao.setAncora(0, 0.5);
	tPontuacao.setFonte("fonte");

	tDinheiro.setAncora(0, 0.5);
	tDinheiro.setFonte("fonte");

	posicaoChao[0].x = 0;
	posicaoChao[0].y = gJanela.getAltura() / 2;
	posicaoChao[1].x = gJanela.getLargura();
	posicaoChao[1].y = gJanela.getAltura() / 2; //seta a posição do chão
	
	personagem->inicializar(); // inicializa o personagem 
	criar_fase(); // inicializa os monstros e as moedas

	carregar_jogo();

	srand(time(0));
	contador = 0;

	telaAtual = tMenu;
	fundo.setSpriteSheet("menu");
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...

	uniFinalizar();
}

void Jogo::resetar()
{
	//metodo para resetar 
	fundo.setSpriteSheet(get_fundo()); // seta o fundo da fase atual 
	personagem->inicializar(); // inicializa novamente o personagem, com hp maximo novamente
	texto->resetarPontuacao(); 
	texto->getPontuacao(dinheiro) == 0; //pontuação e dinheiro voltam para o zero 
	velocidadeCenario = 1; 
	contador = 0;
}

void Jogo::executar()
{
	while(!gTeclado.soltou[TECLA_ESC] && !gEventos.sair  && telaAtual != tSair)
	{
		uniIniciarFrame();

		fundo.desenhar(400, 300);

		switch (telaAtual) // telas 
		{
		case tMenu: telaMenu();
			break;

		case tJogo: telaJogo();
			break;

		case tGameOver: telaGameOver();
			break;

		case tCreditos: telaCreditos();
			break;

		case tPause: telaPause();
			break;

		case tLevelComplete: telaLevelComplete();
			break;

		case tGameComplete: telaGameComplete();
			break;

		case tLoja: telaLoja();
			break;

		}
		uniTerminarFrame();
	}
}

void Jogo::telaJogo()
{
	fundo.desenhar(400, 300);  
	personagem->desenharHP(); // desenha o hp do personagem

	if (!gRecursos.carregouMusica("musicaJogo")) { gRecursos.carregarMusica("musicaJogo", "assets/som/musicaJogo.mp3"); gMusica.tocar("musicaJogo", true); }

	icon.desenhar(315, 20);
	icon2.desenhar(430, 20); // desenha os icones da pontuação e do dinheiro

	botoes[bLoja].setPos(770, 30); botoes[bLoja].desenhar(); botoes[bLoja].atualizar();
	botoes[bPause].setPos(720, 30); botoes[bPause].desenhar(); botoes[bPause].atualizar();
	botoes[bMusica].setPos(670, 30); botoes[bMusica].desenhar(); botoes[bMusica].atualizar();//botões da tela de jogo
	
	if(botoes[bPause].estaClicado() || gTeclado.pressionou[TECLA_P]) { som.tocar(); telaAtual = tPause; gMusica.tocar("musica", true); fundo.setSpriteSheet(get_fundo()); } //pausar o jogo
	if(botoes[bLoja].estaClicado() || gTeclado.pressionou[TECLA_L]) { som.tocar(); telaAtual = tLoja; gMusica.tocar("musica", true); fundo.setSpriteSheet(get_fundo()); } // abrir loja
	if (botoes[bMusica].estaClicado()) { if (gMusica.estaTocando()) { gMusica.pausar(); } else { gMusica.continuar(); } } // pausar musica

	if (!gRecursos.carregouAudio("somGameOver"))
		gRecursos.carregarAudio("somGameOver", "assets/som/gameover.wav");
	somGameOver.setAudio("somGameOver"); // som game over

	tDinheiro.setString(to_string(texto->getPontuacao(dinheiro)));
	tDinheiro.desenhar(440, 20);
	//seta o texto das duas pontuações
	tPontuacao.setString(to_string(texto->getPontuacao(pontos)));
	tPontuacao.desenhar(330, 20);

	chao.desenhar(posicaoChao[0].x, posicaoChao[0].y);
	chao.desenhar(posicaoChao[1].x, posicaoChao[1].y); // desenha o chão 
	

	posicaoChao[0].x -= velocidadeCenario;
	if (posicaoChao[0].x < -gJanela.getLargura() / 2)
		posicaoChao[0].x = gJanela.getLargura() * 1.5 - 4;

	posicaoChao[1].x -= velocidadeCenario;
	if (posicaoChao[1].x < -gJanela.getLargura() / 2)
		posicaoChao[1].x = gJanela.getLargura() * 1.5 - 4; // faz o chão "andar" 

	if (contador < 500) // contador para aumentar a velocidade gradualmente 
		contador++;
	else
	{
		velocidadeCenario += 0.1;
		contador = 0;
	}
	
	if (melhorias->getPocaoVida() == true) // desenha o icone do item caso tenha ele  
	{
		botoes[bPocao].setPos(550, 30); botoes[bPocao].desenhar(); botoes[bPocao].atualizar();

		if (botoes[bPocao].estaClicado())
		{
			som.tocar();
			melhorias->usarItem("pocaoVida", personagem); // usar o item 
			melhorias->setPocaoVida(false);

		}
	}


	if (poder==true)
	{
		botoes[bPoder].setPos(60, 570); botoes[bPoder].desenhar(); botoes[bPoder].atualizar();
		if (botoes[bPoder].estaClicado())
		{
			som.tocar();
			velocidadeCenario--;
			poder = false;

		}
	}

	personagem->atualizar();
	personagem->desenhar();
  
	for (it = moedas.begin(); it != moedas.end(); it++) // lista para desenhar moedas moedas 
	{   
		it->atualizar();
		it->desenhar();
		it->andar(1);

		if (it->getX() < 0)
		{
			if (rand() % 2)
				it->resetar(pontos, mX, rand() % 300 + 100);
			else
				it->resetar(dinheiro, mX, rand() % 300 + 100);

		}
		if (uniTestarColisao(personagem->getSprite(), // testa colisão do personagem com a moeda
			personagem->getX(),
			personagem->getY(),
			0,
			it->getSprite(),
			it->getX(),
			it->getY(),
			0) && it->getViva())
		{
			it->pegar();
			texto->aumentar(it->tipo); //aumenta a pontuação ou dinheiro
		}	
	}
		queue < Inimigos* > fBackup; // fila de inimigos
		for (int i = 0; i < cont_inimigos; i++)
		{
			Inimigos *in = filaInimigos.front();

			fBackup.push(in);

			filaInimigos.pop();

			if (in->vivo)
			{
				in->atualizar(in->tipo);
				in->desenhar();
				in->andar(velocidadeCenario + 0.2);
			}
			if (in->getX() < 0) // reseta o monstro quando ele sai da tela 
			{
				in->setTipo(inimigoAleatorio());
				in->set_x(900);
			}

			if (uniTestarColisao(personagem->getSprite(), // testa colisão com inimigo
				personagem->getX(),
				personagem->getY(),
				0,
				in->getSprite(),
				in->getX(),
				in->getY(),
				0) && in->getVivo())
			{
				personagem->colisao();
				in->colisao();

				if (personagem->getVida() <= 0) // personagem morre 
				{
					somGameOver.tocar();
					telaAtual = tGameOver;
				}
			}
			
			if (poder2 == true)
			{
				if(poder==true)
				{ 
				botoes[bPoder2].setPos(130, 570); botoes[bPoder2].desenhar(); botoes[bPoder2].atualizar();
				}
				else
				{
					botoes[bPoder2].setPos(60, 570); botoes[bPoder2].desenhar(); botoes[bPoder2].atualizar();
				}
				if (botoes[bPoder2].estaClicado())
				{
					som.tocar();
					if (in->getX() >= 0 && in->getX() <= 800) 
					{
						in->matar();
					}
					poder2 = false;

				}
			}
		}
		filaInimigos = fBackup;

		if (telaAtual== tGameComplete)
		{
			while (!filaInimigos.empty())
			{
				filaInimigos.pop();
			}

		}

		if (texto->getPontuacao(pontos)>=6 && get_fase() < 3) // quando chegar em uma determinada pontuação, muda de fase caso não seja a ultima
		{
		
			set_fase(get_fase() + 1); // metodo para mudar de fase 
			texto->resetarPontuacao();
			
			telaAtual = tLevelComplete; // vai para tela de level complete 
		}

		if (texto->getPontuacao(pontos) >= 6 && get_fase() >= 3 ) // se for a ultima fase, vai para tela de game complete 
		{
			telaAtual = tGameComplete;
		}
}


void Jogo::telaMenu()
{
	fundo.desenhar(400, 300); fundo.setSpriteSheet("menu");

	if (!gRecursos.carregouMusica("musicaMenu")) { gRecursos.carregarMusica("musicaMenu", "assets/som/musicaMenu.mp3"); gMusica.tocar("musicaMenu", true); }

	botoes[bMusica].setPos(770, 30); botoes[bMusica].desenhar(); botoes[bMusica].atualizar();
	if (botoes[bMusica].estaClicado()) { if (gMusica.estaTocando()) { gMusica.pausar(); } else { gMusica.continuar(); } } // pausar musica

	botoes[bSair].desenhar(); botoes[bSair].atualizar();
	botoes[bJogar].desenhar(); botoes[bJogar].atualizar(); // botões do menu
	botoes[bCreditos].desenhar(); botoes[bCreditos].atualizar();

	if (botoes[bJogar].estaClicado()) // botao para jogar
	{
		som.tocar();
		gMusica.tocar("musicaJogo", true);

		salvar_jogo();

		fundo.setSpriteSheet(get_fundo());
		
		telaAtual = tJogo;	
	}
	if (botoes[bSair].estaClicado()) { salvar_jogo(); som.tocar(); telaAtual = tSair; } // Sair do jogo
	if (botoes[bCreditos].estaClicado()) { som.tocar(); telaAtual = tCreditos; } //tela de creditos
}

void Jogo::telaGameOver()
{
	gMusica.parar();
	fundo.desenhar(400, 300);
	fundo.setSpriteSheet("gameover");

	botoes[bMusica].setPos(770, 30); botoes[bMusica].desenhar(); botoes[bMusica].atualizar();
	if (botoes[bMusica].estaClicado()) { if (gMusica.estaTocando()) { gMusica.pausar(); } else { gMusica.continuar(); } }

	botoes[bMenu].setPos(gJanela.getLargura() / 2 + 80, 310);
	botoes[bMenu].desenhar();//botões do game over
	botoes[bMenu].atualizar();
	if (botoes[bMenu].estaClicado())
	{
		telaAtual = tMenu;
		carregar_jogo();
		fundo.setSpriteSheet("menu"); // volta para o menu
		gMusica.tocar("musicaMenu", true);
	}
	botoes[bReset].setPos(gJanela.getLargura() / 2 - 80, 310);
	botoes[bReset].desenhar();
	botoes[bReset].atualizar();

	if (botoes[bReset].estaClicado())
	{
		resetar(); // reseta a fase
		telaAtual = tJogo;
		gMusica.tocar("musicaJogo", true);
	}
}

void Jogo::telaPause()
{
	fundo.desenhar(400, 300);
	fundo.setSpriteSheet("paused");

    salvar_jogo(); // salva o jogo quando pausar, para poder ir no menu e voltar na mesma fase
	
	botoes[bMusica].setPos(770, 30); botoes[bMusica].desenhar(); botoes[bMusica].atualizar();
	if (botoes[bMusica].estaClicado()) { if (gMusica.estaTocando()) { gMusica.pausar(); } else { gMusica.continuar(); } }

	botoes[bMenu].setPos(gJanela.getLargura() / 2 + 80, 300);
	botoes[bMenu].desenhar(); //botões da tela de pause
	botoes[bMenu].atualizar();
	if (botoes[bMenu].estaClicado())
	{  
		telaAtual = tMenu; // volta para o menu
		fundo.setSpriteSheet("menu");
		gMusica.tocar("musicaMenu", true);

	}
	botoes[bPlay].setPos(gJanela.getLargura() / 2 - 80, 300);
	botoes[bPlay].desenhar();
	botoes[bPlay].atualizar();

	if (botoes[bPlay].estaClicado() || gTeclado.pressionou[TECLA_M])
	{
		telaAtual = tJogo; // continua jogando
		fundo.setSpriteSheet(get_fundo());
	}
}

void Jogo::telaCreditos()
{
	fundo.desenhar(400, 300);  fundo.setSpriteSheet("creditos"); // tela de creditos

	botoes[bMenu].setPos(400, 300);
	botoes[bMenu].desenhar();
	botoes[bMenu].atualizar();
	if (botoes[bMenu].estaClicado())
	{
		telaAtual = tMenu;
		fundo.setSpriteSheet("menu");
		gMusica.tocar("musicaMenu", true);
	}
}

void Jogo::telaLevelComplete()
{
	fundo.desenhar(400, 300);  fundo.setSpriteSheet("levelcomplete");

	
	tDinheiro.setString(to_string(texto->getPontuacao(dinheiro)));
	tDinheiro.desenhar(375, 200);

	botoes[bMusica].setPos(770, 30); botoes[bMusica].desenhar(); botoes[bMusica].atualizar();
	if (botoes[bMusica].estaClicado()) { if (gMusica.estaTocando()) { gMusica.pausar(); } else { gMusica.continuar(); } }

	botoes[bMenu].setPos(460, 360); botoes[bMenu].desenhar(); botoes[bMenu].atualizar();
	
	botoes[bProxfase].setPos(310, 360); botoes[bProxfase].desenhar(); botoes[bProxfase].atualizar();  // botão para ir pr proxima fase

	salvar_jogo(); // salva o jogo a cada fase completa

	if (botoes[bMenu].estaClicado()) { som.tocar(); telaAtual = tMenu; fundo.setSpriteSheet("menu"); gMusica.tocar("musicaMenu", true); } // Volta pro menu

	if (botoes[bProxfase].estaClicado()) 
	{
		som.tocar();

		switch (get_fase()) // troca as fases
		{
		case 1: set_fundo("fundo2"); fundo.setSpriteSheet(get_fundo()); chao.setSpriteSheet("chao2");  break;
		case 2: set_fundo("fundo3"); fundo.setSpriteSheet(get_fundo()); chao.setSpriteSheet("chao3");  break;
		case 3: set_fundo("fundo4"); fundo.setSpriteSheet(get_fundo()); chao.setSpriteSheet("chao4");  break;
		}
		telaAtual = tJogo;
	}

}

void Jogo::telaGameComplete()
{
	fundo.desenhar(400, 300);  fundo.setSpriteSheet("gamecomplete"); // tela para quando completar o jogo

	tDinheiro.setString(to_string(texto->getPontuacao(dinheiro)));
	tDinheiro.desenhar(375, 200);

	botoes[bMusica].setPos(770, 30); botoes[bMusica].desenhar(); botoes[bMusica].atualizar();
	if (botoes[bMusica].estaClicado()) { if (gMusica.estaTocando()) { gMusica.pausar(); } else { gMusica.continuar(); } }

	botoes[bMenu].setPos(390, 360); botoes[bMenu].desenhar(); botoes[bMenu].atualizar();

	if (botoes[bMenu].estaClicado())  // Só tem opção de voltar para o menu 
	{
		som.tocar(); telaAtual = tMenu; fundo.setSpriteSheet("menu"); gMusica.tocar("musicaMenu", true); resetar(); set_fundo("fundo1"); set_fase(0);
		chao.setSpriteSheet("chao");
	}
}

void Jogo::telaLoja()
{
	fundo.desenhar(400, 300);  fundo.setSpriteSheet("loja");

	tDinheiro.setString(to_string(texto->getPontuacao(dinheiro))); // mostra quando de dinheiro o jogador tem
	tDinheiro.desenhar(35, 20);
	icon2.desenhar(20, 20);

	botoes[bMusica].setPos(710, 30); botoes[bMusica].desenhar(); botoes[bMusica].atualizar();
	botoes[bFechar].setPos(770, 30); botoes[bFechar].desenhar(); botoes[bFechar].atualizar(); //botões da loja

	botoes[bPocao].setPos(294, 150); botoes[bPocao].desenhar(); botoes[bPocao].atualizar();// item de cura
	botoes[bMelhoria].setPos(294, 220); botoes[bMelhoria].desenhar(); botoes[bMelhoria].atualizar();//item de melhoria
	botoes[bPoder].setPos(296, 293); botoes[bPoder].desenhar(); botoes[bPoder].atualizar();
	botoes[bPoder2].setPos(296, 370); botoes[bPoder2].desenhar(); botoes[bPoder2].atualizar();

    if (botoes[bMusica].estaClicado()) { if (gMusica.estaTocando()) { gMusica.pausar(); } else { gMusica.continuar(); } }//pausar musica
	
	if (botoes[bFechar].estaClicado())// voltar para  o jogo
	{
		telaAtual = tJogo; 
		fundo.setSpriteSheet(get_fundo());
	}


	if (botoes[bPocao].estaClicado() && texto->getPontuacao(dinheiro) >= 10)//compra item de poção, o item é desenhado na tela do jogo e ficará disponivel para uso
	{ 
		som.tocar();
		melhorias->comprar(texto,10);
		melhorias->setPocaoVida(true);
	}

	if (botoes[bPoder].estaClicado() && texto->getPontuacao(dinheiro) >= 45)
	{
		som.tocar();
		poder = true;
		texto->gastarDinheiro(45);
		
	}

	if (botoes[bPoder2].estaClicado() && texto->getPontuacao(dinheiro) >= 10)
	{
		som.tocar();
		poder2 = true;
		texto->gastarDinheiro(10);

	}

	if (botoes[bMelhoria].estaClicado() && personagem->getVida() <= 4 && texto->getPontuacao(dinheiro) >= 30) // compra uma melhoria, aumenta a vida maxima para 4 
	{
		som.tocar();
		melhorias->comprar(texto,30);
		melhorias->usarItem("vidaExtra", personagem);
    }
}


void Jogo::criar_fase()
{
	set_fundo("fundo1"); set_fase(0);  // cria a fase 1 
	chao.setSpriteSheet("chao");
	velocidadeCenario = 1.2;

	int x = 100;

	for (int i = 0; i < 4; i++)
	{
		Inimigos *in = new Inimigos(i);
		in->inicializar(inimigoAleatorio(), x, rand() % 400 + 100);
		x += 500;
		adicionar_fila(in); // inicializa inimigos com fila
	}

	mX = 10;
	for (int m = 0; m < 3; m++)
	{
		Moedas *n = new Moedas();//inicializa o dinheiro com lista
		n->inicializar(dinheiro, mX, rand() % 300 + 100);
		mX += 200;
		moedas.push_front(*n);
	}

	for (int m = 0; m < 10; m++)//inicializa as moedas de pontuação com lista
	{
		Moedas *n = new Moedas();
		n->inicializar(pontos, mX, rand() % 300 + 100);
		mX += 200;
		moedas.push_front(*n);
	}
}

void Jogo::adicionar_fila(Inimigos * i)
{
	filaInimigos.push(i); // metodo para adicionar na fila de inimigos

	cont_inimigos++;
}

TipoInimigo Jogo::inimigoAleatorio()
{
	TipoInimigo aleatorio; //metodo para randomizar os inimigos
	int num = rand() % 2;

	if (num == 0)
	{
		aleatorio = inimigo1;
	}
	else
	{
		aleatorio = inimigo2;
	}
	return aleatorio;
}

void Jogo::salvar_jogo()
{
	int  save_int; // Guarda atributos
	bool  save_bool;
	float save_float;

	
	ofstream arquivo_dados("dados.bin", iostream::out | iostream::trunc | ios::binary);
	ofstream arquivo_moedas("moedas.bin", iostream::out | iostream::trunc | ios::binary);
	ofstream arquivo_fase("fase.bin", iostream::out | iostream::trunc | ios::binary);
	ofstream arquivo_personagem("personagem.bin", iostream::out | iostream::trunc | ios::binary);


	save_int = personagem->getVida();  arquivo_personagem.write(reinterpret_cast <const char*> (&save_int), sizeof(int));//salva personagem

	for (it = moedas.begin(); it != moedas.end(); it++) // salvar moedas
	{
		save_int= it->getPontuacao(pontos); arquivo_moedas.write(reinterpret_cast <const char*> (&save_int), sizeof(int));
		save_int = it->getPontuacao(dinheiro); arquivo_moedas.write(reinterpret_cast <const char*> (&save_int), sizeof(int));
	}

	save_int = get_fase(); arquivo_fase.write(reinterpret_cast <const char*> (&save_int), sizeof(int)); //salva fases



	arquivo_personagem.close();
	arquivo_fase.close();
	arquivo_moedas.close();
	

}

void Jogo::carregar_jogo()
{
	int c;
	//metodo para carregar saves
	ifstream arquivo_dados("dados.bin", iostream::out | iostream::trunc | ios::binary);
	ifstream arquivo_moedas("moedas.bin", iostream::out | iostream::trunc | ios::binary);
	ifstream arquivo_fase("fase.bin", iostream::out | iostream::trunc | ios::binary);
	ifstream arquivo_personagem("personagem.bin", iostream::out | iostream::trunc | ios::binary);


	arquivo_fase.read(reinterpret_cast <char*> (&c), sizeof(int));
	arquivo_personagem.read(reinterpret_cast <char*> (&c), sizeof(int));
	

	for (it = moedas.begin(); it != moedas.end(); it++)
	{
		arquivo_moedas.read(reinterpret_cast <char*> (&c), sizeof(float)); it->getPontuacao(pontos); 
		arquivo_moedas.read(reinterpret_cast <char*> (&c), sizeof(float)); it->getPontuacao(dinheiro);
	}

}


