#include <iostream>
#include <string>

#include "Contact.hpp"
#include "Phonebook.hpp"


void Phonebook(){

}


void _add_contact()
{
	int i = 0;
	std::string info[5];

	while(i < 5)
	{
		std::cout << " : ";
		std::getline(std::cin, info[i]);
		if(i == 4)
		{
			for (int j = 0; j < info[i].size(); j++)
			{
				if(!isdigit(info[i][j]))
				{
					std::cout << "Numero Imposible" << std::endl;
					continue;
				}
			}
		}
		i++;
	}
	_repertoire[_index] = Contact(info[0], info[1] ,info[2],info[3],info[4]);
	_index = (_index + 1) % 8;
}
