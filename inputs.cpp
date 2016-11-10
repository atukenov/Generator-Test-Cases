#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

string  name = "input", filename;
char N[10];

int main()
{
	srand(time(NULL)); 
	for (int i = 0; i <= 20; ++i)
	{
		filename = name;
		if (i < 10)
			filename = filename + '0' + to_string(i); // files input01 .. input09
		else
		{
			filename = filename + to_string(i); // files input10 and more
		}
		freopen(filename.c_str(), "w", stdout); // create filename
		cout << rand() % 100 + 1 << ' ' << rand() % 100 + 1;  // add two numbers
	}
}