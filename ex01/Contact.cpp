#include <iostream>
#include <string>

#include "Contact.hpp"
#include "Phonebook.hpp"

Contact::Contact(std::string nom, std::string prenom, std::string surnom, std::string numero, std::string secret)
{
	_nom = nom;
	_prenom = prenom;
	_surnom = surnom;
	_numero = numero;
	_secret = secret;
}
