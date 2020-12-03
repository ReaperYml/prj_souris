#include "inc/buttontester.h"
#include <QDebug>

void ButtonTester::mousePressEvent(QMouseEvent *e)
{
    int j = ButtonTester::buttonByNumber(e->button());
    QString result ="Mouse Press: raw button" + QString::number(j)+"Qt="+enumNameFromValue(e->button());
    QString buttonsString = ButtonTester::enumNamesFromMouseButtons(e->buttons());
    result+="\n heldbuttons"+ buttonsString;
    qDebug()<< result;
    this->setText(result);
    this->repaint();
}
void ButtonTester::mouseReleaseEvent(QMouseEvent*e)
{
    int j = ButtonTester::buttonByNumber(e->button());
    QString result ="mouse Release: raw button" + QString::number(j)+"Qt="+enumNameFromValue(e->button());
    QString buttonString = ButtonTester::enumNamesFromMouseButtons(e->buttons());
    result+="\n heldbuttons"+ buttonString;
    qDebug()<< result;
    this->setText(result);
    this->repaint();
}
void ButtonTester::mouseDoubleClickEvent(QMouseEvent*e)
{
    int j = ButtonTester::buttonByNumber(e->button());
    QString result ="mouse DoubleClick: raw button" + QString::number(j)+"Qt="+enumNameFromValue(e->button());
    QString buttonString = ButtonTester::enumNamesFromMouseButtons(e->buttons());
    result+="\n heldbuttons"+ buttonString;
    qDebug()<< result;
    this->setText(result);

}
#if QT_CONFIG(wheelevent)
void ButtonTester::wheelEvent(QWheelEvent *e){
    QString result;
    const bool vertical = qAbs(e->angleDelta().y())>= qAbs(e->angleDelta().x());
    const int delta = vertical ? e->angleDelta().y(): e->angleDelta().x();
    if (delta){
        if(vertical){
        result ="Mouse Wheel event: UP";
    }else{
        result ="Mouse Wheel Event: LEFT";
    }
}
else if (delta < 0){
    if (vertical){
        result ="Mouse Wheel Event:DOWN";
    }else{
        result = "Mouse Wheel Event:RIGHT";
    }
}

qDebug() <<result;
this -> setText(result);
}
#endif

int ButtonTester::buttonByNumber(const Qt::MouseButton button)
{
    if(button==Qt::NoButton)      return 0;
    if(button==Qt::LeftButton)    return 1;
    if(button==Qt::RightButton)   return 2;
    if(button==Qt::MiddleButton)  return  3;
    if(button==Qt::BackButton)    return 8;
    if(button==Qt::ForwardButton) return 9;
    if(button==Qt::TaskButton)    return 10;
    if(button==Qt::ExtraButton4)  return 11;
    if(button==Qt::ExtraButton5)  return 12;
    if(button==Qt::ExtraButton6)  return 13;
    if(button==Qt::ExtraButton7)  return 14;
    if(button==Qt::ExtraButton8)  return 15;
    if(button==Qt::ExtraButton9)  return 16;
    if(button==Qt::ExtraButton10)  return 17;
    if(button==Qt::ExtraButton11)  return 18;
    if(button==Qt::ExtraButton12)  return 19;
    if(button==Qt::ExtraButton13)  return 20;
    if(button==Qt::ExtraButton14)  return 21;
    if(button==Qt::ExtraButton15)  return 22;
    if(button==Qt::ExtraButton16)  return 23;
    if(button==Qt::ExtraButton17)  return 24;
    if(button==Qt::ExtraButton18)  return 25;
    if(button==Qt::ExtraButton19)  return 26;
    if(button==Qt::ExtraButton20)  return 27;
    if(button==Qt::ExtraButton21)  return 28;
    if(button==Qt::ExtraButton22)  return 29;
    if(button==Qt::ExtraButton23)  return 30;
    if(button==Qt::ExtraButton24)  return 31;
    qDebug("QMouseShortcutEntry::addSortcut contained Invalid Qt::MouseButton value");
    return 0;
}

QString ButtonTester::enumNameFromValue(const Qt::MouseButton button)
{
    if(button==Qt::NoButton)     return"NoButton";
    if(button==Qt::LeftButton)     return"LeftButton";
    if(button==Qt::RightButton)     return"RightButton";
    if(button==Qt::MiddleButton)     return"MiddleButton";
    if(button==Qt::BackButton)     return"BackButton";
    if(button==Qt::ForwardButton)     return"ForwardButton";
    if(button==Qt::TaskButton)     return"TaskButton";
    if(button==Qt::ExtraButton4)     return"ExtraButton4";
    if(button==Qt::ExtraButton5)     return"ExtraButton5";
    if(button==Qt::ExtraButton6)     return"ExtraButton6";
    if(button==Qt::ExtraButton7)     return"ExtraButton7";
    if(button==Qt::ExtraButton8)     return"ExtraButton8";
    if(button==Qt::ExtraButton9)     return"ExtraButton9";
    if(button==Qt::ExtraButton10)     return"ExtraButton10";
    if(button==Qt::ExtraButton11)     return"ExtraButton11";
    if(button==Qt::ExtraButton12)     return"ExtraButton12";
    if(button==Qt::ExtraButton13)     return"ExtraButton13";
    if(button==Qt::ExtraButton14)     return"ExtraButton14";
    if(button==Qt::ExtraButton15)     return"ExtraButton15";
    if(button==Qt::ExtraButton16)     return"ExtraButton16";
    if(button==Qt::ExtraButton17)     return"ExtraButton17";
    if(button==Qt::ExtraButton18)     return"ExtraButton18";
    if(button==Qt::ExtraButton19)     return"ExtraButton19";
    if(button==Qt::ExtraButton20)     return"ExtraButton20";
    if(button==Qt::ExtraButton21)     return"ExtraButton21";
    if(button==Qt::ExtraButton22)     return"ExtraButton22";
    if(button==Qt::ExtraButton23)     return"ExtraButton23";
    if(button==Qt::ExtraButton24)     return"ExtraButton24";
    qDebug("QMouseShortcutEntry::addShortcut contrained Invalid Qt::MouseButton value");
    return"noButton";

}
QString ButtonTester::enumNamesFromMouseButtons(const Qt::MouseButtons buttons)
{
    QString returnText ="";
    if(buttons== Qt::NoButton)  return "NoButton";
    if(buttons & Qt::LeftButton)  returnText += "LeftButton";
    if(buttons & Qt::RightButton)  returnText += "RightButton";
    if(buttons & Qt::MiddleButton)  returnText += "MiddleButton";
    if(buttons & Qt::BackButton)  returnText += "BackButton";
    if(buttons & Qt::ForwardButton)  returnText +="ForwardButton";
    if(buttons & Qt::TaskButton)   returnText += "TaskButton";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton4";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton5";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton6";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton7";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton8";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton9";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton10";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton11";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton12";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton13";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton14";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton15";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton16";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton17";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton18";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton19";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton20";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton21";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton22";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton23";
    if(buttons & Qt::ExtraButton4)   returnText += "ExtraButton24";
    return returnText;

}
