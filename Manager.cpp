#include"Manager.h"
#include"Inventory.h"
#include<iostream>
using namespace std;


Manager::Manager() : User()
{

	salary = 0;
	store_loc[0] = '\0';
	gender[0] = '\0';
	cnic_reset_information = 0;
}

Manager::Manager(string un, int cn, string pass,int sal, string gen, string loc, long long int cni) : User(un, cn, pass)
{

	
	strcpy_s(gender, gen.c_str());
	strcpy_s(store_loc, loc.c_str());
	cnic_reset_information = cni;
	salary = sal;
}

void Manager::write_manager(string file, Manager obj)
{
	ofstream fout(file, ios::app | ios::binary);
	fout.write((char*)&obj, sizeof(obj));
	fout.close();
}

void Manager::display_manager()
{
	cout << "\n\n********** Manager's Information **********\n" << endl;
	cout << "Username: " << this->username << endl;
	cout << "CNIC: " << this->cnic << endl;
	cout << "Gender: " << this->gender << endl;
	cout << "Store location: " << this->store_loc << endl;
	cout << " Salary of Manager: " << this->salary<<endl;
	
}

void Manager::view_all_managers()
{
	Manager obj;
	ifstream fin("managers.dat", ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		obj.display_manager();
	}
	cin.get();
	_getch;
	fin.close();
}

bool Manager::registeration()
{
	bool lowercase = false, uppercase = false, digit = false, specialchar = false, eightchars = false;
	string repass, pass;
	int cl = 0, pl = 0;
	cout << "Enter your Username: ";
	cin.ignore();
	cin.getline(username, 30);

re_cnic: cout << "\nEnter your CNIC: ";
	cin >> cnic;

	cl = to_string(cnic).length();

	if (cl != 13)
	{
		cout << "\nInvalid CNIC. Please Enter again";
		goto re_cnic;
	}

	Customer obj;

	if (verify_same_cnic_manager(cnic) == 1 || obj.verify_same_cnic_customer(cnic) == 1)
	{
		cout << "\nThis CNIC already exists. Please Enter a unique CNIC";
		goto re_cnic;
	}

	cnic_reset_information = cnic;

re_password: cout << "Enter your Password: ";
	cin >> pass;
	cout << endl;
	pl = pass.size();

	set_password(pass);

	if (pl == 8)
	{
		eightchars = true;
	}

	else
	{
		cout << "Please follow the password conventions and re-enter it in correct form\n" << endl;
		goto re_password;
	}


	for (int i = 0; i <= pl; i++)
	{
		if (pass[i] >= 97 && pass[i] <= 122)
		{
			lowercase = true;
		}
		if (pass[i] >= 65 && pass[i] <= 90)
		{
			uppercase = true;
		}
		if (pass[i] >= 48 && pass[i] <= 57)
		{
			digit = true;
		}
		if ((pass[i] >= 48 && pass[i] <= 57) || (pass[i] >= 65 && pass[i] <= 90) || (pass[i] >= 97 && pass[i] <= 122))
		{
			specialchar = true;
		}
	}

	if (lowercase == 1 && uppercase == 1 && specialchar == 1 && digit == 1 && eightchars == 1)
	{

	re_confirmation: cout << "\nConfirm your Password: ";
		cin >> repass;

		if (password == repass)
		{

			cout << "\nEnter your Gender: ";
			cin >> gender;


			cout << "\nEnter your Store location: ";
			cin.ignore();
			cin.getline(store_loc, 30);

			cout << "\nEnter your Salary: ";
			cin >> salary;

		

			write_manager("managers.dat", *this);
			cout << "Registration Successfull";
			return true;
		}

		else
		{
			cout << "\nConfirmation Password was incorrect please enter again\n" << endl;
			goto re_confirmation;
		}
	}

	else
	{
		cout << "\nPlease follow the password conventions and re-enter it in correct form\n" << endl;
		goto re_password;
	}
}

