#include <iostream>
#include "Emetteur.h"
#include "Recepteur.h"

using namespace std;

typedef void (*evt)(const char*);
evt e;

void Emetteur::signal(const char* message)
{
	e = &Recepteur::ecoute;
	e(message);
}