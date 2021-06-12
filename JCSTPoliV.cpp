// ---------------------------------------------------------------------------

#pragma hdrstop

#include "JCSTPoliV.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
using namespace std;

JCSTPoliV::JCSTPoliV() {
	nt = 0;
	vc = new int[MAXP];
	ve = new int[MAXP];
}

// ---------------------------------------------------------------------------

//JCSTPoliV::JCSTPoliV(int nrot) {
//	nt = nrot;
//}

//bool JCSTPoliV::es_cero() {
//	return true;
//}
