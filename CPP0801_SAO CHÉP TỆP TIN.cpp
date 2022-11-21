#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input;
    ofstream output;
    input.open ("PTIT.in");
    output.open ("PTIT.out");
    string s;
    while (!input.eof())
    {
        getline(input,s);
        output << s;
        output << endl;
    }
    input.close();
    output.close();
    return 0;
}
