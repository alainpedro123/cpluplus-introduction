1. WHILE

// custom countdown using while

int main ()
{
  int n = 10;

  while (n>0) {
    cout << n << ", ";
    --n;
  }

  cout << "liftoff!\n";
}


2. DO - WHILE

// echo machine
#include <string>

int main ()
{
  string str;
  do {
    cout << "Enter text: ";
    getline (cin,str);
    cout << "You entered: " << str << '\n';
  } while (str != "goodbye");
}


3.FOR 

int main ()
{
  for (int n=10; n>0; n--) {
    cout << n << ", ";
  }
  cout << "liftoff!\n";
}


4. FOR (Range-based)

// Sintax
a) for ( declaration : range ) statement;


#include <string>

int main ()
{
  string str {"Hello!"};
  for (char c : str)
  {
    cout << "[" << c << "]";
  }
  cout << '\n';
}

OUTPUT: [H][e][l][l][o][!]


// This loop is automatic and does not require the explicit declaration of any counter variable.
b) for (auto c : str)