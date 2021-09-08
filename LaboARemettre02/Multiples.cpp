// But : Demander à l'utilisateur  un nombre qui sera par la suite analysé par le programme afin de vérifier si celui-ci
// est un multiple de 2, un multiple de 3, un multiple de 2 et de 3 ou un non multiple de 2 et de 3.
// Auteur : Alexandre Girard
// Date : 2021-09-07

// Inclusion des bibliothèques initial 
#include <iostream>
#include <locale>

// Inclusion de namespace std afin de ne pas avoir besoin d'inclure std à toutes les commandes
using namespace std;

// Création du main pour le programme
int main()
{
   setlocale(LC_ALL, "fra");

   // Initialisation de la variable A qui est le nombre qui sera demandé à l'usager
   int A = 0;

   // Demande à l'usager d'une valeur pour le programme
   cout << "Votre nombre : ";
   cin >> A;

   // Un if qui vérifie grâce au modulo si le nombre est un multiple de 2 uniquement
   if (A % 2 == 0 && A % 3 !=0)
   {
      cout << A << " est seulement un multiple de 2" << endl;
   }
   // Un else if qui vérifie grâce au modulo si le nombre est un multiple de 3 uniquement
   else if (A % 3 == 0 && A % 2 != 0)
   {
      cout << A << " est seulement un multiple de 3" << endl;
   }
   // Un else if qui vérifie grâce au modulo si le nombre est un multiple de 2 et de 3
   else if (A % 2 ==0 && A % 3 == 0)
   {
      cout << A << " est seulement un multiple de 2 et de 3" << endl;
   }
   // Un else qui dit que A n'est finalement aucune des 3 possibilités précèdente.
   else
   {
      cout << A << " n'est seulement un multiple de 2 et de 3" << endl;
   }

}

/* Plan de test
*  Nombre          Résultat      
*      5            Aucun multiple        
*      1            aucun multiple        
*      4            Multiple de 2       
*      3            Multiple de 3
       18           Multiple de 2 et 3
       6            Multiple de 2 et 3
*/