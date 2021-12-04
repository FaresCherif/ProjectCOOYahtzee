#pragma once
#include "lancer.h"
#include "tabFigure.h"
#include "figure.h"

namespace COO {

	class joueur {
	private:
		int point;
		lancer lancer;
		tabFigure tabFigure;
		figure figureActuel;
	public :
		joueur();
		void lancer();
	};
}