#include"User.h"



User::User()
{
	username[0] = '\0';
	password[0] = '\0';
	cnic = 0;
}

User::User(string un, int cn, string pass)
{
	strcpy_s(username, un.c_str());
	strcpy_s(password, pass.c_str());
	cnic = cn;
}

void User::set_cnic(int cn)
{
	cnic = cn;
}

void User::set_username(string un)
{
	strcpy_s(username, un.c_str());
}

void User::set_password(string pass)
{
	strcpy_s(password, pass.c_str());
}

string User::get_username() const
{
	return username;
}

string User::get_password() const
{
	return password;
}

long long int User::get_cnic() const
{
	return cnic;
}