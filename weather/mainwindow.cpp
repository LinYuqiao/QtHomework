#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMouseEvent> // 确保包含了QMouseEvent的头文件
#include<QMessageBox>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QPainter>
#include"weateherTool.h"
#include <QLineEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    setWindowFlag(Qt::FramelessWindowHint);  // 设置窗口无边框
    setFixedSize(width(), height());  // 设置窗口固定大小

    // 构建右键菜单
    mExitMenu = new QMenu(this);  // 创建菜单对象
    mExitAct = new QAction();     // 创建行为对象

    mExitAct->setText("退出");
    mExitAct->setIcon(QIcon(":/res/close.ico"));
    mExitMenu->addAction(mExitAct);  // 将我们的行为添加到菜单里

    connect(mExitAct, &QAction::triggered, this, [=]{
        qApp->exit(0);
    });

//控件添加到控件数组
    //添加日期
    mWeekList<<ui->lb_week0<<ui->lb_week1<<ui->lb_week2<<ui->lb_week3<<ui->lb_week4<<ui->lb_week5;
    //添加星期
    mDateList<<ui->lb_date0<<ui->lb_date1<<ui->lb_date2<<ui->lb_date3<<ui->lb_date4<<ui->lb_date5;
    //添加天气图标
    mTypeIconList<<ui->lb_con0<<ui->lb_con1<<ui->lb_con2<<ui->lb_con3<<ui->lb_con4<<ui->lb_con5;
    //添加天气情况
    mTypeList<<ui->lb_type0<<ui->lb_type1<<ui->lb_type2<<ui->lb_type3<<ui->lb_type4<<ui->lb_type5;
    //添加天气污染情况
    mAqiList<<ui->lb_Aqi0<<ui->lb_Aqi1<<ui->lb_Aqi1<<ui->lb_Aqi3<<ui->lb_Aqi0<<ui->lb_Aqi2<<ui->lb_Aqi5;
    //添加风向情况
    mFxList<<ui->lb_fx0<<ui->lb_fx1<<ui->lb_fx2<<ui->lb_fx3<<ui->lb_fx4<<ui->lb_fx5;
    //添加风力情况
    mFlList<<ui->lb_fl0<<ui->lb_fl1<<ui->lb_fl2<<ui->lb_fl3<<ui->lb_fl4<<ui->lb_fl5;


    mTypeIconMap.insert("晴", ":/weatherImages/type/Qing.png");
    mTypeIconMap.insert("多云", ":/weatherImages/type/DuoYun.png");
    mTypeIconMap.insert("阴", ":/weatherImages/type/Yin.png");
    mTypeIconMap.insert("雨", ":/weatherImages/type/Yu.png");
    mTypeIconMap.insert("雪", ":/weatherImages/type/Xue.png");
    mTypeIconMap.insert("沙尘暴", ":/weatherImages/type/ShaChenBao.png");

    mTypeIconMap.insert("雷阵雨", ":/weatherImages/type/LeiZhenYu.png");
    mTypeIconMap.insert("大雨", ":/weatherImages/type/DaYu.png");
    mTypeIconMap.insert("小雨", ":/weatherImages/type/XiaoYu.png");
    mTypeIconMap.insert("中雨", ":/weatherImages/type/ZhongYu.png");
    mTypeIconMap.insert("阵雨", ":/weatherImages/type/ZhenYu.png");
    mTypeIconMap.insert("暴雨", ":/weatherImages/type/BaoYu.png");
    mTypeIconMap.insert("大暴雨", ":/weatherImages/type/DaBaoYu.png");
    mTypeIconMap.insert("大到暴雨",":/weatherImages/type/DaDaoBaoYu.png");
    mTypeIconMap.insert("暴雨到大暴雨",":/weatherImages/type/BaoYuDaoDaBaoYu.png");
    mTypeIconMap.insert("大暴雨到大暴雨",":/weatherImages/type/DaBaoYuDaoDaBaoYu.png");

    mTypeIconMap.insert("暴雪",":/weatherImages/type/BaoXue.png");
    mTypeIconMap.insert("大到暴雪",":/weatherImages/type/DaDaoBaoXue.png");
    mTypeIconMap.insert("大雪", ":/weatherImages/type/DaXue.png");
    mTypeIconMap.insert("小雪", ":/weatherImages/type/XiaoXue.png");
    mTypeIconMap.insert("中雪", ":/weatherImages/type/ZhongXue.png");


    mTypeIconMap.insert("雨夹雪", ":/weatherImages/type/YuJiaXue.png");
    mTypeIconMap.insert("霾", ":/weatherImages/type/Mai.png");
    mTypeIconMap.insert("扬沙", ":/weatherImages/type/YangSha.png");
    mTypeIconMap.insert("沙尘暴", ":/weatherImages/type/ShaChenBao.png");
    mTypeIconMap.insert("特大暴雨", ":/weatherImages/type/TeDaBaoYu.png");
    mTypeIconMap.insert("乌", ":/weatherImages/type/Wu.png");
    mTypeIconMap.insert("小到中雨", ":/weatherImages/type/XiaoDaoZhongYu.png");
    mTypeIconMap.insert("小到中雪", ":/weatherImages/type/XiaoDaoZhongXue.png");
    mTypeIconMap.insert("雨夹雪", ":/weatherImages/type/YuJiaXue.png");
    mTypeIconMap.insert("阵雪", ":/weatherImages/type/ZhenXue.png");

      //定位请求网络
    mNetAccessManager =new QNetworkAccessManager(this);
    connect(mNetAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::Json_city);
    gitcitycode2();


    //3.请求网络
    mNetAccessManager1 =new QNetworkAccessManager(this);
    connect(mNetAccessManager1,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);

    //城市的天气代码
    //getWeatherInfo("101010100");



     //安装事件过滤器
     ui->lb_HigtCurve->installEventFilter(this);
     ui->lb_LowCurve->installEventFilter(this);

     ui->le_city->setPlaceholderText( "请输入城市名称:" );

}

