#include <QPoint>
#include <QTextStream>

int main()
{
    QTextStream cout(stdout);

    int x = 1;
    int y = 1;

    myFunc(&x,&y);
    myFunc2("My String");

    return 0;
}

void myFunc(int* x, int* y) {
    x += 1;
    y += 1;
}

void myFunc2(const QString& v1) {

}

