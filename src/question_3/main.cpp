#include "question3.h"
#include<iostream>

using std::cout;
using std::cin;

int main()
{

    int count;
    char choice = 'y';
        do{

            std::cout<<"Enter a number from 1 to 15: ";
            std::cin>>count;
            if(test_config(count) == true){
            
            std::cout<<get_fib_sequence(count)<<'\n';
    
            std::cout<<"Continue with y: ";
            std::cin>>choice;
            }
            else{
                std::cout<<"Invalid option"<<'\n';
                std::cout<<"Continue with y: ";
                std::cin>>choice;
            }
      
        }while (choice == 'y');

    return 0;
}