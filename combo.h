#ifndef COMBO_H_INCLUDED
#define COMBO_H_INCLUDED

#include "tipos.h"
#include <vector>

class Combo {

	public:

		Combo();
		Combo(const Bebida b, const Hamburguesa h, const Energia d);

		Bebida      bebidaC() const;
		Hamburguesa sandwichC() const;
		Energia     dificultadC() const;

		void mostrar(std::ostream& os) const;
		void guardar(std::ostream& os) const;
		void cargar (std::istream& is);

		bool operator==(const Combo& otroCombo) const;

	private:

		Bebida      _bebida;
		Hamburguesa _sandwich;
		Energia     _dificultad;

		enum {ENCABEZADO_ARCHIVO = 'C'};

};

// Definirlo usando mostrar, para poder usar << con este tipo.
std::ostream & operator<<(std::ostream & os,const Combo & c);
std::ostream & operator<<(std::ostream & os,const Hamburguesa & c);
std::ostream & operator<<(std::ostream & os,const Bebida & c);


#endif // COMBO_H_INCLUDED
