#ifndef CHESS_H
#define CHESS_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include <QCheckBox>
#include <QPushButton>
#include <QSpinBox>
#include <QRadioButton>
#include <QLineEdit>
#include <QPainter>

class Chess : public QWidget
{
    Q_OBJECT
private:
    QHBoxLayout *mainLayout;
    QGridLayout *settingLayout;
    QCheckBox *autoBlock;
    QGroupBox *autoAssist;
    QVBoxLayout *autoAssistLayout;
    QRadioButton *blackAssist;
    QRadioButton *whiteAssist;
    QCheckBox *highlightLast;
    QCheckBox *alwaysFirst;
    QLabel *tableSizeLabel;
    QSpinBox *tableSize;
    QPushButton *undoA;
    QPushButton *quitA;
    QWidget *chessTable;
    QGridLayout *record;
    QLineEdit *nameBlack;
    QLabel *recordBlack;
    QLabel *timeBlack;
    QLabel *trickBlack;
    QLabel *undoBlack;
    QLineEdit *nameWhite;
    QLabel *recordWhite;
    QLabel *timeWhite;
    QLabel *trickWhite;
    QLabel *undoWhite;
    QLabel *recordBlackLabel;
    QLabel *timeBlackLabel;
    QLabel *trickBlackLabel;
    QLabel *undoBlackLabel;
    QLabel *recordWhiteLabel;
    QLabel *timeWhiteLabel;
    QLabel *trickWhiteLabel;
    QLabel *undoWhiteLabel;
    QPushButton *undoB;
    QPushButton *quitB;

    void initUI();

protected:
    void paintEvent(QPaintEvent *e);
public:
    explicit Chess(QWidget *parent = nullptr);
    ~Chess() override;
};
#endif // CHESS_H
