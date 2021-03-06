#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "fonction.h"
#include"materiel.h"
#include"fournisseur.h"
#include"excel.h"
#include"mailing.h"
#include"client.h"
#include"commande.h"
#include"calculatrice.h"
#include"music.h"
#include"arduino.h"
#include"remise.h"
#include "emplyer.h"
#include "historique.h"
#include "login.h"
#include "smtp.h"
#include "blocs.h"
#include "produit.h"
#include "collaborateur.h"
#include "contrat.h"
#include "reservation.h"
#include "statis.h"
#include "plat.h"
#include "boisson.h"
#include "notifications.h"


#include <QPrinter>
#include <QSound>
#include <QMediaPlayer>
#include <QUrl>
#include <QSystemTrayIcon>
#include<QNetworkReply>
#include<QPropertyAnimation>
#include<QMediaPlayer>
#include<QSound>
#include <QRegularExpression>
#include <QTranslator>
#include <QPixmap>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_Aymen_clicked();

    void on_Moemen_clicked();

    void on_Salma_clicked();

    void on_Sara_clicked();

    void on_Taher_clicked();

    void on_Ghazi_clicked();

    void on_Configuration_clicked();

    void on_Aymen_2_clicked();

    void on_Moemen_2_clicked();

    void on_Salma_2_clicked();

    void on_Sara_2_clicked();

    void on_Taher_2_clicked();

    void on_Ghazi_2_clicked();

    void on_Configuration_2_clicked();

    void on_Aymen_3_clicked();

    void on_Moemen_3_clicked();

    void on_Salma_3_clicked();

    void on_Sara_3_clicked();

    void on_Taher_3_clicked();

    void on_Ghazi_3_clicked();

    void on_Configuration_3_clicked();

    void on_Aymen_4_clicked();

    void on_Moemen_4_clicked();

    void on_Salma_4_clicked();

    void on_Sara_4_clicked();

    void on_Taher_4_clicked();

    void on_Ghazi_4_clicked();

    void on_Configuration_4_clicked();

    void on_Aymen_5_clicked();

    void on_Moemen_5_clicked();

    void on_Salma_5_clicked();

    void on_Sara_5_clicked();

    void on_Taher_5_clicked();

    void on_Ghazi_5_clicked();

    void on_Configuration_5_clicked();

    void on_Aymen_6_clicked();

    void on_Moemen_6_clicked();

    void on_Salma_6_clicked();

    void on_Sara_6_clicked();

    void on_Taher_6_clicked();

    void on_Ghazi_6_clicked();

    void on_Configuration_6_clicked();

    void on_Aymen_7_clicked();

    void on_Moemen_7_clicked();

    void on_Salma_7_clicked();

    void on_Sara_7_clicked();

    void on_Taher_7_clicked();

    void on_Ghazi_7_clicked();

    void on_Configuration_7_clicked();

    void on_ajouter_fonction_clicked();

    void on_supprimer_fonction_clicked();

    void on_ajouter_emplye_clicked();

    void on_supprimer_emplye_clicked();

    void on_MFonction_clicked();

    void on_MEmploye_clicked();

    void on_resetf_clicked();

    void on_resetP_clicked();

    void on_rechercherf_clicked();

    void on_reafficherf_clicked();

    void on_radioButton_triNom_clicked();

    void on_radioButton_triPrenom_clicked();

    void on_radioButton_triTelephone_clicked();

    void on_exporter_employer_clicked();

    void on_web_clicked();

    void on_envoyer_mail_employe_clicked();

    void on_pb_ajouter_clicked();
    void on_ajout2_clicked();
    void on_modifier_M_clicked();
    void on_modifier_F_clicked();
    void on_rechercher_matirel_clicked();
    void on_pb_supp2_clicked();
    void on_pb_supp_clicked();
    void on_reaficher_rech_clicked();
    void on_reset_Mat_clicked();
    void on_reset_Fou_clicked();
    void on_pushButton_2_clicked();
    void sendMail();
    void mailSent(QString);
    void on_recherche_textChanged(const QString &arg1);
    bool verifNOMm();
    bool verifTYPEE();
    bool verifMARQUE();
    bool verifNOMF();
    bool verifPRENOM();
    bool verifTYPE2();
    bool verifADRESSE();
    bool verifCHAMPVIDE();
    bool verifNOMC();
    bool verifPRENOMC();
    bool verifNOMR();




    void on_imp_F_clicked();
    void on_refresh_clicked();
    void replyFinished(QNetworkReply* reply);
    void on_envoyer_sms_clicked();
    void on_musique_materiel_clicked();
    void on_musique_fournisseur_clicked();
    void on_musique_mail_clicked();
    void on_musique_temp_clicked();
    void on_Ajout_remise_clicked();
    void on_Calculatrice_clicked();
    void on_Musique_rem_clicked();
    void on_Modif_rem_clicked();
    void on_exel_rem_clicked();
    void on_supp_rem_clicked();
    void on_rech_rem_textChanged(const QString &arg1);
    void on_pb_ajouter_2_clicked();
    void on_resetClient_clicked();
    void on_pb_rechercher_clicked();
    void on_reaficherClient_clicked();
    void on_pb_tri_clicked();
    void on_pb_excel_clicked();
    void on_pb_modifier_clicked();
    void on_pb_supprimer_clicked();
    void on_pushButton_6_clicked();
    void on_pb_ajouter2_clicked();
    void on_resetCommande_clicked();
    void on_pb_rechercher2_clicked();
    void on_reaficherCommande_clicked();
    void on_pb_tri2_clicked();
    void on_imprimer_clicked();
    void on_pb_modifier2_clicked();
    void on_pb_supprimer2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();

    void on_pushButton_clicked();
    bool verifID();
    bool verifID2();
    bool verifNOM();
    bool verifNOM2();
    bool verifprenom();
    bool verifTYPE();
    bool verifPRIX();
   //  bool verifIDb();
     bool verifemail();
     bool veriftel();
     bool verifcinp();
     void on_signup_button_clicked();
     void on_login_button_clicked();
     void on_logout_button_clicked();
     void on_mdp_oublie_label_linkActivated(const QString &link);
     void on_ajouter_image_clicked();
     void on_ouvrir_media_clicked();
     void on_play_media_clicked();
     void on_pause_media_clicked();
     void on_stop_media_clicked();
     void on_mute_media_clicked();
     void on_volume_media_valueChanged(int value);
     void on_pushButton_15_clicked();
     void on_confirmer_chan_mdp_clicked();
     void on_annuler_chan_mdp_clicked();
     void on_radioButton_nuit_toggled(bool checked);
     void on_radioButton_jour_toggled(bool checked);
     void on_confirmer_langue_clicked();

     void on_supprimer_P_clicked();

     void on_supprimer_B_clicked();

     void on_Modifier_B_clicked();

     void on_Modifier_P_clicked();

     void on_rechercher_produit_clicked();

     void on_Reafficher_clicked();

     void on_reset_produit_clicked();

     void on_le_stat_clicked();

     void on_idT_clicked();

     void on_numT_clicked();

     void on_etatT_clicked();


     void on_radioButton_clicked();

     bool verifCHAMPVIDE_taher();
     bool  verifNOM_taher();
     bool verifTYPE_taher();
     bool verifMARQUE_taher();
     bool verifNOMCl();
     bool verifPRIXghazi();

     bool verifETAT_taher();

     bool verifCHAMPVIDEbloc_taher();

     void on_prec_clicked();

     void on_entrer_clicked();

     void on_pb_ajouterblocs_clicked();

     void on_pb_ajouterProduit_clicked();

     void on_PDFP_clicked();

     void on_suivantaHER_clicked();

     void on_imprimerProduits_clicked();

     void on_HistoriqueTaher_clicked();





     void on_recherche_2_textChanged(const QString &arg1);





     void on_ajouter_collab_2_clicked();

     void on_supprimer_collab_clicked();

     void on_ajouter_contrat_clicked();



     bool verifNOM1();
     bool verifPRENOM1();

     void on_modifier_collab_clicked();

     void on_reset_collab_clicked();

     void on_re_afficher_collab_clicked();

     void on_radioButton_2_clicked();

     void on_radioButton_3_clicked();

     void on_radioButton_4_clicked();

     void on_reset_Contrat_clicked();

     void on_modifier_Contrat_clicked();

     void on_supprimer_Contrat_clicked();

     void on_re_afficherContrat_clicked();

     void on_pb_rechercheContrat_clicked();



     void on_imprimer_Contrat_clicked();

     void on_le_stat_Contrat_clicked();

     void on_resetReservation_clicked();

     void on_ajouter_REServation_clicked();

     void on_modifReservation_clicked();

     void on_supprimerReservation_clicked();

     void on_historiqueSALMA_clicked();

     void on_envoyerSMS_clicked();


     //moemen


     void on_pushButton_ajouter_Plat_clicked();

     void on_pushButton_afficher_Plat_clicked();

     void on_tableView_P_activated(const QModelIndex &index);

     void on_pushButton_supprimer_Plat_clicked();

     void on_pushButton_modifier_Plat_clicked();

     void on_pushButton_ajouter_Boisson_clicked();

     void on_pushButton_afficher_Boisson_clicked();

     void on_pushButton_modifier_Boisson_clicked();

     void on_pushButton_supprimer_Boisson_clicked();

     void on_tableView_B_activated(const QModelIndex &index);

     void on_tri_prix_Plat_clicked();

     void on_tri_nom_Plat_clicked();

     void on_fermer_porte_clicked();

     void on_imprimer_pdf_Plat_clicked();

     void on_ouvrir_prote_clicked();

     void on_tri_prix_Boisson_clicked();

     void on_tri_nom_Boisson_clicked();

     void on_imprimer_pdf_Boisson_clicked();

     void on_tri_id_Plat_clicked();

     void on_lineEdit_textChanged(const QString &arg1);

     void on_tri_id_Boisson_clicked();

     void on_lineEdit_2_textChanged(const QString &arg1);


     void myfunctionn();


     bool verifID1();
     bool verifNOMM();
     bool verifPRIX1();
     bool verifingredients();

     bool verifID_3();
     bool verifNOM_3();
     bool verifPRIX_3();
     bool verifingredients_3();

     bool verifIDb();
     bool verifNOMb();
     bool verifPRIXb();

     bool verifIDb_2();
     bool verifNOMb_2();
     bool verifPRIXb_2();





     void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;

    fonction supp;
    Employes sup;
    QSound *son;
    QMediaPlayer musicAdd;
    QSystemTrayIcon *mSystemTrayIcon;
    historique histo;
    Materiel M;
    Fournisseur F;
    Remise R;
    QPropertyAnimation* animation;
    QByteArray data;
    arduino ar, A, S,a;
    client tmpclient;
    commande tmpcommande;
    QMediaPlayer *mMediaPlayer;
    QMediaPlayer *med;
    QRegExp cin_regex,chaine_regex,tel_regex,mail_regex,salaire_regex,horaire_regex ;
    login *log;
    QTranslator *translator=new QTranslator;
    QString current_user;
    QString myid="";
    Produit P;
    Blocs B;
    projeth tmp;
    histoS tm;
    Collaborateur C;
    Contrat T;
    Reservation Re;
    QPixmap *pix;
    histogh tmph;

    Plat tmpPlat;
    Boisson tmpBoisson;
    notifications N;
    QSound *son0;
    QSound *son1;
    QSound *son2;
    QSound *son3;
    QSound *son4;
    QSound *son5;
    QTimer *timerr;


        int counter=0;
        bool test=false;

        int initial_width;
        int initial_height;

        int login_width;
        int login_height;

        int center_main_x=0;
        int center_main_y=0;
        int center_login_x=0;
        int center_login_y=0;

};
#endif // MAINWINDOW_H
