#include "Phonebook.hpp"
#include <cstring>

int main()
{
	PhoneBook pb;

	std::string words;
	while(1)
	{
		std::cin >> words;
		if(strcmp(words.c_str(), "ADD") == 0)
		{
			pb.add_contact();
		}
		break;
	}
}
