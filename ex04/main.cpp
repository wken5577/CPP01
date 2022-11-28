#include <string>
#include <iostream>
#include <fstream>

std::string getContent(std::string filename)
{
	std::ifstream	ifs(filename, std::ios::in);
	std::string		content = "";

	if (!ifs.is_open())
	{
		std::cout << "file open failed" << std::endl;
		exit(0);
	}
	char c;
	while (ifs.get(c))
		content += c;
	ifs.close();
	return content;
}

std::string replaceContent(std::string s1, std::string s2, std::string content)
{
	if (s1 == s2)
		return content;
	std::size_t found = content.find(s1);

	while (found != std::string::npos)
	{
		content.erase(found, s1.size());
		content.insert(found, s2);
		found = content.find(s1);
	}

	return content;
}

void writeContant(std::string content, std::string newFilename)
{
	std::ofstream ofs(newFilename, std::ios::trunc | std::ios::out);
	if (!ofs.is_open())
	{
		std::cout << "file open failed" << std::endl;
		exit(0);
	}
	ofs << content;
	ofs.close();
}

int main(int argc, char **argv)
{
	std::string content;
	std::string filename;

	if (argc != 4)
	{
		std::cout << "invalid argument" << std::endl;
		return (0); 
	}

	filename = argv[1];
	content = getContent(filename);
	content = replaceContent(argv[2], argv[3], content);
	writeContant(content, filename + ".relpace");
}