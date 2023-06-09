#include"Customer.h"


Customer::Customer() : User()
{
	account_balance = 0;
	cnic_reset_password = 0;
}

void Customer::write_customer(string file, Customer obj)
{
	ofstream fout(file, ios::app | ios::binary);
	fout.write((char*)&obj, sizeof(obj));
	fout.close();
}

void Customer::display_customer()
{
	cout << "\n\n********** Customer's Information **********\n" << endl;
	cout << "Username: " << this->username << endl;
	cout << "CNIC: " << this->cnic << endl;
	cout << "Account Balance: " << this->account_balance << endl;
	
}

void Customer::view_all_customers()
{
	Customer obj;
	ifstream fin("customers.dat", ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		obj.display_customer();
	}
	fin.close();
	
}

bool Customer::verify_same_cnic_customer(long long int cn)		//returns true if cnic matches
{
	Customer obj;
	int counter = 0;
	ifstream fin("customers.dat", ios::binary);
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

bool Customer::registeration()
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

	if (verify_same_cnic_customer(cnic) == 1)
	{
		cout << "\nThis CNIC already exists. Please Enter a unique CNIC";
		goto re_cnic;
	}

	cnic_reset_password = cnic;

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
			account_balance = 3500;
			write_customer("customers.dat", *this);
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

bool Customer::verify_customer_login(string file, char* un, char* pass)
{
	Customer obj;
	int counter = 0;
	ifstream fin(file, ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		if (!((strcmp(un, obj.username)) || (strcmp(pass, obj.password))))
		{
			cnic_reset_password = obj.cnic;
			counter++;
			fin.close();
			return true;
		}
	}

	if (counter != 1)
	{
		return false;
	}
}

bool Customer::login()
{
re_login: cout << "Login: " << endl;
	cout << "Enter your Username: ";
	cin.ignore();
	cin.getline(username, 30);

	cout << "\nEnter your Password: ";
	cin >> password;
	cout << endl;

	if (verify_customer_login("customers.dat", username, password) == false)
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

bool Customer::customer_reset_password()
{
	bool lowercase = false, uppercase = false, digit = false, specialchar = false, eightchars = false;
	string repass, pass;
	int pl = 0;

	Customer obj;
	fstream customers;
	customers.open("customers.dat", ios::in | ios::out | ios::binary);

	while (customers.read((char*)&obj, sizeof(obj)))
	{
		if (cnic_reset_password == obj.cnic)
		{
		re_password: cout << "\nEnter the New Password: ";
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

			re_confirmation: cout << "\nConfirm your New Password: ";
				cin >> repass;
				cout << endl;

				if (password == repass)
				{
					strcpy_s(obj.password, password);
					int cp = customers.tellg();
					int s = sizeof(obj);
					customers.seekg(cp - s);
					customers.write((char*)&obj, sizeof(obj));
					customers.close();
					cout << "\nPassword Updation Successfull\n";
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

		else
		{
			cout << "\nCNIC did not match. Please Enter the Correct One" << endl;
			cout << "\nPress Enter to Continue" << endl;
			 cin.get();
		}
	}
	
}



bool Customer::sub_menu()
{
	int sub_menu_option;
main_sub_menu_customer:
	system("CLS");
	cout << "*********Login/Registration Successfull***********" << endl << endl;
	cout << "*************** Customer's Sub-Menu ***************" << endl;
	cout << "1.View Inventory " << endl;		//further options for searching manager

	cout << "2.Reset Password" << endl;
	cout << "3.Logout" << endl;
	cout << "0.Return to the Login-Menu" << endl;
	cout << "\nEnter an Option: ";
	cin >> sub_menu_option;
	cout << endl;
	if (sub_menu_option == 1)
	{
		system("CLS");
		Addcart obj;
		obj.showinven();
		cin.get();
		goto main_sub_menu_customer;
	}
	
	else if (sub_menu_option == 2)
	{
		system("CLS");
		Customer obj;
		obj.customer_reset_password();
		cout << "Password Reseted Successfully" << endl;
		cout << "\nPress Enter to Continue" << endl;
		 cin.get();
		goto main_sub_menu_customer;
	}

	else
	{
		return true;
	}



	
	
}