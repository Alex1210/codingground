#include <iostream>

using namespace std;

class SimpleCircle
{
    public:
    //SimpleCircle();
   // ~SimpleCircle();
    void setRadius(int);
    int getRadius();
    
    private:
    int itsRadius;
    
};

void   SimpleCircle:: setRadius(int x)
{
    itsRadius=x;
}

int SimpleCircle::getRadius()
{
    return itsRadius;
}

int main()
{
   cout << "Hello World" << endl; 

  SimpleCircle my;
  my.setRadius(6);
 cout << my.getRadius();
   
   return 0;
}

