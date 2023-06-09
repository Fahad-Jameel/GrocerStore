#pragma once

#include"User.h"
#include"Manager.h"
#include"Customer.h"	
#include"catalog.h"
#include"feedback.h"


#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;


class Admin : public User {

public:

	Admin();

	void write_admin(string file, Admin obj);

	bool registeration();

	bool verify_admin_login(string file, char* un, char* pass);

	bool login();

	bool admin_add_manager();

	bool admin_update_manager();

	bool admin_remove_manager();

	void admin_view_all_managers();

	void admin_view_all_customers();

	void admin_search_manager_name();

	void admin_search_manager_store();

	bool sub_menu();
};