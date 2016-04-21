#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#define FILE_PATH "exercise8_4.cpp"

using namespace std;



void readline_from_file(string file_path, vector<string>& v)
{
	ifstream input(file_path, ifstream::in);
	string line;
	if (input)
	{
		while (getline(input, line))
		{
			v.push_back(line);
		}
	} else {
		cout << "create input stream error!" << endl;
	}
}

void print_vector(vector<string>& v)
{
	for (auto &line : v)
	{
		cout << line << endl;
	}
}

int main(int argc, char const *argv[])
{

	std::vector<string> v;
	string filename(FILE_PATH);

	readline_from_file(filename, v);

	print_vector(v);

	return 0;
}