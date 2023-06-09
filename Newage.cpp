#include"Newage.h"



Store::Store()
{
	sub_menu_option = 0;
	logintype = 0;
	usertype = 0;
	user = NULL;
}

void Store::Run()
{
exit_to_usertype_menu:
	system("CLS");
	cout << "****************************** Welcome to Grab Grocers ******************************" << endl << endl;
	cout << "************************************* Menu ************************************" << endl;
	cout << "1.Admin" << endl;
	cout << "2.Manager" << endl;
	cout << "3.Customer" << endl;
	cout << "\nEnter a UserType: ";
	cin >> usertype;
	cout << endl;


exit_to_login_menu:
	system("CLS");
	cout << "1.Login" << endl;
	cout << "2.Register" << endl;
	cout << "\n0.Return to User-Type Menu" << endl;
	cout << "\nEnter an Option: ";
	cin >> logintype;
	cout << endl;


	if (logintype == 1)		//login
	{


		if (usertype == 1)		//admin login
		{
			user = new Admin;
			if (user->login() == true)
			{
				if (user->sub_menu() == 1)
				{
					goto exit_to_login_menu;
				}
			}
		}


		if (usertype == 2)		//manager login
		{
			user = new Manager;
			if (user->login() == true)
			{
				if (user->sub_menu() == 1)
				{
					goto exit_to_login_menu;
				}
			}


		}

		else if (usertype == 3)		//customer login
		{
			user = new Customer;
			if (user->login() == true)
			{
				if (user->sub_menu() == 1)
				{
					goto exit_to_login_menu;
				}
			}
		}
	}


	else if (logintype == 2)	//register
	{


		if (usertype == 1)		//admin register
		{
			user = new Admin;
			if (user->registeration() == true)
			{
				if (user->sub_menu() == 1)
				{
					goto exit_to_login_menu;
				}
			}
		}

		else if (usertype == 3)		//customer register
		{
			user = new Customer;
			if (user->registeration() == true)
			{
				if (user->sub_menu() == 1)
				{
					goto exit_to_login_menu;
				}
			}
		}
	}

	else if (logintype == 0)		//customer register
	{
		goto exit_to_usertype_menu;
	}
}