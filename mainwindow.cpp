#include <Qt/QtGui>

int main(int argc,char **argv){
    QApplication app(argc,argv);
    //just for the test
    QLabel *testLabel=new QLabel("test");
    testLabel->show();
    app.exec();
}
