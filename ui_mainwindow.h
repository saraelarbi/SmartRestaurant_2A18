/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *gestioncollaboration;
    QWidget *tab_5;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *ajout;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QLabel *label_19;
    QSpacerItem *verticalSpacer_4;
    QFormLayout *formLayout_6;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLineEdit *idcollaborateur;
    QLabel *label_6;
    QLineEdit *nom;
    QLabel *label_5;
    QLineEdit *prenom;
    QLabel *label_4;
    QLineEdit *telephone;
    QLabel *label_3;
    QLineEdit *adresse;
    QLabel *label;
    QLineEdit *email;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ajouter_collab_2;
    QPushButton *reset;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *affichage;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *verticalLayout_13;
    QLabel *trier_collab;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *re_afficher2;
    QGroupBox *groupBox_5;
    QTableView *tab_collab;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *supprimer_collab;
    QPushButton *modifier_collab;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_16;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_25;
    QGroupBox *groupBox_6;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_22;
    QFormLayout *formLayout_4;
    QLabel *label_8;
    QLabel *label_11;
    QLineEdit *type;
    QLabel *label_12;
    QLineEdit *nom_2;
    QLabel *label_14;
    QComboBox *duree;
    QLabel *label_13;
    QLineEdit *tarif;
    QLabel *label_9;
    QComboBox *idcollaborateur_2;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *ajouter_collab;
    QPushButton *reset_2;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_28;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_nom;
    QCheckBox *checkBox_type;
    QCheckBox *checkBox_tarif;
    QVBoxLayout *verticalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *rech_type;
    QLineEdit *rech_tarif;
    QLineEdit *rech_nom;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pb_recherche;
    QPushButton *re_afficher;
    QGroupBox *groupBox;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *imprimer;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *modifier_collab_2;
    QPushButton *supprimer_collab_2;
    QPushButton *le_stat;
    QWidget *tab_6;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QFormLayout *formLayout;
    QLabel *label_20;
    QLineEdit *numres;
    QLabel *label_21;
    QLabel *label_25;
    QLabel *label_26;
    QLineEdit *nom_3;
    QLineEdit *prenom1;
    QLineEdit *dateres;
    QLabel *label_24;
    QComboBox *typeres;
    QLabel *label_23;
    QLabel *label_22;
    QLineEdit *nbchaise;
    QLineEdit *nbtable;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *reset3;
    QPushButton *ajouter_3;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_8;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *modif3;
    QPushButton *supprimer3;
    QWidget *tab_3;
    QLabel *img;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tabhis;
    QPushButton *pushButton_6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gestioncollaboration = new QTabWidget(centralwidget);
        gestioncollaboration->setObjectName(QStringLiteral("gestioncollaboration"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        lineEdit = new QLineEdit(tab_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 30, 113, 20));
        textEdit = new QTextEdit(tab_5);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 60, 111, 61));
        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 70, 75, 23));
        gestioncollaboration->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_3 = new QHBoxLayout(tab);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        ajout = new QGroupBox(tab);
        ajout->setObjectName(QStringLiteral("ajout"));
        ajout->setStyleSheet(QStringLiteral("background-color: rgb(255, 190, 247);"));
        verticalLayout_7 = new QVBoxLayout(ajout);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_2 = new QGroupBox(ajout);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 196, 153);"));

        verticalLayout_7->addWidget(groupBox_2);

        label_19 = new QLabel(ajout);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout_7->addWidget(label_19);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_2 = new QLabel(ajout);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_2);

        idcollaborateur = new QLineEdit(ajout);
        idcollaborateur->setObjectName(QStringLiteral("idcollaborateur"));
        idcollaborateur->setStyleSheet(QLatin1String("\n"
"background-color: rgb(205, 246, 255);"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, idcollaborateur);

        label_6 = new QLabel(ajout);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_6);

        nom = new QLineEdit(ajout);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setStyleSheet(QStringLiteral("background-color: rgb(205, 246, 255);"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, nom);

        label_5 = new QLabel(ajout);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_5);

        prenom = new QLineEdit(ajout);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setStyleSheet(QStringLiteral("background-color: rgb(205, 246, 255);"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, prenom);

        label_4 = new QLabel(ajout);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_4);

        telephone = new QLineEdit(ajout);
        telephone->setObjectName(QStringLiteral("telephone"));
        telephone->setStyleSheet(QStringLiteral("background-color: rgb(205, 246, 255);"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, telephone);

        label_3 = new QLabel(ajout);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label_3);

        adresse = new QLineEdit(ajout);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setStyleSheet(QStringLiteral("background-color: rgb(205, 246, 255);"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, adresse);

        label = new QLabel(ajout);
        label->setObjectName(QStringLiteral("label"));

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label);

        email = new QLineEdit(ajout);
        email->setObjectName(QStringLiteral("email"));
        email->setStyleSheet(QStringLiteral("background-color: rgb(205, 246, 255);"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, email);


        formLayout_6->setLayout(0, QFormLayout::SpanningRole, formLayout_3);


        verticalLayout_7->addLayout(formLayout_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        ajouter_collab_2 = new QPushButton(ajout);
        ajouter_collab_2->setObjectName(QStringLiteral("ajouter_collab_2"));
        ajouter_collab_2->setStyleSheet(QLatin1String("background-color: rgb(205, 246, 255);\n"
""));

        horizontalLayout_7->addWidget(ajouter_collab_2);

        reset = new QPushButton(ajout);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setStyleSheet(QStringLiteral("background-color: rgb(205, 246, 255);"));

        horizontalLayout_7->addWidget(reset);


        verticalLayout_7->addLayout(horizontalLayout_7);


        verticalLayout_5->addWidget(ajout);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        affichage = new QGroupBox(tab);
        affichage->setObjectName(QStringLiteral("affichage"));
        affichage->setStyleSheet(QLatin1String("background-color: rgb(255, 170, 255);\n"
"background-color: rgb(255, 189, 249);"));
        verticalLayout_14 = new QVBoxLayout(affichage);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        trier_collab = new QLabel(affichage);
        trier_collab->setObjectName(QStringLiteral("trier_collab"));
        trier_collab->setStyleSheet(QLatin1String("background-color: rgb(85, 255, 127);\n"
"background-color: rgb(170, 170, 255);"));

        verticalLayout_13->addWidget(trier_collab);

        radioButton = new QRadioButton(affichage);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout_13->addWidget(radioButton);

        radioButton_2 = new QRadioButton(affichage);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout_13->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(affichage);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout_13->addWidget(radioButton_3);

        re_afficher2 = new QPushButton(affichage);
        re_afficher2->setObjectName(QStringLiteral("re_afficher2"));
        re_afficher2->setStyleSheet(QLatin1String("background-color: rgb(205, 246, 255);\n"
""));

        verticalLayout_13->addWidget(re_afficher2);

        groupBox_5 = new QGroupBox(affichage);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setStyleSheet(QStringLiteral("background-color: rgb(139, 170, 255);"));

        verticalLayout_13->addWidget(groupBox_5);

        tab_collab = new QTableView(affichage);
        tab_collab->setObjectName(QStringLiteral("tab_collab"));
        tab_collab->setStyleSheet(QStringLiteral("background-color: rgb(255, 196, 153);"));

        verticalLayout_13->addWidget(tab_collab);


        verticalLayout_14->addLayout(verticalLayout_13);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        supprimer_collab = new QPushButton(affichage);
        supprimer_collab->setObjectName(QStringLiteral("supprimer_collab"));
        supprimer_collab->setStyleSheet(QStringLiteral("background-color: rgb(205, 246, 255);"));

        horizontalLayout_4->addWidget(supprimer_collab);

        modifier_collab = new QPushButton(affichage);
        modifier_collab->setObjectName(QStringLiteral("modifier_collab"));
        modifier_collab->setStyleSheet(QStringLiteral("background-color: rgb(205, 246, 255);"));
        modifier_collab->setCheckable(true);

        horizontalLayout_4->addWidget(modifier_collab);


        verticalLayout_14->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(affichage);


        horizontalLayout_3->addLayout(verticalLayout_2);

        gestioncollaboration->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_9 = new QHBoxLayout(tab_2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 206, 162);"));
        verticalLayout_25 = new QVBoxLayout(groupBox_3);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        groupBox_6 = new QGroupBox(groupBox_3);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 255);"));

        verticalLayout_25->addWidget(groupBox_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(verticalSpacer_3);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));

        verticalLayout_25->addLayout(verticalLayout_22);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_8);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_11);

        type = new QLineEdit(groupBox_3);
        type->setObjectName(QStringLiteral("type"));
        type->setStyleSheet(QLatin1String("background-color: rgb(255, 196, 212);\n"
"background-color: rgb(255, 255, 127);"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, type);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_12);

        nom_2 = new QLineEdit(groupBox_3);
        nom_2->setObjectName(QStringLiteral("nom_2"));
        nom_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, nom_2);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_14);

        duree = new QComboBox(groupBox_3);
        duree->setObjectName(QStringLiteral("duree"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, duree);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, label_13);

        tarif = new QLineEdit(groupBox_3);
        tarif->setObjectName(QStringLiteral("tarif"));
        tarif->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 127);"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, tarif);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_4->setWidget(6, QFormLayout::LabelRole, label_9);

        idcollaborateur_2 = new QComboBox(groupBox_3);
        idcollaborateur_2->setObjectName(QStringLiteral("idcollaborateur_2"));
        idcollaborateur_2->setStyleSheet(QLatin1String("background-color: rgb(234, 129, 255);\n"
"background-color: rgb(255, 252, 146);"));

        formLayout_4->setWidget(6, QFormLayout::FieldRole, idcollaborateur_2);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_4->setWidget(8, QFormLayout::LabelRole, label_10);


        verticalLayout_25->addLayout(formLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_25->addItem(verticalSpacer_2);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QStringLiteral("label_18"));

        verticalLayout_25->addWidget(label_18);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        ajouter_collab = new QPushButton(groupBox_3);
        ajouter_collab->setObjectName(QStringLiteral("ajouter_collab"));
        ajouter_collab->setStyleSheet(QStringLiteral("background-color: rgb(255, 237, 133);"));

        horizontalLayout_10->addWidget(ajouter_collab);

        reset_2 = new QPushButton(groupBox_3);
        reset_2->setObjectName(QStringLiteral("reset_2"));
        reset_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 237, 133);"));

        horizontalLayout_10->addWidget(reset_2);


        verticalLayout_25->addLayout(horizontalLayout_10);


        verticalLayout_16->addWidget(groupBox_3);


        horizontalLayout_9->addLayout(verticalLayout_16);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 217, 183);"));
        verticalLayout_28 = new QVBoxLayout(groupBox_4);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(188, 185, 255);"));

        verticalLayout_27->addWidget(label_15);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        checkBox_nom = new QCheckBox(groupBox_4);
        checkBox_nom->setObjectName(QStringLiteral("checkBox_nom"));
        checkBox_nom->setCheckable(true);

        horizontalLayout_8->addWidget(checkBox_nom);

        checkBox_type = new QCheckBox(groupBox_4);
        checkBox_type->setObjectName(QStringLiteral("checkBox_type"));

        horizontalLayout_8->addWidget(checkBox_type);

        checkBox_tarif = new QCheckBox(groupBox_4);
        checkBox_tarif->setObjectName(QStringLiteral("checkBox_tarif"));

        horizontalLayout_8->addWidget(checkBox_tarif);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_16);

        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_17);

        rech_type = new QLineEdit(groupBox_4);
        rech_type->setObjectName(QStringLiteral("rech_type"));
        rech_type->setStyleSheet(QStringLiteral("background-color: rgb(210, 255, 255);"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, rech_type);

        rech_tarif = new QLineEdit(groupBox_4);
        rech_tarif->setObjectName(QStringLiteral("rech_tarif"));
        rech_tarif->setStyleSheet(QStringLiteral("background-color: rgb(210, 255, 255);"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, rech_tarif);

        rech_nom = new QLineEdit(groupBox_4);
        rech_nom->setObjectName(QStringLiteral("rech_nom"));
        rech_nom->setStyleSheet(QStringLiteral("background-color: rgb(210, 255, 255);"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, rech_nom);


        verticalLayout_3->addLayout(formLayout_2);


        verticalLayout->addLayout(verticalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pb_recherche = new QPushButton(groupBox_4);
        pb_recherche->setObjectName(QStringLiteral("pb_recherche"));
        pb_recherche->setStyleSheet(QStringLiteral("background-color: rgb(255, 237, 133);"));

        verticalLayout_4->addWidget(pb_recherche);

        re_afficher = new QPushButton(groupBox_4);
        re_afficher->setObjectName(QStringLiteral("re_afficher"));
        re_afficher->setStyleSheet(QStringLiteral("background-color: rgb(255, 237, 133);"));

        verticalLayout_4->addWidget(re_afficher);


        horizontalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_27->addLayout(horizontalLayout_5);


        verticalLayout_28->addLayout(verticalLayout_27);

        groupBox = new QGroupBox(groupBox_4);
        groupBox->setObjectName(QStringLiteral("groupBox"));

        verticalLayout_28->addWidget(groupBox);

        tableView_2 = new QTableView(groupBox_4);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 164);"));

        verticalLayout_28->addWidget(tableView_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        imprimer = new QPushButton(groupBox_4);
        imprimer->setObjectName(QStringLiteral("imprimer"));

        horizontalLayout_13->addWidget(imprimer);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        modifier_collab_2 = new QPushButton(groupBox_4);
        modifier_collab_2->setObjectName(QStringLiteral("modifier_collab_2"));
        modifier_collab_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 237, 133);"));
        modifier_collab_2->setCheckable(true);

        horizontalLayout_13->addWidget(modifier_collab_2);

        supprimer_collab_2 = new QPushButton(groupBox_4);
        supprimer_collab_2->setObjectName(QStringLiteral("supprimer_collab_2"));
        supprimer_collab_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 237, 133);"));

        horizontalLayout_13->addWidget(supprimer_collab_2);


        verticalLayout_28->addLayout(horizontalLayout_13);

        le_stat = new QPushButton(groupBox_4);
        le_stat->setObjectName(QStringLiteral("le_stat"));
        le_stat->setStyleSheet(QStringLiteral("background-color: rgb(255, 237, 133);"));

        verticalLayout_28->addWidget(le_stat);


        verticalLayout_15->addWidget(groupBox_4);


        horizontalLayout_9->addLayout(verticalLayout_15);

        gestioncollaboration->addTab(tab_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        horizontalLayout_6 = new QHBoxLayout(tab_6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        groupBox_7 = new QGroupBox(tab_6);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        verticalLayout_6 = new QVBoxLayout(groupBox_7);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_5);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_20 = new QLabel(groupBox_7);
        label_20->setObjectName(QStringLiteral("label_20"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_20);

        numres = new QLineEdit(groupBox_7);
        numres->setObjectName(QStringLiteral("numres"));

        formLayout->setWidget(0, QFormLayout::FieldRole, numres);

        label_21 = new QLabel(groupBox_7);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_21);

        label_25 = new QLabel(groupBox_7);
        label_25->setObjectName(QStringLiteral("label_25"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_25);

        label_26 = new QLabel(groupBox_7);
        label_26->setObjectName(QStringLiteral("label_26"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_26);

        nom_3 = new QLineEdit(groupBox_7);
        nom_3->setObjectName(QStringLiteral("nom_3"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nom_3);

        prenom1 = new QLineEdit(groupBox_7);
        prenom1->setObjectName(QStringLiteral("prenom1"));

        formLayout->setWidget(2, QFormLayout::FieldRole, prenom1);

        dateres = new QLineEdit(groupBox_7);
        dateres->setObjectName(QStringLiteral("dateres"));

        formLayout->setWidget(3, QFormLayout::FieldRole, dateres);

        label_24 = new QLabel(groupBox_7);
        label_24->setObjectName(QStringLiteral("label_24"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_24);

        typeres = new QComboBox(groupBox_7);
        typeres->setObjectName(QStringLiteral("typeres"));

        formLayout->setWidget(4, QFormLayout::FieldRole, typeres);

        label_23 = new QLabel(groupBox_7);
        label_23->setObjectName(QStringLiteral("label_23"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_23);

        label_22 = new QLabel(groupBox_7);
        label_22->setObjectName(QStringLiteral("label_22"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_22);

        nbchaise = new QLineEdit(groupBox_7);
        nbchaise->setObjectName(QStringLiteral("nbchaise"));

        formLayout->setWidget(6, QFormLayout::FieldRole, nbchaise);

        nbtable = new QLineEdit(groupBox_7);
        nbtable->setObjectName(QStringLiteral("nbtable"));

        formLayout->setWidget(5, QFormLayout::FieldRole, nbtable);


        verticalLayout_6->addLayout(formLayout);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_5);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        reset3 = new QPushButton(groupBox_7);
        reset3->setObjectName(QStringLiteral("reset3"));

        horizontalLayout_12->addWidget(reset3);

        ajouter_3 = new QPushButton(groupBox_7);
        ajouter_3->setObjectName(QStringLiteral("ajouter_3"));

        horizontalLayout_12->addWidget(ajouter_3);


        verticalLayout_6->addLayout(horizontalLayout_12);


        horizontalLayout_6->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(tab_6);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        verticalLayout_8 = new QVBoxLayout(groupBox_8);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        tableView = new QTableView(groupBox_8);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_8->addWidget(tableView);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        pushButton = new QPushButton(groupBox_8);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_14->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_6);

        modif3 = new QPushButton(groupBox_8);
        modif3->setObjectName(QStringLiteral("modif3"));

        horizontalLayout_14->addWidget(modif3);

        supprimer3 = new QPushButton(groupBox_8);
        supprimer3->setObjectName(QStringLiteral("supprimer3"));

        horizontalLayout_14->addWidget(supprimer3);


        verticalLayout_8->addLayout(horizontalLayout_14);


        horizontalLayout_6->addWidget(groupBox_8);

        gestioncollaboration->addTab(tab_6, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        img = new QLabel(tab_3);
        img->setObjectName(QStringLiteral("img"));
        img->setGeometry(QRect(-110, 50, 501, 461));
        img->setPixmap(QPixmap(QString::fromUtf8("../../Documents/146788205_736324337259403_782764951550482489_n.png")));
        img->setScaledContents(true);
        gestioncollaboration->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout_2 = new QHBoxLayout(tab_4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabhis = new QTableView(tab_4);
        tabhis->setObjectName(QStringLiteral("tabhis"));
        tabhis->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255);"));

        horizontalLayout_2->addWidget(tabhis);

        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 170, 127);"));

        horizontalLayout_2->addWidget(pushButton_6);

        gestioncollaboration->addTab(tab_4, QString());

        horizontalLayout->addWidget(gestioncollaboration);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        gestioncollaboration->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gestioncollaboration->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        gestioncollaboration->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton_2->setText(QApplication::translate("MainWindow", "envoyer", Q_NULLPTR));
        gestioncollaboration->setTabText(gestioncollaboration->indexOf(tab_5), QApplication::translate("MainWindow", "Envoyer-sms", Q_NULLPTR));
        ajout->setTitle(QApplication::translate("MainWindow", "Bienvenue", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Ajouter un nouveau collaborateur:", Q_NULLPTR));
        label_19->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "idcollaborateur", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "telephone", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "adresse", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "email", Q_NULLPTR));
        ajouter_collab_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        reset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        affichage->setTitle(QString());
        trier_collab->setText(QApplication::translate("MainWindow", "Trier selon l'ordre alphabetique:", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "idcollaborateur", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        re_afficher2->setText(QApplication::translate("MainWindow", "affichier", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Affichage de tous nos collaborateurs", Q_NULLPTR));
        supprimer_collab->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        modifier_collab->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        gestioncollaboration->setTabText(gestioncollaboration->indexOf(tab), QApplication::translate("MainWindow", "Collaborateur", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Ajout un nouveau contrat:", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Bienvenue", Q_NULLPTR));
        label_8->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "dur\303\251e", Q_NULLPTR));
        duree->clear();
        duree->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "une_anne\303\251", Q_NULLPTR)
         << QApplication::translate("MainWindow", "plus", Q_NULLPTR)
        );
        label_13->setText(QApplication::translate("MainWindow", "tarif", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "idcollaborateur", Q_NULLPTR));
        label_10->setText(QString());
        label_18->setText(QString());
        ajouter_collab->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        reset_2->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_15->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        checkBox_nom->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        checkBox_type->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        checkBox_tarif->setText(QApplication::translate("MainWindow", "Tarif", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Tarif", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        pb_recherche->setText(QApplication::translate("MainWindow", "Rechercher", Q_NULLPTR));
        re_afficher->setText(QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Affichage:", Q_NULLPTR));
        imprimer->setText(QApplication::translate("MainWindow", "imprimer", Q_NULLPTR));
        modifier_collab_2->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        supprimer_collab_2->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        le_stat->setText(QApplication::translate("MainWindow", "statistique", Q_NULLPTR));
        gestioncollaboration->setTabText(gestioncollaboration->indexOf(tab_2), QApplication::translate("MainWindow", "Contrat", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "numero reservation", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Date de reservation", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Type de reservation", Q_NULLPTR));
        typeres->clear();
        typeres->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Evenement", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Reunion de travail", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Anniversaire", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Diner/Dejeuner", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Weeding", Q_NULLPTR)
        );
        label_23->setText(QApplication::translate("MainWindow", "Nombre de tables", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Nombre de chaise", Q_NULLPTR));
        reset3->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        ajouter_3->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("MainWindow", "Affichage:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "MUSIC", Q_NULLPTR));
        modif3->setText(QApplication::translate("MainWindow", "Modifer", Q_NULLPTR));
        supprimer3->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        gestioncollaboration->setTabText(gestioncollaboration->indexOf(tab_6), QApplication::translate("MainWindow", "Reservation", Q_NULLPTR));
        img->setText(QString());
        gestioncollaboration->setTabText(gestioncollaboration->indexOf(tab_3), QApplication::translate("MainWindow", "Animation logo", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "historique", Q_NULLPTR));
        gestioncollaboration->setTabText(gestioncollaboration->indexOf(tab_4), QApplication::translate("MainWindow", "Historique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
