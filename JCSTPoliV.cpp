// ---------------------------------------------------------------------------

#pragma hdrstop

#include "JCSTPoliV.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
using namespace std;

JCSTPoliV *TDAPoli;

JCSTPoliV::JCSTPoliV() {
	nt = 0;
	vc = new int[MAXP];
	ve = new int[MAXP];
}

// ---------------------------------------------------------------------------

bool JCSTPoliV::es_cero() {
	// return nt == 0; // opcion 1

	// opcion 2
	if (nt == 0) {
		return true;
	}
	else {
		return false;
	}
}

int JCSTPoliV::grado() {

	if (nt > 0) {
		int elementoMax = ve[0];
		for (int i = 1; i < nt; i++) {
			if (elementoMax < ve[i]) {
				elementoMax = ve[i];
			}
		}
		return elementoMax;
	}
	else {
		cout << "ERROR: NO EXISTEN TERMINOS\n";
	}
}
