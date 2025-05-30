#include <iostream>
#include <cstdlib>
#include <limits>

void set_bookdata();
struct book_DATA
{
    std::string Title, 
                Author, 
                ISB, 
                Genre,
                Availability;
    
};

void set_bookdata(book_DATA & book)
    {
        
        auto data_validation = [](const std::string & info){
            std::string prompt;
            while(true)
                {
                    if(std::getline(std::cin, prompt)) {
                        
                    }
                }
        };
        while(true)
            {
           
            }
    }
