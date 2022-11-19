#ifndef DICE_H
#define DICE_H

#include <QWidget>
#include <QAudioRecorder>
#include <QAudioProbe>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Dice : public QWidget
{
    Q_OBJECT

public:
    //Dice(QWidget *parent = 0);
    Dice(int);
    Dice();
    ~Dice();

    void stopRecord();

    int getans() const;

    //int getPcmDB(const unsigned char *, long);

    static int ans;

    //long getFileSize(char*);

private:
    QAudioRecorder *audioRecorder;

    QAudioProbe *probe;
};

#endif // DICE_H
