
#include <QApplication>
#include <QDebug>
#include <QLabel>

int main(int argc, char**argv) {
    qDebug() << "hello world";
    QApplication app(argc, argv);
    QLabel label("hello world");
    label.show();
    return app.exec();
}


