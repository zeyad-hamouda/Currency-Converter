#include <iostream>
using namespace std;
// function declaration
void convertAed(int, float);
void convertInr(int, float);
void convertUsd(int, float);
void convertGbp(int, float);
void convertEur(int, float);
void convertAud(int, float);
void convertJod(int, float);
void convertTry(int, float);
void convertPhp(int, float);
void convertKwd(int, float);

double result;

int main()

{
    double amount; //inserted money 
    int choice; //inserted choice 
    int option;  //variable decleration
    char opt = 'Y'; // looping character
    while (opt == 'y' || opt == 'Y')
    {

        cout << "what currency would you like to convert?" << endl << "1.AED: Emarati Dirham" << endl << "2.INR: Indian Rupee" << endl;
        cout << "3.USD: US Dollar" << endl << "4.GBP: British Pound" << endl << "5.EUR: Euro" << endl << "6.AUD: Australian Dollar" << endl;
        cout << "7.JOD: Jordanian Dinar" << endl << "8.TRY: Turkish Lira" << endl << "9.PHP: Philippine Peso" << endl << "10.KWD: Kuwaiti Dinar" << endl;
        cin >> choice;
        while (choice <= 1 && choice >= 10) //if the user enters a wrong bind he will receive an error message
        {
            cout << " invalid input. please enter a valid choice from 1-10" << endl;
            cin >> choice;
        }
        cout << "To which currency you want to convert to ?" << endl; // users choice
        cin >> option;
        while (option <= 1 && option >= 10)
        {
            cout << " invalid input. please enter a valid choice from 1-10" << endl;
            cin >> option;
        }
        cout << "What is the amount of money you want to Exchange ? " << endl;
        cin >> amount;

        if (choice == 1)
            convertAed(option, amount);

        else if (choice == 2)
            convertInr(option, amount);

        else if (choice == 3)
            convertUsd(option, amount);

        else if (choice == 4)
            convertGbp(option, amount);

        else if (choice == 5)
            convertEur(option, amount);

        else if (choice == 6)
            convertAud(option, amount);

        else if (choice == 7)
            convertJod(option, amount);

        else if (choice == 8)
            convertTry(option, amount);

        else if (choice == 9)
            convertPhp(option, amount);

        else if (choice == 10)
            convertKwd(option, amount);

        cout << "If you wish to go again press Y keybind else press any other keybind to end" << endl;
        cin >> opt;
        if (opt != 'y' && opt != 'Y')
            cout << "Thank you " << endl;

    }



}
//function call for Emirates Dirham to other currencies
void convertAed(int choice, float amount)
{
    if (choice == 1)
        result = amount;

    else if (choice == 2)
        result = amount * 20.4;

    else if (choice == 3)
        result = amount / 3.67;

    else if (choice == 4)
        result = amount / 5;

    else if (choice == 5)
        result = amount * 0.24;

    else if (choice == 6)
        result = amount * 0.38;

    else if (choice == 7)
        result = amount * 0.19;

    else if (choice == 8)
        result = amount * 3.4;

    else if (choice == 9)
        result = amount * 13.75;

    else if (choice == 10)
        result = amount * 0.082;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << "Your amount after the conversion is = " << result << endl;
}
//function call for Indian rupees to other currencies 
void convertInr(int choice, float amount)
{
    if (choice == 1)
        result = amount * 0.049;

    else if (choice == 2)
        result = amount;

    else if (choice == 3)
        result = amount * 0.013;

    else if (choice == 4)
        result = amount * 0.01;

    else if (choice == 5)
        result = amount * 0.012;

    else if (choice == 6)
        result = amount * 0.019;

    else if (choice == 7)
        result = amount * 0.0094;

    else if (choice == 8)
        result = amount * 0.17;

    else if (choice == 9)
        result = amount * 0.67;

    else if (choice == 10)
        result = amount * 0.004;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << "Your amount after the conversion is = " << result << endl;
}
//function call for American dollars to other currencies
void convertUsd(int choice, float amount)
{

    if (choice == 1)
        result = amount * 3.67;

    else if (choice == 2)
        result = amount * 74.94;

    else if (choice == 3)
        result = amount;

    else if (choice == 4)
        result = amount * 0.75;

    else if (choice == 5)
        result = amount * 0.89;

    else if (choice == 6)
        result = amount * 1.4;

    else if (choice == 7)
        result = amount * 0.71;

    else if (choice == 8)
        result = amount * 12.43;

    else if (choice == 9)
        result = amount * 50.51;

    else if (choice == 10)
        result = amount * 0.3;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << "Your amount after the conversion is = " << result << endl;
}
//function call for british pound  to other currencies
void convertGbp(int choice, float amount)
{

    if (choice == 1)
        result = amount * 4.9;

    else if (choice == 2)
        result = amount * 100.01;

    else if (choice == 3)
        result = amount * 1.33;

    else if (choice == 4)
        result = amount;

    else if (choice == 5)
        result = amount * 1.18;

    else if (choice == 6)
        result = amount * 1.87;

    else if (choice == 7)
        result = amount * 0.94;

    else if (choice == 8)
        result = amount * 16.49;

    else if (choice == 9)
        result = amount * 67.29;

    else if (choice == 10)
        result = amount * 0.4;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << " Your amount after the conversion is = " << result << endl;
}
//function call for Euro to other currencies
void convertEur(int choice, float amount)
{
    if (choice == 1)
        result = amount * 4.15;

    else if (choice == 2)
        result = amount * 84.62;

    else if (choice == 3)
        result = amount * 1.13;

    else if (choice == 4)
        result = amount * 0.85;

    else if (choice == 5)
        result = amount;

    else if (choice == 6)
        result = amount * 1.58;

    else if (choice == 7)
        result = amount * 0.8;

    else if (choice == 8)
        result = amount * 14;

    else if (choice == 9)
        result = amount * 57.08;

    else if (choice == 10)
        result = amount * 0.34;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << "Your amount after the conversion is = " << result << endl;
}
//function call for Australian dollar  to other currencies
void convertAud(int choice, float amount)
{

    if (choice == 1)
        result = amount * 2.62;

    else if (choice == 2)
        result = amount * 53.47;

    else if (choice == 3)
        result = amount * 0.71;

    else if (choice == 4)
        result = amount * 0.54;

    else if (choice == 5)
        result = amount * 0.63;

    else if (choice == 6)
        result = amount;

    else if (choice == 7)
        result = amount * 0.51;

    else if (choice == 8)
        result = amount * 8.84;

    else if (choice == 9)
        result = amount * 36.05;

    else if (choice == 10)
        result = amount * 0.22;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << "Your amount after the conversion is = " << result << endl;
}
//function call for Jordanian dinar  to other currencies
void convertJod(int choice, float amount)
{
    if (choice == 1)
        result = amount * 5.18;

    else if (choice == 2)
        result = amount * 105.81;

    else if (choice == 3)
        result = amount * 1.41;

    else if (choice == 4)
        result = amount * 1.06;

    else if (choice == 5)
        result = amount * 1.25;

    else if (choice == 6)
        result = amount * 1.98;

    else if (choice == 7)
        result = amount;

    else if (choice == 8)
        result = amount * 17.47;

    else if (choice == 9)
        result = amount * 71.26;

    else if (choice == 10)
        result = amount * 0.43;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << "Your amount after conversion is = " << result << endl;
}
//function call for Turkish Lira  to other currencies
void convertTry(int choice, float amount)
{
    if (choice == 1)
        result = amount * 0.3;

    else if (choice == 2)
        result = amount * 6.05;

    else if (choice == 3)
        result = amount * 0.081;

    else if (choice == 4)
        result = amount * 0.061;

    else if (choice == 5)
        result = amount * 0.072;

    else if (choice == 6)
        result = amount * 0.11;

    else if (choice == 7)
        result = amount * 0.057;

    else if (choice == 8)
        result = amount;

    else if (choice == 9)
        result = amount * 4.08;

    else if (choice == 10)
        result = amount * 0.024;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << "Your amount after the conversion is = " << result << endl;
}
//function call for Phillipnes pesso to other currencies
void convertPhp(int choice, float amount)
{

    if (choice == 1)
        result = amount * 0.073;

    else if (choice == 2)
        result = amount * 1.48;

    else if (choice == 3)
        result = amount * 0.02;

    else if (choice == 4)
        result = amount * 0.015;

    else if (choice == 5)
        result = amount * 0.018;

    else if (choice == 6)
        result = amount * 0.028;

    else if (choice == 7)
        result = amount * 0.014;

    else if (choice == 8)
        result = amount * 0.24;

    else if (choice == 9)
        result = amount;

    else if (choice == 10)
        result = amount * 0.006;

    else
        cout << "your choice is not available, Try Again!" << endl;

    cout << "Your amount after the conversion is =  " << result << endl;
}
//function call for Kuwaiti dinar  to other currencies
void convertKwd(int choice, float amount)
{
    {

        if (choice == 1)
            result = amount * 11.89;

        else if (choice == 2)
            result = amount * 247.3;

        else if (choice == 3)
            result = amount * 3.3;

        else if (choice == 4)
            result = amount * 2.48;

        else if (choice == 5)
            result = amount * 2.92;

        else if (choice == 6)
            result = amount * 4.63;

        else if (choice == 7)
            result = amount * 2.32;

        else if (choice == 8)
            result = amount * 0.87;

        else if (choice == 9)
            result = amount * 166.78;

        else if (choice == 10)
            result = amount;

        else
            cout << "your choice is not available, Try Again!" << endl;

        cout << "Your amount after the conversion is = " << result << endl;
    }

}