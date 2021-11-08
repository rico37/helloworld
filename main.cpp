#include <iostream>
#include <string>
#include <map>
#include <iterator>

int main()
{
  int idx=0;
  std::string ss{"*Hello World!*"};
  std::map<std::string, int> mapOfWords;
  std::map<char,int> mapChar;
  
  std::cout << "Size of " << ss << ss.size() <<std::endl;
  for(auto s = ss.rbegin(); s < ss.rend(); s++)
	  std::cout << *s;
  for(auto &s : ss)
     mapChar.insert(std::make_pair(s,idx++));
	for(auto it=mapChar.begin(); it!=mapChar.end();it++)
       std::cout << it->first << "  " << it->second << std::endl;   
return 0;
}