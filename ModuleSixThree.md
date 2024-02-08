#include <iostream>
using namespace std;
int main()
{
    // variables to be assigned values
    int transactionumber,transactionvalue,shiftnumber,prodscore;
    // user input is entered into the console and assigned to the relevant variable
    string empname;
    cout<<"What is the employee's name?: "<<endl;
    cin>>empname;
    cout<<"What is the total dollar value of the transactions made by "<<empname<<endl;
    cin>>transactionvalue;
    cout<<"How many transactions were made by "<<empname<<"?"<<endl;
    cin>>transactionumber;
    cout<<"How many shifts did "<<empname<<" work?"<<endl;
    cin>>shiftnumber;
    // variable to be passed through the decision structure for comparison
   prodscore=((transactionvalue/transactionumber)/shiftnumber);
   if(prodscore<=30) {
    cout<<" "<<empname<<"'s bonus is 50$"<<endl;
   }
   if(prodscore>=31 && prodscore<=69) {
    cout<<" "<<empname<<"'s bonus is 75$"<<endl;
   }
   if(prodscore>=70 && prodscore<=199) {
    cout<<" "<<empname<<"'s bonus is 100$"<<endl;
   }
   if(prodscore>=200) {
    cout<<" "<<empname<<"'s bonus is 200$"<<endl;
   }
   return 0;
}
