#pragma hdrstop
#pragma argsused

#ifdef _WIN32
#include <tchar.h>
#else
typedef char _TCHAR;
#define _tmain main
#endif

#include <stdio.h>
#include "JCSTPoliV.h"

int main() {

	JCSTPoliV* poliv = new JCSTPoliV(); // opcin 1

	bool result = poliv->es_cero();
	if (result) {
		cout << "verdad" << endl;
	}
	else {
		cout << "falso" << endl;
	}




	TDAPoli = new JCSTPoliV(); // opcin 2
	bool result2 = TDAPoli->es_cero();
	if (result2) {
		cout << "verdad 2" << endl;
	}
	else {
		cout << "falso 2" << endl;
	}

	system("pause");
	return 0;
}
