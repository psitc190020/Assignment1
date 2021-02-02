#include <iostream>
#include <string>
using namespace std;

int main()
{
     /*THIS PROGRAM SPECIFIES AN INFORMATION ON SUPERMARKET ABOUT ITEMS BEEN SOLD TO CUSTOMERS.*/
  //DECLARING OF VARIABLE FOR THE PROGRAM
     string customername;
     int customerId;
     char item;
     int quantity;
     double price;
     double totalCost;
     double amountPaid;
     double balance;
     char Yes;
     //int item_name;

     const double PRINTER_PRICE = 300.00,
                 PHONE_PRICE = 400.00,
                 TABLE_PRICE = 500.00;


    cout<<"Enter your name: "; getline(cin,customername);
    cout<<"Enter your ID :"; cin >> customerId;

    double vat = 0.12;

      char p,h,t;
     // string choice;
        //  p = "printer",
      //    h = "phone",
        //  t = "table";
    cout<< "ITEMS AT THE INF SUPERMARKET\n" "1.PRINTER \n2.PHONE \n3.TABLE\n";
    cout<< "Pres 'p' 'h'  't' to select item you want to buy: "<<endl;
    cin >> item;



    while(item!='p' || item!='h' || item!='t'){
    cout<< "You entered a wrong key, please enter p or h or t to make a selection"<<endl;
    cin>>item;
    }

    //do{

    if(item=='p')
      {
        string itemName="Printer";
        cout<<"You have selected to buy printer " <<endl;
        cout<<"How many are buying? "<<endl;
        cin>>quantity;
        price=PRINTER_PRICE*quantity;
        vat=price*vat;
        totalCost=price+vat;
        cout<<"Total cost: "<<totalCost<<endl;
        cout<< "Enter amount in hand"<<endl;
        cin>>amountPaid;

        balance=amountPaid-totalCost;
        while(amountPaid<totalCost){
            cout<< "Money is not enough, please your money should be greater than or equal to " <<totalCost<<endl;
            cout<<"Enter the amount again :";
            cin>>amountPaid;
        }
        cout<<"==============================" <<endl;
        cout<< "CUSTOMER NAME :" << customername <<endl;
        cout<< "CUSTOMER ID :" << customerId <<endl;
        cout<< "ITEM :" << itemName  <<endl;
        cout<< "QUANTITY :" << quantity <<endl;
        cout<< "VAT ON ITEMS: " << vat <<endl;
        cout<< "TOTAL COST :" << totalCost<<endl;
        cout<< "AMOUNT PAID :" << amountPaid<<endl;
           if(amountPaid>totalCost){
            cout<< "BALANCE: " << balance<<endl;
           }






      }

    else
        if(item=='h')
        {
            string itemName="Phone";
        cout<<"You have selected to buy phone " <<endl;
        cout<<"How many are buying? "<<endl;
        cin>>quantity;
        price=PHONE_PRICE*quantity;
        vat=price*vat;
        totalCost=price+vat;
        cout<<"Total cost: "<<totalCost<<endl;
        cout<< "Enter amount in hand"<<endl;
        cin>>amountPaid;

        balance=amountPaid-totalCost;
        while(amountPaid<totalCost){
            cout<< "Money is not enough, please your money should be greater than or equal to " <<totalCost<<endl;
            cout<<"Enter the amount again :";
            cin>>amountPaid;
        }
        cout<<"==============================" <<endl;
        cout<< "CUSTOMER NAME :" << customername <<endl;
        cout<< "CUSTOMER ID :" << customerId <<endl;
        cout<< "ITEM :" << itemName  <<endl;
        cout<< "QUANTITY :" << quantity <<endl;
        cout<< "VAT ON ITEMS: " << vat <<endl;
        cout<< "TOTAL COST :" << totalCost<<endl;
        cout<< "AMOUNT PAID :" << amountPaid<<endl;
           if(amountPaid>totalCost){
            cout<< "BALANCE: " << balance<<endl;
           }
        }


    else
        if(item=='t')
    {

       string itemName="Table";
        cout<<"You have selected to buy " <<itemName<<endl;
        cout<<"How many are buying? "<<endl;
        cin>>quantity;
        price=TABLE_PRICE*quantity;
        vat=price*vat;
        totalCost=price+vat;
        cout<<"Total cost: "<<totalCost<<endl;
        cout<< "Enter amount in hand"<<endl;
        cin>>amountPaid;

        balance=amountPaid-totalCost;
        while(amountPaid<totalCost){
            cout<< "Money is not enough, please your money should be greater than or equal to " <<totalCost<<endl;
            cout<<"Enter the amount again :";
            cin>>amountPaid;
        }
        cout<<"==============================" <<endl;
        cout<< "CUSTOMER NAME :" << customername <<endl;
        cout<< "CUSTOMER ID :" << customerId <<endl;
        cout<< "ITEM :" << itemName  <<endl;
        cout<< "QUANTITY :" << quantity <<endl;
        cout<< "VAT ON ITEMS: " << vat <<endl;
        cout<< "TOTAL COST :" << totalCost<<endl;
        cout<< "AMOUNT PAID :" << amountPaid<<endl;
           if(amountPaid>totalCost){
            cout<< "BALANCE: " << balance<<endl;
           }
    }

      /* cout<<"_______________________________________"<< endl;
       cout<<"Do you want do another transaction? " <<endl;
       cout<<"Enter Y or y for YES and any other key for NO "<<endl;
       cin>>Yes;



       }
       while(Yes ==  'y' || Yes == 'Y');*/

    return 0;
}









