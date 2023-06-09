#pragma once



#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;

//abstract class User

class User {

protected:

	char username[30];
	char password[9];
	long long int cnic;

public:

	User();

	User(string un, int cn, string pass);

	void set_cnic(int cn);

	void set_username(string un);

	void set_password(string pass);

	string get_username() const;

	string get_password() const;

	long long int get_cnic() const;

	//pure virtual functions

	virtual bool registeration() = 0;
	virtual bool login() = 0;
	virtual bool sub_menu() = 0;
};