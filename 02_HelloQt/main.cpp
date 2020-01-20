#include <QApplication>
#include <QWidget>  //创口控件基类
#include <QPushButton>

int main(int argc,char ** argv)
{
    QApplication app(argc,argv);

    QWidget w;
    w.setWindowTitle("first Qt"); //设置窗口标题

    //创建按钮方法一：
    QPushButton btn;
    btn.setText("按钮");
    btn.setParent(&w); //指定基类对象，即按钮放在哪里.默认放在左上角
    btn.move(100,100); //设置按钮坐标

    //创建按钮方法二：
    QPushButton btn2(&w);
    btn2.setText("按钮2");

    w.show(); // 显示窗口


    app.exec();
    return 0;
}