bool Manager::add_manager()
{
	bool lowercase = false, uppercase = false, digit = false, specialchar = false, eightchars = false;
	string repass, pass;
	int cl = 0, pl = 0;
	cout << "Enter the Manager's Username: ";
	cin.ignore();
	cin.getline(username, 30);

re_cnic: cout << "\nEnter the Manager's CNIC: ";
	cin >> cnic;

	cl = to_string(cnic).length();

	if (cl != 13)
	{
		cout << "\nInvalid CNIC. Please Enter again";
		goto re_cnic;
	}

	Customer obj;

	if (verify_same_cnic_manager(cnic) == 1 || obj.verify_same_cnic_customer(cnic) == 1)
	{
		cout << "\nThis CNIC already exists. Please Enter a unique CNIC";
		goto re_cnic;
	}

	cnic_reset_information = cnic;

re_password: cout << "\nEnter the Manager's Account Password: ";
	cin >> pass;

	pl = pass.size();

	set_password(pass);

	if (pl == 8)
	{
		eightchars = true;
	}

	else
	{
		cout << "\nPlease follow the password conventions and re-enter it in correct form\n" << endl;
		goto re_password;
	}


	for (int i = 0; i <= pl; i++)
	{
		if (pass[i] >= 97 && pass[i] <= 122)
		{
			lowercase = true;
		}
		if (pass[i] >= 65 && pass[i] <= 90)
		{
			uppercase = true;
		}
		if (pass[i] >= 48 && pass[i] <= 57)
		{
			digit = true;
		}
		if ((pass[i] >= 48 && pass[i] <= 57) || (pass[i] >= 65 && pass[i] <= 90) || (pass[i] >= 97 && pass[i] <= 122))
		{
			specialchar = true;
		}
	}

	if (lowercase == 1 && uppercase == 1 && specialchar == 1 && digit == 1 && eightchars == 1)
	{

	re_confirmation: cout << "\nConfirm the Manager's Account Password: ";
		cin >> repass;

		if (pass == repass)
		{

			cout << "\nEnter the Manager's Gender: ";
			cin >> gender;

			

			cout << "\nEnter the Manager's Store location Name: ";
			cin.ignore();
			cin.getline(store_loc, 30);

			cout << "\nEnter the Manager's Salary: ";
			cin >> salary;
		

			write_manager("managers.dat", *this);
			cout << "\nYou have Successfully added the Manager\n";
			return true;
		}

		else
		{
			cout << "\nConfirmation Password was incorrect. Please enter again\n" << endl;
			goto re_confirmation;
		}
	}

	else
	{
		cout << "\nPlease follow the password conventions and re-enter it in correct form\n" << endl;
		goto re_password;
	}
}

bool Manager::verify_same_cnic_manager(long long int cn)		//returns true if cnic matches
{
	Manager obj;
	int counter = 0;
	ifstream fin("managers.dat", ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		if (cn == obj.cnic)
		{
			counter++;
			return true;
		}
	}
	fin.close();

	if (counter == 0)
	{
		return false;
	}
}

bool Manager::remove_manager(char* un, long long int cn)
{
	Manager obj;
	ifstream fin;
	ofstream fout;

	fin.open("managers.dat", ios::in | ios::binary);

	if (!fin)
	{
		cout << "\nFile not Found" << endl;
		return false;
	}

	else
	{
		fout.open("tempmanagers.dat", ios::out | ios::binary);

		while (fin.read((char*)&obj, sizeof(obj)))
		{
			if (strcmp(un, obj.username))
			{
				if (cn != obj.cnic)
				{
					write_manager("tempmanagers.dat", obj);
				}
			}
		}
	}

	fin.close();
	fout.close();
	remove("managers.dat");
	//rename("tempmanagers.dat", "managers.dat");
	return true;
}

bool Manager::verify_manager_login(string file, char* un, char* pass)
{
	Manager obj;
	int counter = 0;
	ifstream fin(file, ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		if (!((strcmp(un, obj.username)) || (strcmp(pass, obj.password))))
		{
			cnic_reset_information = obj.cnic;
			counter++;
			return true;
		}
	}
	fin.close();

	if (counter != 1)
	{
		return false;
	}
}

bool Manager::login()
{
re_login: cout << "Login: " << endl;
	cout << "Enter your Username: ";
	cin.ignore();
	cin.getline(username, 30);

	cout << "\nEnter your Password: ";
	cin >> password;
	cout << endl;

	if (verify_manager_login("managers.dat", username, password) == false)
	{
		cout << "\nInvalid credentials. Please login again" << endl;
		goto re_login;
	}

	else
	{
		cout << "\nLogin Successful" << endl;
		return true;
	}
}

bool Manager::verify_manager_for_update_manager(string file, char* un, long long int cn)
{
	Manager obj;
	int counter = 0;
	ifstream fin(file, ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		if (!(strcmp(un, obj.username)))
		{
			if (cn == obj.cnic)
			{
				counter++;
				fin.close();
				return true;
			}
		}
	}

	if (counter != 1)
	{
		return false;
	}
}

