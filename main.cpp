#include <iostream>
#include <fstream>
#include <string>

using namespace std ;

int main() 
{
    //ofstream
    fstream testFile("testTextFile.txt") ;
    
    if(testFile.is_open()
    {
        string userInput ;
        int num = 0 ;
        char ArrayInput ;
        cout << "testTextFile.txt is open. What would you like to write into it?" << endl ;
        getline(cin, userInput) ;
        testFile << "your first input was: " << userInput << endl ;
        cout << "Give me a number." << endl ;
        cin >> num ;
        cout << "you get to make an array with " << num << " elements of any character. what would you like those elements to be?" << endl ;
        char Array[num] ;
        
        for(int i = 0; i < num; i++)
        {
            cout << "element # " << i + 1 << ": " ;
            cin >> ArrayInput ;
            cout << endl ;
            testFile << "element # " << i + 1 << ": " << ArrayInput << endl ;
            Array[i] = ArrayInput ;
        }
            
        cout << "Sick. Your little array is: " ;
        testFile << "Here's your array, nibba: " ;
        for(int i = 0; i < num; i++)
        {
            cout << Array[i] << " " ;
            testFile << Array[i] << " " ;
        }
    }
    else cout << "the file is not open" << endl ;
    testFile.close() ;
    
    ifstream
    string line;
    ifstream myFile ("testTextFile.txt");
    if (myFile.is_open())
    {
        while (getline (myFile,line) )
        {
            cout << line << '\n';
        }
        myFile.close();
    }

    else cout << "Unable to open file"; 

        
    return 0 ;
    
 
}
