#pragma once

#include "Human.hpp"

#include <list>
#include <vector>
#include <iostream>

std::vector< char > foo(std::list< Human >& people)
{
	// Twoja implementacja tutaj
	
	std::vector< char > v;

	for (Human &it_people : people) 
	{
		it_people.birthday();
		if (it_people.isMonster()) 
			v.emplace( v.begin(), 'n' );
		else 
			v.emplace( v.begin(), 'y' );
	}


	return v;
}
