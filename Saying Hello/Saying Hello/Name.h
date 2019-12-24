#pragma once
#include <string>
class Name
{
private:
	std::string name;
	bool isNameExist;
public:
	Name();
	Name(std::string);
	~Name();

	std::string GetName();
	void SetName(std::string);

	void FormatName();
	void LeftTrim(std::string);
	void RightTrim(std::string);
	void Trim(std::string);

};

