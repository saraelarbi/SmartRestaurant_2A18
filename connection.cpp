#include "connection.h"

Connection::Connection()
{}

bool Connection::ouvrirConnection()
{
bool test=false;
    db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test");//inserer le nom de la source de données ODBC
    db.setUserName("yassine");//inserer nom de l'utilisateur
    db.setPassword("esprit21");//inserer mot de passe de cet utilisateur


if (db.open()) test = true;


return test;

}
void Connection::fermerConnection()
{db.close();}
