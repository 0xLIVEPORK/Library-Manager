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

void set_bookdata(book_DATA & book) {

    auto enter_data = [](const std::string prompt){
        std::string line;
        while(true)
            {
                if(!(std::getline(std::cin, line)) || line.empty())
                    {

                    }
            break;
            }
    };
}
