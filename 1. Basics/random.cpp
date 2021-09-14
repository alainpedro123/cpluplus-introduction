#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int number;

int main ()
{
  cout << "Random number from 1 to 100" << endl;
  srand(time(NULL)); // it allows to generate a new random number every time we run the program
  number = rand()%100+1;
  cout << number;
  return 0;
}


##################################################################

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int number;

int main ()
{
  cout << "The program will start in 3 seconds";
  Sleep(3000);
  cout << endl;

  srand(time(NULL)); // it allows to generate a new random number every time we run the program

  for(int i = 0; i<=5; i++)
  {
    number = rand()%49+1;
    Sleep(1000);
    cout << number << "\a" << endl;
  }


  return 0;
}