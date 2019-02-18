#include <iostream>
#include <filesystem>

namespace fs = std::experimental::filesystem::v1;

int main(int argc,char* argv[])
{
	std::cout << "Hello World!" << std::endl;

	std::cout << fs::current_path() << std::endl;

	for (int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << std::endl;
	}
	system("PAUSE");
	return 0;
}