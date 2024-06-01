/*By higgsboson
dated: 20240528*/
#include<iostream>
#include<iomanip>
using namespace std;

//item name
const string item[3] = {"Case", "RAM", "Main Hard Disk"};
//item code
const string itemCode[8] = {"A1", "A2", "B1", "B2", "B3", "C1",
                            "C2", "C3"};
//item Description
const string itemDesc[8] = {"Compact", "Tower", "8 GB", "24 GB",
                            "32 GB", "1 TB HDD", "2 TB HDD", "4 TB HDD"};
//item price
const double itemPrice[8] = {75.00, 210.00, 79.99, 149.99,
                            299.99, 49.99, 89.99, 139.99};

            // variables
char ch;

string caseChoice,
        ramChoice,
        hddChoice;

double casePrice = 0,
        ramPrice = 0,
        hddPrice = 0,
        totalPrice = 0;

        
            // fun() declarations
void menuDisplay();
void caseMenu();
void ramMenu();
void hddMenu();
void ramChoiceF();
void caseChoiceF();
void hddChoiceF();
void showChoice();

        // main fun()
int main(){
    
    do{
        
        menuDisplay();

        showChoice();       // display choices and store price

        
        totalPrice = ramPrice + hddPrice + casePrice;
        cout << "\nTotal price : " << setw(8) << casePrice << setw(8) << ramPrice << setw(8) << hddPrice;

        cout << "\n\nPress Enter key to restart.......";
        cin.get(ch);
    }while(ch == '\n');



    return 0;

}

void menuDisplay(){         // entire menu
    cout << "\n\t\tWELCOME TO ONLINE COMPUTER SHOP\n";
    cout << "\n\t\t The basic Set of Components ";
    cout << "\n\nCategory\t\tItem Code\tDescription\t\tPrice\n\n";
    
    //display 

    caseMenu();
    ramMenu();
    hddMenu();

    // select choices
    caseChoiceF();
    ramChoiceF();
    hddChoiceF();
        
}
void caseMenu(){
    cout << item[0] << setw(23) << itemCode[0] << setw(24) << itemDesc[0] << "\t\t" << fixed << setprecision(2) << itemPrice[0];
    cout << "\n";
    cout << item[0] << setw(23) << itemCode[1] << setw(24) << itemDesc[1] << "\t\t" << fixed << setprecision(2) << itemPrice[1]; 
    cout << "\n";
}
void ramMenu(){
    cout << item[1] << setw(24) << itemCode[2] << setw(24) << itemDesc[2] << "\t\t" << fixed << setprecision(2) << itemPrice[2]; 
    cout << "\n";
    cout << item[1] << setw(24) << itemCode[3] << setw(24) << itemDesc[3] << "\t\t" << fixed << setprecision(2) << itemPrice[3]; 
    cout << "\n";
    cout << item[1] << setw(24) << itemCode[4] << setw(24) << itemDesc[4] << "\t\t" << fixed << setprecision(2) << itemPrice[4]; 
    cout << "\n"; 
}
void hddMenu(){
    cout << item[2] << setw(13) << itemCode[5] << setw(24) << itemDesc[5] << "\t\t" << fixed  << setprecision(2) << itemPrice[5]; 
    cout << "\n"; 
    cout << item[2] << setw(13) << itemCode[6] << setw(24) << itemDesc[6] << "\t\t" << fixed << setprecision(2) << itemPrice[6]; 
    cout << "\n"; 
    cout << item[2] << setw(13) << itemCode[7] << setw(24) << itemDesc[7] << "\t\t" << fixed << setprecision(2) << itemPrice[7]; 
    cout << "\n"; 
}
    
