#include"Admin.h"
#include<Windows.h>


Admin::Admin() : User() {}

void Admin::write_admin(string file, Admin obj)						// common function
{
	ofstream fout(file, ios::app | ios::binary);
	fout.write((char*)&obj, sizeof(obj));
	fout.close();
}

bool Admin::registeration()					// admin registration
{
	bool lowercase = false, uppercase = false, digit = false, specialchar = false, eightchars = false;
	string repass, pass;
	int cl = 0, pl = 0;
	cout << "Enter your Username: ";
	cin.ignore();
	cin.getline(username, 30);

re_password: cout << "\nEnter your Password: ";
	cin >> pass;

	pl = pass.size();

	set_password(pass);

	if (pl == 8)
	{
		eightchars = true;
	}

	else
	{
		cout << "Please follow the password conventions and re-enter it in correct form" << endl;
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
		cout << endl;

		if (password == repass)
		{
			write_admin("admins.dat", *this);
			cout << "Registration Successfull";
			return true;
		}

		else
		{
			cout << "Confirmation Password was incorrect please enter again." << endl;
			goto re_confirmation;
		}
	}

	else
	{
		cout << "Please follow the password conventions and re-enter it in correct form" << endl;
		goto re_password;
	}
}

bool Admin::verify_admin_login(string file, char* un, char* pass)
{
	Admin obj;
	int counter = 0;
	ifstream fin(file, ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		if (!((strcmp(un, obj.username)) || (strcmp(pass, obj.password))))
		{
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

bool Admin::login()						//login function
{
re_login: cout << "Login: " << endl;
	cout << "Enter your Username: ";
	cin.ignore();
	cin.getline(username, 30);

	cout << "\nEnter your Password: ";
	cin >> password;
	cout << endl;

	if (verify_admin_login("admins.dat", username, password) == false)
	{
		cout << "\nInvalid credentials. Please login again" << endl;
		goto re_login;
	}

	else
	{
		cout << "          Loading"<<endl;
		for (int i = 0; i < 3; i++) {
			Sleep(500);
			cout << ".  ";
		}
		cout << "\nLogin Successful" << endl;
		return true;
	}
}

bool Admin::admin_add_manager()
{
	Manager obj;
	if (obj.add_manager() == 1)
	{
		return true;
	}
}

bool Admin::admin_update_manager()
{
	Manager obj;
	if (obj.update_manager() == 1)
	{
		return true;
	}
}

bool Admin::admin_remove_manager()
{
	int cl;
	char un[30];
	long long int cn = 0;
	cout << "Enter the Username of the Manager: ";
	cin.ignore();
	cin.getline(un, 30);
	cout << endl;

re_cnic_remove_Manager: cout << "\nEnter the CNIC of the Manager: ";
	cin >> cn;

	cl = to_string(cn).length();

	if (cl != 13)
	{
		cout << "\nInvalid CNIC. Please Enter again";
		goto re_cnic_remove_Manager;
	}

	Manager obj;
	if (obj.remove_manager(un, cn) == 1)
	{
		return true;
	}
}

void Admin::admin_view_all_managers()
{
	Manager obj;
	obj.view_all_managers();
	//obj.display_manager();
}

void Admin::admin_view_all_customers()
{
	Customer obj;
	obj.view_all_customers();
}

void Admin::admin_search_manager_name()
{
	char name[30];
	cout << "Enter the Name of the Manager to Search for: ";
	cin.ignore();
	cin.getline(name, 30);
	cout << endl;

	Manager obj;
	obj.search_manager_name(name);
}




void Admin::admin_search_manager_store()
{
	char loca[30];
	Manager obj;
	cout << "Enter the Clinic Name to Search for: ";
	cin >> loca;
	cout << endl;
	obj.search_manager_store(loca);
}


bool Admin::sub_menu()						// manu function
{
	int sub_menu_option;
main_sub_menu_admin:
	system("CLS");
	cout << "*********Login/Registration Successfull*********" << endl << endl;
	cout << "*************** Admin's Sub-Menu ***************" << endl;
	cout << "1.Add Manager" << endl;
	cout << "2.Edit Manager" << endl;
	cout << "3.Delete Manager" << endl;
	cout << "4.Search managers" << endl; //further menu by location, speciality or name
	cout << "5.View all Managers" << endl;
	cout << "6.View all Customers" << endl;
	cout << "7.View catalog" << endl;
	cout << "8.add catalog" << endl;
	cout << "9.show feedback" << endl;
	cout << "10.Logout" << endl;
	cout << "\n0.Return to the Main-Menu" << endl;
	cout << "\nEnter an Option: ";
	cin >> sub_menu_option;
	cout << endl;

	if (sub_menu_option == 1)
	{
		if (admin_add_manager() == 1)
		{
			system("CLS");
			cout << "Manager Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to Menu" << endl;
			cin.get();
		goto main_sub_menu_admin;
		}
	}

	else if (sub_menu_option == 2)
	{
		if (admin_update_manager() == 1)
		{
			system("CLS");
			cout << "Manager Updated Successfully" << endl;
			cout << "\n\nPress Enter to Return to Menu" << endl;
			cin.get();
			goto main_sub_menu_admin;
		}
	}

	else if (sub_menu_option == 3)
	{
		if (admin_remove_manager() == 1)
		{
			system("CLS");
			cout << "Manager Removed Successfully" << endl;
			cout << "\n\nPress Enter to Return to Menu" << endl;
			cin.get();
			_getch();
			goto main_sub_menu_admin;
		}
	}

	else if (sub_menu_option == 4)			//sub-menu for further sub-sub-menu containing search catogaries for managers
	{
	sub_menu_for_searching_manager:
		system("CLS");
		int sub_menu_for_search_catogary = 0;
		cout << "\n\n********** Search Manager **********\n" << endl;
		cout << "1.Search Manager by Name" << endl;
		cout << "2.Search Manager by Store Location" << endl;
		cout << "\n0.Return Back to Sub-Menu" << endl;
		cout << "Enter an Option: ";
		cin >> sub_menu_for_search_catogary;
		cout << endl;

		if (sub_menu_for_search_catogary == 1)
		{
			admin_search_manager_name();
			cout << "\n\nPress Enter to Continue" << endl;
			cin.get();
			_getch();
			goto sub_menu_for_searching_manager;
		}

		

		

		else if (sub_menu_for_search_catogary == 2)
		{
			admin_search_manager_store();
			cout << "\n\nPress Enter to Continue" << endl;
			cin.get();
			_getch();
			goto sub_menu_for_searching_manager;
		}

		else if (sub_menu_for_search_catogary == 0)
		{
			goto main_sub_menu_admin;
		}
	}

	else if (sub_menu_option == 5)
	{
		system("CLS");
		admin_view_all_managers();
		cout << "\n\nPress Enter to Continue" << endl;
		cin.get();
		_getch();
		goto main_sub_menu_admin;
	}

	else if (sub_menu_option == 6)
	{
		system("CLS");
		admin_view_all_customers();
		cout << "\n\nPress Enter to Continue" << endl;
		cin.get();
		_getch();
		goto main_sub_menu_admin;
	}
	else if (sub_menu_option == 7)
	{
		
		Catalog i;
		i.viewcata();
		cin.get();
		_getch();
		goto main_sub_menu_admin;
	}
	else if (sub_menu_option == 8)
	{
		Catalog i;
		i.addcata();
		goto main_sub_menu_admin;
	}

	else if (sub_menu_option == 9)
	{
		system("CLS");
		Feed i;
		i.read_a_feedback();
		goto main_sub_menu_admin;
	}


	else if (sub_menu_option == 10)
	{
		return true;

	}


	 if (sub_menu_option == 0)
	 {
	    return true;
     }
	
}