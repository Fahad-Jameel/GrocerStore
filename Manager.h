#pragma once

#include"User.h"
#include"Admin.h"
#include"Customer.h"
#include"Inventory.h"


#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;


class Manager : public User {

private:

	int salary;
	char store_loc[30];
	char gender[20];
	long long int cnic_reset_information;

public:

	Manager();

	Manager(string un, int cn, string pass,int sal, string gen, string loc, long long int cni);

	void write_manager(string file, Manager obj);

	void display_manager();

	void view_all_managers();

	bool registeration();

	bool add_manager();

	bool verify_same_cnic_manager(long long int cn);

	bool remove_manager(char* un, long long int cn);

	bool verify_manager_login(string file, char* un, char* pass);

	bool login();

	bool verify_manager_for_update_manager(string file, char* un, long long int cn);

	bool update_manager();

	bool manager_update_manager();

	void search_manager_name(char* n);


	void search_manager_store(char* loc);

	

	//setters and getters for manager

	long long int get_cnic_reset_information();

	

	void set_store_name(string clin);

	void set_salary(int sala);

	

	string get_store_name() const;

	int get_salary() const;

	void set_gender(string gen);

	string get_gender() const;

	bool sub_menu();

};