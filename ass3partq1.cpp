#include <iostream>
#include <iomanip>
using namespace std;
double calculate_avg(int array[], int size) {
 int sum = 0;
 for(int i = 0; i < size; i++) {

 sum =sum+ array[i];

 }
 double avg=sum/size;
 return avg;
}
int main() {
 int N;
 cout<<"enter size :";
 cin >> N;
 int scores[100];
 for(int i = 0; i < N; i++) {
 cin >> scores[i];
 }

 double average = calculate_avg(scores, N);
 cout << fixed << setprecision(2) << average;
 return 0;
}
