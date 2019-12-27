#pragma once
#include <string>

class String
{
private:
	std::string input;
	int count;
public:
	String();
	String(std::string);
	~String();

	std::string GetInput();
	int GetCount();

	void SetInput(std::string);
	void SetCount(int);
	
	void InputQuestion();
	void CountCharacter();

};

