#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
#include"Newage.h"
#include"feedback.h"
using namespace std;

class Checkout  {
public:
	void bill();
	bool calbill();
	bool remtemp();
	bool jazzcash(int total);
	bool easypaisa(int total);
	bool card(int total);
	bool cheque(int total);
};