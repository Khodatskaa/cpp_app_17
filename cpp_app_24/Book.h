#ifndef BOOK_H
#define BOOK_H

#include <string>

struct Book
{
public:
    Book(const std::string& title, const std::string& author, const std::string& publisher, const std::string& genre);

    void display() const;
    const std::string& getTitle() const;
    const std::string& getAuthor() const;
    const std::string& getPublisher() const;

    void setTitle(const std::string& title);
    void setAuthor(const std::string& author);
    void setPublisher(const std::string& publisher);
    void setGenre(const std::string& genre);

private:
    std::string author;
    std::string title;
    std::string publisher;
    std::string genre;
};

#endif 
