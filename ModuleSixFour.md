    #include <iostream>
    using namespace std;

    int main() {
    int yrlysalary, pRating;
    string empname;
   //asking for user input

    cout << "What is the employee's name? " << endl;
    cin >> empname;
    cout << "What is " << empname << "'s yearly salary?" << endl;
    cin >> yrlysalary;
    cout << "What is " << empname << "'s performance rating" << endl;
    cin >> pRating;
   /* using switch-case to match the inputted performance rating, performance rating 4 is the default case. Bonus is calculated by (%increase * yearly salary).*/

    switch (pRating) {
        case 1:
            cout << empname << "'s yearly salary, performance rating, and bonus: " << yrlysalary << " , " << pRating << " , and " << 0.25 * yrlysalary << endl;
            break;
        case 2:
            cout << empname << "'s yearly salary, performance rating, and bonus: " << yrlysalary << " , " << pRating << " , and " << 0.15 * yrlysalary << endl;
            break;
        case 3:
            cout << empname << "'s yearly salary, performance rating, and bonus: " << yrlysalary << " , " << pRating << " , and " << 0.10 * yrlysalary << endl;
            break;
        default:
            cout << empname << "'s yearly salary, performance rating, and bonus: " << yrlysalary << " , " << pRating << " , and " << 0 << endl;
            break;
    }

    return 0;
    }

