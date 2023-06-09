#include"addcart.h"
#include<iomanip>

//view Addcart

bool Addcart::showinven() {
manuinven:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Food" << endl;
	cout << "2. Personal Hygene" << endl;
	cout << "3. Household" << endl;
	cout << "4. Goto Checkout" << endl;
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
	else if (in == 4)
	{
		Checkout i;
		i.bill();
	}
	else
	{
		return true;
	}
}

bool Addcart::viewhygene() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenhygene.txt");
	ifstream pFile("invenphygene.txt");
	cout << "Item \t\t Price" << endl;
	while (getline(MyReadFile, myText)  && pFile >> p) {
		cout << std::left << setw(20) << myText  << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	carthygene();
	cin.get();
	_getch();
	return true;
}



bool Addcart::viewhouse() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenhouse.txt");
	ifstream pFile("invenphouse.txt");
	cout << "Item \t\t\t\t Price" << endl;
	while (getline(MyReadFile, myText) && pFile >> p) {
		cout << std::left << setw(20) << myText << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	carthouse();
	cin.get();
	_getch();
	return true;
}

bool Addcart::viewfood() {
foodmanu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Perishable " << endl;
	cout << "2. Non Perishable" << endl;
	cout << "3. Goto Checkout" << endl;
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
	else if (in == 3)
	{
		Checkout i;
		i.bill();
	}
	else
	{
		return true;
	}
}

bool Addcart::viewperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Meat" << endl;
	cout << "2. Fruits" << endl;
	cout << "3. Vegetable" << endl;
	cout << "4. Dairy" << endl;
	cout << "5. Goto checkout" << endl;
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
	else if (in == 5)
	{
		Checkout i;
		i.bill();
	}
	else
	{
		return true;
	}
}

