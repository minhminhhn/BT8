
#include <iostream>

 using namespace std;

int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
    cout << (void*) cp << " : " << (*cp) << endl;
  }

   int b[6] = {1,2,3,4,5,0};
   for (int *cp = &b[0]; (*cp) != 0; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;

    }
   // =>int: 4byte
   double c[7] = {1,2,3,4,5,6,0};
   for (double *cp = &c[0]; (*cp) != 0; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;

    }
    //=> double: 8 byte
   double c[7] = {1,2,3,4,5,6,0};
   for (double *cp = &c[0]; (*cp) != 0; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
    return 0;

}

