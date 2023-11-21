#ifndef CONTENT_H
#define CONTENT_H

#include "logger.h"
#include "book.h"

struct Content
{
public:
    Content(Book* books, int size, Logger& logger);

    void printAllBooks() const;
    void searchByAuthor(const std::string& author) const;
    void searchByName(const std::string& name) const;
    void sortByName();
    void sortByAuthor();
    void sortByPublisher();
    void editBook(const std::string& oldName, const std::string& newName, const std::string& author, const std::string& publisher, const std::string& genre);

private:
    Book* library;
    int size;
    Logger& logger;
};

#endif 