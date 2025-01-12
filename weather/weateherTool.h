#ifndef WEATEHERTOOL_H
#define WEATEHERTOOL_H

#include<QmAP>
#include<QFile>
#include<QString>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonValue>
#include<QDebug>

class WeatherTool
{
private:
    static QMap<QString,QString> mcityMap;

    //1.初始化
    static void InitcityMap()
    {
        QFile file(":/citycode.json");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            // 处理文件打开失败的情况
            return;
        }
        QByteArray json = file.readAll();
        file.close();
            // 解析json，并且写入到map，这个文件是json数组
        QJsonParseError error;
        QJsonDocument doc = QJsonDocument::fromJson(json, &error);
        if (error.error != QJsonParseError::NoError || !doc.isArray())
        {
            // 处理JSON解析失败的情况
            return;
        }
        // 然后获取json数据当中的城市名字和对应的编码
        QJsonArray cityArr = doc.array();
        for (int i = 0; i < cityArr.size(); i++)
        {
            QString city = cityArr[i].toObject().value("city_name").toString();
            QString code = cityArr[i].toObject().value("city_code").toString();
                // 然后写入到map
            // 注意当输入是省份时，是没有城市编码的，不可以查整个省份的天气，只能是具体的城市
            if (!code.isEmpty())
            {
                mcityMap.insert(city, code);
            }
        }

    }


public:
    static QString getcitycode(QString cityname)
    {
        // 初始化map
        if (mcityMap.isEmpty())
        {
            InitcityMap();
        }
        // 根据城市名字遍历map，获取城市编码
        QMap<QString, QString>::iterator it = mcityMap.find(cityname);
        // 特殊：输入北京/北京市都可以找到
        if (it == mcityMap.end())
        {
            it = mcityMap.find(cityname + "市");
        }
        if (it == mcityMap.end())
        {
            it = mcityMap.find(cityname + "区");
        }
        if (it == mcityMap.end())
        {
            it = mcityMap.find(cityname + "县");
        }
        // 如果遍历到有这个城市名字，就返回编码
        if (it != mcityMap.end())
        {
            return it.value();
        }

        return ""; // 没有就返回空
    }
};

QMap<QString,QString> WeatherTool::mcityMap={};
#endif // WEATEHERTOOL_H
