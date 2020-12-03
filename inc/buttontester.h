/**...*/
#ifndef BUTTONTESTER_H
#define BUTTONTESTER_H

#include <QTextEdit>
#include <QString>
#include <QMouseEvent>
#include <QWheelEvent>

class ButtonTester : public QTextEdit
{
    Q_OBJECT
public:
    using QTextEdit::QTextEdit;
protected:
    void   mousePressEvent(QMouseEvent *event) override;
    void   mouseReleaseEvent(QMouseEvent *event) override;
    void   mouseDoubleClickEvent(QMouseEvent *event) override;
#if QT_CONFIG(wheelevent)
    void   wheelEvent(QWheelEvent *event) override;
#endif
    int    buttonByNumber(const Qt::MouseButton button);
    QString enumNameFromValue(const Qt::MouseButton button);
    QString enumNamesFromMouseButtons(const Qt::MouseButtons buttons);
};

#endif // BUTTONTESTER_H
