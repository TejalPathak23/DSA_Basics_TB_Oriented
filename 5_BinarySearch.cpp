/*
Program : for Binary Search

Pseudocode:
     Accept a Array/list of sorted values 
     low = 0;
     high = size-1; 
     mid = (low + high)/2
     if Key == Ary[mid]
        display found at mid
     else Key > Ary[mid]
        low = mid + 1;
     else 
        high = mid - 1;       










        
 */

#include <iostream>
using namespace std;

int main()
{
   int i;
   //Index = 0,1,2,3,4,5
   int list[6] = {5, 15, 25, 35, 45, 75};
   int size = 6;

   cout << "\n\t List: ";
   for (i = 0; i < size; i++)
      cout << "  " << list[i];

   int low = 0;
   int high = size - 1;
   int mid = (low + high) / 2;
   int Key;

   cout << "\n\t Enter Key: ";
   cin >> Key;

   while (low <= high)
   {
      if (Key == list[mid])
      {
         cout << "\n\t Key Found at location: " << mid + 1;
         break;
      }
      else if (Key < list[mid])
         high = mid - 1;
      else
         low = mid + 1;

      mid = (low + high) / 2;
   }

   if (low > high)
      cout << "\n\t Key Not Found....!!!";  

   return 0;
}

/*  
  List:   5  15  25  35  45  75
         Enter Key: 25

PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> cd "f:\Coding Practise\DS Algo Tution\DSA Class Codes\" ; if ($?) { g++ 5_BinarySearch.cpp -o 5_BinarySearch } ; if ($?) { .\5_BinarySearch }

         List:   5  15  25  35  45  75
         Enter Key: 5

PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> cd "f:\Coding Practise\DS Algo Tution\DSA Class Codes\" ; if ($?) { g++ 5_BinarySearch.cpp -o 5_BinarySearch } ; if ($?) { .\5_BinarySearch }

         List:   5  15  25  35  45  75
         Enter Key: 45

         Key Found at location: 5
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> cd "f:\Coding Practise\DS Algo Tution\DSA Class Codes\" ; if ($?) { g++ 5_BinarySearch.cpp -o 5_BinarySearch } ; if ($?) { .\5_BinarySearch }

         List:   5  15  25  35  45  75
         Enter Key: 75

         Key Found at location: 6
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> cd "f:\Coding Practise\DS Algo Tution\DSA Class Codes\" ; if ($?) { g++ 5_BinarySearch.cpp -o 5_BinarySearch } ; if ($?) { .\5_BinarySearch }

         List:   5  15  25  35  45  75
         Enter Key: 95

         Key Not Found....!!!
*/