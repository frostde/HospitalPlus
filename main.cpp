#include "frost_applicationfour.h"
#include <QtWidgets/QApplication>
#include "GlobalPatientList.h"
#include <queue>


using namespace GlobalPatientList;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    frost_applicationfour w;
	//qApp->setStyleSheet("label_3 {background-image: url(C:/Users/frost/OneDrive/Documents/Visual Studio 2015/Projects/frost_applicationfour/frost_applicationfour/Resources/Images/me.jpg) }");
	w.show();
    return a.exec();
}
