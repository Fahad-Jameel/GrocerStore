#pragma once


#include"User.h"
#include"Admin.h"
#include"Manager.h"
#include"Customer.h"

#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;


class Store {

private:

	int sub_menu_option;
	int usertype;
	int logintype;
	User* user;

public:

	Store();

	void Run();
};