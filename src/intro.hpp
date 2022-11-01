#include    <iostream>
using namespace std;

void printIntroLogo()
{
    cout << " _______  ___      _______  _______ " << endl;
    cout << "|       ||   |    |       ||       |" << endl;
    cout << "|       ||   |    |   _   ||    _  |" << endl;
    cout << "|       ||   |    |  | |  ||   |_| |" << endl;
    cout << "|      _||   |___ |  |_|  ||    ___|" << endl;
    cout << "|     |_ |       ||       ||   |    " << endl;
    cout << "|_______||_______||_______||___|    " << endl;
}

void printIntroText()
{
    cout << "Welcome to CLOP - new ultimate packages management." << endl;
    cout << "If you want to read more document, visit: " << endl;
}

void printIntroFull()
{
    printIntroLogo();
    printIntroText();
}