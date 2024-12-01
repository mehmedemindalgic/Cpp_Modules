#ifndef FILES_HPP
#define FILES_HPP

#include <iostream>
#include <fstream>

class files{
	private:

		std::string fileName;
		std::string dupFileName;
		std::string srcStr;
		std::string dstStr;
		size_t srcLen;
		size_t dstLen;

	public:

		void setFileName(std::string);
		void setSrcStr(std::string);
		void setDstStr(std::string);

		std::string getDupFileName(void);
		std::string getFileName(void);
		std::string getSrcStr(void);
		std::string getDstStr(void);
		size_t getSrcLen(void);
		size_t getDstLen(void);

		
};
	void duplicate(files);
	std::string reverse(std::string, files);
#endif