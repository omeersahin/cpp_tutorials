#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std; //std::cout -> cout  

int main(int argc,char** argv)
{
  string str1 = "This is String1";
  cout << "String : " + str1 << endl;
  cout << "String First Character : " << str1[0] << endl;
  cout << "String Last Character : " << str1[sizeof(str1)-1] << endl;
  cout << "String Length : " << str1.length() << endl;

  string str2 = str1;
  string str3(str2, 4);
  string str4 = str1 + " and ThisisString2";
  str4.append("!");
  str4.erase(10,5);
  cout << "STR4 : " << str4 << endl;
  if(str4.find("string")) cout << "Including 'string' keyword" << endl;

  cout << str4.substr(3,6) << endl;

  char num1 = '1';
  char letter1 = 'a';
  char space1 = ' ';

  cout << "Num1 is number : " << isdigit(num1) << endl;
  cout << "Letter1 is letter : " << isalpha(letter1) << endl;
  cout << "Space1 is space : " << isspace(space1) << endl;
  cout << "Num1 is number or letter: " << isalnum(num1) << endl;
  cout << "Letter1 is number or letter: " << isalnum(letter1) << endl;






  vector<string> words;
  stringstream str5("word1 word2 word3 word4");
  string word;

  while(getline(str5,word,' '))
  {
    words.push_back(word);
  }
  for(int i = 0; i < words.size();++i)
  {
    cout << words[i] << endl;
  }
}