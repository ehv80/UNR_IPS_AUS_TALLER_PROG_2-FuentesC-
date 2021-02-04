// Archivo: destructores-estructuras.cc
#include <iostream>

struct S{
	int i;
	
	/* constructor */
	S( int i ){ S::i = i; std::cout << " NACE! " << S::i << "\n"; }
	
	/* destructor */
	~S(){ std::cout << i << " EPPA!\n"; }
};

/* estructuras globales */
S a(1), b(2);

int main()
{
	S c(3), d(4);
	std::cout << " bloque! \n";

	/* bloque de código */
	{
		S e(5);
	}

	std::cout << " fin bloque!\n";
	return 0;	// salida OK!
}
// Fin Archivo: destructores-estructuras.cc
