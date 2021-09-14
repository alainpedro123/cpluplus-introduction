JUMP STATEMENTS

1) break

int main ()
{
  for (int n=10; n>0; n--)
  {
    cout << n << ", ";
    if (n==3)
    {
      cout << "countdown aborted!";
      break;
    }
  }
}

// OUTPUT: 10, 9, 8, 7, 6, 5, 4, 3, countdown aborted!



2) continue
int main ()
{
  for (int n=10; n>0; n--) {
    if (n==5) continue;
    cout << n << ", ";
  }
  cout << "liftoff!\n";
}

OUTPUT: 10, 9, 8, 7, 6, 4, 3, 2, 1, liftoff!


3) goto

goto is generally deemed a low-level feature, with no particular use cases in modern higher-level programming paradigms generally used with C++