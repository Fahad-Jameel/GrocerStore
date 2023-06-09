#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include"checkout.h"
#include<stdlib.h>
#include<conio.h>
using namespace std;


class Addcart {

public:
	bool showinven();

	bool viewfood();
	
	
	bool viewhygene();
	
	bool viewhouse();

	bool viewvege();
	bool viewfruit();
	bool viewdairy();
	bool viewspice();
	bool viewsnack();
	bool viewgrain();
	bool viewcereal();
	
	
	bool viewperish();
	bool viewnonperish();

	bool viewmeat();


	//cart
	bool carthygene();

	bool carthouse();
	bool addchouse();
	bool remhouse(int *arr, int size);
	bool tempfile(string myText,int p, int quant);


	//hygene
	bool addchygene();
	bool remhygene(int* arr, int size);

	
	//vege
	bool cartvege();
	bool addcvege();
	bool remvege(int* arr, int size);
	//fruit
	bool cartfruit();
	bool addcfruit();
	bool remfruit(int* arr, int size);
	//dairy
	bool cartdairy();
	bool addcdairy();
	bool remdairy(int* arr, int size);
	//spice
	bool cartspice();
	bool addcspice();
	bool remspice(int* arr, int size);

	//snack
	bool cartsnack();
	bool addcsnack();
	bool remsnack(int* arr, int size);
	//grain
	bool cartgrain();
	bool addcgrain();
	bool remgrain(int* arr, int size);
	//cereal
	bool cartcereal();
	bool addccereal();
	bool remcereal(int* arr, int size);



	//meat
	bool cartmeat();
	bool addcmeat();
	bool remmeat(int* arr, int size);
};