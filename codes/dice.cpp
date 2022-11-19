#include "dice.h"
#include <QUrl>

/*Dice::Dice(QWidget *parent)
    : QWidget(parent)
{
    audioRecorder = new QAudioRecorder;

    QAudioEncoderSettings audioSettings;
    audioSettings.setCodec("audio/amr");
    audioSettings.setQuality(QMultimedia::HighQuality);

    audioRecorder->setEncodingSettings(audioSettings);

    audioRecorder->setOutputLocation(QUrl::fromLocalFile("dice.amr"));
    audioRecorder->record();
}*/


int Dice::ans=rand()%6+1;


Dice::Dice(int t)
{
}


Dice::Dice()
{
    audioRecorder = new QAudioRecorder;
    connect(audioRecorder,SIGNAL(stateChanged(QMediaRecorder::State)),this,SLOT(onStateChanged(QMediaRecorder::State)));
    connect(audioRecorder,SIGNAL(durationChanged(qint64)),this,SLOT(onDurationChanged(qint64)));

    probe = new QAudioProbe;
    connect(probe,SIGNAL(audioBufferProbed(QAudioBuffer)),this,SLOT(processBuffer(QAudioBuffer)));
    probe->setSource(audioRecorder);

    QAudioEncoderSettings audioSettings;
    audioSettings.setCodec("audio/amr");
    audioSettings.setQuality(QMultimedia::HighQuality);

    audioRecorder->setEncodingSettings(audioSettings);

    audioRecorder->setOutputLocation(QUrl::fromLocalFile("dice.amr"));
    audioRecorder->record();

    srand(audioRecorder->duration()+rand());
    ans=rand()%6+1;
}


int Dice::getans() const
{
    return ans;
}


Dice::~Dice()
{

}


void Dice::stopRecord()
{
    audioRecorder->stop();
}


/*long Dice::getFileSize(char* filename)
{
    FILE* fp = fopen(filename, "r");//只读
        if (!fp) {
            return -1;
        }

        fseek(fp, 0, SEEK_END);//指向最后字节
        long size = ftell(fp);//返回文件字节长度
        fclose(fp);

        return size;
}


int Dice::getPcmDB(const unsigned char *pcmdata,long size)
{
    int db = 0;
    short int value = 0;
    double sum = 0;
    for(int i = 0; i < size; i += 2)
    {
        memcpy(&value, pcmdata+i, 2); //获取2个字节的大小（值）
        sum += abs(value); //绝对值求和
    }
    sum = sum / (size / 2); //求平均值（2个字节表示一个振幅，所以振幅个数为：size/2个）
    if(sum > 0)
    {
        db = (int)(20.0*log10(sum));
    }
    return db;
}*/
