#include "MyCustomQmlItem.hpp"

MyCustomQmlItem::MyCustomQmlItem(QQuickItem* parent):
    QQuickItem{parent}
{
    qDebug() << "Hello from MyCustomQmlItem";
}
