#include <iostream>
#include <string>
#include "Direction.hpp"
#include <map>

using namespace std;
/*struct Vertex {        // The class
  public:          // Access specifier
    int x;  // Attribute
    int y;  // Attribute
    int z;      // Attribute
    Vertex(int x, int y, int z) { // Constructor with parameters
      x = x;
      y = y;
      z = z;
    }
};*/
  
namespace ariel {

    const int num = 100;
    const int num1 = 127;
    const int num6 = 126;
    const int num4 = 32;
    const int num2 = 200;
    const int num9 = 99;
    class Notebook{
      
   
   
       
        public:
          
        //https://stackoverflow.com/questions/9288781/4d-mapping-in-c
       map<int, map<int, map<int, char> > > Map;
        public:
        
        

      void write(int page,int row, int column, Direction h, string a);
      string read(int page, int row, int column, Direction v,  int length);
       void erase(int page,int row, int column, Direction v,  int length);
       void show(int page);
       

       


    };
}