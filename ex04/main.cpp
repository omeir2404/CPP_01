#include <iostream>
#include <fstream>

int main(int argc, char** argv) {
	std::fstream infile;
	std::string s1;
	std::string s2;
	std::fstream outfile;
	std::string line;

	if (argc != 4) {
		std::cout << "Usage: ./<program name> <infilename> <string1> <string2>" << std::endl;
		return 1;
	}
	infile.open(argv[1], std::ios::in);
	if (!infile.is_open()) {
		std::cout << "Error opening infile" << std::endl;
		return 1;
	}
	else {
		std::cout << "inFile opened successfully" << std::endl;
	}
	std::string outname = std::string(argv[1]) + ".replace";
	outfile.open(outname.c_str(), std::fstream::out | std::fstream::trunc);
	if (!outfile.is_open()) {
		std::cout << "Error opening outfile" << std::endl;
		return 1;
	}
	else {
		std::cout << "outFile opened successfully" << std::endl;
	}
	s1 = argv[2];
	s2 = argv[3];
	while (std::getline(infile, line))
	{
		size_t pos = line.find(s1);
		while (pos != std::string::npos) {
			if ((pos == 0 || !std::isalnum(line[pos - 1])) && 
				(pos + s1.length() >= line.length() || !std::isalnum(line[pos + s1.length()]))) {
				line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			}
			pos = line.find(s1, pos + s2.length());
		}
		outfile << line << std::endl;
	}

	infile.close();
	outfile.close();
	return 0;
}
//remove lines 36 and 37 if you want to replace s1 with s2 in substrings that contain s1