#include "Name.h"

Name::Name()
{
	isNameExist = false;
}

Name::Name(std::string newName)
{
	name = newName;
	isNameExist = true;
}

Name::~Name()
{

}

std::string Name::GetName()
{
	return name;
}

void Name::SetName(std::string newName)
{
	name = newName;
}

void Name::FormatName()
{
	
}

void Name::LeftTrim(std::string StringToTrim)
{
	StringToTrim.erase(0, StringToTrim.find_first_not_of(" "));
}

void Name::RightTrim(std::string StringToTrim)
{
}

void Name::Trim(std::string StringToTrim)
{
}