bool Addcart::viewmeat() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenmeat.txt");
	ifstream pFile("invenpmeat.txt");
	cout << "Item \t\t\t\t \t Price" << endl;
	while (getline(MyReadFile, myText) && pFile >> p) {
		cout << std::left << setw(20) << myText << "\t\t" << p << endl;

	}
	MyReadFile.close();
	pFile.close();
	cartmeat();
	cin.get();
	_getch();
	return true;
}
bool Addcart::cartmeat() {
	cout << endl << "Using num keys to " << endl;

	addcmeat();

	cin.get();
	_getch();
	return true;
}
bool Addcart::addcmeat()
{
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqmeat.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqmeat.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invenmeat.txt");
	ifstream pFile("invenpmeat.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remmeat(arr, limit);
	tempfile(myText, p, quant);

	return true;
}
bool Addcart::remmeat(int* arr, int size) {
	int status = 0;
	status = remove("invenqmeat.txt");
	ofstream file1;
	file1.open("invenqmeat.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}



//dairy
bool Addcart::viewdairy() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invendairy.txt");
	ifstream pFile("invenpdairy.txt");
	cout << "Item \t\t\t\t Price" << endl;
	while (getline(MyReadFile, myText)  && pFile >> p) {
		cout << std::left << setw(20) << myText  << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	cartdairy();
	cin.get();
	_getch();
	return true;
}

bool Addcart::cartdairy() {
	cout << endl << "Using num keys to " << endl;

	addcdairy();

	cin.get();
	_getch();
	return true;
}
bool Addcart::addcdairy()
{
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqdairy.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqdairy.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invendairy.txt");
	ifstream pFile("invenpdairy.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remdairy(arr, limit);
	tempfile(myText, p, quant);

	return true;
}
bool Addcart::remdairy(int* arr, int size) {
	int status = 0;
	status = remove("invenqdairy.txt");
	ofstream file1;
	file1.open("invenqdairy.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}


//fruit
bool Addcart::viewfruit() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenfruit.txt");
	ifstream pFile("invenpfruit.txt");
	cout << "Item \t\t\t\t Price" << endl;
	while (getline(MyReadFile, myText)  && pFile >> p) {
		cout << std::left << setw(20) << myText << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	cartfruit();
	cin.get();
	_getch();
	return true;
}
//fruit
bool Addcart::cartfruit() {
	cout << endl << "Using num keys to " << endl;

	addcfruit();

	cin.get();
	_getch();
	return true;
}
bool Addcart::addcfruit()
{
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqfruit.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqfruit.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invenfruit.txt");
	ifstream pFile("invenpfruit.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remfruit(arr, limit);
	tempfile(myText, p, quant);

	return true;
}
bool Addcart::remfruit(int* arr, int size) {
	int status = 0;
	status = remove("invenqfruit.txt");
	ofstream file1;
	file1.open("invenqfruit.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}

//vege
bool Addcart::viewvege() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenvege.txt");
	ifstream pFile("invenpvege.txt");
	cout << "Item \t\t\t\t Price" << endl;
	while (getline(MyReadFile, myText)  && pFile >> p) {
		cout << std::left << setw(20) << myText << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	cartvege();
	cin.get();
	_getch();
	return true;
}
// vege
bool Addcart::cartvege() {
	cout << endl << "Using num keys to " << endl;

	addcvege();

	cin.get();
	_getch();
	return true;
}
bool Addcart::addcvege()
{
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqvege.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqvege.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invenvege.txt");
	ifstream pFile("invenpvege.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remvege(arr, limit);
	tempfile(myText, p, quant);

	return true;
}
bool Addcart::remvege(int* arr, int size) {
	int status = 0;
	status = remove("invenqvege.txt");
	ofstream file1;
	file1.open("invenqvege.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}



//view non perish
bool Addcart::viewnonperish() {
manu:
	system("CLS");
	cout << " Select option in which you want to add stock and price" << endl << endl;
	cout << "1. Snacks" << endl;
	cout << "2. Spice" << endl;
	cout << "3. Grains" << endl;
	cout << "4. Cereals" << endl;
	cout << "5. Goto Checkout" << endl;
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
	else if (in == 5)
	{
		Checkout i;
		i.bill();
	}
	else
	{
		return true;
	}
}


bool Addcart::viewcereal() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invencereal.txt");
	ifstream pFile("invenpcereal.txt");
	cout << "Item \t\t\t\t Price" << endl;
	while (getline(MyReadFile, myText)  && pFile >> p) {
		cout << std::left << setw(20) << myText  << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	cartcereal();
	cin.get();
	_getch();
	return true;
}

bool Addcart::viewsnack() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invensnack.txt");
	ifstream pFile("invenpsnack.txt");
	cout << "Item \t\t\t\t Price" << endl;
	while (getline(MyReadFile, myText) && pFile >> p) {
		cout << std::left << setw(20) << myText  << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	cartsnack();
	cin.get();
	_getch();
	return true;
}

bool Addcart::viewspice() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invenspice.txt");
	ifstream pFile("invenpspice.txt");
	cout << "Item \t\t\t\t Price" << endl;
	while (getline(MyReadFile, myText)  && pFile >> p) {
		cout << std::left << setw(20) << myText  << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	cartspice();
	cin.get();
	_getch();
	return true;
}

bool Addcart::viewgrain() {
	system("CLS");
	string myText;
	int q;
	int p;
	ifstream MyReadFile("invengrain.txt");
	ifstream pFile("invenpgrain.txt");
	cout << "Item \t\t\t\t Price" << endl;
	while (getline(MyReadFile, myText)  && pFile >> p) {
		cout << std::left << setw(20) << myText << "\t\t" << p << endl;
	}
	MyReadFile.close();
	pFile.close();
	pFile.close();
	cartgrain();
	cin.get();
	_getch();
	return true;
}

//carting foood
bool Addcart::cartcereal() {
	cout << endl << "Using num keys to " << endl;

	addccereal();

	cin.get();
	_getch();
	return true;
}
bool Addcart::addccereal()
{
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqcereal.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqcereal.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invencereal.txt");
	ifstream pFile("invenpcereal.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remcereal(arr, limit);
	tempfile(myText, p, quant);

	return true;
}
bool Addcart::remcereal(int* arr, int size) {
	int status = 0;
	status = remove("invenqcereal.txt");
	ofstream file1;
	file1.open("invenqcereal.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}




//snack
bool Addcart::cartsnack() {
	cout << endl << "Using num keys to " << endl;

	addcsnack();

	cin.get();
	_getch();
	return true;
}
bool Addcart::addcsnack()
{
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqsnack.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqsnack.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invensnack.txt");
	ifstream pFile("invenpsnack.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remsnack(arr, limit);
	tempfile(myText, p, quant);

	return true;
}
bool Addcart::remsnack(int* arr, int size) {
	int status = 0;
	status = remove("invenqsnack.txt");
	ofstream file1;
	file1.open("invenqsnack.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}







//spice
bool Addcart::cartspice() {
	cout << endl << "Using num keys to " << endl;

	addcspice();

	cin.get();
	_getch();
	return true;
}
bool Addcart::addcspice()
{
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqspice.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqspice.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invenspice.txt");
	ifstream pFile("invenpspice.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remspice(arr, limit);
	tempfile(myText, p, quant);

	return true;
}
bool Addcart::remspice(int* arr, int size) {
	int status = 0;
	status = remove("invenqspice.txt");
	ofstream file1;
	file1.open("invenqspice.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}


bool Addcart::cartgrain() {
	cout << endl << "Using num keys to " << endl;

	addcgrain();

	cin.get();
	_getch();
	return true;
}
bool Addcart::addcgrain()
{
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqgrain.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqgrain.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invengrain.txt");
	ifstream pFile("invenpgrain.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remgrain(arr, limit);
	tempfile(myText, p, quant);

	return true;
}
bool Addcart::remgrain(int* arr, int size) {
	int status = 0;
	status = remove("invenqgrain.txt");
	ofstream file1;
	file1.open("invenqgrain.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}



//for carting household
bool Addcart::carthouse() {
	
	cout << endl << "Using num keys to " << endl;
	
	addchouse();
	
	cin.get();
	_getch();
	return true;
}

bool Addcart::addchouse() {
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit=0;
	int quant;
	ifstream qsizeFile("invenqhouse.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}
	
	int *arr = new int[limit];
	ifstream qFile("invenqhouse.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}

	
	ifstream MyReadFile("invenhouse.txt");
	ifstream pFile("invenphouse.txt");
	cout << "Enter 0 to go back" << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in-1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remhouse(arr, limit);
	tempfile(myText,p,quant);
	
	return true;
}

//removing and adding new file
bool Addcart::remhouse(int *arr, int size) {
	int status=0;
	status = remove("invenqhouse.txt");
	ofstream file1;
	file1.open("invenqhouse.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}


//creating a temporary files 
bool Addcart::tempfile(string myText, int p, int quant) {
	ofstream file1;
	file1.open("tempname.txt", ios::app);
	file1 << myText << endl;
	file1.close();

	ofstream file2;
	file2.open("tempprice.txt", ios::app);
	file2 << p << endl;
	file2.close();

	ofstream file3;
	file3.open("tempquantity.txt", ios::app);
	file3 << quant << endl;
	file3.close();

	return true;
}

//for carting hygene

bool Addcart::carthygene() {
	cout << endl << "Using num keys to " << endl;

	addchygene();

	cin.get();
	_getch();
	return true;
}


bool Addcart::addchygene() {
	string myText;
	int q = 0;
	int p = 0;
	int in = 0;
	int limit = 0;
	int quant;
	ifstream qsizeFile("invenqhygene.txt");
	if (qsizeFile.is_open())                // to open txt file
	{
		while (qsizeFile.peek() != EOF)         // to find how much lines are in the text file
		{
			getline(qsizeFile, myText);
			limit++;
		}
		qsizeFile.close();
		// to close file
	}

	int* arr = new int[limit];
	ifstream qFile("invenqhygene.txt");
	for (int i = 0; i < limit; i++)
	{
		qFile >> arr[i];
	}


	ifstream MyReadFile("invenhygene.txt");
	ifstream pFile("invenphygene.txt");
	cout << "Enter 0 to return back " << endl << endl;
	cout << "Select the item you want to add in cart : " << endl;
	cin >> in;
	if (in == 0)
	{
		return true;
	}
	cout << "Enter the quantity of Selected Item" << endl;
	cin >> quant;
	for (int i = 1; i <= in; i++)
	{
		getline(MyReadFile, myText);
		pFile >> p;
	}
	arr[in - 1] = arr[in - 1] - quant;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remhygene(arr, limit);
	tempfile(myText, p, quant);

	return true;
}

//removing and adding new file
bool Addcart::remhygene(int* arr, int size) {
	int status = 0;
	status = remove("invenqhygene.txt");
	ofstream file1;
	file1.open("invenqhygene.txt");
	for (int i = 0; i < size; i++)
	{
		file1 << arr[i] << endl;
	}
	file1.close();
	return true;
}
