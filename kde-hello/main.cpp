
#include <KApplication>
#include <KCmdLineArgs>
#include <KDebug>
#include <QLabel>
#include <KAboutData>
#include <QVBoxLayout>
#include <QLineEdit>

int main(int argc, char**argv) {
    kDebug() << "hello world";
    
    KAboutData ad(  "asdf",
                         0,
                         ki18n("asdf"),
                         "1.0",
                         ki18n("asdf"),
                         KAboutData::License_GPL,
                         ki18n("(c) 2007")
		 );
    
    KCmdLineArgs::init( argc, argv, &ad );
    KApplication app;
    
    QWidget window;
    QLabel label("hello world");
    QLineEdit edit("edit me");
    QVBoxLayout box(&window);
    box.addWidget(&label);
    box.addWidget(&edit);
    window.show();
    
    return app.exec();
}


