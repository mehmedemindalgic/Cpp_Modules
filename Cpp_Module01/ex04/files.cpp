#include "files.hpp"

void files::setFileName(std::string name){
	fileName = name;
	dupFileName = name.append(".replace");
}

void files::setSrcStr(std::string name){
	srcStr = name;
	srcLen = name.length();
}

void files::setDstStr(std::string name){
	dstStr = name;
	dstLen = name.length();
}


std::string files::getDupFileName(void){
	return(dupFileName);
}

std::string files::getFileName(void){
	return(fileName);
}

std::string files::getSrcStr(void){
	return(srcStr);
}

std::string files::getDstStr(void){
	return(dstStr);
}

size_t files::getSrcLen(void){
	return(srcLen);
}

size_t files::getDstLen(void){
	return(dstLen);
}

void duplicate(files Files)
{
	std::ifstream input_files(Files.getFileName());
	if(input_files.is_open())
	{
    	std::ofstream output_file(Files.getDupFileName());

    	if (!output_file.is_open() || !input_files.is_open()) {
        std::cout << "File Creation Error!" << std::endl;
        return ;
   		}
			std::string line;
		while (std::getline(input_files, line))
		{
			output_file << reverse(line, Files) << std::endl;
		}

		output_file.close();
		input_files.close();

		std::cout << "File creation is complete." << std::endl;
	}
	else
	{
		std::cout << "File Not Found!" << std::endl;
		return ;
	}

    return ;
}
std::string reverse(std::string orignal, files Files)
{
	size_t position = orignal.find(Files.getSrcStr());

	while(position != std::string::npos){

   		orignal.erase(position, Files.getSrcLen());
    	orignal.insert(position , Files.getDstStr());
		position = orignal.find(Files.getSrcStr(), position + Files.getDstLen());
	}
	return(orignal);
}