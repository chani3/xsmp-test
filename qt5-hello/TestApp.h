#ifndef TESTAPP_H
#define TESTAPP_H

#include <QApplication>

class TestApp : public QApplication
{
    Q_OBJECT
public:
    explicit TestApp( int & argc, char ** argv );
    
    void saveState(QSessionManager &sm);
    
};

#endif // TESTAPP_H
