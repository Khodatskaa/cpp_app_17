#include "content.h"
#include "logger.h"
#include "book.h"

int main()
{
    Logger logger;

    Book library[10] =
    {
        {"Norwegian Wood", "Haruki Murakami", "PublisherA", "Fiction"},
        {"Men Without Women", "Haruki Murakami", "PublisherB", "Fiction"},
        {"Pride and Prejudice", "Jane Austen", "PublisherC", "Classic"},
        {"The Picture of Dorian Gray", "Oscar Wilde", "PublisherD", "Fiction"},
        {"The Collector", "John Fowles", "PublisherE", "Mystery"},
        {"The Resurrectionist", "E. B. Hudspeth", "PublisherF", "Fiction"},
        {"A Little Life", "Hanya Yanagihara", "PublisherG", "Drama"},
        {"Gone with the Wind", "Margaret Mitchell", "PublisherH", "Historical Fiction"},
        {"1984", "George Orwell", "PublisherI", "Dystopian Fiction"},
        {"The Enigma of Room 622", "Joel Dicker", "PublisherJ", "Mystery"}
    };

    Content content(library, 10, logger);

    std::cout << std::endl;

    content.printAllBooks();

    std::cout << std::endl;

    content.searchByAuthor("Haruki Murakami");

    std::cout << std::endl;

    content.searchByName("1984");

    std::cout << std::endl;

    logger.log("Sorting by book name...");
    content.sortByName();
    content.printAllBooks();

    std::cout << std::endl;

    logger.log("Sorting by author...");
    content.sortByAuthor();
    content.printAllBooks();

    std::cout << std::endl;

    logger.log("Sorting by publisher...");

    content.sortByPublisher();
    content.printAllBooks();
    content.editBook("1984", "1984", "George Orwell", "PublisherI", "Dystopian Fiction"); // Edit a book

    std::cout << std::endl;

    content.printAllBooks();

    return 0;
}
