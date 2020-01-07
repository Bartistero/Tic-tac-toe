#ifndef TICTOK_H
#define TICTOK_H

#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class ticTok; }
QT_END_NAMESPACE

class ticTok : public QMainWindow
{
    Q_OBJECT
    char field[9]; // zawartość poszczególnych pól gry
    char player;

public:
    ticTok(QWidget *parent = nullptr);
    ~ticTok();
public slots:
    void clear();

private slots:
    void  p1Clicked();
    void  p2Clicked();
    void  p3Clicked();
    void  p4Clicked();
    void  p5Clicked();
    void  p6Clicked();
    void  p7Clicked();
    void  p8Clicked();
    void  p9Clicked();
    void pushButton(int n);

private:
    void isWin();
    //void pushButton(int n);
    Ui::ticTok *ui;
};
#endif // TICTOK_H
