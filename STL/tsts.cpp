// string::find
#include <iostream>       // std::cout
#include <string>         // std::string
using namespace std;
int main ()
{
  std::string str = "There are two needles in this haystack with needles.";
  std::string str2  = "needle";

  // different member versions of find in the same order as above:
  // 注意find返回的结果是size_t 
  size_t found = str.find(str2);
  //如果最后还是找到了，因为返回的位置不是npos 
  if (found != string::npos)
    std::cout << "first 'needle' found at: " << found << '\n';
	
  found=str.find("needles are small",found+1,6);
  if (found!=std::string::npos)
    std::cout << "second 'needle' found at: " << found << '\n';

  found=str.find("haystack");
  if (found!=std::string::npos)
    std::cout << "'haystack' also found at: " << found << '\n';

  found=str.find('.');
  if (found!=std::string::npos)
    std::cout << "Period found at: " << found << '\n';

  // let's replace the first needle:
  str.replace(str.find(str2),str2.length(),"preposition");
  std::cout << str << '\n';

  return 0;
}
