#include <iostream>
#include <cstdlib>
#include <limits>

struct book_DATA
{
    std::string Title, 
                Author, 
                ISB, 
                Genre,
                Availability;
    
};

void set_bookdata(book_DATA & book);


int main(){
    book_DATA test;

    set_bookdata(test);

}

void set_bookdata(book_DATA & book)
    {
        
        auto data_validation = [](const std::string & info){
            std::string prompt;

            while(true)
                {
                std::cout << info;
                    if((!(std::getline(std::cin, prompt))) || prompt.empty() == 1) {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    } 
                    break;
                }
            return prompt;
        };


        while(true)
            {
                book.Author = data_validation("Enter Author Name: ");
                break;
            }
    }
