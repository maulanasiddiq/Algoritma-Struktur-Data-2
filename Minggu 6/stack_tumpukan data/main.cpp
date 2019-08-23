#include <iostream>
using std::cout;
using std::endl;

#include <stack>  // stack definisi
#include <vector> // vector class-template definisi
#include <list>   // list class-template definisi

int main()
{
   // stack dengan underlying list
   std::stack< int, std::list< int > > intListStack;

   for ( int i = 0; i < 10; i++ )
   {
      intListStack.push( i );
      cout <<"\n\n\npushing:"<<intListStack.top()<< '\n';
   }


   while ( !intListStack.empty() )
   {
      cout <<"\n\n\ntopping:"<<intListStack.top()<< '\n';
      intListStack.pop();
   }

   return 0;
}
