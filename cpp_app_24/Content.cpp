#include "content.h"
#include <algorithm>

Content::Content(Book* books, int size, Logger& logger) : library(books), size(size), logger(logger) {}

void Content::printAllBooks() const {
    logger.log("Printing all books:");
    for (int i = 0; i < size; ++i) {
        library[i].display();
    }
}

void Content::searchByAuthor(const std::string& author) const {
    logger.log("Searching for books by author: " + author);
    for (int i = 0; i < size; ++i) {
        if (library[i].getAuthor() == author) {
            library[i].display();
        }
    }
}

void Content::searchByName(const std::string& name) const {
    logger.log("Searching for a book by name: " + name);
    for (int i = 0; i < size; ++i) {
        if (library[i].getTitle() == name) {
            library[i].display();
            return;
        }
    }
    logger.log("Book not found.");
}

void Content::sortByName() {
    std::sort(library, library + size, [](const Book& a, const Book& b) {
        return a.getTitle() < b.getTitle();
        });
}

void Content::sortByAuthor() {
    std::sort(library, library + size, [](const Book& a, const Book& b) {
        return a.getAuthor() < b.getAuthor();
        });
}

void Content::sortByPublisher() {
    std::sort(library, library + size, [](const Book& a, const Book& b) {
        return a.getPublisher() < b.getPublisher();
        });
}

void Content::editBook(const std::string& oldName, const std::string& newName, const std::string& author, const std::string& publisher, const std::string& genre) {
    for (int i = 0; i < size; ++i) {
        if (library[i].getTitle() == oldName) {
            library[i].setTitle(newName);
            library[i].setAuthor(author);
            library[i].setPublisher(publisher);
            library[i].setGenre(genre);
            logger.log("Book edited successfully.");
            return;
        }
    }
    logger.log("Book not found for editing.");
}
