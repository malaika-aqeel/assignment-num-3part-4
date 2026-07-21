#include <iostream>
using namespace std;
int wordLength(char word[])
{
 int count = 0;
 for(int i = 0; word[i] != '\0'; i++)
 {count++;
 }
 return count;
}
int main()
{
 char word[100];
 cout << "enter word";
 cin >> word;
 int length = wordLength(word);
 cout << "Length of word : " << length;
 return 0;
}
