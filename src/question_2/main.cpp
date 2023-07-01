#include"question2.h"
#include<iostream>
#include<string>

int main()
{

    std::string count;
    char choice = 'y';
        do{

            std::cout<<"Enter a binary sequence: ";
            std::cin>>count;
            if(test_config(count) == true){
            
            std::cout<<binary_to_decimal(count)<<'\n';
    
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