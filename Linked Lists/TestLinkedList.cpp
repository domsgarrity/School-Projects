#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main()
{
    LinkedList<int> list1;
    int num;
    int yn;
    
    cout << "Enter in numbers for your linked list. When finished please type -59" << endl;
    cin >> num;
    
    while (num != -59)
    {
        list1.insert(num);
        cin >> num;
    }
    cout << endl << "Your list contains: ";
    list1.print();
    cout << endl << ":)" << endl;
    
    list1.isSortedList();
    if (list1.isSortedList() == true)
        cout << "List is sorted :D" << endl;
    else if (list1.isSortedList() == false)
        { cout <<"List is not sorted :/" << endl;
          cout << "Would you like to sort your list?" << endl << "Type 1 for yes or 2 for no" << endl;
          cin >> yn;
         if (yn = 1){
             list1.sortList();
             list1.print();
             cout << endl << "List is sorted :)"<< endl;
         }
        }
        else
            return 0;
        
         
        
    
    return 0;
}

