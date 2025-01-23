#include <iostream>
#include "../Sales_item.h"
int main(void){
    Sales_item current_book, next_book;
    if(!(std::cin >> current_book)){
        std::cerr << "no_book" << std::endl;
    }

    while(std::cin >> next_book){
        if(current_book.isbn() == next_book.isbn()){
            current_book += next_book;
        }
        else{
            std::cout << current_book << std::endl;
            current_book = next_book;
        }
    }
    std::cout << current_book << std::endl;
    return 0;
}