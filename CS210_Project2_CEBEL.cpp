#include <iostream>
#include <iomanip>

using namespace std;



int main(){
    
    //vars
    float initalInv, monthlyDep, AnnualInt, months, years;
    float totalAmount, initialAmt, yearTotInt;
    
    
    //Display form
    cout << "********************************" << endl;
    cout << "********** Data Input **********"<< endl;
    cout << "Initial Investment Amount: " << endl;
    cout << "Monthly Deposit: " << endl;
    cout << "Annual Interest: " << endl;
    cout << "Number of years: " << endl;
    
    //Wait on user
    system("PAUSE");
    
    //Get data
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: $";
        cin >> initalInv;
    cout << "Monthly Deposit: $";
        cin >> monthlyDep;
    cout << "Annual Interest: %";
        cin >> AnnualInt;
    cout << "Number of years: ";
        cin >> years;
    months = years * 12;
    
    //Wait for user
    system("PAUSE");
    
    //Set totalAmount to initialInv
    totalAmount = initalInv;
    
    //Display year data without monthly deposits
    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";
    
    
    for (int i = 0; i < years; i++) {
    
        //yearly interest, yearly total, print results
        initialAmt = (totalAmount) * ((AnnualInt / 100));
        
        totalAmount = totalAmount + initialAmt;
        
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << initialAmt << "\n";
    
    }
    
    //Set total to initialInv
    totalAmount = initalInv;
    
    
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "==============================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "--------------------------------------------------------------\n";
    
    for (int i = 0; i < years; i++) {
    
    //Set interest to zero at the start
    yearTotInt = 0;
    
        for (int j = 0; j < 12; j++) {
        
            //monthly interest, month end interest, month end total
            initialAmt = (totalAmount + monthlyDep) * ((AnnualInt / 100) / 12);
            
            yearTotInt = yearTotInt + initialAmt;
            
            totalAmount = totalAmount + monthlyDep + initialAmt;
        
        }
    
        //results
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAmount << "\t\t\t$" << yearTotInt << "\n";
    
    }

    return 0;
}
