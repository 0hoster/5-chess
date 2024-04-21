#include "chess.h"

Chess::Chess(QWidget *parent)
        : QWidget(parent) {
    mainLayout = new QHBoxLayout();
    settingLayout = new QGridLayout();
    mainLayout = new QHBoxLayout;
    settingLayout = new QGridLayout;
    autoAssist = new QGroupBox("Auto Assist");
    autoAssistLayout = new QVBoxLayout(autoAssist);
    autoBlock = new QCheckBox("Auto block");
    blackAssist = new QRadioButton("Assist Black");
    whiteAssist = new QRadioButton("Assist White");
    highlightLast = new QCheckBox("Highlight last");
    alwaysFirst = new QCheckBox("Always first");
    tableSizeLabel = new QLabel("Table size");
    tableSize = new QSpinBox;
    undoA = new QPushButton("UNDO");
    quitA = new QPushButton("QUIT");
    undoB = new QPushButton("UNDO");
    quitB = new QPushButton("QUIT");

    chessTable = new QWidget;

    record = new QGridLayout;
    recordBlackLabel = new QLabel("Win");
    timeBlackLabel = new QLabel("Time");
    trickBlackLabel = new QLabel("Trick");
    undoBlackLabel = new QLabel("Undo");
    recordWhiteLabel = new QLabel("Win");
    timeWhiteLabel = new QLabel("Time");
    trickWhiteLabel = new QLabel("Trick");
    undoWhiteLabel = new QLabel("Undo");
    nameBlack = new QLineEdit("Black");
    recordBlack = new QLabel(" 0/ 0");
    timeBlack = new QLabel("0.00s");
    trickBlack = new QLabel("0");
    undoBlack = new QLabel("0");
    nameWhite = new QLineEdit("White");
    recordWhite = new QLabel(" 0/ 0");
    timeWhite = new QLabel("0.00s");
    trickWhite = new QLabel("0");
    undoWhite = new QLabel("0");
    initUI();
}

Chess::~Chess() {
    delete mainLayout;
}

void Chess::initUI() {
    int cnt = -1;
    autoAssistLayout->addWidget(autoBlock);
    autoAssistLayout->addWidget(blackAssist);
    autoAssistLayout->addWidget(whiteAssist);
    settingLayout->addWidget(autoAssist, ++cnt, 0, 1, 2);

    settingLayout->addWidget(highlightLast, ++cnt, 0, 1, 2);
    settingLayout->addWidget(alwaysFirst, ++cnt, 0, 1, 2);
    settingLayout->addWidget(tableSizeLabel, ++cnt, 0, 1, 1);
    settingLayout->addWidget(tableSize, cnt, 1, 1, 1);
    settingLayout->addWidget(undoA, ++cnt, 0, 1, 2);
    settingLayout->addWidget(quitA, ++cnt, 0, 1, 2);

    mainLayout->addLayout(settingLayout);
    chessTable->setMinimumSize(320, 320);

    mainLayout->addWidget(chessTable);

    cnt = -1;
    record->addWidget(nameBlack,++cnt,0,1,2);
    record->addWidget(recordBlackLabel,++cnt,0,1,1);
    record->addWidget(recordBlack,cnt,1,1,1);
    record->addWidget(timeBlackLabel,++cnt,0,1,1);
    record->addWidget(timeBlack,cnt,1,1,1);
    record->addWidget(trickBlackLabel,++cnt,0,1,1);
    record->addWidget(trickBlack,cnt,1,1,1);
    record->addWidget(undoBlackLabel,++cnt,0,1,1);
    record->addWidget(undoBlack,cnt,1,1,1);

    record->addWidget(nameWhite,++cnt,0,1,2);
    record->addWidget(recordWhiteLabel,++cnt,0,1,1);
    record->addWidget(recordWhite,cnt,1,1,1);
    record->addWidget(timeWhiteLabel,++cnt,0,1,1);
    record->addWidget(timeWhite,cnt,1,1,1);
    record->addWidget(trickWhiteLabel,++cnt,0,1,1);
    record->addWidget(trickWhite,cnt,1,1,1);
    record->addWidget(undoWhiteLabel,++cnt,0,1,1);
    record->addWidget(undoWhite,cnt,1,1,1);
    record->addWidget(undoB,++cnt,0,1,2);
    record->addWidget(quitB,++cnt,0,1,2);

    mainLayout->addLayout(record);
    mainLayout->setStretchFactor(chessTable,1);
    setLayout(mainLayout);
}

