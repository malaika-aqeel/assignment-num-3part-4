#include <iostream>
using namespace std;
int largest_num(int array[], int size)
{
 int largest = array[0];
 for(int i = 1; i < size; i++)
 {
 if(array[i] > largest)
 {
 largest = array[i];

 }
 }
 return largest;
}
int smallest_num(int array[], int size)
{
	int smallest = array[0];
 for(int i = 1; i < size; i++)
 {
 if(array[i] < smallest)
 {
 smallest = array[i];

 }
 }
 return smallest;
}
int main()
{
 int N;
 cout<<"enter size";
 cin >> N;
 int scores[100];
 for(int i = 0; i < N; i++)
 {
 cin >> scores[i];
 }
 cout << "largest score is :"<< " "<<largest_num(scores, N)<<endl;
 cout << "smallest score is :"<< " "<<smallest_num(scores, N);
 return 0;
}

