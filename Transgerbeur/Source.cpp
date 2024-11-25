

#include <iostream>
using namespace std;

struct SRouleau
{
	float longeur;
	int numero;
};

struct TabCasier
{
	int SCasier[10] = { 0,1,2,3,4,5,6,7,8,9 };
};
struct SPalette
{
	int poids;
	char reference[20];
};

union Ucontenu
{
	SPalette paletteCasier;
	SRouleau rouleauCasier;

};
struct SCasier
{
	int py;
	int pX;
	Ucontenu contenu;
};
enum EEtat
{
	vide = 0,
	palette = 1,
	rouleau = 2,
};

int main()
{
	cout << "Trangerbeur" << endl;

	
	SRouleau ro1 = { 10.5,552 };
	SPalette pa1;
	pa1.poids = 101.2;
	strcpy_s(pa1.reference, "ref1");

	int etatC1 = vide;

	Ucontenu cont = { pa1 };

	cont.rouleauCasier = ro1;

	SCasier c1;
	c1.contenu.paletteCasier = pa1;

	 
	SCasier c2;
	c2.contenu.paletteCasier = pa1;

	SCasier TCasier[2];
	TCasier[0] = c1;
	TCasier[2] = c2;




}