MainWindow::~MainWindow()
{
    delete ui;
}


// 弹出右键菜单
void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    mExitMenu->exec(QCursor::pos());  // 传送鼠标位置
}

//处理鼠标点击事件
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mOffset = event->globalPos() - this->pos();
}

//处理鼠标移动事件
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() - mOffset);
}


//通过输入一个城市的代码获取这个城市的天气
void MainWindow::getWeatherInfo(QString cityname)
{
     QString citycode=WeatherTool::getcitycode(cityname);
    if(citycode.isEmpty())
    {
        QMessageBox::warning(this,"天气","请检查输入是否正确!",QMessageBox::Ok);
        return;
    }
        QUrl url("http://t.weather.itboy.net/api/weather/city/" + citycode); //这个网址返回的数据时json格式
        mNetAccessManager1->get(QNetworkRequest(url)); //get请求完成就会是finished，上面的槽函数onReplied就会被调用

}
void MainWindow::parseJson(QByteArray &byteArray)
{
    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(byteArray,&error); //如果报错就会把错误信息写到error里
    //报错直接退出
    if(error.error != QJsonParseError::NoError)
    {
        return;
    }

    QJsonObject rootObj = doc.object();
    //    qDebug() << rootObj.value("message").toString();

    //1.解析城市跟日期
    mToday.city = rootObj.value("cityInfo").toObject().value("city").toString();
    mToday.date = rootObj.value("date").toString();

    //2.解析昨天yesterday数据
    QJsonObject dataObj = rootObj.value("data").toObject();

    QJsonObject yesterdayObj = dataObj.value("yesterday").toObject();
    mDay[0].week = yesterdayObj.value("week").toString();
    mDay[0].date = yesterdayObj.value("ymd").toString();
    //天气类型
    mDay[0].type = yesterdayObj.value("type").toString();

    //空气指数
    mDay[0].aqi =yesterdayObj.value("aqi").toDouble();

    //温度，要分割取数据,"high":"高温 32℃"
    QString highS;
    highS = yesterdayObj.value("high").toString().split(" ").at(1); //高温 32℃ -> 32°C ，按空格切割，取第二个数据
    mDay[0].high = highS.left(highS.length() - 1).toInt(); //长度减一，从左边开始计算取，32°c -> 32 ,在转换为int
    QString lowS;
    lowS = yesterdayObj.value("low").toString().split(" ").at(1);
    mDay[0].low = lowS.left(lowS.length() - 1).toInt();

    //风向，风力
    mDay[0].fx = yesterdayObj.value("fx").toString();
    mDay[0].fl = yesterdayObj.value("fl").toString();

    //3.解析forecast中5天的数据 ,forecast当中包括15天的数据，数组形式
    QJsonArray forecastArr = dataObj.value("forecast").toArray();
    for(int i=0 ; i<5 ; i++)
    {
        QJsonObject forecastObj = forecastArr[i].toObject();

        mDay[i+1].week = forecastObj.value("week").toString();
        mDay[i+1].date = forecastObj.value("ymd").toString();
        mDay[i+1].type = forecastObj.value("type").toString();
        //空气指数
        mDay[i+1].aqi =forecastObj.value("aqi").toDouble();

        //温度，要分割取数据,"high":"高温 32℃"
        QString highS;
        highS = forecastObj.value("high").toString().split(" ").at(1);
        mDay[i+1].high = highS.left(highS.length() - 1).toInt();
        QString lowS;
        lowS = forecastObj.value("low").toString().split(" ").at(1);
        mDay[i+1].low = lowS.left(lowS.length() - 1).toInt();

        //风向，风力
        mDay[i+1].fx = forecastObj.value("fx").toString();
        mDay[i+1].fl = forecastObj.value("fl").toString();
    }

    //4.解析今天的数据
    mToday.wendu =dataObj.value("wendu").toString();

    mToday.ganmao =dataObj.value("ganmao").toString();

    mToday.shidu = dataObj.value("shidu").toString();
    mToday.pm25 =dataObj.value("pm25").toInt();
    mToday.quality =dataObj.value("quality").toString();

    //还有一些今天的天气数据在forecast里面
    mToday.type = mDay[1].type; //上面存好了，直接用
    mToday.high = mDay[1].high;
    mToday.low = mDay[1].low;

    mToday.fx = mDay[1].fx;
    mToday.fl = mDay[1].fl;
    updateUI();
}


