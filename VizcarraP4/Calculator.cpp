#include "Calculator.h"
#include<iostream>
#include<iomanip>

void SimpleCalc::Calculate()
{
    switch (operation)
    {
    case '+':
        answer = number1 + number2;  //addition
        desc = "\nYour operation is addition\n";
        break;

    case '*':
        answer = number1 * number2;  // multiplication
        desc = "\nYour operation is Multiplication\n";
        break;

    case '-':
        answer = number1 - number2;  //subtraction
        desc = "\nYour operation is Subtraction\n";
        break;

    case '/':
        answer = number1 / number2;  //Division
        desc = "\nYour operation is Division\n";
        break;

    }
}

SimpleCalc::SimpleCalc()
{}


void SimpleCalc::SetOperation(char oper, double op1, double op2)
{
    number1 = op1;
    number2 = op2;
    operation = oper;
    Calculate();
}

string SimpleCalc::GetResults()
{
    stringstream ss;
    ss<< setprecision(2)<<fixed;
    //need to take care of division by zero
    //cout << desc;
    if (number2 == 0)
    {
        ss << "*No division by zero!*";
    }
    else
    {
        
        ss<< answer;
       
    }
    results = ss.str();
    return results;
    
}




