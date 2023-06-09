#include"Inventory.h"
#include<iomanip>

bool Inventory:: addinven() {
	manuinven:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl<<endl;
	cout << "1. Food" << endl;
	cout << "2. Personal Hygene" << endl;
	cout << "3. Household" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{
		addfood();
		goto manuinven;
	}
	else if (in == 2)
	{
		addhygene();
		goto manuinven;
	}
	else if (in == 3)
	{
		addhouse();
		goto manuinven;
	}
	else
	{
		return true;
	}
}
bool Inventory::addfood() {
foodmanu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Perishable " << endl;
	cout << "2. Non Perishable" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		addperish();
		goto foodmanu;
	}
	else if (in == 2)
	{
		addnonperish();
		goto foodmanu;
	}
	else
	{
		return true;
	}
}

bool Inventory::addperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Meat" << endl;
	cout << "2. Fruits" << endl;
	cout << "3. Vegetable" << endl;
	cout << "4. Dairy" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{
		
		meat();
		goto manu;
	}
	
	else if (in == 2)
	{
		fruit();
		goto manu;
	}
	else if (in == 3)
	{
		vege();
		goto manu;
	}
	else if (in == 4)
	{
		dairy();
		goto manu;
	}
	else
	{
		return true;
	}
}
bool Inventory::meat() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;
	
	ofstream MyFile("invenmeat.txt",ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	 return true;
}
bool Inventory::fruit() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invenfruit.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::vege() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invenvege.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::dairy() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invendairy.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}


bool Inventory::addnonperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Snacks" << endl;
	cout << "2. Spice" << endl;
	cout << "3. Grains" << endl;
	cout << "4. Cereals" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		snack();
		goto manu;
	}

	else if (in == 2)
	{
		spice();
		goto manu;
	}
	else if (in == 3)
	{
		grain();
		goto manu;
	}
	else if (in == 4)
	{
		cereal();
		goto manu;
	}
	else
	{
		return true;
	}
}
bool Inventory::snack() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invensnack.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::spice() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invenspice.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::grain() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invengrain.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::cereal() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invencereal.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}

bool Inventory::addhygene() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invenhygene.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}

bool Inventory::addhouse() {
	ofstream fout;

	string line;
	cout << "Enter item" << endl;
	cin >> line;

	ofstream MyFile("invenhouse.txt", ios::app);
	MyFile << line;
	MyFile << endl;
	MyFile.close();
	cin.get();
	_getch();
	return true;
}





//quantity


bool Inventory::addqinven() {
manuinven:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Food" << endl;
	cout << "2. Personal Hygene" << endl;
	cout << "3. Household" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{
		addqfood();
		goto manuinven;
	}
	else if (in == 2)
	{
		addqhygene();
		goto manuinven;
	}
	else if (in == 3)
	{
		addqhouse();
		goto manuinven;
	}
	else
	{
		return true;
	}
}
bool Inventory::addqfood() {
foodmanu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Perishable " << endl;
	cout << "2. Non Perishable" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		addqperish();
		goto foodmanu;
	}
	else if (in == 2)
	{
		addqnonperish();
		goto foodmanu;
	}
	else
	{
		return true;
	}
}

