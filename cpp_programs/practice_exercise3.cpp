#include <iostream>
using namespace std;

int main() {
int bill_amount, discount, final_amount;
cout<<"Enter total bill amount: ";
cin>>bill_amount;

if (bill_amount<100){
    cout<<"no discount"<<endl;
}
else if(bill_amount>=100 && bill_amount<500){
    cout<<"discount is 10%"<<endl;
    discount=0.1*bill_amount;
    final_amount=bill_amount-discount;
    cout<<"final amount :"<<final_amount<<endl;
}
else if(bill_amount>=500){
    cout<<"discount is 20%"<<endl;
    discount=0.2*bill_amount;
    final_amount=bill_amount-discount;
    cout<<"final bill:"<<final_amount<<endl;
}

}
