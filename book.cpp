#include "book.h"
using namespace std;


//constructeur par defaut
Book::Book() : title(""), author(""), isbn(""), available(true) {}
// Constructor
Book::Book(const string& title, const string& author, const string& isbn)    : title(title), author(author), isbn(isbn), available(true) {}

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
    string result = title + "|" + author + "|" + isbn + "|" + (available ? "1" : "0");
    return result;
}

void Book::fromFileFormat(const string& line){
    stringstream ss(line);
    string token;

    getline(ss, title, '|');
    getline(ss, author, '|');
    getline(ss, isbn, '|');
    getline(ss, token, '|');
    available = (token == "1");

}
