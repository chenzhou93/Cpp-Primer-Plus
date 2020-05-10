/*
    3. 
    Revise the baseDMA-lacksDMA-hasDMA class hierarchy 
    so that all three classes are derived from an ABC. 
    Test the result with a program similar 
    to the one in Listing 13.10. 
    
    That is, it should feature an array of pointers to the ABC 
    and allow the user to make runtime decisions 
    as to what types of objects are created. 
    Add virtual View() methods to the class definitions to handle displaying the data.
*/

// usebrass2.cpp -- polymorphic example
// compile with brass.cpp
#include <iostream>
#include <string>
#include "Exercise_03_dma.h"
const int CLIENTS = 4;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;

   ABC * p_clients[CLIENTS];
   const char* label = "test label";
   int rating;
   const char* style = "style";
   const char* color = "red";
   char kind;

   for (int i = 0; i < CLIENTS; i++)
   {
       cout << "Enter rating: ";
       cin >> rating;
       cout << "Enter 1 for LackDMA or "
            << "2 for hasDMA : ";
       while (cin >> kind && (kind != '1' && kind != '2'))
           cout <<"Enter either 1 or 2: ";
       if (kind == '1')
           p_clients[i] = new lacksDMA(color, label, rating);
       else
       {
           p_clients[i] = new hasDMA(style, label, rating);
        }
        while (cin.get() != '\n'){
            continue;
        }
   }
   cout << endl;
   for (int i = 0; i < CLIENTS; i++)
   {
       p_clients[i]->View();
       cout << endl;
   }

   for (int i = 0; i < CLIENTS; i++)
   {
       delete p_clients[i];  // free memory
   }
   cout << "Done.\n";
   return 0;
}