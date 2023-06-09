#include"catalog.h"
bool Catalog::viewperis()
{
	system("CLS");
	int inp;
food:
	cout << "Choose option to proceed." << endl << endl;
	cout << "1. view Meat" << endl;
	cout << "2. view Dairy" << endl;
	cout << "3. view Fruit" << endl;
	cout << "4. view Vegetable" << endl;
	cout << "0. Return back......" << endl;
	cin >> inp;
	system("CLS");
	if (inp == 1)
	{
		Catalog obj1;
		ifstream fin("meat.dat", ios::binary);
		while (fin.read((char*)&obj1, sizeof(obj1)))
		{
			cout << obj1.catal << endl;
		}
		fin.close();
		cin.get();
		_getch();
		goto food;
	}
	else if (inp == 2)
	{
		Catalog obj1;
		ifstream fin("dairy.dat", ios::binary);
		while (fin.read((char*)&obj1, sizeof(obj1)))
		{
			cout << obj1.catal << endl;
		}
		fin.close();
		cin.get();
		_getch();
		goto food;
	}
	else if (inp == 3)
	{
		Catalog obj1;
		ifstream fin("fruit.dat", ios::binary);
		while (fin.read((char*)&obj1, sizeof(obj1)))
		{
			cout << obj1.catal << endl;
		}
		fin.close();
		cin.get();
		_getch();
		goto food;
	}
	else if (inp == 4)
	{
		Catalog obj1;
		ifstream fin("vege.dat", ios::binary);
		while (fin.read((char*)&obj1, sizeof(obj1)))
		{
			cout << obj1.catal << endl;
		}
		fin.close();
		cin.get();
		_getch();
		goto food;
	}
	else if (inp == 0)
	{
		return true;
	}
}
bool Catalog::viewnonperis()
{
	system("CLS");
	int inp;
food:
	cout << "Choose option to proceed." << endl << endl;
	cout << "1. view Snacks" << endl;
	cout << "2. view Spices" << endl;
	cout << "3. view Grains" << endl;
	cout << "4. view Cereals" << endl;
	cout << "0. Return back......" << endl;
	cin >> inp;
	system("CLS");
	if (inp == 1)
	{
		Catalog obj1;
		ifstream fin("snack.dat", ios::binary);
		while (fin.read((char*)&obj1, sizeof(obj1)))
		{
			cout << obj1.catal << endl;
		}
		fin.close();
		cin.get();
		_getch();
		goto food;
	}
	else if (inp == 2)
	{
		Catalog obj1;
		ifstream fin("spice.dat", ios::binary);
		while (fin.read((char*)&obj1, sizeof(obj1)))
		{
			cout << obj1.catal << endl;
		}
		fin.close();
		cin.get();
		_getch();
		goto food;
	}
	else if (inp == 3)
	{
		Catalog obj1;
		ifstream fin("grain.dat", ios::binary);
		while (fin.read((char*)&obj1, sizeof(obj1)))
		{
			cout << obj1.catal << endl;
		}
		fin.close();
		cin.get();
		_getch();
		goto food;
	}
	else if (inp == 4)
	{
		Catalog obj1;
		ifstream fin("cereal.dat", ios::binary);
		while (fin.read((char*)&obj1, sizeof(obj1)))
		{
			cout << obj1.catal << endl;
		}
		fin.close();
		cin.get();
		_getch();
		goto food;
	}
	else if (inp == 0)
	{
		return true;
	}
}
bool Catalog::viewfood() {
	system("CLS");
	int inp;
viewfood:
	cout << "Choose option to proceed." << endl << endl;
	cout << "1. Perishable Goods" << endl;
	cout << "2. Non-Perishable Goods" << endl;
	cout << "0. Return to catalog manu" << endl;
	cin >> inp;
	if (inp == 1)
	{
		if (viewperis() == 1)
		{
			cout << "\n\nPress Enter to Return to go back" << endl;
			cin.get();
			goto viewfood;
		}
	}
	else if (inp == 2)
	{
		if (viewnonperis() == 1)
		{
			cout << "\n\nPress Enter to Return to go back" << endl;
			cin.get();
			goto viewfood;
		}
	}
	else if (inp == 0)
	{
		return true;
	}

}

bool Catalog::viewpers_hygine() {
	system("CLS");
	Catalog obj1;
	ifstream fin("Catal_hygene.dat", ios::binary);
	while (fin.read((char*)&obj1, sizeof(obj1)))
	{
		cout << obj1.catal << endl;
	}
	fin.close();
	cin.get();
	_getch();
	return true;
}

bool Catalog::viewhousehold() {
	system("CLS");
	Catalog obj1;
	ifstream fin("Catal_house.dat", ios::binary);
	while (fin.read((char*)&obj1, sizeof(obj1)))
	{
		cout << obj1.catal << endl;
	}
	fin.close();
	cin.get();
	_getch();
	return true;
}
void Catalog::viewcata() {

	system("CLS");
	int inp;
viewcata:
	cout << "1.View Food" << endl;
	cout << "2. Personal Hygene" << endl;
	cout << "3.Household Cleaning" << endl;
	cout << "0. Admin manu " << endl;

	cin >> inp;
	if (inp == 1)
	{
		if (viewfood() == 1)
		{
			system("CLS");


			cout << "\n\nPress Enter to Return to view catalog Menu" << endl;
			cin.get();
			goto viewcata;
		}
	}

	if (inp == 2)
	{
		if (viewpers_hygine() == 1)
		{
			system("CLS");

			
			cout << "\n\nPress Enter to Return to view catalog Menu" << endl;
			cin.get();
			goto viewcata;
		}
	}
	if (inp == 3)
	{
		if (viewhousehold() == 1)
		{
			system("CLS");


			cout << "\n\nPress Enter to Return to view catalog Menu" << endl;
			cin.get();
			goto viewcata;
		}
	}

}






