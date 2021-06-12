// ---------------------------------------------------------------------------

#ifndef JCSTPoliVH
#define JCSTPoliVH
// ---------------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

const int MAXP = 100;

class JCSTPoliV {

private:
	int* vc; // int vc[MAXP];
	int* ve; // int ve[MAXP];
	int nt;

public:
	JCSTPoliV();
	bool es_cero();
	int grado();
};

extern JCSTPoliV *TDAPoli;

#endif
