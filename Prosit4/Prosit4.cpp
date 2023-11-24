#include <iostream>
#include <string>
#include "Emetteur.h"
#include "Canal.h"
#include "Recepteur.h"

using namespace std;

int main()
{
	Emetteur e;
	Canal c;
	Recepteur r;

	e.envoyer(c, "Signal 1");
	r.ecouter(c.canalOut());
}