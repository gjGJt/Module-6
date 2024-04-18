
 //I know I could make a program that compares the three values, but I wanted to try the general case
 
    #include <iostream>
    using namespace std;

    int main()
    {
    int numone, numtwo, numthree;

   // Input for the three numbers
   
    cout << "Enter a number: ";
    cin >> numone;

    cout << "Enter another number: ";
    cin >> numtwo;

    cout << "Enter one more number: ";
    cin >> numthree;

   // compares the numbers assigned to numtwo and numone and swaps their values if numone is greater than numtwo.
   
    if (numone > numtwo) {
        swap(numone, numtwo);
    }
// same process

    if (numtwo > numthree) {
        swap(numtwo, numthree);
    }
//same

    if (numone > numtwo) {
        swap(numone, numtwo);
    }

  // Displays the numbers in ascending order after all the swaps
  
    cout << "The numbers in ascending order are: " << numone << ", " << numtwo << ", " << numthree << endl;

    return 0;
    }
