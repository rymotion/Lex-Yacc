#include <iostream>
#include <filestream>

using namespace std;
int main(int argc, char const *argv[])
{
	fstream file;

	file.open(argv[1]);
	
	return 0;
}