// Crystal Zhang
// 09/30/2024
// Lab 3

#include <iostream> 
#include <iomanip> 

using namespace std; 

int main() 
{
    cout << setfill ('#'); //fills all the empty spaces with hashtags
    cout << setw (85) << "" << endl; //fills 85 characters with hashtags

    cout << setfill (' '); //fills all empty spaces with blank spaces 
    cout << "#" << setw (84) << "#" << endl; //sets a hashtag on the beginning, prints 84 blank spaces, then a hashatg on the end
    cout << "#" << setw (84) << "#" << endl; //same above

    cout << "#" << setw (58) << "Ways to access the Task Manager on your Windows computer:" << setw (26) << "#" << endl; //prints a hashtag on the beginning, then 1 blank space, then the text (57 characters), then 25 blank spaces, and a hastag on the end 
    cout << "#" << setw (84) << "#" << endl; //sets a hashtag on the beginning, prints 84 blank spaces, then a hashatg on the end
    cout << "#" << setw (58) << "Press the key combination Ctrl + Shift + Escape" << setw (26) << "#" << endl; //prints a hashtag on the beginning, then 11 blank spaces, then the text (47 characters), then 35 blank spaces, then a hashtag on the end
    cout << "#" << setw (84) << "#" << endl; //sets a hashtag on the beginning, prints 84 blank spaces, then a hashatg on the end
    cout << "#" << setw (82) << "Press the key combination Ctrl + Alt + Delete and select \"Task Manager\"" << setw (2) << "#" << endl; //prints a hastag in the beginning, then 11 blank spaces, then the text (71 characters), then 1 blank space, and a hashtag on the end 
    cout << "#" << setw (84) << "#" << endl; //sets a hashtag on the beginning, prints 84 blank spaces, then a hashatg on the end
    cout << "#" << setw (64) << "Type  in the Windows Start menu search \"Task Manager\"" << setw (20) << "#" << endl; //prints a hashatg in the beginning, then 11 blank spaces, then the text (53 characters), then 19 blank spaces, then a hashtag on the end
    
    cout << "#" << setw (84) << "#" << endl; //sets a hashtag on the beginning, prints 84 blank spaces, then a hashatg on the end
    cout << "#" << setw (84) << "#" << endl; //same above

    cout << setfill ('#'); //fills all empty spaces with hashtags          
    cout << setw (85) << "" << endl; //fills 85 characters with hashtags
    
    /* 
    output: 
    #####################################################################################
    #                                                                                   #
    #                                                                                   #
    # Ways to access the Task Manager on your Windows computer:                         #
    #                                                                                   #
    #           Press the key combination Ctrl + Shift + Escape                         #
    #                                                                                   #
    #           Press the key combination Ctrl + Alt + Delete and select "Task Manager" #
    #                                                                                   #
    #           Type  in the Windows Start menu search "Task Manager"                   #
    #                                                                                   #
    #                                                                                   #
    #####################################################################################
    */
    

    return 0; //return code

}
