#include <iostream>
// #include <string> - not needed anymore
using namespace std;

int main()
{
    int lengthBase, lineLength, pyrLength;
    char symbol = '/'; // Change Symbol used for Pyramid
    int spacing = 0; // Spacing betweern rows
    cin >> pyrLength;
    lengthBase = pyrLength * 2 - 1;
    for(lineLength = 1; lineLength <= lengthBase; lineLength += 2)
    {
        int blankLength = lengthBase - lineLength;
        for(int i = 1; i <= blankLength / 2; i++) cout << " ";
        for(int i = 1; i <= lineLength; i++) cout << symbol;
        for(int i = 1; i <= blankLength / 2; i++) cout << " ";
        cout << endl;
        for(int i = 1; i <= spacing; i++) cout << endl;
    }
    return 0;
}



/*


    .    
   ...   
  .....  
 ....... 
.........



1 1
3 2
5 3
7 4
9 5
2n-1 n

*/