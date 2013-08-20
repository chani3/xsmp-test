
#include <QApplication>
#include <QDebug>
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>

int main(int argc, char**argv) {
    qDebug() << "hello world";
    QApplication app(argc, argv);
    
    QWidget window;
    QLabel label("hello world");
    QLineEdit edit("edit me");
    QVBoxLayout box(&window);
    box.addWidget(&label);
    box.addWidget(&edit);
    window.show();
    
    return app.exec();
}


