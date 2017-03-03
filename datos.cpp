#include <iostream>
#include<math.h> 

int main(void)

{
  double b;
  for (int a=0;a<=100;a++)
    {
      b=a*(sin(a));
      std::cout << a <<"\t"<< b <<std::endl;
      
    }
  return 0;
}
