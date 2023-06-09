#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>


using namespace std;

class Catalog{
	char catal[30];
	char ca[10];

public:
	char catal1[30];
	void viewcata();
	bool inmeat();
	bool addcata();
	bool pers_hygine();
	bool viewpers_hygine();
	bool household();
	bool food();
	bool viewfood();
	bool meat();
	bool dairy();
	bool fruit();
	bool vege();
	bool snack();
	bool spice();
	bool grain();
	bool cereal();
	bool viewperis();
	bool perishable();
	bool nonperishable();
	bool viewnonperis();
	bool viewhousehold();
	void write_cata(string file, Catalog obj);

};