void caseChoiceF(){      // select for case  
    cout << "\nEnter the Code for items you want to buy\n";
    caseMenu();
    cout << "\nFor Case : ";
    cin >> caseChoice;
    cin.ignore();   // empty keyboard buffer

    while(caseChoice != itemCode[0] && caseChoice != itemCode[1] && caseChoice != "a1" && caseChoice != "a2"){
        cout << "\nYou entered invalid Case code\nTry again!\n";
        cout << "\n";
        caseMenu();
        cout << "\nFor Case : ";

        cin >> caseChoice;
        cin.ignore();   // empty keyboard buffer
    }
    
}
void ramChoiceF(){       // select for ram

        cout << "\nEnter the Code for items you want to buy\n";
        ramMenu();
        cout << "\nFor Ram : ";
        cin >> ramChoice;
        cin.ignore();   // empty keyboard buffer

        while(ramChoice != itemCode[2] && ramChoice != itemCode[3] && ramChoice != itemCode[4] && ramChoice != "b1" && ramChoice != "b2" && ramChoice != "b3"){
            cout << "\nYou entered invalid Ram code\nTry again!\n";
            cout << "\n";
            ramMenu();
            cout << "\nFor Ram : ";

            cin >> ramChoice;
            cin.ignore();   // empty keyboard buffer

        }
}
void hddChoiceF(){       // select for hdd
    

        cout << "\nEnter the Code for items you want to buy\n";
        hddMenu();
        cout << "\nFor Main hdd : ";
        cin >> hddChoice;
        cin.ignore();   // empty keyboard buffer

        while(hddChoice != itemCode[5] && hddChoice != itemCode[6] && hddChoice != itemCode[7] && hddChoice != "c1" && hddChoice != "c2" && hddChoice != "c3"){
            cout << "\nYou entered invalid hdd code\nTry again!\n";
            cout << "\n";
            hddMenu();
            cout << "\nFor Main hdd : ";

            cin >> hddChoice;
            cin.ignore();   // empty keyboard buffer

        }

}
void showChoice(){       // show and store price of selected items
    cout << "\nYou have selected these items\n";
    cout << "\n\nCategory\t\tItem Code\tDescription\t\tPrice\n\n";

            // for case
    if(caseChoice == "a1" || caseChoice == itemCode[0]){
            cout << item[0] << setw(23) << itemCode[0] << setw(24) << itemDesc[0] << "\t\t" << fixed << setprecision(2) << itemPrice[0];
            casePrice = itemPrice[0];

        }
        else{
           cout << '\n' << item[0] << setw(23) << itemCode[1] << setw(24) << itemDesc[1] << "\t\t" << fixed << setprecision(2) << itemPrice[1]; 
            casePrice = itemPrice[1];
        }

            // for ram
    if(ramChoice == "b1" || ramChoice == itemCode[2]){
            cout << '\n' << item[1] << setw(23) << itemCode[2] << setw(24) << itemDesc[2] << "\t\t" << fixed << setprecision(2) << itemPrice[2];
            ramPrice = itemPrice[2];
        }
        else if(ramChoice == "b2" || ramChoice == itemCode[3]){
            cout << '\n' << item[1] << setw(23) << itemCode[3] << setw(24) << itemDesc[3] << "\t\t" << fixed << setprecision(2) << itemPrice[3]; 
            ramPrice = itemPrice[3];
        }
        else{
             cout << '\n' << item[1] << setw(24) << itemCode[4] << setw(24) << itemDesc[4] << "\t\t" << fixed << setprecision(2) << itemPrice[4];
            ramPrice = itemPrice[4];
        }
    
            // for hdd
    if(hddChoice == "c1" || hddChoice == itemCode[5]){
        cout << '\n' << item[2] << setw(13) << itemCode[5] << setw(24) << itemDesc[5] << "\t\t" << fixed << setprecision(2) << itemPrice[5];
        hddPrice = itemPrice[5];
   }
    else if(hddChoice == "c2" || hddChoice == itemCode[6]){
        cout << '\n' << item[2] << setw(13) << itemCode[6] << setw(24) << itemDesc[6] << "\t\t" << fixed << setprecision(2) << itemPrice[6]; 
        hddPrice = itemPrice[6];   
    }
    else{
        cout << '\n' << item[2] << setw(13) << itemCode[7] << setw(24) << itemDesc[7] << "\t\t" << fixed << setprecision(2) << itemPrice[7];
        hddPrice = itemPrice[7];        
    }
    
   
}
