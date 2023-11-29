#ifndef user_h
#define user_h

#include <iostream>
#include <string>
using namespace std;

struct User
{
private:
	string Midname;
	string Adress;
	string Phone;

public:
	User();
	User(string, string, string);
	~User();

	inline void SetMidname(string);
	inline void SetAdress(string);
	inline void SetPhone(string);
	inline string GetMidname() const;
	inline string GetAdress() const;
	inline string GetPhone() const;
	
};

User::User()
{
	Midname = "Estriper";
	Adress = "Kievskaya21";
	Phone = "+380967141244";
}

User::User(string midname, string adress, string phone)
{
	Midname = midname;
	Adress = adress;
	Phone = phone;
}

User::~User()
{
	Midname.clear();
	Adress.clear();
	Phone.clear();
}

inline void User::SetMidname(string midname)
{
	Midname = midname;
}

inline void User::SetAdress(string adress)
{
	Adress = adress;
}

inline void User::SetPhone(string phone)
{
	Phone = phone;
}

inline string User::GetMidname()const
{
	return Midname;
}

inline string User::GetAdress()const
{
	return Adress;
}

inline string User::GetPhone()const
{
	return Phone;
}

#endif 

