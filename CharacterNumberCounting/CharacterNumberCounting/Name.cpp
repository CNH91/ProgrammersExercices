#include "Name.h"

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
	
	
}
