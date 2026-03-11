#include <iostream>
#include <string>
#include "Phonebook.hpp"


class Contact{

	Contact(std::string _nom, std::string _prenom, std::string _surnom, std::string _numero, std::string _secret);
	private:
		std::string _nom;
		std::string _prenom;
		std::string _surnom;
		std::string _numero;
		std::string _secret;
};
