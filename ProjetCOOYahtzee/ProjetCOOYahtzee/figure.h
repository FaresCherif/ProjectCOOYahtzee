#pragma once
#include "de.h"

namespace COO {
	class figure {
	private:
		int valeur;
	public:
		virtual bool isFigure(de*);
	};
};