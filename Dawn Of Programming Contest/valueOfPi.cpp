#include<iostream>
#include<math.h>

using namespace std;

int main(){

   double r, area, pi;

   cin>>r;
   pi = acos(-1); //22/7 is not true value of pi, cos180=-1
   area = pi* r* r;

   cout<<area;

    return 0;
}
