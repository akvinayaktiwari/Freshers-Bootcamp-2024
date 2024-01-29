// scope.cpp
// Accessing objects with equal names
// ---------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;
int var = 0;
namespace Special { int var = 100; }
int main()
{
   int var = 10;
   cout << setw(10) << var; // 1. functional scope
   {
   	int var = 20;
   	cout << setw(10) << var << endl; // 2. block scope
   	{
   		++var;
   		cout << setw(10) << var; // 3. block scope
   		cout << setw(10) << ++ ::var; // 4. global scope
   		cout << setw(10) << Special::var * 2 // 5. Special namespace scope
   			<< endl;
   	}
   	cout << setw(10) << var - ::var; // 6. block and global scope
   }
   cout << setw(10) << var << endl; // 7. functional scope
   return 0;
}

/*
1-> 10
2-> 20
3-> 21
4-> 1
5-> 200
6-> 20
7-> 10
*/