//6.更新UI
void MainWindow::updateUI()
{
//标题
    //设置日期 城市
    //注意返回来的值为“20230728”这种格式，要进行转换2023/07/28
    ui->lb_date->setText(QDateTime::fromString(mToday.date,"yyyyMMdd").toString("yyyy/MM/dd") + " " + mDay[1].week);
    ui->lb_city->setText(mToday.city);
//左侧图
    //更新今天
    ui->lb_TypeIcon->setPixmap(mTypeIconMap[mToday.type]);
    ui->lb_temperature->setText(mToday.wendu);
    ui->lb_type->setText(mToday.type);
    ui->lb_LowHigh->setText(QString::number(mToday.low) + "°" +"~" + QString::number(mToday.high) + "°");
    ui->lb_ganmao->setText("感冒指数：" + mToday.ganmao);
    ui->lb_Windfx->setText(mToday.fx);
    ui->lb_Winfl->setText(mToday.fl);
    ui->lb_PM25->setText(QString::number(mToday.pm25));
    ui->lb_shidu->setText(mToday.shidu);
    ui->lb_quality->setText(mToday.quality);


//右侧图
    //更新6天
    for(int i=0 ; i<6 ; i++)
    {
        //更新星期
        mWeekList[i]->setText("周" + mDay[i].week.right(1)); //数据是”星期六“,取右边第一位
        ui->lb_week0->setText("昨天");
        ui->lb_week1->setText("今天");
        ui->lb_week2->setText("明天");

        //更新日期 ,数据是”2023-07-28“
        QStringList ymdList = mDay[i].date.split("-");
        mDateList[i]->setText(ymdList[1] + "/" + ymdList[2]);

        //更新天气类型
        mTypeList[i]->setText(mDay[i].type);
        mTypeIconList[i]->setPixmap(mTypeIconMap[mDay[i].type]);

        //更新空气质量
        if (mDay[i].aqi >= 0 && mDay[i].aqi <= 50)
        {
            mAqiList[i]->setText("优");
            mAqiList[i]->setStyleSheet("background-color: rgb(121, 184, 0);");
        }
        else if (mDay[i].aqi > 50 && mDay[i].aqi <= 100)
        {
            mAqiList[i]->setText("良");
            mAqiList[i]->setStyleSheet("background-color: rgb(255, 187, 23);");
        }
        else if (mDay[i].aqi > 100 && mDay[i].aqi <= 150)
        {
            mAqiList[i]->setText("轻度");
            mAqiList[i]->setStyleSheet("background-color: rgb(255, 87, 97);");
        }
        else if (mDay[i].aqi > 150 && mDay[i].aqi <= 200)
        {
            mAqiList[i]->setText("中度");
            mAqiList[i]->setStyleSheet("background-color: rgb(235, 17, 27);");
        }
        else if (mDay[i].aqi > 200 && mDay[i].aqi <= 250)
        {
            mAqiList[i]->setText("重度");
            mAqiList[i]->setStyleSheet("background-color: rgb(170, 0, 0);");
        }
        else
        {
            mAqiList[i]->setText("严重");
            mAqiList[i]->setStyleSheet("background-color: rgb(110, 0, 0);");
        }


        //更新风
        mFxList[i]->setText(mDay[i].fx);
        mFlList[i]->setText(mDay[i].fl);

        ui->lb_HigtCurve->update();
        ui->lb_LowCurve->update();
    }
}

