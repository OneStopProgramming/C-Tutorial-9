#include <cstdlib>
#include <iostream>

#include <string>

using namespace std;

void whileLoop();
void doWhileLoop();
void forLoop();

int main(int argc, char *argv[])
{
 
    
    char x[] = "Hello world!";
    
    for(int index =0; index < sizeof(x); index++)
    {
       cout << x[index];
    }
    
    char z;
    cin >> z;
    return 0;
}

void whileLoop()
{
    int x = 10;
    int i = 0;
         
    while(x > 0)   
    {
      if(x%2 == 0)       //If x is divisible by 2 (ie no remainder)
      {
         i+=2;           //i <= i + 2      
      }
      else
      {
         i*=2;           //i <= i * 2
      }
      cout << i << endl; //Print i
      x--;               //Decrease x by 1
    }  
}

void doWhileLoop()
{
     int x = 0;
     do{
        x--;
        cout << x << endl;           
     }while(x > 0);     
}

void forLoop()
{
     for(int x=10, i=0; x > 0; x--, i++)
     {
        cout << i << endl;             
     }     
}
