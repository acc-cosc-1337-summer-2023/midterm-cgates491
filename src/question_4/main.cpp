#include "question4.h"
#include<iostream>

int main()
{

    int count;
    char choice = 'y';
        do{

            std::cout<<"Enter number of widgets sold: ";
            std::cin>>count;
            if(test_config(count) == true){
            
            std::cout<<"Points Earned: "; 
            std::cout<<get_earned_points(count)<<'\n';
    
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