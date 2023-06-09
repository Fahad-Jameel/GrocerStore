#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include"catalog.h"


using namespace std;

class Inventory {
	char catal1[30];
	int quant;
public:
	bool addfood();
	bool viewfood();
	bool addperish();
	bool addnonperish();
	bool meat();
	bool meatquantity();
	bool vege();
	bool fruit();
	bool dairy();
	bool spice();
	bool snack();
	bool grain();
	bool cereal();
	bool addinven();
	bool viewinven();
	bool addqinven();
	bool addhygene();
	bool viewhygene();
	bool addhouse();
	bool viewhouse();
	bool addqhygene();
	bool addqhouse();
	bool qvege();
	bool qfruit();
	bool qdairy();
	bool qspice();
	bool qsnack();
	bool qgrain();
	bool qcereal();
	bool viewvege();
	bool viewfruit();
	bool viewdairy();
	bool viewspice();
	bool viewsnack();
	bool viewgrain();
	bool viewcereal();
	bool addqfood();
	bool addqperish();
	bool addqnonperish();
	bool viewperish();
	bool viewnonperish();
	bool qmeat();
	bool viewmeat();
	//bool meatquantity();
	bool addphygene();
	bool addphouse();
	bool addpinven();
	bool pvege();
	bool pfruit();
	bool pdairy();
	bool pspice();
	bool psnack();
	bool pgrain();
	bool pcereal();
	bool addpfood();
	bool addpperish();
	bool addpnonperish();
	bool pmeat();
	
};