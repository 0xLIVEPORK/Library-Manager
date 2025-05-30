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
            std::cout << prompt;
                if(!(std::getline(std::cin, line)) || line.empty())
                    {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        continue;
                    }
                break;
            }
        return line;
    };

    //SET DATA SECTION

    do
    {
        book.Title = enter_data("Book Title: ");
        book.Author = enter_data("Author: ");
        book.ISB = enter_data("ISB: ");
        book.Genre = enter_data("Genre: ");
        book.Availability = enter_data("Availability: ");
        break;
    } while (true);
    
}
