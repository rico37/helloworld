#include <iostream>
#include <string>

int main()
{
  std::string ss{"*Hello World!*"};
  std::cout << "Size of " << ss << ss.size() <<std::endl;
  for(auto s = ss.rbegin(); s < ss.rend(); s++)
	  std::cout << *s;
 
return 0;
}