bool Inventory::addqperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Meat" << endl;
	cout << "2. Fruits" << endl;
	cout << "3. Vegetable" << endl;
	cout << "4. Dairy" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		qmeat();
		goto manu;
	}

	else if (in == 2)
	{
		qfruit();
		goto manu;
	}
	else if (in == 3)
	{
		qvege();
		goto manu;
	}
	else if (in == 4)
	{
		qdairy();
		goto manu;
	}
	else
	{
		return true;
	}
}
bool Inventory::qmeat() {
	string myText;
	ifstream MyReadFile("invenmeat.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of "<< myText<< endl;
		cin >> line;

		ofstream MyFile("invenqmeat.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();
		
	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::qfruit() {
	string myText;
	ifstream MyReadFile("invenfruit.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqfruit.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::qvege() {
	string myText;
	ifstream MyReadFile("invenvege.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqvege.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::qdairy() {
	string myText;
	ifstream MyReadFile("invendairy.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqdairy.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}


bool Inventory::addqnonperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Snacks" << endl;
	cout << "2. Spice" << endl;
	cout << "3. Grains" << endl;
	cout << "4. Cereals" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		qsnack();
		goto manu;
	}

	else if (in == 2)
	{
		qspice();
		goto manu;
	}
	else if (in == 3)
	{
		qgrain();
		goto manu;
	}
	else if (in == 4)
	{
		qcereal();
		goto manu;
	}
	else
	{
		return true;
	}
}
bool Inventory::qsnack() {
	string myText;
	ifstream MyReadFile("invensnack.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqsnack.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::qspice() {
	string myText;
	ifstream MyReadFile("invenspice.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqspice.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::qgrain() {
	string myText;
	ifstream MyReadFile("invengrain.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqgrain.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::qcereal() {
	string myText;
	ifstream MyReadFile("invencereal.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqcereal.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}

bool Inventory::addqhygene() {
	string myText;
	ifstream MyReadFile("invenhygene.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqhygene.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}

bool Inventory::addqhouse() {
	string myText;
	ifstream MyReadFile("invenhouse.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter quantity of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenqhouse.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}


bool Inventory::meatquantity() {
	

	cout << "Quantity added Successfull"<<endl;
	return true;
}


// price 


bool Inventory::addpinven() {
manuinven:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Food" << endl;
	cout << "2. Personal Hygene" << endl;
	cout << "3. Household" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{
		addpfood();
		goto manuinven;
	}
	else if (in == 2)
	{
		addphygene();
		goto manuinven;
	}
	else if (in == 3)
	{
		addphouse();
		goto manuinven;
	}
	else
	{
		return true;
	}
}
bool Inventory::addpfood() {
foodmanu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Perishable " << endl;
	cout << "2. Non Perishable" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		addpperish();
		goto foodmanu;
	}
	else if (in == 2)
	{
		addpnonperish();
		goto foodmanu;
	}
	else
	{
		return true;
	}
}

bool Inventory::addpperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Meat" << endl;
	cout << "2. Fruits" << endl;
	cout << "3. Vegetable" << endl;
	cout << "4. Dairy" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		pmeat();
		goto manu;
	}

	else if (in == 2)
	{
		pfruit();
		goto manu;
	}
	else if (in == 3)
	{
		pvege();
		goto manu;
	}
	else if (in == 4)
	{
		pdairy();
		goto manu;
	}
	else
	{
		return true;
	}
}
bool Inventory::pmeat() {
	string myText;
	ifstream MyReadFile("invenmeat.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenpmeat.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::pfruit() {
	string myText;
	ifstream MyReadFile("invenfruit.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenpfruit.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::pvege() {
	string myText;
	ifstream MyReadFile("invenvege.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenpvege.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::pdairy() {
	string myText;
	ifstream MyReadFile("invendairy.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenpdairy.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}


bool Inventory::addpnonperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Snacks" << endl;
	cout << "2. Spice" << endl;
	cout << "3. Grains" << endl;
	cout << "4. Cereals" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		psnack();
		goto manu;
	}

	else if (in == 2)
	{
		pspice();
		goto manu;
	}
	else if (in == 3)
	{
		pgrain();
		goto manu;
	}
	else if (in == 4)
	{
		pcereal();
		goto manu;
	}
	else
	{
		return true;
	}
}
bool Inventory::psnack() {
	string myText;
	ifstream MyReadFile("invensnack.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenpsnack.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::pspice() {
	string myText;
	ifstream MyReadFile("invenspice.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenpspice.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::pgrain() {
	string myText;
	ifstream MyReadFile("invengrain.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenpgrain.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}
bool Inventory::pcereal() {
	string myText;
	ifstream MyReadFile("invencereal.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenpcereal.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}

bool Inventory::addphygene() {
	string myText;
	ifstream MyReadFile("invenhygene.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenphygene.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}

bool Inventory::addphouse() {
	string myText;
	ifstream MyReadFile("invenhouse.txt");
	while (getline(MyReadFile, myText)) {
		ofstream fout;
		string line;
		cout << "Enter Price of " << myText << endl;
		cin >> line;

		ofstream MyFile("invenphouse.txt", ios::app);
		MyFile << line;
		MyFile << endl;
		MyFile.close();

	}
	MyReadFile.close();
	cin.get();
	_getch();
	return true;
}


//view Inventory

bool Inventory::viewinven() {
manuinven:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Food" << endl;
	cout << "2. Personal Hygene" << endl;
	cout << "3. Household" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{
		viewfood();
		goto manuinven;
	}
	else if (in == 2)
	{
		viewhygene();
		goto manuinven;
	}
	else if (in == 3)
	{
		viewhouse();
		goto manuinven;
	}
	else
	{
		return true;
	}
}

bool Inventory::viewhygene() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenhygene.txt");
	ifstream qFile("invenqhygene.txt");
	ifstream pFile("invenphygene.txt");
	cout << "Item \t\t   Quantity \t Price"<<endl;
	while (getline(MyReadFile, myText)&&qFile>>q &&pFile>>p) {
		cout<<std::left<< setw(20) << myText << q<<"\t\t"<<p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}



bool Inventory::viewhouse() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenhouse.txt");
	ifstream qFile("invenqhouse.txt");
	ifstream pFile("invenphouse.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}

bool Inventory::viewfood() {
foodmanu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Perishable " << endl;
	cout << "2. Non Perishable" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		viewperish();
		goto foodmanu;
	}
	else if (in == 2)
	{
		viewnonperish();
		goto foodmanu;
	}
	else
	{
		return true;
	}
}

bool Inventory::viewperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Meat" << endl;
	cout << "2. Fruits" << endl;
	cout << "3. Vegetable" << endl;
	cout << "4. Dairy" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		viewmeat();
		goto manu;
	}

	else if (in == 2)
	{
		viewfruit();
		goto manu;
	}
	else if (in == 3)
	{
		viewvege();
		goto manu;
	}
	else if (in == 4)
	{
		viewdairy();
		goto manu;
	}
	else
	{
		return true;
	}
}

bool Inventory::viewmeat() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenmeat.txt");
	ifstream qFile("invenqmeat.txt");
	ifstream pFile("invenpmeat.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;

	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}

bool Inventory::viewdairy() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invendairy.txt");
	ifstream qFile("invenqdairy.txt");
	ifstream pFile("invenpdairy.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}

bool Inventory::viewfruit() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenfruit.txt");
	ifstream qFile("invenqfruit.txt");
	ifstream pFile("invenpfruit.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}

bool Inventory::viewvege() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenvege.txt");
	ifstream qFile("invenqvege.txt");
	ifstream pFile("invenpvege.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}

//view non perish
bool Inventory::viewnonperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Snacks" << endl;
	cout << "2. Spice" << endl;
	cout << "3. Grains" << endl;
	cout << "4. Cereals" << endl;
	cout << "Press any key to go back" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{

		viewsnack();
		goto manu;
	}

	else if (in == 2)
	{
		viewspice();
		goto manu;
	}
	else if (in == 3)
	{
		viewgrain();
		goto manu;
	}
	else if (in == 4)
	{
		viewcereal();
		goto manu;
	}
	else
	{
		return true;
	}
}


bool Inventory::viewcereal() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invencereal.txt");
	ifstream qFile("invenqcereal.txt");
	ifstream pFile("invenpcereal.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}

bool Inventory::viewsnack() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invensnack.txt");
	ifstream qFile("invenqsnack.txt");
	ifstream pFile("invenpsnack.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}

bool Inventory::viewspice() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenspice.txt");
	ifstream qFile("invenqspice.txt");
	ifstream pFile("invenpspice.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}

bool Inventory::viewgrain() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invengrain.txt");
	ifstream qFile("invenqgrain.txt");
	ifstream pFile("invenpgrain.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
	}
	MyReadFile.close();
	qFile.close();

	cin.get();
	_getch();
	return true;
}
