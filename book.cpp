#include "book.h"
#include <sstream>
using namespace std;


//constructeur par defaut
Book::Book() : title(""), author(""), isbn(""), isAvailable(true) {}
// Constructor avec parametres
Book::Book(const string& title, const string& author, const string& isbn)    : title(title), author(author), isbn(isbn), isAvailable(true)   {}

//les getters
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getIsbn() const { return isbn; }
bool Book::getIsAvailable() const { return isAvailable; }

//les setters
void Book::setTitle(const string& title) { this->title = title; }
void Book::setAuthor(const string& author) { this->author = author; }
void Book::setIsbn(const string& isbn) { this->isbn = isbn; }
void Book::setIsAvailable(bool isAvailable) { this->isAvailable = isAvailable; }


//methode pour emprunter un livre #9
void Book::checkOut(const string& borrowerId){

}

//méthode pour retourner un livre #10
void  Book::returnBook(){

}

//méthode pour afficher un livre? #5 ou #6 ?
string Book::toString() const{

}

//Pour le mettre au format pour sauvegarder dans le fichier books.txt donc dois etre parreil que dans le fichier
string Book::toFileFormat() const {
    string result = title + "|" + author + "|" + isbn + "|" + (isAvailable ? "1" : "0");
    return result;
}

void Book::fromFileFormat(const string& line){
    stringstream ss(line);
    string token;

    getline(ss, title, '|');
    getline(ss, author, '|');
    getline(ss, isbn, '|');
    getline(ss, token, '|');
    isAvailable = (token == "1");

}
