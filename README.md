  

#include<iostream>
#include<string>
using namespace std;

int main()
{    // values set to 0 will change when user input is affirmative
    int total;
    int totalpricecharacters = 0;   
    int priceoakorpine = 0;
    int optiongoldleaf = 0;   

    string name;
    string oakorpine;
    string optiongoldleafstr;  
// storing user input into the variable name
    cout << "Enter characters to be inscribed: " << endl;
    cin >> name;   
    // Calculate extra charge based on the length of characters
    int extraname = name.length() - 5;
// Same process as cin>>name;
    cout << "Would you like the sign to be made out of oak or pine?: " << endl;
    cin >> oakorpine;
// same process as cin>>oakorpine
    cout << "Would you like to add gold leaf lettering ?: " << endl;
    cin >> optiongoldleafstr;

    // Checking if the name length is greater than 5, if yes it will be multiplied by 4, 'extraname' stores the difference in ln 65
    if (extraname > 0) {
        cout << "You will be charged " << (extraname * 4) << " dollars extra for your choice of characters" << endl;
        totalpricecharacters = extraname * 4;
    }

    // Seting prices based on wood choice, and if the user gives an affirmative answer will change the variable set to 0 at the top
    if (oakorpine == "Oak") {
        priceoakorpine = 20; //for Oak
    } else if (oakorpine == "Pine") {
        priceoakorpine = 15;  // Changed to 15 for Pine
    }

    // Set price for gold leaf option
    if (optiongoldleafstr == "Yes") {
        optiongoldleaf = 15;
    } else if (optiongoldleafstr == "No") {
        optiongoldleaf = 0;
    }

    // Calculate the total
    total = optiongoldleaf + priceoakorpine + totalpricecharacters;

    cout << "Your total is " << total << " dollars." << endl;

    return 0;
}
