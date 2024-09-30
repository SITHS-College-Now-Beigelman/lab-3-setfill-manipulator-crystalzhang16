// Crystal Zhang
// 09/30/2024
// Lab 3

#include <iostream> 
#include <iomanip> 

using namespace std; 

int main() 
{
    cout << setfill ('#');
    cout << setw (85) << "" << endl; //hashtag

    cout << setfill (' ');
    cout << "#" << setw (84) << "#" << endl;
    cout << "#" << setw (84) << "#" << endl; 
    cout << "#"" << setw (50) << "Ways to access the Task Manager on your Windows computer:" << setw (26) << "#" << endl; //start of body
    cout << "#" << setw (84) << "#" << endl; 
    cout << "#" << setw (58) << "Press the key combination Ctrl + Shift + Escape" << setw (25) << "#" << endl; //space and hashtag
    cout << "#" << setw (84) << "#" << endl; 
    cout << "#" << setw (82) << "Press the key combination Ctrl + Alt + Delete and select \"Task Manager\"" << setw (2) << "#" << endl; //space and hashtag
    cout << "#" << setw (84) << "#" << endl; 
    cout << "#" << setw (64) << "Type  in the Windows Start menu search \"Task Manager\"" << setw (20) << "#" << endl; //end of body
    cout << "#" << setw (84) << "#" << endl;
    cout << "#" << setw (84) << "#" << endl; //space and hashtag

    cout << setfill ('#');                                                                         
    cout << setw (85) << "" << endl; //hashtag

    return 0; //return code

}