#include <iostream>
#include <windows.h>
#include <future>
#include <thread>
#include "emetteur.h"

using namespace std;

static bool delai()
{
	Sleep(5000);
	return true;
}

int main()
{
	future<bool> val = async(std::launch::async, delai);

	Emetteur station;
	while (true)
	{
		station.diffuser();
		Sleep(1000);
		bool tempsEcoule = val.get();
		if (tempsEcoule)
		{
			cout << "Ecoute lancee" << endl;
		}
	}
	return 0;
}