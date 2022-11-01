/*
    PRINT LIBRARY
    Use for print log in terminal with formated style
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void upcase(string &str)
{
    transform(str.begin(), str.end(),str.begin(), ::toupper);
}

void printError(string messages)
{
    cout << "\x1B[31m[ERROR]\033[0m - " << messages << endl;
}

void printInfo(string messages)
{
    cout << "\x1B[94m[INFO ]\033[0m - "<< messages << endl;
}

void printDone(string messages)
{
    cout << "\x1B[32m[DONE ]\033[0m - "<< messages << endl;
}

void printQA(string messages)
{
    cout << "\x1B[33m[Q & A]\033[0m - "<< messages << endl;
}

void printLoading(string messages)
{
    cout << "\x1B[36m[LOAD ]\033[0m - "<< messages << endl;
}

void printCustom(string title, string messages, string color_code)
{
    upcase(title);
    title.resize(5);
    string tempStr = "\x1B[" + color_code + "m[" + title + "]\033[0m - ";
    cout << tempStr << messages << endl;
}
void printTxt(string messages)
{
    cout << messages << endl;
}