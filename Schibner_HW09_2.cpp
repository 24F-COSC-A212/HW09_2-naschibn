//Line Numbers 
//To format the info in the file
//Nalani Schibner 
//October 17th, 2024


#include <iostream>
#include <iomanip>
#include <fstream> 

using namespace std; 

int main()
{
    ifstream inFile;
    char inName[100];
    string inputLine = " "; 
    int lineNum = 1;

    cout << "Enter the input file name: ";
    cin >> inName;

    inFile.open(inName);

    if (!inFile)
    {
        cout << "Error opening file " << inName << endl;
        return 666; 
    } 

    while (!inFile.eof())
    {
        getline(inFile, inputLine, '\n');
        cout << setw(4) << right << lineNum << ": " << inputLine << endl; 
        lineNum++;
    }

    inFile.close();
    
    return 0; 
}