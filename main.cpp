#include <iostream>


void log_menu () {
//TODO:  Arisha,  add your code here
//* Menu example:
//*  Logging menu
//* 1. Add Entry
//* 2. Delete Entry
//* 3. Print Entries
//* 4. Exit
//* Enter your choice:
    std::cout << "Menu:" << std::endl;
     std::cout << "1.Marks"<<std::endl;
     std::cout << "2.Add marks"<<std::endl;
     std::cout << "3.delete marks"<<std::endl;
     std::cout << "4.exit"<<std::endl;



    std::cout << "Menu:" << std::endl;
};

// 2 Modes : Console and Interactive
int main (int argc, char *argv[]) {
    if (argc >= 2) {
        std::cout << "Console mode" << std::endl;
        for (int i = 1; i < argc; i++) {
            std::cout << argv[i] << std::endl;
        }
    } else {
        std::cout << "Interactive mode" << std::endl;
        log_menu ();
    }
    return 0;
}
