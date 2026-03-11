#include <iostream>
#include <string>
#include "Contact.hpp"


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {

	private :
		std::string _repertoire[8];
		int _nb_contact;
		int _nb_max;
		int _index;
	public :
		Phonebook();
		_add_contact(std::string prenom, std::string nom, std::string surnom, std::string number, std::string secret);
		_search_contact();

};