bool Catalog::addcata() {
	system("CLS");
	int inp;
catalog_manu:
	cout << "1. Food  "<<endl;
	cout << "2. Personal Hygiene  " << endl;
	cout << "3. Household Cleaning  " << endl;
	cout << "0. Admin manu " << endl;
	cin >> inp;
	if (inp == 1)
	{
		if (food() == 1)
		{
			system("CLS");

			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to catalog Menu" << endl;
			cin.get();
			goto catalog_manu;
		}
	}
	
	if (inp == 2)
	{
		if (pers_hygine() == 1)
		{
			system("CLS");

			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to catalog Menu" << endl;
			cin.get();
			goto catalog_manu;
		}
	}
	if (inp == 3)
	{
		if (household() == 1)
		{
			system("CLS");

			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to catalog Menu" << endl;
			cin.get();
			goto catalog_manu;
		}
	}
	else if (inp == 0)
	{
		return true;
	}
	
	
	
}
void Catalog::write_cata(string file, Catalog obj)
{
	ofstream fout(file, ios::app | ios::binary);
	fout.write((char*)&obj, sizeof(obj));
	fout.close();

}

bool Catalog::pers_hygine() {
	cout << "Enter Item to be add in Personal Hygene : " << endl;
	cin.ignore();
	cin.getline(catal, 30);
	
	write_cata("Catal_hygene.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}

bool Catalog::household() {
	cout << "Enter Item to be add in Household Cleaning : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("Catal_house.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}
bool Catalog::food() {
	system("CLS");
	int inp;
food:
	cout << "Choose option to proceed." << endl << endl;
	cout << "1. Perishable Goods" << endl;
	cout << "2. Non-Perishable Goods" << endl;
	cout << "0. Return to catalog manu" << endl;
	cin >> inp;

	if (inp == 1)
	{
		if (perishable() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto food;
		}
	}
	else if (inp == 2)
	{
		if (nonperishable() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto food;
		}
	}
	else if (inp == 0)
	{
		return true;
	}
}


bool Catalog::perishable() {
	system("CLS");
	int inp;
food:
	cout << "Choose option to proceed." << endl << endl;
	cout << "1. Meat" << endl;
	cout << "2. Dairy" << endl;
	cout << "3. Fruit" << endl;
	cout << "4. Vegetable" << endl;
	cout << "0. Return to catalog manu" << endl;
	cin >> inp;

	if (inp == 1)
	{
		if (meat() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto food;
		}
	}
	else if (inp == 2)
	{
		if (dairy() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto food;
		}
	}
	else if (inp == 3)
	{
		if (fruit() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto food;
		}
	}
	else if (inp == 4)
	{
		if (vege() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto food;
		}
	}
	else if (inp == 0)
	{
		return true;
	}
}
bool Catalog::meat() {
	cout << "Enter Item to be add in meat : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("meat.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}
bool Catalog::dairy() {
	cout << "Enter Item to be add in dairy : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("dairy.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}
bool Catalog::fruit() {
	cout << "Enter Item to be add in fruit : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("fruit.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}
bool Catalog::vege() {
	cout << "Enter Item to be add in Vegetable : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("vege.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}



bool Catalog::nonperishable() {
	system("CLS");
	int inp;
non:
	cout << "Choose option to proceed." << endl << endl;
	cout << "1. Snacks" << endl;
	cout << "2. Spices" << endl;
	cout << "3. Grains" << endl;
	cout << "4. Cereal" << endl;
	cout << "0. Return to catalog manu" << endl;
	cin >> inp;

	if (inp == 1)
	{
		if (snack() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto non;
		}
	}
	else if (inp == 2)
	{
		if (spice() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto non;
		}
	}
	else if (inp == 3)
	{
		if (grain() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto non;
		}
	}
	else if (inp == 4)
	{
		if (cereal() == 1)
		{
			system("CLS");
			cout << "Item Added Successfully" << endl;
			cout << "\n\nPress Enter to Return to food Menu" << endl;
			cin.get();
			goto non;
		}
	}
	else if (inp == 0)
	{
		return true;
	}
}

bool Catalog::snack() {
	cout << "Enter Item to be add in Snacks : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("snack.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}
bool Catalog::spice() {
	cout << "Enter Item to be add in Spices : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("spice.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}
bool Catalog::grain() {
	cout << "Enter Item to be add in Grains : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("grain.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}
bool Catalog::cereal() {
	cout << "Enter Item to be add in Cereals : " << endl;
	cin.ignore();
	cin.getline(catal, 30);

	write_cata("cereal.dat", *this);
	//cout << "Catalog updated Successfull";
	return true;
}


