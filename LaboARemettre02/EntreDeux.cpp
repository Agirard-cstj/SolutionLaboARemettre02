// But : Demander à l'utilisateur  3 nombres et vérifie si le troisième nombre se situe entre les 2 premiers nombre. Il retourne par la suite le résultat 
// à l'utilisateur
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

   // Initialisation des 3 variables qui seront demandé à l'usager pour qu'il inscrive ses 3 nombres

   int A = 0;
   int B = 0;
   int C = 0;

   // Demande à l'usager ses 3 nombres 
   cout << "Veuillez entrer votre premier nombre : ";
   cin >> A;
   cout << "Veuillez entrer votre deuxième nombre : ";
   cin >> B;
   cout << "Veuillez entrer votre troisième nombre : ";
   cin >> C;

   // Une fonction si qui regarde simultanément si le troisième nombre se situe entre A et B ou si il se situe entre B et C.
   if (C < A && C > B || C < B && C > A)
   // Si C se situe entre A et B ou B et C il ressort que C est entre les deux autres nombre
   {
      cout << C << " est compris entre " << A << " et " << B;
   }

   // Si C ne se situe pas entre A et B ou B et C il ressort que C n'est pas entre les deux autres nombre
   else
   {
      cout << C << " n'est compris entre " << A << " et " << B;
   }


}

/* Plan de test
*  A        B           C        C entre A et B ou B et A
*  3        6           9              non
* -21       62          0              oui
*  30       -3          15             oui
*  6        6           6              non
*  15       17          16             oui
* 
*/