#pragma once
#include<fstream>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
#include"Newage.h"
#include"Admin.h"

using namespace std;
class Feed {
	string cust_feed;
	string customer_name;
public:
	void feedback();
	bool write_feedback(string file, Feed obj);
	bool read_a_feedback();
	bool show_feedback();
};