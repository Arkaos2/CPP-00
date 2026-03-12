#include <iostream>
#include <string>
#include "Contact.hpp"
#include "Phonebook.hpp"

PhoneBook::PhoneBook() : _index(0) {}

PhoneBook::~PhoneBook(){

}

void PhoneBook::search_contact()
{
	int i = 0;

	while(i < _nb_contact || i < 8)
	{
		std::cout << i + 1 << "         " << '|' << _repertoire[i].get_prenom();
		std::cout <<'|' << _repertoire[i].get_nom();
		std::cout <<'|' << _repertoire[i].get_surnom();
	}
}

void PhoneBook::add_contact()
{
	int i = 0;
	std::string info[6];

	while(i < 6)
	{
		std::getline(std::cin, info[i]);
		i++;
	}
	_nb_contact++;
	_repertoire[_index] = Contact(info[0], info[1] ,info[2],info[3],info[4]);
	_index = (_index + 1) % 8;
}