bool Manager::update_manager()
{
	char un[30];
	long long int cn;
	string clini;

re_manager_login_edit:
	cout << "Enter the Username of the Manager: ";
	cin.ignore();
	cin.getline(un, 30);
	cout << endl;

	cout << "Enter the CNIC of the Manager: ";
	cin >> cn;
	cout << endl;

	if (verify_manager_for_update_manager("managers.dat", un, cn) == 0)
	{
		cout << "Invalid Information. Manager not Found. Please Enter Credentials Again" << endl;
		goto re_manager_login_edit;
	}

	int manager_update_option;

	cout << "1.Update Store location" << endl;
	cout << "2.Update Salary" << endl;

	cout << "\nEnter an Option:";
	cin >> manager_update_option;
	cout << endl;

	Manager obj;
	fstream managers;
	managers.open("managers.dat", ios::in | ios::out | ios::binary);

	while (managers.read((char*)&obj, sizeof(obj)))
	{
		if (!(strcmp(un, obj.username)))
		{
			if (cn == obj.cnic)
			{
				

				if (manager_update_option == 1)
				{

					cout << "Enter new Store location to Update Manager: ";
					cin.ignore();
					cin.getline(obj.store_loc, 30);
				}

				else if (manager_update_option == 2)
				{
					cout << "Enter new Salary to Update Manager: ";
					cin >> obj.salary;
					cout << endl;
				}

				int cp = managers.tellg();
				int s = sizeof(obj);
				managers.seekg(cp - s);
				managers.write((char*)&obj, sizeof(obj));
				managers.close();
				return true;
			}
		}
	}
}

bool Manager::manager_update_manager()
{
	int manager_update_option;

	
	cout << "1.Update Area " << endl;
	cout << "2.Update Salary" << endl;
	cout << "\nEnter an Option:";
	cin >> manager_update_option;
	cout << endl;

	Manager obj;
	fstream managers;
	managers.open("managers.dat", ios::in | ios::out | ios::binary);

	while (managers.read((char*)&obj, sizeof(obj)))
	{
		if (cnic_reset_information == obj.cnic)
		{
			

			 if (manager_update_option == 1)
			{
				

				cout << "Enter new Store location to Update Manager: ";
				cin.ignore();
				cin.getline(obj.store_loc, 30);
				cout << endl;
			}

			else if (manager_update_option == 2)
			{
				cout << "Enter new Salary to Update Manager: ";
				cin >> obj.salary;
				cout << endl;
			}

			int cp = managers.tellg();
			int s = sizeof(obj);
			managers.seekg(cp - s);
			managers.write((char*)&obj, sizeof(obj));
			managers.close();
			return true;
		}
	}
}

void Manager::search_manager_name(char* n)
{
	Manager obj;
	int counter = 0;
	ifstream fin("managers.dat", ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		if (!(strcmp(n, obj.username)))
		{
			obj.display_manager();
			counter++;
		}
	}
	fin.close();

	if (counter == 0)
	{
		cout << "\nNo Record Found." << endl;
	}
}





void Manager::search_manager_store(char* loc)
{
	Manager obj;
	int counter = 0;
	ifstream fin("managers.dat", ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		if (!(strcmp(loc, obj.store_loc)))
		{
			obj.display_manager();
			counter++;
		}
	}
	fin.close();

	if (counter == 0)
	{
		cout << "\nNo Record Found." << endl;
	}
}




//setters and getters for manager



void Manager::set_store_name(string clin)
{
	strcpy_s(store_loc, clin.c_str());
}

void Manager::set_salary(int sala)
{
	salary = sala;
}



string Manager::get_store_name() const
{
	return store_loc;
}

int Manager::get_salary() const
{
	return salary;
}

long long int Manager::get_cnic_reset_information()
{
	return cnic_reset_information;
}

void Manager::set_gender(string gen)
{
	strcpy_s(gender, gen.c_str());
}

string Manager::get_gender() const
{
	return gender;
}

bool Manager::sub_menu()
{
	int sub_menu_option;
main_sub_menu_manager:
	system("CLS");
	cout << "*********Login/Registration Successfull**********" << endl << endl;
	cout << "*************** Manager's Sub-Menu ***************" << endl;
	cout << "1.Edit Your Information" << endl;		//further options for editing information
	cout << "2.View Inventory " << endl;
	cout << "3.Update Inventory " << endl;
	cout << "4.Logout" << endl;

	cout << "0.Return to the Main-Menu" << endl;
	cout << "\nEnter an Option: ";
	cin >> sub_menu_option;
	cout << endl;

	

	

	 if (sub_menu_option == 2)
	{
		 Inventory i;
		 i.viewinven();
		 goto main_sub_menu_manager;
	}
	 else if (sub_menu_option == 3)
	 {
		  manuinven:
		  system("CLS");
		  cout << "1.add item " << endl;
		  cout << "2.add Quantity " << endl;
		  cout << "3.add Price" << endl;
		  cout << "Press any key to go back" << endl;
		  int in;
		  cin >> in;
		  if (in == 1)
		  {
			  Inventory i;
			  i.addinven();
			  goto manuinven;
		  }
		  else if (in == 2)
		  {
			  Inventory i;
			  i.addqinven();
			  goto manuinven;
		  }
		  else if (in == 3)
		  {
			  Inventory i;
			  i.addpinven();
			  goto manuinven;
		  }
		  else
		  {
			  goto main_sub_menu_manager;
		  }
		
	 }


	

	 else
	{
		return true;
	}
}
