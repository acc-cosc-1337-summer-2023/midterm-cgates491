#include"question1.h"
#include<iostream>
#include<string>

int main()
{

    int count;
    char choice = 'y';
        do{

            std::cout<<"Enter a number: ";
            std::cin>>count;
            if(test_config(count) == true){
            
            std::cout<<get_factorial_sequence(count)<<'\n';
    
            std::cout<<"Continue with y: ";
            std::cin>>choice;
            }
      
        }while (choice == 'y');
    
 



    return 0;
}