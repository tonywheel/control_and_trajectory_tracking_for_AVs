

#include <iostream>
#include <string>

char* intToString(std::string s) {
  int x = s.length();
  char bytes[4];
  for (int i = 3; i > -1; i--) {
    std::cout << bytes[3 - i] << std::endl;
    auto chr = (char) (x >> (i * 8) & 0xff);
    std::cout << chr << std::endl;
    bytes[3 - i] = chr;
  }
  return bytes;
}

int main() {
  
//   std::cout << "hello" << std::endl;
//   char hard[] = "this\0has embedded\0zero\0characters";
  
//   for (auto chr : hard) {
//     std::cout << chr << std::endl;
//   }
  
  char c = '\000';
  
  std::cout << c << std::endl;
  
  std::string s = "hello";
  std::string s_long = intToString(s);
  for (auto chr : s_long) {
    std::cout << chr << std::endl;
  }
}