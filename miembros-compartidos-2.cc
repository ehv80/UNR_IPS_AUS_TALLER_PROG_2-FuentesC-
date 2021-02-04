// Archivo: miembros-compartidos-2.cc

#include <iostream>

struct S{
	int i;
	static int j;
};

// Tanto a, como b, como c, tienen su propio "int i"

int main()
{
	S::j = 13;	
	S a, b, c;
	return 0;	//Salida OK!
}
// Fin Archivo: miembros-compartidos-2.cc
