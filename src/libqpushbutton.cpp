#include <QAbstractButton>
#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
#include <QButtonGroup>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QCursor>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFontInfo>
#include <QFontMetrics>
#include <QGraphicsEffect>
#include <QGraphicsProxyWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QPointF>
#include <QPushButton>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qpushbutton.h>
#include "libqpushbutton.h"
#include "libqpushbutton.hxx"

QPushButton* QPushButton_new(QWidget* parent) {
    return new VirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
    return new VirtualQPushButton();
}

QPushButton* QPushButton_new3(libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(text_QString);
}

QPushButton* QPushButton_new4(QIcon* icon, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new5(libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(QIcon* icon, libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQPushButton(*icon, text_QString, parent);
}

QMetaObject* QPushButton_MetaObject(const QPushButton* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPushButton_Metacast(QPushButton* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPushButton_Metacall(QPushButton* self, int param1, int param2, void** param3) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QPushButton_OnMetacall(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_Metacall_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QPushButton_QBaseMetacall(QPushButton* self, int param1, int param2, void** param3) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_Metacall_IsBase(true);
        return vqpushbutton->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPushButton_Tr(const char* s) {
    QString _ret = QPushButton::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QPushButton_AutoDefault(const QPushButton* self) {
    return self->autoDefault();
}

void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault) {
    self->setAutoDefault(autoDefault);
}

bool QPushButton_IsDefault(const QPushButton* self) {
    return self->isDefault();
}

void QPushButton_SetDefault(QPushButton* self, bool defaultVal) {
    self->setDefault(defaultVal);
}

void QPushButton_SetMenu(QPushButton* self, QMenu* menu) {
    self->setMenu(menu);
}

QMenu* QPushButton_Menu(const QPushButton* self) {
    return self->menu();
}

void QPushButton_SetFlat(QPushButton* self, bool flat) {
    self->setFlat(flat);
}

bool QPushButton_IsFlat(const QPushButton* self) {
    return self->isFlat();
}

void QPushButton_ShowMenu(QPushButton* self) {
    self->showMenu();
}

libqt_string QPushButton_Tr2(const char* s, const char* c) {
    QString _ret = QPushButton::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QPushButton_Tr3(const char* s, const char* c, int n) {
    QString _ret = QPushButton::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QPushButton_SizeHint(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return new QSize(vqpushbutton->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QPushButton_QBaseSizeHint(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_SizeHint_IsBase(true);
        return new QSize(vqpushbutton->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSizeHint(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_SizeHint_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QPushButton_MinimumSizeHint(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return new QSize(vqpushbutton->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QPushButton_QBaseMinimumSizeHint(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_MinimumSizeHint_IsBase(true);
        return new QSize(vqpushbutton->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMinimumSizeHint(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_Event(QPushButton* self, QEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->event(e);
    } else {
        return vqpushbutton->event(e);
    }
}

// Base class handler implementation
bool QPushButton_QBaseEvent(QPushButton* self, QEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_Event_IsBase(true);
        return vqpushbutton->event(e);
    } else {
        return vqpushbutton->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_Event_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_PaintEvent(QPushButton* self, QPaintEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->paintEvent(param1);
    } else {
        vqpushbutton->paintEvent(param1);
    }
}

// Base class handler implementation
void QPushButton_QBasePaintEvent(QPushButton* self, QPaintEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_PaintEvent_IsBase(true);
        vqpushbutton->paintEvent(param1);
    } else {
        vqpushbutton->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnPaintEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_PaintEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_KeyPressEvent(QPushButton* self, QKeyEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->keyPressEvent(param1);
    } else {
        vqpushbutton->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QPushButton_QBaseKeyPressEvent(QPushButton* self, QKeyEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_KeyPressEvent_IsBase(true);
        vqpushbutton->keyPressEvent(param1);
    } else {
        vqpushbutton->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnKeyPressEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_KeyPressEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_FocusInEvent(QPushButton* self, QFocusEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->focusInEvent(param1);
    } else {
        vqpushbutton->focusInEvent(param1);
    }
}

// Base class handler implementation
void QPushButton_QBaseFocusInEvent(QPushButton* self, QFocusEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusInEvent_IsBase(true);
        vqpushbutton->focusInEvent(param1);
    } else {
        vqpushbutton->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusInEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusInEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_FocusOutEvent(QPushButton* self, QFocusEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->focusOutEvent(param1);
    } else {
        vqpushbutton->focusOutEvent(param1);
    }
}

// Base class handler implementation
void QPushButton_QBaseFocusOutEvent(QPushButton* self, QFocusEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusOutEvent_IsBase(true);
        vqpushbutton->focusOutEvent(param1);
    } else {
        vqpushbutton->focusOutEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusOutEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusOutEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MouseMoveEvent(QPushButton* self, QMouseEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->mouseMoveEvent(param1);
    } else {
        vqpushbutton->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QPushButton_QBaseMouseMoveEvent(QPushButton* self, QMouseEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MouseMoveEvent_IsBase(true);
        vqpushbutton->mouseMoveEvent(param1);
    } else {
        vqpushbutton->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseMoveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MouseMoveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_InitStyleOption(const QPushButton* self, QStyleOptionButton* option) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->initStyleOption(option);
    } else {
        vqpushbutton->initStyleOption(option);
    }
}

// Base class handler implementation
void QPushButton_QBaseInitStyleOption(const QPushButton* self, QStyleOptionButton* option) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_InitStyleOption_IsBase(true);
        vqpushbutton->initStyleOption(option);
    } else {
        vqpushbutton->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInitStyleOption(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_InitStyleOption_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_HitButton(const QPushButton* self, QPoint* pos) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->hitButton(*pos);
    } else {
        return vqpushbutton->hitButton(*pos);
    }
}

// Base class handler implementation
bool QPushButton_QBaseHitButton(const QPushButton* self, QPoint* pos) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_HitButton_IsBase(true);
        return vqpushbutton->hitButton(*pos);
    } else {
        return vqpushbutton->hitButton(*pos);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHitButton(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_HitButton_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HitButton_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_CheckStateSet(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->checkStateSet();
    } else {
        vqpushbutton->checkStateSet();
    }
}

// Base class handler implementation
void QPushButton_QBaseCheckStateSet(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_CheckStateSet_IsBase(true);
        vqpushbutton->checkStateSet();
    } else {
        vqpushbutton->checkStateSet();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCheckStateSet(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_CheckStateSet_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_CheckStateSet_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_NextCheckState(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->nextCheckState();
    } else {
        vqpushbutton->nextCheckState();
    }
}

// Base class handler implementation
void QPushButton_QBaseNextCheckState(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_NextCheckState_IsBase(true);
        vqpushbutton->nextCheckState();
    } else {
        vqpushbutton->nextCheckState();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnNextCheckState(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_NextCheckState_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_NextCheckState_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_KeyReleaseEvent(QPushButton* self, QKeyEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->keyReleaseEvent(e);
    } else {
        vqpushbutton->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseKeyReleaseEvent(QPushButton* self, QKeyEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_KeyReleaseEvent_IsBase(true);
        vqpushbutton->keyReleaseEvent(e);
    } else {
        vqpushbutton->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnKeyReleaseEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MousePressEvent(QPushButton* self, QMouseEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->mousePressEvent(e);
    } else {
        vqpushbutton->mousePressEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseMousePressEvent(QPushButton* self, QMouseEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MousePressEvent_IsBase(true);
        vqpushbutton->mousePressEvent(e);
    } else {
        vqpushbutton->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMousePressEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MousePressEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MouseReleaseEvent(QPushButton* self, QMouseEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->mouseReleaseEvent(e);
    } else {
        vqpushbutton->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseMouseReleaseEvent(QPushButton* self, QMouseEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MouseReleaseEvent_IsBase(true);
        vqpushbutton->mouseReleaseEvent(e);
    } else {
        vqpushbutton->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseReleaseEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ChangeEvent(QPushButton* self, QEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->changeEvent(e);
    } else {
        vqpushbutton->changeEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseChangeEvent(QPushButton* self, QEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ChangeEvent_IsBase(true);
        vqpushbutton->changeEvent(e);
    } else {
        vqpushbutton->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnChangeEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ChangeEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_TimerEvent(QPushButton* self, QTimerEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->timerEvent(e);
    } else {
        vqpushbutton->timerEvent(e);
    }
}

// Base class handler implementation
void QPushButton_QBaseTimerEvent(QPushButton* self, QTimerEvent* e) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_TimerEvent_IsBase(true);
        vqpushbutton->timerEvent(e);
    } else {
        vqpushbutton->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnTimerEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_TimerEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_DevType(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->devType();
    } else {
        return vqpushbutton->devType();
    }
}

// Base class handler implementation
int QPushButton_QBaseDevType(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_DevType_IsBase(true);
        return vqpushbutton->devType();
    } else {
        return vqpushbutton->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDevType(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_DevType_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_SetVisible(QPushButton* self, bool visible) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setVisible(visible);
    } else {
        vqpushbutton->setVisible(visible);
    }
}

// Base class handler implementation
void QPushButton_QBaseSetVisible(QPushButton* self, bool visible) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_SetVisible_IsBase(true);
        vqpushbutton->setVisible(visible);
    } else {
        vqpushbutton->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSetVisible(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_SetVisible_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_HeightForWidth(const QPushButton* self, int param1) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return vqpushbutton->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QPushButton_QBaseHeightForWidth(const QPushButton* self, int param1) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_HeightForWidth_IsBase(true);
        return vqpushbutton->heightForWidth(static_cast<int>(param1));
    } else {
        return vqpushbutton->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHeightForWidth(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_HeightForWidth_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_HasHeightForWidth(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->hasHeightForWidth();
    } else {
        return vqpushbutton->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QPushButton_QBaseHasHeightForWidth(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_HasHeightForWidth_IsBase(true);
        return vqpushbutton->hasHeightForWidth();
    } else {
        return vqpushbutton->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHasHeightForWidth(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_HasHeightForWidth_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QPushButton_PaintEngine(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->paintEngine();
    } else {
        return vqpushbutton->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QPushButton_QBasePaintEngine(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_PaintEngine_IsBase(true);
        return vqpushbutton->paintEngine();
    } else {
        return vqpushbutton->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnPaintEngine(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_PaintEngine_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MouseDoubleClickEvent(QPushButton* self, QMouseEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->mouseDoubleClickEvent(event);
    } else {
        vqpushbutton->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseMouseDoubleClickEvent(QPushButton* self, QMouseEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MouseDoubleClickEvent_IsBase(true);
        vqpushbutton->mouseDoubleClickEvent(event);
    } else {
        vqpushbutton->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMouseDoubleClickEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_WheelEvent(QPushButton* self, QWheelEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->wheelEvent(event);
    } else {
        vqpushbutton->wheelEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseWheelEvent(QPushButton* self, QWheelEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_WheelEvent_IsBase(true);
        vqpushbutton->wheelEvent(event);
    } else {
        vqpushbutton->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnWheelEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_WheelEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_EnterEvent(QPushButton* self, QEnterEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->enterEvent(event);
    } else {
        vqpushbutton->enterEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseEnterEvent(QPushButton* self, QEnterEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_EnterEvent_IsBase(true);
        vqpushbutton->enterEvent(event);
    } else {
        vqpushbutton->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEnterEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_EnterEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_LeaveEvent(QPushButton* self, QEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->leaveEvent(event);
    } else {
        vqpushbutton->leaveEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseLeaveEvent(QPushButton* self, QEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_LeaveEvent_IsBase(true);
        vqpushbutton->leaveEvent(event);
    } else {
        vqpushbutton->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnLeaveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_LeaveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_MoveEvent(QPushButton* self, QMoveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->moveEvent(event);
    } else {
        vqpushbutton->moveEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseMoveEvent(QPushButton* self, QMoveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MoveEvent_IsBase(true);
        vqpushbutton->moveEvent(event);
    } else {
        vqpushbutton->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMoveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_MoveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ResizeEvent(QPushButton* self, QResizeEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->resizeEvent(event);
    } else {
        vqpushbutton->resizeEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseResizeEvent(QPushButton* self, QResizeEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ResizeEvent_IsBase(true);
        vqpushbutton->resizeEvent(event);
    } else {
        vqpushbutton->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnResizeEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ResizeEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_CloseEvent(QPushButton* self, QCloseEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->closeEvent(event);
    } else {
        vqpushbutton->closeEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseCloseEvent(QPushButton* self, QCloseEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_CloseEvent_IsBase(true);
        vqpushbutton->closeEvent(event);
    } else {
        vqpushbutton->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCloseEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_CloseEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ContextMenuEvent(QPushButton* self, QContextMenuEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->contextMenuEvent(event);
    } else {
        vqpushbutton->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseContextMenuEvent(QPushButton* self, QContextMenuEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ContextMenuEvent_IsBase(true);
        vqpushbutton->contextMenuEvent(event);
    } else {
        vqpushbutton->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnContextMenuEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ContextMenuEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_TabletEvent(QPushButton* self, QTabletEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->tabletEvent(event);
    } else {
        vqpushbutton->tabletEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseTabletEvent(QPushButton* self, QTabletEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_TabletEvent_IsBase(true);
        vqpushbutton->tabletEvent(event);
    } else {
        vqpushbutton->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnTabletEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_TabletEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ActionEvent(QPushButton* self, QActionEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->actionEvent(event);
    } else {
        vqpushbutton->actionEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseActionEvent(QPushButton* self, QActionEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ActionEvent_IsBase(true);
        vqpushbutton->actionEvent(event);
    } else {
        vqpushbutton->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnActionEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ActionEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DragEnterEvent(QPushButton* self, QDragEnterEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->dragEnterEvent(event);
    } else {
        vqpushbutton->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseDragEnterEvent(QPushButton* self, QDragEnterEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DragEnterEvent_IsBase(true);
        vqpushbutton->dragEnterEvent(event);
    } else {
        vqpushbutton->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragEnterEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DragEnterEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DragMoveEvent(QPushButton* self, QDragMoveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->dragMoveEvent(event);
    } else {
        vqpushbutton->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseDragMoveEvent(QPushButton* self, QDragMoveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DragMoveEvent_IsBase(true);
        vqpushbutton->dragMoveEvent(event);
    } else {
        vqpushbutton->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragMoveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DragMoveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DragLeaveEvent(QPushButton* self, QDragLeaveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->dragLeaveEvent(event);
    } else {
        vqpushbutton->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseDragLeaveEvent(QPushButton* self, QDragLeaveEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DragLeaveEvent_IsBase(true);
        vqpushbutton->dragLeaveEvent(event);
    } else {
        vqpushbutton->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDragLeaveEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DragLeaveEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DropEvent(QPushButton* self, QDropEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->dropEvent(event);
    } else {
        vqpushbutton->dropEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseDropEvent(QPushButton* self, QDropEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DropEvent_IsBase(true);
        vqpushbutton->dropEvent(event);
    } else {
        vqpushbutton->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDropEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DropEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ShowEvent(QPushButton* self, QShowEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->showEvent(event);
    } else {
        vqpushbutton->showEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseShowEvent(QPushButton* self, QShowEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ShowEvent_IsBase(true);
        vqpushbutton->showEvent(event);
    } else {
        vqpushbutton->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnShowEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ShowEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_HideEvent(QPushButton* self, QHideEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->hideEvent(event);
    } else {
        vqpushbutton->hideEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseHideEvent(QPushButton* self, QHideEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_HideEvent_IsBase(true);
        vqpushbutton->hideEvent(event);
    } else {
        vqpushbutton->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnHideEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_HideEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_NativeEvent(QPushButton* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqpushbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QPushButton_QBaseNativeEvent(QPushButton* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_NativeEvent_IsBase(true);
        return vqpushbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqpushbutton->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnNativeEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_NativeEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_Metric(const QPushButton* self, int param1) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqpushbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QPushButton_QBaseMetric(const QPushButton* self, int param1) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_Metric_IsBase(true);
        return vqpushbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqpushbutton->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnMetric(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_Metric_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_InitPainter(const QPushButton* self, QPainter* painter) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->initPainter(painter);
    } else {
        vqpushbutton->initPainter(painter);
    }
}

// Base class handler implementation
void QPushButton_QBaseInitPainter(const QPushButton* self, QPainter* painter) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_InitPainter_IsBase(true);
        vqpushbutton->initPainter(painter);
    } else {
        vqpushbutton->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInitPainter(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_InitPainter_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QPushButton_Redirected(const QPushButton* self, QPoint* offset) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->redirected(offset);
    } else {
        return vqpushbutton->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QPushButton_QBaseRedirected(const QPushButton* self, QPoint* offset) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_Redirected_IsBase(true);
        return vqpushbutton->redirected(offset);
    } else {
        return vqpushbutton->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnRedirected(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_Redirected_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QPushButton_SharedPainter(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->sharedPainter();
    } else {
        return vqpushbutton->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QPushButton_QBaseSharedPainter(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_SharedPainter_IsBase(true);
        return vqpushbutton->sharedPainter();
    } else {
        return vqpushbutton->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSharedPainter(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_SharedPainter_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_InputMethodEvent(QPushButton* self, QInputMethodEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->inputMethodEvent(param1);
    } else {
        vqpushbutton->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QPushButton_QBaseInputMethodEvent(QPushButton* self, QInputMethodEvent* param1) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_InputMethodEvent_IsBase(true);
        vqpushbutton->inputMethodEvent(param1);
    } else {
        vqpushbutton->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInputMethodEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_InputMethodEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QPushButton_InputMethodQuery(const QPushButton* self, int param1) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return new QVariant(vqpushbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QPushButton_QBaseInputMethodQuery(const QPushButton* self, int param1) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_InputMethodQuery_IsBase(true);
        return new QVariant(vqpushbutton->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnInputMethodQuery(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_InputMethodQuery_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_FocusNextPrevChild(QPushButton* self, bool next) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->focusNextPrevChild(next);
    } else {
        return vqpushbutton->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QPushButton_QBaseFocusNextPrevChild(QPushButton* self, bool next) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusNextPrevChild_IsBase(true);
        return vqpushbutton->focusNextPrevChild(next);
    } else {
        return vqpushbutton->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusNextPrevChild(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_EventFilter(QPushButton* self, QObject* watched, QEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->eventFilter(watched, event);
    } else {
        return vqpushbutton->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPushButton_QBaseEventFilter(QPushButton* self, QObject* watched, QEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_EventFilter_IsBase(true);
        return vqpushbutton->eventFilter(watched, event);
    } else {
        return vqpushbutton->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnEventFilter(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_EventFilter_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ChildEvent(QPushButton* self, QChildEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->childEvent(event);
    } else {
        vqpushbutton->childEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseChildEvent(QPushButton* self, QChildEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ChildEvent_IsBase(true);
        vqpushbutton->childEvent(event);
    } else {
        vqpushbutton->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnChildEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ChildEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_CustomEvent(QPushButton* self, QEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->customEvent(event);
    } else {
        vqpushbutton->customEvent(event);
    }
}

// Base class handler implementation
void QPushButton_QBaseCustomEvent(QPushButton* self, QEvent* event) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_CustomEvent_IsBase(true);
        vqpushbutton->customEvent(event);
    } else {
        vqpushbutton->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCustomEvent(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_CustomEvent_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_ConnectNotify(QPushButton* self, QMetaMethod* signal) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->connectNotify(*signal);
    } else {
        vqpushbutton->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPushButton_QBaseConnectNotify(QPushButton* self, QMetaMethod* signal) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ConnectNotify_IsBase(true);
        vqpushbutton->connectNotify(*signal);
    } else {
        vqpushbutton->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnConnectNotify(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_ConnectNotify_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_DisconnectNotify(QPushButton* self, QMetaMethod* signal) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->disconnectNotify(*signal);
    } else {
        vqpushbutton->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPushButton_QBaseDisconnectNotify(QPushButton* self, QMetaMethod* signal) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DisconnectNotify_IsBase(true);
        vqpushbutton->disconnectNotify(*signal);
    } else {
        vqpushbutton->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDisconnectNotify(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_DisconnectNotify_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_UpdateMicroFocus(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->updateMicroFocus();
    } else {
        vqpushbutton->updateMicroFocus();
    }
}

// Base class handler implementation
void QPushButton_QBaseUpdateMicroFocus(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_UpdateMicroFocus_IsBase(true);
        vqpushbutton->updateMicroFocus();
    } else {
        vqpushbutton->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnUpdateMicroFocus(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_Create(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->create();
    } else {
        vqpushbutton->create();
    }
}

// Base class handler implementation
void QPushButton_QBaseCreate(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_Create_IsBase(true);
        vqpushbutton->create();
    } else {
        vqpushbutton->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnCreate(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_Create_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QPushButton_Destroy(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->destroy();
    } else {
        vqpushbutton->destroy();
    }
}

// Base class handler implementation
void QPushButton_QBaseDestroy(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_Destroy_IsBase(true);
        vqpushbutton->destroy();
    } else {
        vqpushbutton->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnDestroy(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_Destroy_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_FocusNextChild(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->focusNextChild();
    } else {
        return vqpushbutton->focusNextChild();
    }
}

// Base class handler implementation
bool QPushButton_QBaseFocusNextChild(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusNextChild_IsBase(true);
        return vqpushbutton->focusNextChild();
    } else {
        return vqpushbutton->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusNextChild(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusNextChild_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_FocusPreviousChild(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        return vqpushbutton->focusPreviousChild();
    } else {
        return vqpushbutton->focusPreviousChild();
    }
}

// Base class handler implementation
bool QPushButton_QBaseFocusPreviousChild(QPushButton* self) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusPreviousChild_IsBase(true);
        return vqpushbutton->focusPreviousChild();
    } else {
        return vqpushbutton->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnFocusPreviousChild(QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = dynamic_cast<VirtualQPushButton*>(self)) {
        vqpushbutton->setQPushButton_FocusPreviousChild_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPushButton_Sender(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->sender();
    } else {
        return vqpushbutton->sender();
    }
}

// Base class handler implementation
QObject* QPushButton_QBaseSender(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_Sender_IsBase(true);
        return vqpushbutton->sender();
    } else {
        return vqpushbutton->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSender(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_Sender_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_SenderSignalIndex(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->senderSignalIndex();
    } else {
        return vqpushbutton->senderSignalIndex();
    }
}

// Base class handler implementation
int QPushButton_QBaseSenderSignalIndex(const QPushButton* self) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_SenderSignalIndex_IsBase(true);
        return vqpushbutton->senderSignalIndex();
    } else {
        return vqpushbutton->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnSenderSignalIndex(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPushButton_Receivers(const QPushButton* self, const char* signal) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->receivers(signal);
    } else {
        return vqpushbutton->receivers(signal);
    }
}

// Base class handler implementation
int QPushButton_QBaseReceivers(const QPushButton* self, const char* signal) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_Receivers_IsBase(true);
        return vqpushbutton->receivers(signal);
    } else {
        return vqpushbutton->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnReceivers(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_Receivers_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPushButton_IsSignalConnected(const QPushButton* self, QMetaMethod* signal) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        return vqpushbutton->isSignalConnected(*signal);
    } else {
        return vqpushbutton->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPushButton_QBaseIsSignalConnected(const QPushButton* self, QMetaMethod* signal) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_IsSignalConnected_IsBase(true);
        return vqpushbutton->isSignalConnected(*signal);
    } else {
        return vqpushbutton->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPushButton_OnIsSignalConnected(const QPushButton* self, intptr_t slot) {
    if (auto* vqpushbutton = const_cast<VirtualQPushButton*>(dynamic_cast<const VirtualQPushButton*>(self))) {
        vqpushbutton->setQPushButton_IsSignalConnected_Callback(reinterpret_cast<VirtualQPushButton::QPushButton_IsSignalConnected_Callback>(slot));
    }
}

void QPushButton_Delete(QPushButton* self) {
    delete self;
}
