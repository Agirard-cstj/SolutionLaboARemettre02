// But : Demander � l'utilisateur le nombre de jour de location d'un v�hicule et le nombre de kilom�tre parcourue et retourne par la suite le cout total
// de cette location � l'usager
// Auteur : Alexandre Girard
// Date : 2021-09-07


// Inclusion des biblioth�ques initial 
#include <iostream>
#include <locale>

// Inclusion de namespace std afin de ne pas avoir besoin d'inclure std � toutes les commandes
using namespace std;

// Cr�ation du main pour le programme
int main()
{
   setlocale(LC_ALL, "fra");

   // Initialisation des constantes initiales en double afin de permettre les nombres non entier et d'avoir plus de pr�cision.
  

   // Initialisation de la variable CL : Cout de location
   double CL = 45;
   // Initialisation de la variable CE : Consommation de l'essence
   double CE = 7.6 / 100;
   // Initialisation de la variable CoutE : Cout de l'essence par litre
   double CoutE = 1.35;
   // Initialisation de la variable CKS : Cout par Kilom�tre Suppl�mentaire
   double CKS = 0.05;
   // Initialisation de la variable NbKP : Nombre de Kilom�tre parcourue
   double NbKP = 0;
   // Initialisation de la variable NbJ : Nombre de jour de location
   double NbJL = 0;
   // Initialisation de la variable NbKS : Nombre de kilom�tre suppl�mentaire parcourue
   double NbKS = 0;
   // Initialisation de la variable NbLC : Nombre de litre consomm�
   double NbLC = 0;
   // Initialisation de la variable CEC : Cout de l'essence consomm�
   double CEC = 0;
   // Initialisation de la variable CT : Cout total de la locaion
   double CT = 0;
   // Initialisation de la variable CKSF : Cout du nombre de kilom�tre suppl�mentaire parcourue
   double CKSP = 0;


   // Demande � l'usager le nombre de kilom�tre parcourue 
   cout << "Votre nombre de kilom�tre parcourue : " << endl;
   // Affiche � l'usager o� rentrer son nombre de kilom�tre parcouru
   cin >> NbKP;
   // Demande � l'usager le nombre de jour de location 
   cout << "Votre nombre de jours de locations : " << endl;
   // Affiche � l'usager o� rentrer son nombre de jour de location
   cin >> NbJL;


   // Calcule le nombre de kilom�tre suppl�mentaire parcourue
   NbKS = NbKP - NbJL * 250;

   // Si le nombre de kilom�tre suppl�mentaire parcourue est supp�rieur � 0 le
   // cout du nombre de kilom�tre suppl�mentaire parcourue sera calcul�
   if (NbKS >=0)
   {
      CKSP = NbKS * CKS;
   }
  
   // Calcule le Nombre de litre consomm� en multipliant la consomation d'essence par
   // le nombre de kilom�tre parcourue
   NbLC = CE * NbKP;

   // Calcule du Cout d'essence consomm� en multipliant le Nombre de litre consommm�
   // par le cout en essence par litre
   CEC = NbLC * 1.35;

   // Calcule du cout total en additionnant le cout de location par jour, au cout par kilom�tre
   // suppl�mentaire, au cout de l'essence consomm�
   CT = CL * NbJL + CKSP + CEC;


   // Affichage du cout de location total � l'usager pour sa location
   cout << "Votre location vous couteras : " << CT << endl;

}


/* Plan de test
* Nombre de jour      Nombre de kilom�tre       prix           prix suppos�      Fontionnel
*      5                    956                 323.086        323.086           oui 
*      1                    25                  47.565         47.565            oui
*      4                    1800                404.68         404.68            oui
*      3                    0                   135            135               oui
*      0                    100                 15.26          0                 non, car si aucun nombre de jour il devrait avoir 0 kilom�tre
*/