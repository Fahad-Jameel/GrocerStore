#include"checkout.h"
#include<Windows.h>

void Checkout::bill() {
	system("CLS");
	cout << "Calculating         " << endl;
	for (int i = 0; i < 5; i++) {
		Sleep(500);
		cout << "  .";
	}
	calbill();

	
}
bool Checkout::calbill() {
	system("CLS");
	string myText;
	int total=0;
	int q;
	int p;
	ifstream MyReadFile("tempname.txt");
	ifstream qFile("tempquantity.txt");
	ifstream pFile("tempprice.txt");
	cout << "Item \t\t   Quantity \t Price" << endl;
	while (getline(MyReadFile, myText) && qFile >> q && pFile >> p) {
		cout << std::left << setw(20) << myText << q << "\t\t" << p << endl;
		total = total + (q * p);
	}
	cout << "\n-----------------------------------------------------------------------\n";
	cout << "Total Bill =\t" << total;
	MyReadFile.close();
	qFile.close();
	pFile.close();
	remtemp();  //function to delete temporary files of cart



	cin.get();
	_getch();
	system("CLS");
	cout << "Loading         " << endl;
	for (int i = 0; i < 3; i++) {
		Sleep(500);
		cout << "  .";
	}
	manu:
	system("CLS");
	cout << "1.Jazzcash" << endl;
	cout << "2.Easypaisa" << endl;
	cout << "3.Cheque" << endl;
	cout << "4.Debit/Credit Card" << endl;
	int in;
	cin >> in;
	if (in == 1)
	{
		jazzcash(total);
	}
	else if (in == 1)
	{
		easypaisa(total);
	}
	else if (in == 3)
	{
		cheque(total);
	}
	else if (in == 4)
	{
		card(total);
	}
	else {
		cout << "Chose coorect option " << endl;
		goto manu;
	}
	cout << "Payment done successfully. " << endl;
	cout << endl << "Press 1 to give feedback or any other key to logout" << endl;
	int key;
	cin >> key;
	if (key == 1)
	{
		Feed obj;
		obj.feedback();
	}
	else {
		Store obj;
		obj.Run();
	}

	return true;
}

bool Checkout::remtemp() {
	int status;   //to delete temporary files
	status = remove("tempname.txt");
	status = remove("tempquantity.txt");
	status = remove("tempprice.txt");
	if (status == 0)
		cout << "\nPress Enter to Select Payment Method";
	else
		cout << "\nError Occurred!";
	cout << endl;
	return true;
}

bool Checkout::jazzcash(int total) {
	long long int no;
	int pin;
	system("CLS");
	cout << "Loading         " << endl;
	for (int i = 0; i < 3; i++) {
		Sleep(500);
		cout << "  .";
	}
	system("CLS");
	cout << "Enter your Jazzcash Number" << endl;
	cin >> no;
	cout << "Enter Pin" << endl;
	cin >> pin;
	system("CLS");
	cout << "Processing         " << endl;
	for (int i = 0; i < 5; i++) {
		Sleep(500);
		cout << "  .";
	}
	system("CLS");
	cout << total << " Rs Deducted from your account" << endl;

	return true;
}
bool Checkout::easypaisa(int total) {
	long long int no;
	int pin;
	system("CLS");
	cout << "Loading         " << endl;
	for (int i = 0; i < 3; i++) {
		Sleep(500);
		cout << "  .";
	}
	system("CLS");
	cout << "Enter your Easypaisa Number" << endl;
	cin >> no;
	cout << "Enter Pin" << endl;
	cin >> pin;
	system("CLS");
	cout << "Processing         " << endl;
	for (int i = 0; i < 5; i++) {
		Sleep(500);
		cout << "  .";
	}
	system("CLS");
	cout << total << " Rs Deducted from your account" << endl;
	return true;
}
bool Checkout::card(int total) {
	long long int no;
	int cvv;
	string name;

	system("CLS");
	cout << "Loading         " << endl;
	for (int i = 0; i < 3; i++) {
		Sleep(500);
		cout << "  .";
	}
	system("CLS");
	cout << "Enter your Card number " << endl;
	cin >> no;
	cout << "Enter your cvv" << endl;
	cin >> cvv;
	cout << "Enter your name " << endl;
	cin >> name;
	system("CLS");
	cout << "Please wait         " << endl;
	for (int i = 0; i < 6; i++) {
		Sleep(500);
		cout << "  .";
	}
	return true;
}
bool Checkout::cheque(int total) {
	long long int no;
	string name;
	string branch;
	string bank;
	system("CLS");
	cout << "Loading         " << endl;
	for (int i = 0; i < 3; i++) {
		Sleep(500);
		cout << "  .";
	}
	system("CLS");
	cout << "Enter your Account number " << endl;
	cin >> no;
	cout << "Enter your name " << endl;
	cin >> name;
	cout << "Enter your bank name " << endl;
	cin >> bank;
	cout << "Enter your branch name " << endl;
	cin >> branch;
	system("CLS");
	cout << "Please wait ! This will take time       " << endl;
	cout << "Confirming your cheque from bank     ";
	for (int i = 0; i < 4; i++) {
		Sleep(2000);
		cout << "  .";
	}
	cout << endl;
	return true;
}