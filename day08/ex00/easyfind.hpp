#include <iostream>
#include <vector>
#include <algorithm>

class NoOccurenceFound : public std::exception{
	const char * what() const throw (){return "No Occurence Found";};
};

template<typename T>	
typename T::iterator	easyfind(T & elem, int n)
{
	typename T::iterator occurence = std::find(elem.begin(), elem.end(), n);
	if (occurence == elem.end())
		throw NoOccurenceFound();
	else
		return occurence;
}
