#pragma once

#include"User.h"
#include"Admin.h"
#include"Manager.h"


#include<fstream>
#include<iostream>
#include<string>
#include"addcart.h"
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Customer : public User {

private:

	int account_balance;
	long long int cnic_reset_password;

public:

	Customer();

	void write_customer(string file, Customer obj);

	void display_customer();

	void view_all_customers();

	bool verify_same_cnic_customer(long long int cn);

	bool registeration();

	bool verify_customer_login(string file, char* un, char* pass);

	bool login();

	bool customer_reset_password();

	
	bool sub_menu();

	
};