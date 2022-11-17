#include <string>
#include <iostream>
#include <fstream>

std::string getContant(std::string filename)
{
	std::ifstream	ifs(filename, std::ios::in);
	std::string		contant = "";

	if (!ifs.is_open())
	{
		std::cout << "file open failed" << std::endl;
		exit(0);
	}
	contant.resize(1024);
	char c;
	while (ifs.get(c))
		contant += c;
	ifs.close();
	return contant;
}

std::string replaceContant(std::string s1, std::string s2, std::string contant)
{
	std::size_t found = contant.find(s1);

	while (found != std::string::npos)
	{
		contant.erase(found, s1.size());
		contant.insert(found, s2);
		found = contant.find(s1);
	}

	return contant;
}

void writeContant(std::string contant, std::string newFilename)
{
	std::ofstream ofs(newFilename, std::ios::trunc | std::ios::out);
	if (!ofs.is_open())
	{
		std::cout << "file open failed" << std::endl;
		exit(0);
	}
	ofs.write(contant.data(), contant.length() + 1);
	ofs.close();
}

int main(int argc, char **argv)
{
	std::string contant;
	std::string filename;

	if (argc != 4)
	{
		std::cout << "invalid argument" << std::endl;
		return (0); 
	}

	filename = argv[1];
	contant = getContant(filename);
	contant = replaceContant(argv[2], argv[3], contant);
	writeContant(contant, filename + ".relpace");
}