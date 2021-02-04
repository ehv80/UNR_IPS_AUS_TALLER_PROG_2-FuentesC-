// Archivo: arreglos-dinamicos.cc
#include <iostream>
using namespace std;

class C{
	public:
		C(){ cout << "HOLA! \n"; } /* constructor */
		~C(){ cout << "CHAU! \n"; } /* destructor */
};

int main()
{
	C * a;
	a = new C[5];
	delete[] a;	// para arreglos
	return 0;	// salida OK!
}
// Fin Archivo: arreglos-dinamicos.cc
