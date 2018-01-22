#include "first.h"//<> doesn't see in current directory ,it only sees in standard path directory
#include "iostream"//it works since it first fids in current directry then in standard oat directories
int main(int argc, char const *argv[])
{
	/* code */
	int a;
	first::getName();
	std::cin>>a;
	return 0;
}