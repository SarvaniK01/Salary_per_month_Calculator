// Salary per month calculation
#include<iostream>
using namespace std;

int main(){
    // declaration of a variable for salary per annum/year
    float salary_per_annum;
    
    // asking the user for input
    cout<<"Enter your salary in LPA(Lakhs per annum):";
    cin>>salary_per_annum;

    // declaration of a variable for salary per month
    float salary_per_month;

    // multiplying the salary per annum with 1 lakh
    salary_per_annum = salary_per_annum * 100000;

    // calculation of salary per month by dividing it with the number of months in a year(12 months)
    salary_per_month = salary_per_annum / 12;
    
    // output salary per month
    cout<<"Your salary per month is: "<<salary_per_month<<endl;
}










