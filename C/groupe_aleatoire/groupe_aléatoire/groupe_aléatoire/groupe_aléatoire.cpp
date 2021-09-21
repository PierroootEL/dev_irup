// groupe_aléatoire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <time.h>

int main()
{
 
	int are_ok[12] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	const char *eleves[12];
	eleves[0] = "Pierre";
	eleves[1] = "Louis";
	eleves[2] = "Evan";
	eleves[3] = "Thibault";
	eleves[4] = "Esteban";
	eleves[5] = "Julien";
	eleves[6] = "Enzo";
	eleves[7] = "Jerem";
	eleves[8] = "Théo";
	eleves[9] = "Fredo";
	eleves[10] = "Jeremy";
	eleves[11] = "Rayanne";

	while (true) {

		int eleve1 = 0;
		int eleve2 = 0;
		
		while (are_ok[eleve1] != 1) {
			srand(time(NULL));
			eleve1 = rand() % 12;
		}

		while (eleve1 == eleve2 && are_ok[eleve2] != 1) {
			srand(time(NULL));
			eleve2 = rand() % 12;
		}

		printf("%d \n %d", eleve1, eleve2);

		printf("%s est en groupe avec %s \n", eleves[eleve1], eleves[eleve2]);

		are_ok[eleve1] = 0;
		are_ok[eleve2] = 0;
			
	}

	return 0;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
