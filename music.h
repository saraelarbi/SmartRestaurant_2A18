#ifndef MUSIC_H
#define MUSIC_H

#include <QDialog>


namespace Ui {
class music;
}
class QMediaPlayer;
class music : public QDialog
{
    Q_OBJECT

public:
    explicit music(QWidget *parent = nullptr);
    ~music();

private slots:
    void on_ouvrir_clicked();

    void on_play_clicked();

    void on_pause_clicked();

    void on_stop_clicked();


    void on_mute_clicked();

    void on_volume_valueChanged(int value);


private:
    Ui::music *ui;
    QMediaPlayer *mMediaPlayer;
};

Sari❤️, date d’envoi : Aujourd’hui, à 02:53
#include "music.h"
#include "ui_music.h"
#include<QMediaPlayer>
#include<QFileDialog>
music::music(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::music)
{
    ui->setupUi(this);
    mMediaPlayer = new QMediaPlayer(this);

    connect(mMediaPlayer, &QMediaPlayer::positionChanged,[&](qint64 pos){
        ui->avancement->setValue(pos);
    });
}

music::~music()
{
    delete ui;
}

void music::on_ouvrir_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,"ouvrir");
    if (filename.isEmpty())
    {return;}
    mMediaPlayer->setMedia(QUrl::fromLocalFile(filename));
    mMediaPlayer->setVolume(ui->volume->value());
    on_play_clicked();
}

void music::on_play_clicked()
{
    mMediaPlayer->play();
}

void music::on_pause_clicked()
{
    mMediaPlayer->pause();
}

void music::on_stop_clicked()
{
    mMediaPlayer->stop();
}



void music::on_mute_clicked()
{
    if(ui->mute->text()=="mute"){
    mMediaPlayer->setMuted(true);
    ui->mute->setText("unmute");
    }else {mMediaPlayer->setMuted(false);
        ui->mute->setText("mute");
    }
}

void music::on_volume_valueChanged(int value)
{
    mMediaPlayer->setVolume(value);
}
