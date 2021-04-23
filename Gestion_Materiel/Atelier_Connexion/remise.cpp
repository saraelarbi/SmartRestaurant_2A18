#include "remise.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QSqlQueryModel>
#include<QObject>
Remise::Remise()
{

}

Remise::Remise(QString idmateriel,QString remise,QString dates)
{this->idmateriel=idmateriel; this->remise=remise; this->dates=dates;}
QString Remise:: getidmateriel(){return idmateriel;}
QString Remise:: getremise(){return remise;}
QString Remise:: getdates(){return dates;}

void Remise:: setidmateriel(QString idmateriel) {this->idmateriel=idmateriel;}
void Remise:: setremise(QString remise){this->remise=remise;}
void Remise:: setdates(QString date){this->dates=dates;}

bool Remise::ajouter()
{

    QSqlQuery query;

          query.prepare("INSERT INTO REMISE(idmateriel,remise,dates) "
                        "VALUES (:idmateriel ,:remise,:dates)");
          query.bindValue(":idmateriel", idmateriel);
          query.bindValue(":remise", remise);
            query.bindValue(":dates", dates);

    return  query.exec();
}
bool Remise::supprimer(QString idmateriel)
{

    QSqlQuery query;

          query.prepare("Delete from  REMISE where idmateriel=:idmateriel");
          query.bindValue(":idmateriel", idmateriel);
         return  query.exec();

}
QSqlQueryModel* Remise::afficher()
{
QSqlQueryModel* model=new QSqlQueryModel();

model->setQuery("SELECT* FROM REMISE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Materiel"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("Remise"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("Dates"));



return model;
}

bool Remise::modifier(QString,QString,QString)
 {
     QSqlQuery query;

     query.prepare("UPDATE REMISE SET idmateriel:=idmateriel, remise:=remise, dates:=dates");
     query.bindValue(":idmateriel",idmateriel);
     query.bindValue(":remise",remise);
       query.bindValue(":dates",dates);

     return query.exec();
}







QSqlQueryModel* Remise::rechercher2 (const QString &aux)

{
    QSqlQueryModel* model = new QSqlQueryModel();

    model->setQuery("select * from REMISE where ((idmateriel || remise || dates ) LIKE '%"+aux+"%')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("idmateriel"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("remise"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("dates"));

    return model;
}
