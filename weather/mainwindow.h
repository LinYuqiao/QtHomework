#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "weatherdata.h"

#include <QMainWindow>
#include<QNetworkAccessManager>
#include<QNetworkReply>
#include <qlabel.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    // 重写父类的方法
    void contextMenuEvent(QContextMenuEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    void getWeatherInfo(QString citycode);
    void parseJson(QByteArray &byteArray);

    //更新UI
    void updateUI();

    bool eventFilter(QObject *watched, QEvent *event) override; //重写绘图事件

    //绘制最高低温曲线
    void paintHight();
    void paintLow();

    void gitcitycode2();



private slots:
    void on_btn_search_clicked();

    void on_le_city_returnPressed();

private:
    void onReplied(QNetworkReply *reply);
    void Json_city(QNetworkReply *reply);
private:
    Ui::MainWindow *ui;
    QMenu *mExitMenu;
    QAction *mExitAct;
    QPoint mOffset;  //鼠标离左上角的距离

    //http请求
    QNetworkAccessManager *mNetAccessManager;
    QNetworkAccessManager *mNetAccessManager1;


    Today mToday;
    Day mDay[6];

    //星期和日期
    QList<QLabel*> mWeekList;
    QList<QLabel*> mDateList;

    //天气和天气图标
    QList<QLabel*> mTypeIconList;
    QList<QLabel*> mTypeList;


    //天气污染指数
    QList<QLabel*> mAqiList;

    //风级
    QList<QLabel*> mFxList;
    QList<QLabel*> mFlList;

    //图标
    QMap<QString,QString> mTypeIconMap;

    int TEXT_OFFSET_X = 10;
    int TEXT_OFFSET_Y = 5; // 假设Y的偏移量为5，你可以根据需要调整



};
#endif // MAINWINDOW_H
