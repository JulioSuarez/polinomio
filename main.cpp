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
	// object{
	// string: name
	// int number
	// }
	//
	// object xx = new object();
	// xx.name = "edd"
	// xx.number=123
	//
	// object yy;
	// yy.name="123"
	// yy.number=444

	JCSTPoliV* poliv = new JCSTPoliV(); //opcin 1


//	bool result = poliv.es_cero();
//	if (result) {
//		cout<<"verdad"<<endl;
//	}
//	else {
//		cout<<"falso"<<endl;
//
//	}
	system("pause");


	return 0;
}
