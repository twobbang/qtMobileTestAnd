#ifndef FACEDETECT_H
#define FACEDETECT_H

#include <QObject>

class FaceDetect : public QObject
{
    Q_OBJECT
public:
    explicit FaceDetect(QObject *parent = nullptr);

    //void VideoStart();

signals:
    void onBtnClickSignal();

public slots:
    void callMeSlot();

private:
     QString m_name;

};

#endif // FACEDETECT_H
