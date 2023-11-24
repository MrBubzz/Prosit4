#include <iostream>
#include "Canal.h"

string canal;

void Canal::transmission(string message)
{
	cout << "Message transmis sur le canal : " << message << endl;
	canal = message;
}

string Canal::canalOut()
{
	return canal;
}