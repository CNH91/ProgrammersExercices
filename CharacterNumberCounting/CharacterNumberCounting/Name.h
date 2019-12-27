#pragma once
#include <string>

class Name
{
private:
	std::string name;
	int count;
public:
	Name();
	Name(std::string);
	~Name();

	std::string GetName();
	int GetCount();

	void SetName(std::string);
	void SetCount(int);

	void CountCharacter();

};

