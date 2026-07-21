#include <iostream>
using namespace std;
bool searchPlayer(char arr[], int size, char target)
{
 for(int i = 0; i < size; i++)
 {
 if(arr[i] == target)
 {
 return true;
 }
 }
 return false;
}
int main()
{
 char team[11] = {'b', 'r', 's', 'f', 'h', 'a', 'm', 'n','k', 'i', 'z'
};
 char target;
 cout<<"enter target player 1sr alphabet :";
 cin >> target;
 bool found;
found = searchPlayer(team, 11, target);
if(found == true)
{
 cout << "Player is found";
}else
{
 cout << "Player not found";
}
 return 0;
}
