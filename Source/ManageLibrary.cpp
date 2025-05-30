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
                std::cout << "Enter Here: ";
                    if(!(std::getline(std::cin, prompt)) || prompt.empty()) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    } break;
                }
            return prompt;
        };


        while(true)
            {
                data_validation(book.Author);
            }
    }
