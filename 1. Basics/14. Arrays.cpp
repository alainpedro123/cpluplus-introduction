ARRAYS

1) Initializing arrays
-  int array [5];
-  int array [5] = { 16, 2, 77, 40, 12071 };

2) Accessing the values of an array
array [2] = 75;
x = array[2];

3) Some other valid operations with arrays:
array[0] = a;
array[a] = 75;
b = array [a+2];
array[array[a]] = array[2] + 5;

4) Multidimensional arrays
int array2D [3][5];    					        // 2x2
char century [100][365][24][60][60];	  // 4x4


5) Arrays as parameters

// arrays as parameters
#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main ()
{
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 8, 10};
  printarray (firstarray,3);
  printarray (secondarray,5);
}


6) Library arrays

6.1) Language built-in array

#include <iostream>

using namespace std;

int main()
{
  int myarray[3] = {10,20,30};

  for (int i=0; i<3; ++i)
    ++myarray[i];

  for (int elem : myarray)
    cout << elem << '\n';
}


6.2) container library array

#include <iostream>
#include <array>
using namespace std;

int main()
{
  array<int,3> myarray {10,20,30};

  for (int i=0; i<myarray.size(); ++i)
    ++myarray[i];

  for (int elem : myarray)
    cout << elem << '\n';
}