#include <QQuickItem>

class MyCustomQmlItem: public QQuickItem
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit MyCustomQmlItem(QQuickItem* parent = nullptr);
};
