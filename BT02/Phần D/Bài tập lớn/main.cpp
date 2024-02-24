#include <bits/stdc++.h>
using namespace std;


const int MONEY_PER_HOUR[] = {12000, 16000, 20000, 25000};
const double INSURANCE_TAX = 0.09;
const double TAX_PER[] = {0, 0.1, 0.15, 0.2};
const double INTEREST_RATE = 0.02;
const int SUPPORT = 1500000;
const int LIFE = 2000000;
const int BANK_DEBT = 10000000;


int workingEachMonth(int hour){
    int total_money = 0;
    int index = 0;
    if(hour >= 100){
        total_money += MONEY_PER_HOUR[index++]*100;
        hour -= 100;
    }

    if(hour >= 50){
        total_money += MONEY_PER_HOUR[index++]*50;
        hour -= 50;
    }

    if(hour >= 50){
        total_money += MONEY_PER_HOUR[index++]*50;
        hour -= 50;
    }
        
    total_money += hour * MONEY_PER_HOUR[index];

    return total_money;
}


int insuranceTax(int money){
    return money * INSURANCE_TAX;
}


int normalTax(int money){
    
    int tax = 0;
    int index = 0;

    if(money >= 1000000){
        tax += 1000000 * TAX_PER[index++];
        money -= 1000000;
    }
        

    if(money >= 500000){
        tax += 500000 * TAX_PER[index++];
        money -= 500000;
    }

    if(money >= 500000){
        tax += 500000 * TAX_PER[index++];
        money -= 500000;
    }

    tax += money * TAX_PER[index];
        
    return tax;

}


int bankDebtAfterMonth(int money){

    return money * (1+INTEREST_RATE);
}


int main(){

    int month = 0;
    int debt_lap = BANK_DEBT;

    while(debt_lap > 0){
        cout<<"\nMonth "<<month+1<<":"<<endl;

        cout<<"Number of hour worked: ";
        int hour; cin>>hour;
        
        int income = workingEachMonth(hour);
        int insurance= insuranceTax(income);
        income -= insurance;
        int tax = normalTax(income);
        income -= tax;
        income += SUPPORT;

        cout<<"Money after paying for tax, insurance and getting support from parents: "<<income<<endl;

        int pre_paid = bankDebtAfterMonth(debt_lap);
        cout<<"Bank dept before paying: "<<pre_paid<<endl;

        int af_paid = pre_paid + LIFE - income;
        cout<<"After paying: "<<af_paid<<endl;

        debt_lap = af_paid;

        month++;

        if(debt_lap <= 0)
            cout<<"Last time, student just have to pay "<<pre_paid<<endl;

    }

    
}