#include"feedback.h"

void Feed::feedback() {
	cout << "Enter your name" << endl;
	cin >> customer_name;
	cout << "\nEnter Your Feedback about the Store: ";
	cin >> cust_feed;
	cout << endl;
	write_feedback("feedbacks.dat", *this);
	cout << "press any key to logout" << endl;
	cin.get();
	_getch();
	Store i;
	i.Run();
}

bool Feed::write_feedback(string file, Feed obj)
{
	ofstream fout(file, ios::app | ios::binary);
	fout.write((char*)&obj, sizeof(obj));
	fout.close();
	return true;
}


bool Feed::read_a_feedback()
{
	Feed obj;
	ifstream fin("feedbacks.dat", ios::binary);
	while (fin.read((char*)&obj, sizeof(obj)))
	{
		
			obj.show_feedback();
	}
	fin.close();
	cin.get();
	_getch();
	
	return true;
}
bool Feed::show_feedback() {

	cout << "***************Feedback *********************" << endl;
		cout << "Customer Name: " << this->customer_name << endl;
		cout << "Customer's Feedback: " << this->cust_feed << endl;
	cin.get();
	_getch();
	return true;
}