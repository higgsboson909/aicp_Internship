/*by Jhangir Ahmad
dated: 20240605*/
#include<iostream>
using namespace std;

//item name
const string item[7] = {"Case", "RAM", "Main Hard Disk", "Solid State Drive",
                        "2nd Hard Disk", "Optical Drive"};
//item code
const string itemCode[15] = {"A1", "A2", "B1", "B2", "B3", "C1",
                            "C2", "C3", "D1", "D2", "E1", "E2", "E3",
                            "F1", "F2"};
//item Description
const string itemDesc[15] = {"Compact", "Tower", "8 GB", "24 GB",
                            "32 GB", "1 TB HDD", "2 TB HDD", "4 TB HDD",
                            "240 GB SSD", "480 GB SSD", "1 TB HDD", "2 TB HDD",
                            "4 TB HDD", "DVD PLAYER", "DVD Re-writer"};

//item price
const double itemPrice[15] = {75.00, 210.00, 79.99, 149.99,
                            299.99, 49.99, 89.99, 129.99, 59.99,
                            119.99, 49.99, 89.99, 129.99, 50.00,
                            100.00};

// operating sytem 
const string osCode[2] = {"G1", "G2"};
const string os = "Operating System";
const string osDesc[2] = {"Standard Version", "Professional Version"};
const double osPrice[2] = {100.00, 175.00};

char addCh;
char ssdCh;
char hdd2Ch;
char opCh;
char osCh;
char ch;

void menuDisplay();
void caseMenu();
void ramMenu();
void hddMenu();
void addSsdMenu();     // additional ssd menu
void add2ndHdd();       //additional hard drive
void addOpDrive();      // additional optical drive
void osMenu();
void ramChoiceF();
void caseChoiceF();
void hddChoiceF();
void addChoiceF();
void osChoiceF();
void showChoice();
void totalPriceF();


int main(){
    
    do{
        
        menuDisplay();

        //showChoice();       // display choices and store price

        //totalPriceF();      // display totalPrice 

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
    //osMenu();
    

    // select choices
    caseChoiceF();
    ramChoiceF();
    hddChoiceF();

    cout << "\n";
    cout << "Do you want Additional Items(y/n) : ";
    cin.get(addCh);
    cin.ignore();
    while(addCh != 'Y' && addCh != 'N' && addCh != 'y' && addCh != 'n'){
        cout << "Invalid Entry\nTry Again\n";
        cout << "Do you want Additional Items(y/n) : ";
        cin.get(addCh);
        cin.ignore();
    }
    if(addCh == 'y' || addCh == 'Y'){
        addSsdMenu();    // if user want additional items
        add2ndHdd();
        addOpDrive();
    }
    


    // for operating system
    /*cout << "\n";
    cout << "Do you want Opereating System(y/n) : ";
    cin.get(osCh);
    cin.ignore();
    while(osCh != 'Y' && osCh != 'N' && osCh != 'y' && osCh != 'n'){
        cout << "Invalid Entry\nTry Again\n";
        cout << "Do you want Opereating System(y/n) : ";
        cin.get(osCh);
        cin.ignore();
    }
    if(osCh == 'y' || osCh == 'Y'){
        osChoiceF();    // if user want operating System
    */
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

void osMenu(){
    cout << os << setw(11) << osCode[0] << setw(29) << osDesc[0] << "\t" << fixed << setprecision(2) << osPrice[0];
    cout << "\n";
    cout << os << setw(11) << osCode[1] << setw(29) << osDesc[1] << "\t" << fixed << setprecision(2) << osPrice[1]; 
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

    // for operating system
    if(osCh == 'y' || osCh == 'Y'){
        if(osChoice == "g1" || osChoice == osCode[0]){
            cout << "\n";
            cout << os << setw(11) << osCode[0] << setw(29) << osDesc[0] << "\t" << fixed << setprecision(2) << osPrice[0];
            osPriceS = osPrice[0];

        }
        else{
           cout << '\n' << os << setw(11) << osCode[1] << setw(29) << osDesc[1] << "\t" << fixed << setprecision(2) << osPrice[1]; 
            osPriceS = osPrice[1];
        }

    }
    else{
        osPriceS = 0;
        cout << "\nYou selected no Operating System\n";

    }
    
   
}


void addSsdMenu(){
    cout << "\nSolid State Drive (y/n)\n";
    cin.get(ssdCh);
    cin.ignore();
    while(ssdCh != 'Y' && ssdCh != 'N' && ssdCh != 'y' && ssdCh != 'n'){
        cout << "Invalid Entry\nTry Again\n";
        cout << "Solid State Drive(y/n) : ";
        cin.get(ssdCh);
        cin.ignore();
    }
    if(ssdCh == 'y' || ssdCh == 'Y'){
        cout << item[3] << setw(23) << itemCode[8] << setw(24) << itemDesc[8] << "\t\t" << fixed << setprecision(2) << itemPrice[8];
        cout << "\n";
        cout << item[3] << setw(23) << itemCode[9] << setw(24) << itemDesc[9] << "\t\t" << fixed << setprecision(2) << itemPrice[19]; 
        cout << "\n";
    }
    
    
}
void osChoiceF(){        // select operating system
    cout << "Enter the code for Operating sysetem\n";
    osMenu();
    cout << "\nFor OS : ";
    cin >> osChoice;
    cin.ignore();
    while(osChoice != osCode[0] && osChoice != osCode[1] && osChoice != "g1" && osChoice != "g2"){
        cout << "\nYou entered invalid Case code\nTry again!\n";
        cout << "\n";
        osMenu();
        cout << "\nFor OS : ";

        cin >> osChoice;
        cin.ignore();   // empty keyboard buffer
    }
}

