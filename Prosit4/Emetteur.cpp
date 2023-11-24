#include <iostream>
#include "Emetteur.h"
#include "Canal.h"

using namespace std;

typedef void (Canal::* ptr)(string); ptr signal = &Canal::transmission;

void Emetteur::envoyer(Canal o, string message)
{
	(o.*signal)(message);
}