#include "Name.h"
#include <vector>
#include <iostream>

Name::Name()
{
	count = 0;
}

Name::Name(std::string newName)
{
	name = newName;
}

Name::~Name()
{
}

std::string Name::GetName()
{
	return name;
}

int Name::GetCount()
{
	return count;
}

void Name::SetName(std::string newName) 
{
	name = newName;
}

void Name::SetCount(int newCount)
{
	count = newCount;
}

void Name::CountCharacter()
{
	try
	{
		std::vector<char> nameVector(name.begin(), name.end());
		count = nameVector.size();
	}
	catch (const std::exception&)
	{
		std::string Message = "Error with function CountCharacter";
		std::cout << Message;
	}
}
