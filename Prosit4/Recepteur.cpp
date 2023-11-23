#include <iostream>
#include "Recepteur.h"

using namespace std;

void Recepteur::ecoute(const char* message)
{
	cout << message << endl;
}