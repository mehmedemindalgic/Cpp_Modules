#include "files.hpp"

int main(int ac, char **av)
{
	if(ac == 4)
	{
		files File;
		File.setFileName(av[1]);
		File.setSrcStr(av[2]);
		File.setDstStr(av[3]);
		duplicate(File);
	}
	else
	{
		std::cout << " \"./files <FileName>  <Source>  <Destination> \"" << std::endl;
	}
}