#include "tictok.h"
#include "ui_tictok.h"


ticTok::ticTok(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ticTok)
{
    ui->setupUi(this);
    QObject::connect(ui->newGame,SIGNAL(clicked()),this,SLOT(clear()));
    QObject::connect(ui->P1,SIGNAL(clicked()),this,SLOT(p1Clicked()));
    QObject::connect(ui->P2,SIGNAL(clicked()),this,SLOT(p2Clicked()));
    QObject::connect(ui->P3,SIGNAL(clicked()),this,SLOT(p3Clicked()));
    QObject::connect(ui->P4,SIGNAL(clicked()),this,SLOT(p4Clicked()));
    QObject::connect(ui->P5,SIGNAL(clicked()),this,SLOT(p5Clicked()));
    QObject::connect(ui->P6,SIGNAL(clicked()),this,SLOT(p6Clicked()));
    QObject::connect(ui->P7,SIGNAL(clicked()),this,SLOT(p7Clicked()));
    QObject::connect(ui->P8,SIGNAL(clicked()),this,SLOT(p8Clicked()));
    QObject::connect(ui->P9,SIGNAL(clicked()),this,SLOT(p9Clicked()));


    for(int i=0;i<=9;i++)
        field[i]=' ';
    for(int i=0;i<9;i++)
        qDebug() <<"pole: "<<i<<" "<<field[i];
    qDebug() <<" ";
    player = 'o';
}


ticTok::~ticTok()
{
    delete ui;
}
void ticTok::clear()
{
    qDebug() <<"Działam xD";

}
void ticTok::isWin()
{
    for(int i=0;i<9;i++)
        qDebug() <<"pole: "<<i<<" "<<field[i];
    qDebug() <<" ";
    if(field[0]==field[1] && field[1]==field[2] && field[0]!=' ' ||
            field[3]==field[4] && field[4]==field[5] && field[3]!=' ' ||
            field[6]==field[7] && field[7]==field[8] && field[6]!=' ' ||
            field[0]==field[3] && field[3]==field[6] && field[0]!=' ' ||
            field[1]==field[4] && field[4]==field[7] && field[1]!=' ' ||
            field[2]==field[5] && field[5]==field[8] && field[2]!=' ' ||
            field[0]==field[4] && field[4]==field[8] && field[0]!=' ' ||
            field[2]==field[4] && field[4]==field[6] && field[2]!=' ')
    {

        if(player=='o')
        {
            /*QMessageBox msgBox;
            msgBox.setText("Wygrał użytkownik O");
            msgBox.setStandardButtons(QMessageBox::Ok);
           msgBox.exec();*/
            QMessageBox::information(this, "Koniec gry ", "Wygrał użytkownik: O" );
            clear();
        }
        else
        {
            //wygrał X
            QMessageBox::information(this, "Koniec gry ", "Wygrał użytkownik: X" );
            clear();
        }
    }

}
/*void ticTok::pushButton(int n)
{
    if(field[n]==' ')
    {
        if(player='o')
        {
            QIcon circle(":/img/circle");
            ui->P1->setIcon(circle);
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P1->setIcon(circle);
        }
        QPixmap changePlayer(":/img/sToc");
        ui->player->setPixmap(changePlayer);
        field[n]='o';
        isWin();
        player='x';
    }

}*/
void  ticTok::p1Clicked()
{
    if(field[0]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P1->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[0]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P1->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[0]='x';
                    isWin();
            player='o';
        }
    }
}
void  ticTok::p2Clicked()
{
    if(field[1]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P2->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[1]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P2->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[1]='x';
                    isWin();
            player='o';
        }
    }
}
void  ticTok::p3Clicked()
{
    if(field[2]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P3->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[2]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P3->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[2]='x';
                    isWin();
            player='o';
        }
    }
}
void  ticTok::p4Clicked()
{
    if(field[3]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P4->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[3]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P4->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[3]='x';
                    isWin();
            player='o';
        }
    }
}
void  ticTok::p5Clicked()
{
    if(field[4]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P5->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[4]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P5->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[4]='x';
                    isWin();
            player='o';
        }
    }
}
void  ticTok::p6Clicked()
{
    if(field[5]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P6->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[5]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P6->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[5]='x';
                    isWin();
            player='o';
        }
    }
}
void  ticTok::p7Clicked()
{
    if(field[6]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P7->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[6]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P7->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[6]='x';
                    isWin();
            player='o';
        }
    }
}
void  ticTok::p8Clicked()
{
    if(field[7]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P8->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[7]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P8->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[7]='x';
                    isWin();
            player='o';
        }
    }
}
void  ticTok::p9Clicked()
{
    if(field[8]==' ')
    {
        if(player=='o')
        {
            QIcon circle(":/img/circle");
            ui->P9->setIcon(circle);
            QPixmap changePlayer(":/img/sToc");
            ui->player->setPixmap(changePlayer);
            field[8]='o';
                    isWin();
            player='x';
        }
        else
        {
            QIcon circle(":/img/toc");
            ui->P9->setIcon(circle);
            QPixmap changePlayer(":/img/sCircle");
            ui->player->setPixmap(changePlayer);
            field[8]='x';
                    isWin();
            player='o';
        }
    }
}
