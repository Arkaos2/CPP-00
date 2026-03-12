#include <iostream>
#include <string>

#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact() {}
Contact::Contact(std::string nom, std::string prenom, std::string surnom, std::string numero, std::string secret) : _nom(nom), _prenom(prenom), _surnom(surnom), _numero(numero), _secret(secret) {}

std::string Contact::get_nom()
{
	if(_nom.size() >= 10)
	{
		_nom.resize(10);
		_nom[9] = '.';
	}
	return _nom;
}

std::string Contact::get_prenom()
{
	if(_nom.size() >= 10)
	{
		_nom.resize(10);
		_nom[9] = '.';
	}
	return _prenom;
}

std::string Contact::get_surnom()
{
	if(_nom.size() >= 10)
	{
		_nom.resize(10);
		_nom[9] = '.';
	}
	return _surnom;
}

std::string Contact::get_numero()
{
	if(_nom.size() >= 10)
	{
		_nom.resize(10);
		_nom[9] = '.';
	}
	return _numero;
}

std::string Contact::get_secret()
{
	if(_nom.size() >= 10)
	{
		_nom.resize(10);
		_nom[9] = '.';
	}
	return _secret;
}
