#include "String.h"
#include <vector>
#include <iostream>

String::String()
{
	count = 0;
}

String::String(std::string newInput)
{
	input = newInput;
}

String::~String()
{
}

std::string String::GetInput()
{
	return input;
}

int String::GetCount()
{
	return count;
}

void String::SetInput(std::string newInput) 
{
	input = newInput;
}

void String::SetCount(int newCount)
{
	count = newCount;
}

void String::InputQuestion()
{
	std::cout << "What is the string?";
}

void String::CountCharacter()
{
	try
	{
		std::vector<char> nameVector(input.begin(), input.end());
		count = nameVector.size();
	}
	catch (const std::exception&)
	{
		std::string Message = "Error with function CountCharacter";
		std::cout << Message;
	}
}
