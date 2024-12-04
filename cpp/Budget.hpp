#include <iostream>
#include <map>
#include <algorithm>
#include <fstream>
#include <exception>

class Budget
{
private:
	std::map<std::string, std::map<std::string, float>>	data;
	std::string	_title;
	std::string	_current_line;
public:
	Budget(std::string const & argv);
	~Budget();
};

Budget::Budget(std::string const & argv)
{
	std::ifstream	infile(argv);
	if (!infile.is_open())
		throw std::exception();
	while (getline(infile, _current_line)) {
		if (is_data()) {//dès qu'on croise une date suivie d'une phrase puis d'un nombre
			defineFormat();//on définit le format des dates, des données et des nombres
			fillMap();//on extrait les données de la 1ere ligne
			while (getline(infile, _current_line)) {
				fillMap();//on rempli la map de données
			}
		}
		else
			_title = _title + _current_line;
	}
}

Budget::~Budget()
{
}

