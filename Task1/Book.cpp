#include "Book.h"

Book::Book() {}

Book::Book(string name_avtor, int year_book)
{
	this->name_avtor = name_avtor;
	this->year_book = year_book;
}

void Book::Setname_avtor(string name_book)
{
	this->name_avtor = name_avtor;
}

void Book::Setyear_book(int year_book)
{
	this->year_book = year_book;
}

string Book::Getname_avtor() {return name_avtor;};

int Book::Getyear_book() { return year_book; };

bool operator== (Book& book1, Book& book2)
{
	return(book1.Getname_avtor() == book2.Getname_avtor()
		&& book1.Getyear_book() == book2.Getyear_book());
}

bool operator!= (Book& book1, Book& book2)
{
	return !(book1 == book2);
}

ostream& operator<<(ostream& out, Book& book1)
{
	cout << "Avtor: " << book1.Getname_avtor() << endl 
		<< "Year: " << book1.Getyear_book() << endl;
	return out;
}

istream& operator>>(istream& in, Book& book)
{
	in >> book.name_avtor;
	in >> book.year_book;

	return in;
}