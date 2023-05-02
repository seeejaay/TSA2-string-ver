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

void stringmanip::convert(char * in)
{
	for (int i = 0; in[i] != '\0'; i++)
	{
		input[i] = in[i];
		input[i + 1] = '\0';
		in[i] = '\0';
	}
}

void stringmanip::convert(char* in, char* in1)
{
	
	for (int i = 0; in[i] != '\0'; i++)
	{
		input[i] = in[i];
		input[i + 1] = '\0';
		in[i] = '\0';
	}

	for (int i = 0; in1[i] != '\0'; i++)
	{
		input1[i] = in1[i];
		input1[i + 1] = '\0';
		in1[i] = '\0';
	}
}


int stringmanip::length(char* in)
{
	convert(in);
	
	int counter;

	for (counter= 0; input[counter] != '\0'; counter++);

	
	return counter;
}

string stringmanip::compare(char *in,char*in1)
{
	convert(in, in1);

	int inSize=0, in1Size=0;

	while (input[inSize] != '\0')
	{
		inSize++;
	}

	while (input1[in1Size] != '\0')
	{
		in1Size++;
	}

	if (inSize > in1Size)
	{
		return input;
	}
	else if (in1Size > inSize)
	{
		return input1;
	}
	
}