//注意这里要在更新UI函数这里调用Upadate函数，不然就会一直显示都是温度曲线0
//因为eventFilter会最先调用，请求服务器那些语句都还没执行，所以不会有数据
//在更新UI函数中，在调用一次eventFilter函数就会有数据，此时请求数据的那些函数已经被执行

//步骤2重写事件
bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{

    //处理绘图事件（QEvent::Paint）。
    //在这个事件处理函数中，首先通过检查事件的类型（event->type() == QEvent::Paint）来确定是否是绘图事件
    if(event->type() == QEvent::Paint)
    {
        //"watched" 是否等于 "ui->lblHight"，来判断是否是标签控件 "ui->lblHight" 的绘图事件
        if(watched == ui->lb_HigtCurve)
        {
            paintHight();
        }

        if(watched == ui->lb_LowCurve)
        {
            paintLow();
        }
    }
    return QWidget::eventFilter(watched,event);
}




void MainWindow::paintHight()
{

    //在lblHighCurve上绘图
    QPainter painter(ui->lb_HigtCurve);
    //设置 QPainter::Antialiasing 标志来启用抗锯齿功能,产生更平滑的图形效果
    painter.setRenderHint(QPainter::Antialiasing,true);

    //1.计算温度点的坐标（X,Y）
    //X
    int pointX[6] = {0};
    for(int i = 0; i < 6 ;i++)
    {   //6个点，平均分成5等分
        //ui->lblHight->pos().x()用于获取lblHightCurve相对于其父级或包含的窗口的左边的x坐标，就是label的左边边边的位置
        //为了更好看，设置一个边距DISTANCE 10
        pointX[i] = mWeekList[i]->pos().x()+(mWeekList[i]->width()/2);
    }

    //Y
    int tempertureSum = 0;
    int tempertureAvg = 0;
    int yCenter = ui->lb_HigtCurve->height() / 2; //中心轴，平均温度绘制在这里
    int moveDistance = ui->lb_HigtCurve->height() / 20 ; //偏移量，根据实际温度与平均温度的差值*偏移量 来计算距离中心轴的距离
    for(int i = 0; i < 6 ;i++)
    {
        tempertureSum += mDay[i].high;
    }
    tempertureAvg = tempertureSum / 6;

    int pointY[6] = {0};
    for(int i = 0; i < 6 ;i++)
    {
        //y轴方向为向下
        pointY[i] = yCenter - (mDay[i].high - tempertureAvg)*moveDistance;
    }

    //2.设置画笔,字体
    QPen pen = painter.pen();
    pen.setWidth(2);
    pen.setColor(QColor(250,170,0));
    painter.setPen(pen);

    painter.setBrush(QColor(250,170,0));
    painter.setFont(QFont("Microsoft YaHei", 10));


    //3.画温度点，设置文本
    for(int i=0 ; i<6 ; i++)
    {
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),2,2);
        painter.drawText(QPoint(pointX[i] - TEXT_OFFSET_X ,pointY[i] - TEXT_OFFSET_Y),QString::number(mDay[i].high) + "°");
    }

    //4、连线
    for(int i = 0 ; i < 5 ; i++)
    {
        //第一天是虚线
        if(i==0)
        {
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        }
        else
        {
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(QPoint(pointX[i],pointY[i]),QPoint(pointX[i+1],pointY[i+1]));
    }

}

