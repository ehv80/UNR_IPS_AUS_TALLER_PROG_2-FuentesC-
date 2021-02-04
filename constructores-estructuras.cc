// Archivo: constructores-funciones.cc
#include <iostream>

struct S{
	int i;
	/* Constructor de estructura S 
	 * S::i es el nombre totalmente cualificado
	 * 	de la variable entera "i"
	 * 	miembro de la estructura S
	 */
	S( int i ){ S::i = i; };
	/* función f, miembro de la estructura S */
	int f(){ return i; }
};

int main()
{
	S a(10), b(20);
	std::cout << a.f() << ' ' << b.f() << "\n";
	return 0;	// salida OK!
}
// Archivo: constructores-funciones.cc
