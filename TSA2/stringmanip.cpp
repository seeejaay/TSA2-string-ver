#include "stringmanip.h"
#include <iostream>

using namespace std;
stringmanip::stringmanip(int cap)
{
	capacity = cap;
	input = new char[capacity];
	input1 = new char[capacity];
}

stringmanip::~stringmanip()
{
	delete[] input;
	delete[] input1;
}

void stringmanip::convert(string& in)
{
	string inp;

	inp = in;
	for (int i = 0; inp[i] != '\0'; i++)
	{
		input[i] = inp[i];
		input[i + 1] = '\0';
	}
}

//void stringmanip::convert(string in, string in1)
//{
//	
//
//	for (int i = 0; in[i] != '\0'; i++)
//	{
//		input[i] = in[i];
//		input[i + 1] = '\0';
//	}
//
//	for (int i = 0; in1[i] != '\0'; i++)
//	{
//		input1[i] = in1[i];
//		input1[i + 1] = '\0';
//	}
//}


int stringmanip::length(string& in)
{
	convert(in);

	int counter;

	for (counter= 0; input[counter] != '\0'; counter++);

	
	return counter;
}