void MainWindow::paintLow()
{
    //在lblHighCurve上绘图
    QPainter painter(ui->lb_LowCurve);
    //设置 QPainter::Antialiasing 标志来启用抗锯齿功能,产生更平滑的图形效果
    painter.setRenderHint(QPainter::Antialiasing,true);

    //1.计算温度点的坐标（X,Y）
    //X
    int pointX[6] = {0};
    for(int i = 0; i < 6 ;i++)
    {   //6个点，平均分成5等分
        //ui->lblHight->pos().x()用于获取lblHightCurve相对于其父级或包含的窗口的左边的x坐标，就是label的左边边边的位置
        //为了更好看，设置一个边距DISTANCE 10
        pointX[i] = mWeekList[i]->pos().x()+(mWeekList[i]->width()/2);
    }

    //Y
    int tempertureSum = 0;
    int tempertureAvg = 0;
    int yCenter = ui->lb_HigtCurve->height() / 2; //中心轴，平均温度绘制在这里
    int moveDistance = ui->lb_HigtCurve->height() / 20 ; //偏移量，根据实际温度与平均温度的差值*偏移量 来计算距离中心轴的距离
    for(int i = 0; i < 6 ;i++)
    {
        tempertureSum += mDay[i].low;
    }
    tempertureAvg = tempertureSum / 6;

    int pointY[6] = {0};
    for(int i = 0; i < 6 ;i++)
    {
        //y轴方向为向下
        pointY[i] = yCenter - (mDay[i].low - tempertureAvg)*moveDistance;
    }

    //2.设置画笔,字体
    QPen pen = painter.pen();
    pen.setWidth(2);
    pen.setColor(QColor(0,255,255));
    painter.setPen(pen);

    painter.setBrush(QColor(0,255,255));
    painter.setFont(QFont("Microsoft YaHei", 10));


    //3.画温度点，设置文本
    for(int i=0 ; i<6 ; i++)
    {
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),2,2);
        painter.drawText(QPoint(pointX[i] - TEXT_OFFSET_X ,pointY[i] - TEXT_OFFSET_Y),QString::number(mDay[i].low) + "°");
    }

    //4、连线
    for(int i = 0 ; i < 5 ; i++)
    {
        //第一天是虚线
        if(i==0)
        {
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        }
        else
        {
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(QPoint(pointX[i],pointY[i]),QPoint(pointX[i+1],pointY[i+1]));
    }
}

//http发送请求定位
void MainWindow::gitcitycode2()
{
    QNetworkRequest request;
    request.setUrl(QUrl("https://api.map.baidu.com/location/ip?ak=Y83fVkydCr7fNFcAem8iMU8zDtPOGrdK&coor=bd09ll"));
    mNetAccessManager->get(request);
    qDebug() << "发送了定位请求";
}




void MainWindow::onReplied(QNetworkReply *reply)
{
    qDebug()<<"onReplied success";
    int status_code=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();

    // qDebug()<<"operation: "<<reply->operation();
    // qDebug()<<"status code: "<<status_code;
    // qDebug()<<"url: "<<reply->url();
    // qDebug()<<"raw header: "<<reply->rawHeaderList();

    if(reply->error()!=QNetworkReply::NoError||status_code!=200)
    {
        qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败",QMessageBox::Ok);
    }
    else
    {
        QByteArray reply_data = reply->readAll();
        QByteArray byteArray = QString(reply_data).toUtf8();
        //QByteArray byteArray = reply->readAll();
        //qDebug()<<"read all: "<<byteArray.data();

        //获取到json数据后进行解析
        parseJson(byteArray);
    }
   // reply->deleteLater();


}

void MainWindow::Json_city(QNetworkReply *reply)
{
     qDebug()<<"Json_city success";
    QString locat_city;
    QString all = reply->readAll();
    qDebug()<<all;
    //unicode 转化为汉字
    QString filename = all;
    do
    {
        int idx = filename.indexOf("\\u");
        QString strHex = filename.mid(idx, 6);
        strHex = strHex.replace("\\u", QString());
        int nHex = strHex.toInt(0, 16);
        filename.replace(idx, 6, QChar(nHex));
    } while (filename.indexOf("\\u") != -1);
        //json解析过程
    QJsonDocument  Document;
    QJsonParseError json_error;
    QJsonDocument json_recv = QJsonDocument::fromJson(all.toUtf8(),&json_error);//解析json对象
    QJsonObject object = json_recv.object();
    if(object.contains("content"))
    {
        QJsonValue value = object.value("content");
        if(value.isObject())
        {
            QJsonObject object_1 = value.toObject();
            if(object_1.contains("address_detail"))
            {
                QJsonValue value_1 = object_1.value("address_detail");
                if(value_1.isObject())
                {
                    QJsonObject object_2 = value_1.toObject();
                    locat_city =object_2.value("city").toString();
                    qDebug()<<locat_city;
                }
            }
        }
    }
    getWeatherInfo(locat_city);
}


//搜索按钮点击搜索
void MainWindow::on_btn_search_clicked()
{
    QString cityname = ui->le_city->text();
    getWeatherInfo(cityname);
}

//输入框回车搜索
void MainWindow::on_le_city_returnPressed()
{
    QString cityname = ui->le_city->text();
    getWeatherInfo(cityname);
}




