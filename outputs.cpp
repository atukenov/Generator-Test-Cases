#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

string filename, outputname;

int n, m;

int solve(int n, int m)
{
    int s = 0;
    s = n + n / (m - 1);
    if (n % (m - 1) == 0)
        s -= 1;
    return s;
}

int main()
{
	srand(time(NULL)); 
	for (int i = 0; i <= 20; ++i)
	{
		filename = "input";
		outputname = "output";
		if (i < 10)
		{
			filename = filename + '0' + to_string(i),
			outputname = outputname + '0' + to_string(i);  // files input01 .. input09
		}
		else
		{
			filename = filename + to_string(i),
			outputname = outputname + to_string(i);	 // files input10 and more
		}
		filename = "TESTS/input/" + filename + ".txt";
		outputname = "TESTS/output/" + outputname + ".txt";
		freopen(filename.c_str(), "r", stdin); // create filename
		freopen(outputname.c_str(), "w", stdout); // create output with answer


		// --------YOUR SOLUTION ACCEPTED SOLUTION------------------
		scanf("%d %d\n", &n, &m);
    	cout << solve(n, m) << endl;
    	//----------------------------------------------------------
    	fclose(stdin);
    	fclose(stdout);
	}
}

