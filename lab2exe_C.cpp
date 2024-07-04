
#include <iostream>
using namespace std;
#include <assert.h>

int strictly_increasing(const int *a, int n);

int main()
{
  int a[] = { 100 };
  int b[] = { 100, 200, 300, 400 };
  int c[] = { 400, 100, 200, 300 };
  int d[] = { 100, 400, 200, 300 };
  int e[] = { 100, 200, 200, 300 };
  int f[] = { 100, 200, 500, 300, 400 };
  int g[] = { 100, 200, 300, 500, 400 };

  cout << "Testing a. Size: " << sizeof(a) / sizeof(int) << endl;
  assert( strictly_increasing(a, sizeof(a) / sizeof(int)) );
  cout << endl;
  cout << "Testing b. Size: " << sizeof(b) / sizeof(int) << endl << endl;
  assert( strictly_increasing(b, sizeof(b) / sizeof(int)) );
  cout << endl;
  cout << "Testing c. Size: " << sizeof(c) / sizeof(int) << endl << endl;
  assert( !strictly_increasing(c, sizeof(c) / sizeof(int)) );
  cout << endl;
  cout << "Testing d. Size: " << sizeof(d) / sizeof(int) << endl << endl;
  assert( !strictly_increasing(d, sizeof(d) / sizeof(int)) );
  cout << endl;
  cout << "Testing e. Size: " << sizeof(e) / sizeof(int) << endl << endl;
  assert( !strictly_increasing(e, sizeof(e) / sizeof(int)) );
  cout << endl;
  cout << "Testing f. Size: " << sizeof(f) / sizeof(int) << endl << endl;
  assert( !strictly_increasing(f, sizeof(f) / sizeof(int)) );
  cout << endl;
  cout << "Testing g. Size: " << sizeof(g) / sizeof(int) << endl << endl;
  assert( !strictly_increasing(g, sizeof(g) / sizeof(int)) );
  

  cout << "All tests passed.\n";
  cout << "This suggests that strictly_increasing is correct,\n";
  cout << "but it does not PROVE that it is correct.\n";

  return 0;
}

int strictly_increasing(const int *a, int n)
{
  /* STUDENTS: Replace all of the code below with a RECURSIVE solution. */
  if(n == 1){
    cout << "n == 1. End of recursion." << endl;
    return 1;
  }
  cout << "n == " << n << ". Comparing " << a[n-1] << " and " << a[n-2] << ".\n";
  int result = (a[n-1] > a[n-2]) && strictly_increasing(a, n-1);
  cout << "Returning result " << result << " from comparing " << a[n-1] << " and " << a[n-2] << ".\n";
  return result;
}
