#include "commande.h"
#include <QDebug>
#include "connexion.h"

commande::commande()
{

}
commande::commande(QString id,QString nom,QString type,QString cinp,QString prix)
{
  this->id=id;
  this->nom=nom;
  this->type=type;
  this->cinp=cinp;
  this->prix=prix;



}
QString commande::get_id(){return  id;}
QString commande::get_nom(){return nom;}
QString commande::get_type(){return type;}
QString commande::get_cinp(){return  cinp;}
QString commande::get_prix(){return  prix;}

void commande::setid(QString id){ this->id=id;}
void commande::setnom(QString nom){ this->nom=nom;}
void commande::settype(QString type){ this->type=type;}
void commande::setcinp(QString cinp){ this->cinp=cinp;}
void commande::setprix(QString prix){ this->prix=prix;}



bool commande::ajouter()
{
QSqlQuery query;

query.prepare("INSERT INTO commande (ID, NOM, TYPE, CINP, PRIX) "
                    "VALUES (:id, :nom, :type, :cinp, :prix)");
query.bindValue(":id", id);
query.bindValue(":nom", nom);
query.bindValue(":type", type);
query.bindValue(":cinp", cinp);
query.bindValue(":prix", prix);


return    query.exec();
}


QSqlQueryModel * commande::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from commande");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("CINP"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("PRIX"));

    return model;
}

bool commande::supprimer(QString id)
{
QSqlQuery query;

query.prepare("Delete from commande where id = :id ");
query.bindValue(":id", id);
return    query.exec();
}


bool commande::modifier(QString id,QString nom,QString type,QString cinp,QString prix)
{
    QSqlQuery query;
    query.prepare("UPDATE commande SET id:=id, nom:=nom, type:=type, cinp:=acinp, prix:=prix");
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":type",type);
    query.bindValue(":cinp",cinp);
    query.bindValue(":prix",prix);
    return query.exec();
    }


QSqlQueryModel *commande::rechercher(QString rech)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from commande where nom LIKE '"+rech+"%' or type LIKE '"+rech+"%'");
    return model;
}
QSqlQueryModel *commande::tri()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from client ORDER BY nom ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("cinp"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));


        return model;
}


histogh::histogh()
{
fn="";
nom="";
type="";
dateee="";
prix="";
}
histogh::histogh(QString fn,QString nom,QString type,QString dateee,QString prix)
{
    this->fn=fn;
    this->nom=nom;
    this->type=type ;
    this->dateee=dateee;
    this->prix=prix ;
}
QString histogh::get_fn(){return  fn;}
QString histogh::get_nom(){return  nom;}
QString histogh::get_type(){return  type;}
QString histogh::get_dateee(){return  dateee;}
QString histogh::get_prix(){return  prix;}

bool histogh::ajoutehis()
{
    QSqlQuery query;
    query.prepare("INSERT INTO historique (fn, nom, type, dateee, prix) "
                  "VALUES (:fn, :nom, :type, :dateee, :prix)");
    query.bindValue(":fn", fn);
    query.bindValue(":nom", nom);
    query.bindValue(":type", type);
    query.bindValue(":dateee", dateee);
    query.bindValue(":prix", prix);
    return    query.exec();
}
bool histogh::modifierhis()
{
    QSqlQuery query;
    query.prepare("UPDATE historique SET fn='"+fn+"',type='"+type+"',dateee='"+dateee+"',prix='"+prix+"' where nom='"+nom+"'  ;");
    query.bindValue(":fn",fn);
    query.bindValue(":nom", nom);
    query.bindValue(":type", type);
    query.bindValue(":dateee", dateee);
    query.bindValue(":prix", prix);
    return    query.exec();
}
QSqlQueryModel * histogh::afficherhis()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from historique");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("fn"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("dateee"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));

        return model;

}


