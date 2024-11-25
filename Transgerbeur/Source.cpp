

#include <iostream>
using namespace std;


int main()
{
	cout << "Trangerbeur" << endl;

	
	

	union Ucontenu
	{
		struct palette;
		struct roueau;

	};
	enum EEtat
	{
		vide = 0,
		palette = 1,
		rouleau = 2,
	};

	struct Srouleau
	{
		float longeur;
		int numero;
	};
	struct casier
	{
		
		int py;
		int pi;
	};
	struct TabCasier
	{
		int SCasier[10] = { 0,1,2,3,4,5,6,7,8,9 };
	};
	struct SPalette
	{
		int poids;
		char reference[19];
	};



}
