#pragma once
#include "EstadoPG.h"
#include "checkML.h"
#include "Boton.h"

class confPG :
	public EstadoPG
{
public:
	confPG(JuegoPG* Juego);
	~confPG();
private:
	Boton* oldFact; Boton* newFact; Boton* PBBFact;
	static void oldFactC(JuegoPG* juego);
	static void newFactC(JuegoPG* juego);
	static void PBBFactC(JuegoPG* juego);
};

