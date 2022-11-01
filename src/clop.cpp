#include <iostream>
#include <string>
#include <vector>

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

    /*
        START BODY PROGRAM
        where system switch to sub lib
    */
   
    return 0;
}