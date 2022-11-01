/*
    IMPORT BUILT-IN LIBRARY
*/
#include <iostream>
#include <string>
#include <vector>

/*
    IMPORT CUSTOM LIBRARY
*/
#include "intro.hpp"
#include "help.hpp"

using namespace std;
int main(int argc, char *argv[])
{
    // Convert argv to string for query command line
    // after convert you can check argv with key_args[int] - begin with 0
    std::string current_exec_name = argv[0];
    std::vector<std::string> key_args;
    if (argc > 1)
    {
        key_args.assign(argv + 1, argv + argc);
    }

    // Return logo CLOP and exit if system can't find params.
    if (argc == 1) 
    {
        printIntroFull();
        return 0;
    }

    /*
        START BODY PROGRAM
        where system switch to sub lib
    */
   if (key_args[0] == "intro")
   {
        printIntroFull();
   }
   else if (key_args[0] == "help")
   {
        printHelp();
   }
   else 
   {
    cout << "Unknow command. Use 'clop help' for more information." << endl;
   }

   return 0;
}