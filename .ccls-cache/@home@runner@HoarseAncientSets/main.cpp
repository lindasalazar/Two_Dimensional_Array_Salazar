//Linda Salazar
//Teacher: Dr. Tyson McMillan
//Date: 04/11/2024
//A program to practice working with multi-dimensional arrays
#include <iostream>
using namespace std;

int main() 
{
  const int CITY = 2;
  const int WEEK = 7;

  int temperature[CITY][WEEK] = 
  {
    {83, 76, 77, 82, 85, 85, 83},
    {64, 77, 76, 81, 73, 69, 58}
  };
  cout << "Jacksonville Temperature: " << endl;
  for(int i = 0; i < WEEK; i++)
    {
      cout << "Day " << i + 1 << ": " << temperature[0][i] << endl;
    }
  cout << "Denver Temperature: " << endl;
  for(int i = 0; i < WEEK; i++)
    {
      cout << "Day " << i + 1 << ": " << temperature[1][i] << endl;
    }
  
  cout << "Enter all temperature for a week of first city and then second city. \n";

  for (int i = 0; i < CITY; ++i)
    {
      for (int j = 0; j < WEEK; ++j)
        {
          cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
          cin >> temperature[i][j];
        }
    }
  cout << "\n\nDisplaying Values:\n";

  for (int i = 0; i < CITY; ++i)
    {
      for (int j = 0; j < WEEK; ++j)
        {
          cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
        }
    }
  return 0;
}