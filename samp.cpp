#include<bits/stdc++.h>

using namespace std;
//swap a num using pass by ref
int swap(int *x, int *y)
{
 int t = *x;
  *x = *y;
  *y = t;
}
int main()
{
  int i=10;
  int j=20;
  
  swap(&i, &j);
  
  
 return 0; 
}
