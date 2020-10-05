#include<bits/stdc++.h>
using namespace std;

class CheckingA{
private:
    int balance;
    vector<string>creditTransaction,debitTransaction;
public:
    CheckingA(int balance){
        this->balance=balance;
    }
    void credit(int amount,string card){
        if(amount%500!=0){
            cout<<"Amount should be a multiple of 500. Please enter valid amount\n";
        }
        if(card=="Debit"){
            if(balance<amount){
                cout<<"There is insufficient Balance in your account.\n";
            }
            else{
                balance-=amount;
                cout<<"The current balance in account is "<<balance<<"\n";
                debitTransaction.push_back("Credited from Debit Card. Amount:"+to_string(amount));
            }

        }
        else{
            if(balance<amount){
                cout<<"There is insufficient Balance in your account.\n";
            }
            else{
                balance-=amount;
                cout<<"The current balance in account is "<<balance<<"\n";
                creditTransaction.push_back("Added money from Credit Card. Amount:"+to_string(amount));
            }
        }
    }
    void debit(int amount,string card){
        if(amount%500!=0){
            cout<<"Amount to be debited should be a multiple of 500. Please enter a valid amount\n";
        }
        if(card=="Debit"){
            balance+=amount;
            cout<<"The current balance in account is "<<balance<<"\n";
            debitTransaction.push_back("Debited from Credit Card. Amount:"+to_string(amount));
        }
        else{
            balance+=amount;
            cout<<"The current balance in account is "<<balance<<"\n";
            creditTransaction.push_back("Debited from Credit Card. Amount:"+to_string(amount));
        }

    }
    void getBalance(){
        cout<<"Current balance in the Checking Account is "<<balance<<"\n";
    }
    void showCredit(){
        for(auto s:creditTransaction){
            cout<<s<<'\n';
        }
    }
    void showDebit(){
        for(auto s:debitTransaction){
            cout<<s<<'\n';
        }
    }

};



class SavingsA{
private:
    int balance;
    vector<string>creditTransaction,debitTransaction;
public:
    SavingsA(int balance){
        this->balance=balance;
    }
    void credit(int amount,string card){
        if(amount%500!=0){
            cout<<"Amount should be a multiple of 500. Please enter valid amount\n";
        }
        if(card=="Debit"){
            if(balance<amount){
                cout<<"There is insufficient Balance in your account.\n";
            }
            else{
                balance-=amount;
                cout<<"The current balance in account is "<<balance<<"\n";
                debitTransaction.push_back("Credited from Debit Card. Amount:"+to_string(amount));
            }

        }
        else{
            if(balance<amount){
                cout<<"There is insufficient Balance in your account.\n";
            }
            else{
                balance-=amount;
                cout<<"The current balance in account is "<<balance<<"\n";
                creditTransaction.push_back("Added money from Credit Card. Amount:"+to_string(amount));
            }
        }
    }
    void debit(int amount,string card){
        if(amount%500!=0){
            cout<<"Amount to be debited should be a multiple of 500. Please enter a valid amount\n";
        }
        if(card=="Debit"){
            balance+=amount;
            cout<<"The current balance in account is "<<balance<<"\n";
            debitTransaction.push_back("Debited from Credit Card. Amount:"+to_string(amount));
        }
        else{
            balance+=amount;
            cout<<"The current balance in account is "<<balance<<"\n";
            creditTransaction.push_back("Debited from Credit Card. Amount:"+to_string(amount));
        }

    }
    void getBalance(){
        cout<<"Current balance in the Savings Account is "<<balance<<"\n";
    }
    void showCredit(){
        for(auto s:creditTransaction){
            cout<<s<<'\n';
        }
    }
    void showDebit(){
        for(auto s:debitTransaction){
            cout<<s<<'\n';
        }
    }
};

int main(){
    CheckingA a1(10000);
    a1.getBalance();
    return 0;
}
