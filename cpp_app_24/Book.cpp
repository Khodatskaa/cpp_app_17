#include "book.h"
#include <iostream>

Book::Book(const std::string& title, const std::string& author, const std::string& publisher, const std::string& genre)
	: title(title), author(author), publisher(publisher), genre(genre) {}

void Book::display() const {
	std::cout << "Title: " << title << ", Author: " << author << ", Publisher: " << publisher << ", Genre: " << genre << std::endl;
}

const std::string& Book::getTitle() const {
	return title;
}

const std::string& Book::getAuthor() const {
	return author;
}

const std::string& Book::getPublisher() const {
	return publisher;
}

void Book::setTitle(const std::string& title) {
	this->title = title;
}

void Book::setAuthor(const std::string& author) {
	this->author = author;
}

void Book::setPublisher(const std::string& publisher) {
	this->publisher = publisher;
}

void Book::setGenre(const std::string& genre) {
	this->genre = genre;
}