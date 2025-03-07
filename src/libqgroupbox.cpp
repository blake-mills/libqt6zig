#include <QAction>
#include <QActionEvent>
#include <QAnyStringView>
#include <QBackingStore>
#include <QBindingStorage>
#include <QBitmap>
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
#include <QGroupBox>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLayout>
#include <QList>
#include <QLocale>
#include <QMargins>
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
#include <QStyleOptionGroupBox>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qgroupbox.h>
#include "libqgroupbox.h"
#include "libqgroupbox.hxx"

QGroupBox* QGroupBox_new(QWidget* parent) {
    return new VirtualQGroupBox(parent);
}

QGroupBox* QGroupBox_new2() {
    return new VirtualQGroupBox();
}

QGroupBox* QGroupBox_new3(libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQGroupBox(title_QString);
}

QGroupBox* QGroupBox_new4(libqt_string title, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new VirtualQGroupBox(title_QString, parent);
}

QMetaObject* QGroupBox_MetaObject(const QGroupBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QGroupBox_Metacast(QGroupBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QGroupBox_Metacall(QGroupBox* self, int param1, int param2, void** param3) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QGroupBox_OnMetacall(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_Metacall_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QGroupBox_QBaseMetacall(QGroupBox* self, int param1, int param2, void** param3) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_Metacall_IsBase(true);
        return vqgroupbox->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QGroupBox_Tr(const char* s) {
    QString _ret = QGroupBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGroupBox_Title(const QGroupBox* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGroupBox_SetTitle(QGroupBox* self, libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setTitle(title_QString);
}

int QGroupBox_Alignment(const QGroupBox* self) {
    return static_cast<int>(self->alignment());
}

void QGroupBox_SetAlignment(QGroupBox* self, int alignment) {
    self->setAlignment(static_cast<int>(alignment));
}

bool QGroupBox_IsFlat(const QGroupBox* self) {
    return self->isFlat();
}

void QGroupBox_SetFlat(QGroupBox* self, bool flat) {
    self->setFlat(flat);
}

bool QGroupBox_IsCheckable(const QGroupBox* self) {
    return self->isCheckable();
}

void QGroupBox_SetCheckable(QGroupBox* self, bool checkable) {
    self->setCheckable(checkable);
}

bool QGroupBox_IsChecked(const QGroupBox* self) {
    return self->isChecked();
}

void QGroupBox_SetChecked(QGroupBox* self, bool checked) {
    self->setChecked(checked);
}

void QGroupBox_Clicked(QGroupBox* self) {
    self->clicked();
}

void QGroupBox_Connect_Clicked(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*) = reinterpret_cast<void (*)(QGroupBox*)>(slot);
    QGroupBox::connect(self, &QGroupBox::clicked, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QGroupBox_Toggled(QGroupBox* self, bool param1) {
    self->toggled(param1);
}

void QGroupBox_Connect_Toggled(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*, bool) = reinterpret_cast<void (*)(QGroupBox*, bool)>(slot);
    QGroupBox::connect(self, &QGroupBox::toggled, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

libqt_string QGroupBox_Tr2(const char* s, const char* c) {
    QString _ret = QGroupBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QGroupBox_Tr3(const char* s, const char* c, int n) {
    QString _ret = QGroupBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QGroupBox_Clicked1(QGroupBox* self, bool checked) {
    self->clicked(checked);
}

void QGroupBox_Connect_Clicked1(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*, bool) = reinterpret_cast<void (*)(QGroupBox*, bool)>(slot);
    QGroupBox::connect(self, &QGroupBox::clicked, [self, slotFunc](bool checked) {
        bool sigval1 = checked;
        slotFunc(self, sigval1);
    });
}

// Derived class handler implementation
QSize* QGroupBox_MinimumSizeHint(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return new QSize(vqgroupbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QGroupBox_QBaseMinimumSizeHint(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_MinimumSizeHint_IsBase(true);
        return new QSize(vqgroupbox->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMinimumSizeHint(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGroupBox_Event(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->event(event);
    } else {
        return vqgroupbox->event(event);
    }
}

// Base class handler implementation
bool QGroupBox_QBaseEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_Event_IsBase(true);
        return vqgroupbox->event(event);
    } else {
        return vqgroupbox->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_Event_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_ChildEvent(QGroupBox* self, QChildEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->childEvent(event);
    } else {
        vqgroupbox->childEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseChildEvent(QGroupBox* self, QChildEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ChildEvent_IsBase(true);
        vqgroupbox->childEvent(event);
    } else {
        vqgroupbox->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnChildEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ChildEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_ResizeEvent(QGroupBox* self, QResizeEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->resizeEvent(event);
    } else {
        vqgroupbox->resizeEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseResizeEvent(QGroupBox* self, QResizeEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ResizeEvent_IsBase(true);
        vqgroupbox->resizeEvent(event);
    } else {
        vqgroupbox->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnResizeEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ResizeEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_PaintEvent(QGroupBox* self, QPaintEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->paintEvent(event);
    } else {
        vqgroupbox->paintEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBasePaintEvent(QGroupBox* self, QPaintEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_PaintEvent_IsBase(true);
        vqgroupbox->paintEvent(event);
    } else {
        vqgroupbox->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnPaintEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_PaintEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_FocusInEvent(QGroupBox* self, QFocusEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->focusInEvent(event);
    } else {
        vqgroupbox->focusInEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseFocusInEvent(QGroupBox* self, QFocusEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusInEvent_IsBase(true);
        vqgroupbox->focusInEvent(event);
    } else {
        vqgroupbox->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusInEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusInEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_ChangeEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->changeEvent(event);
    } else {
        vqgroupbox->changeEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseChangeEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ChangeEvent_IsBase(true);
        vqgroupbox->changeEvent(event);
    } else {
        vqgroupbox->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnChangeEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ChangeEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_MousePressEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->mousePressEvent(event);
    } else {
        vqgroupbox->mousePressEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseMousePressEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MousePressEvent_IsBase(true);
        vqgroupbox->mousePressEvent(event);
    } else {
        vqgroupbox->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMousePressEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MousePressEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_MouseMoveEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->mouseMoveEvent(event);
    } else {
        vqgroupbox->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseMouseMoveEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MouseMoveEvent_IsBase(true);
        vqgroupbox->mouseMoveEvent(event);
    } else {
        vqgroupbox->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMouseMoveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_MouseReleaseEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->mouseReleaseEvent(event);
    } else {
        vqgroupbox->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseMouseReleaseEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MouseReleaseEvent_IsBase(true);
        vqgroupbox->mouseReleaseEvent(event);
    } else {
        vqgroupbox->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMouseReleaseEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_InitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->initStyleOption(option);
    } else {
        vqgroupbox->initStyleOption(option);
    }
}

// Base class handler implementation
void QGroupBox_QBaseInitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_InitStyleOption_IsBase(true);
        vqgroupbox->initStyleOption(option);
    } else {
        vqgroupbox->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInitStyleOption(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_InitStyleOption_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QGroupBox_DevType(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->devType();
    } else {
        return vqgroupbox->devType();
    }
}

// Base class handler implementation
int QGroupBox_QBaseDevType(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_DevType_IsBase(true);
        return vqgroupbox->devType();
    } else {
        return vqgroupbox->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDevType(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_DevType_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_SetVisible(QGroupBox* self, bool visible) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setVisible(visible);
    } else {
        vqgroupbox->setVisible(visible);
    }
}

// Base class handler implementation
void QGroupBox_QBaseSetVisible(QGroupBox* self, bool visible) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_SetVisible_IsBase(true);
        vqgroupbox->setVisible(visible);
    } else {
        vqgroupbox->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnSetVisible(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_SetVisible_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QGroupBox_SizeHint(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return new QSize(vqgroupbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QGroupBox_QBaseSizeHint(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_SizeHint_IsBase(true);
        return new QSize(vqgroupbox->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnSizeHint(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_SizeHint_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QGroupBox_HeightForWidth(const QGroupBox* self, int param1) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqgroupbox->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QGroupBox_QBaseHeightForWidth(const QGroupBox* self, int param1) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_HeightForWidth_IsBase(true);
        return vqgroupbox->heightForWidth(static_cast<int>(param1));
    } else {
        return vqgroupbox->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnHeightForWidth(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_HeightForWidth_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGroupBox_HasHeightForWidth(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->hasHeightForWidth();
    } else {
        return vqgroupbox->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QGroupBox_QBaseHasHeightForWidth(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_HasHeightForWidth_IsBase(true);
        return vqgroupbox->hasHeightForWidth();
    } else {
        return vqgroupbox->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnHasHeightForWidth(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_HasHeightForWidth_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QGroupBox_PaintEngine(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->paintEngine();
    } else {
        return vqgroupbox->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QGroupBox_QBasePaintEngine(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_PaintEngine_IsBase(true);
        return vqgroupbox->paintEngine();
    } else {
        return vqgroupbox->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnPaintEngine(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_PaintEngine_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_MouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->mouseDoubleClickEvent(event);
    } else {
        vqgroupbox->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseMouseDoubleClickEvent(QGroupBox* self, QMouseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MouseDoubleClickEvent_IsBase(true);
        vqgroupbox->mouseDoubleClickEvent(event);
    } else {
        vqgroupbox->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMouseDoubleClickEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_WheelEvent(QGroupBox* self, QWheelEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->wheelEvent(event);
    } else {
        vqgroupbox->wheelEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseWheelEvent(QGroupBox* self, QWheelEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_WheelEvent_IsBase(true);
        vqgroupbox->wheelEvent(event);
    } else {
        vqgroupbox->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnWheelEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_WheelEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_KeyPressEvent(QGroupBox* self, QKeyEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->keyPressEvent(event);
    } else {
        vqgroupbox->keyPressEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseKeyPressEvent(QGroupBox* self, QKeyEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_KeyPressEvent_IsBase(true);
        vqgroupbox->keyPressEvent(event);
    } else {
        vqgroupbox->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnKeyPressEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_KeyPressEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_KeyReleaseEvent(QGroupBox* self, QKeyEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->keyReleaseEvent(event);
    } else {
        vqgroupbox->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseKeyReleaseEvent(QGroupBox* self, QKeyEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_KeyReleaseEvent_IsBase(true);
        vqgroupbox->keyReleaseEvent(event);
    } else {
        vqgroupbox->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnKeyReleaseEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_FocusOutEvent(QGroupBox* self, QFocusEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->focusOutEvent(event);
    } else {
        vqgroupbox->focusOutEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseFocusOutEvent(QGroupBox* self, QFocusEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusOutEvent_IsBase(true);
        vqgroupbox->focusOutEvent(event);
    } else {
        vqgroupbox->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusOutEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusOutEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_EnterEvent(QGroupBox* self, QEnterEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->enterEvent(event);
    } else {
        vqgroupbox->enterEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseEnterEvent(QGroupBox* self, QEnterEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_EnterEvent_IsBase(true);
        vqgroupbox->enterEvent(event);
    } else {
        vqgroupbox->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnEnterEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_EnterEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_LeaveEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->leaveEvent(event);
    } else {
        vqgroupbox->leaveEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseLeaveEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_LeaveEvent_IsBase(true);
        vqgroupbox->leaveEvent(event);
    } else {
        vqgroupbox->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnLeaveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_LeaveEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_MoveEvent(QGroupBox* self, QMoveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->moveEvent(event);
    } else {
        vqgroupbox->moveEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseMoveEvent(QGroupBox* self, QMoveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MoveEvent_IsBase(true);
        vqgroupbox->moveEvent(event);
    } else {
        vqgroupbox->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMoveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_MoveEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_CloseEvent(QGroupBox* self, QCloseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->closeEvent(event);
    } else {
        vqgroupbox->closeEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseCloseEvent(QGroupBox* self, QCloseEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_CloseEvent_IsBase(true);
        vqgroupbox->closeEvent(event);
    } else {
        vqgroupbox->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnCloseEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_CloseEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_ContextMenuEvent(QGroupBox* self, QContextMenuEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->contextMenuEvent(event);
    } else {
        vqgroupbox->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseContextMenuEvent(QGroupBox* self, QContextMenuEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ContextMenuEvent_IsBase(true);
        vqgroupbox->contextMenuEvent(event);
    } else {
        vqgroupbox->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnContextMenuEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ContextMenuEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_TabletEvent(QGroupBox* self, QTabletEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->tabletEvent(event);
    } else {
        vqgroupbox->tabletEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseTabletEvent(QGroupBox* self, QTabletEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_TabletEvent_IsBase(true);
        vqgroupbox->tabletEvent(event);
    } else {
        vqgroupbox->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnTabletEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_TabletEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_ActionEvent(QGroupBox* self, QActionEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->actionEvent(event);
    } else {
        vqgroupbox->actionEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseActionEvent(QGroupBox* self, QActionEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ActionEvent_IsBase(true);
        vqgroupbox->actionEvent(event);
    } else {
        vqgroupbox->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnActionEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ActionEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_DragEnterEvent(QGroupBox* self, QDragEnterEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->dragEnterEvent(event);
    } else {
        vqgroupbox->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseDragEnterEvent(QGroupBox* self, QDragEnterEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DragEnterEvent_IsBase(true);
        vqgroupbox->dragEnterEvent(event);
    } else {
        vqgroupbox->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDragEnterEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DragEnterEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_DragMoveEvent(QGroupBox* self, QDragMoveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->dragMoveEvent(event);
    } else {
        vqgroupbox->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseDragMoveEvent(QGroupBox* self, QDragMoveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DragMoveEvent_IsBase(true);
        vqgroupbox->dragMoveEvent(event);
    } else {
        vqgroupbox->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDragMoveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DragMoveEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_DragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->dragLeaveEvent(event);
    } else {
        vqgroupbox->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseDragLeaveEvent(QGroupBox* self, QDragLeaveEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DragLeaveEvent_IsBase(true);
        vqgroupbox->dragLeaveEvent(event);
    } else {
        vqgroupbox->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDragLeaveEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DragLeaveEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_DropEvent(QGroupBox* self, QDropEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->dropEvent(event);
    } else {
        vqgroupbox->dropEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseDropEvent(QGroupBox* self, QDropEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DropEvent_IsBase(true);
        vqgroupbox->dropEvent(event);
    } else {
        vqgroupbox->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDropEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DropEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_ShowEvent(QGroupBox* self, QShowEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->showEvent(event);
    } else {
        vqgroupbox->showEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseShowEvent(QGroupBox* self, QShowEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ShowEvent_IsBase(true);
        vqgroupbox->showEvent(event);
    } else {
        vqgroupbox->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnShowEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ShowEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_HideEvent(QGroupBox* self, QHideEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->hideEvent(event);
    } else {
        vqgroupbox->hideEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseHideEvent(QGroupBox* self, QHideEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_HideEvent_IsBase(true);
        vqgroupbox->hideEvent(event);
    } else {
        vqgroupbox->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnHideEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_HideEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGroupBox_NativeEvent(QGroupBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqgroupbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QGroupBox_QBaseNativeEvent(QGroupBox* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_NativeEvent_IsBase(true);
        return vqgroupbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqgroupbox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnNativeEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_NativeEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QGroupBox_Metric(const QGroupBox* self, int param1) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqgroupbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QGroupBox_QBaseMetric(const QGroupBox* self, int param1) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_Metric_IsBase(true);
        return vqgroupbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqgroupbox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMetric(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_Metric_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_InitPainter(const QGroupBox* self, QPainter* painter) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->initPainter(painter);
    } else {
        vqgroupbox->initPainter(painter);
    }
}

// Base class handler implementation
void QGroupBox_QBaseInitPainter(const QGroupBox* self, QPainter* painter) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_InitPainter_IsBase(true);
        vqgroupbox->initPainter(painter);
    } else {
        vqgroupbox->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInitPainter(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_InitPainter_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QGroupBox_Redirected(const QGroupBox* self, QPoint* offset) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->redirected(offset);
    } else {
        return vqgroupbox->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QGroupBox_QBaseRedirected(const QGroupBox* self, QPoint* offset) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_Redirected_IsBase(true);
        return vqgroupbox->redirected(offset);
    } else {
        return vqgroupbox->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnRedirected(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_Redirected_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QGroupBox_SharedPainter(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->sharedPainter();
    } else {
        return vqgroupbox->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QGroupBox_QBaseSharedPainter(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_SharedPainter_IsBase(true);
        return vqgroupbox->sharedPainter();
    } else {
        return vqgroupbox->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnSharedPainter(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_SharedPainter_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_InputMethodEvent(QGroupBox* self, QInputMethodEvent* param1) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->inputMethodEvent(param1);
    } else {
        vqgroupbox->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QGroupBox_QBaseInputMethodEvent(QGroupBox* self, QInputMethodEvent* param1) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_InputMethodEvent_IsBase(true);
        vqgroupbox->inputMethodEvent(param1);
    } else {
        vqgroupbox->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInputMethodEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_InputMethodEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QGroupBox_InputMethodQuery(const QGroupBox* self, int param1) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return new QVariant(vqgroupbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QGroupBox_QBaseInputMethodQuery(const QGroupBox* self, int param1) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_InputMethodQuery_IsBase(true);
        return new QVariant(vqgroupbox->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInputMethodQuery(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_InputMethodQuery_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGroupBox_FocusNextPrevChild(QGroupBox* self, bool next) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->focusNextPrevChild(next);
    } else {
        return vqgroupbox->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QGroupBox_QBaseFocusNextPrevChild(QGroupBox* self, bool next) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusNextPrevChild_IsBase(true);
        return vqgroupbox->focusNextPrevChild(next);
    } else {
        return vqgroupbox->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusNextPrevChild(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGroupBox_EventFilter(QGroupBox* self, QObject* watched, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->eventFilter(watched, event);
    } else {
        return vqgroupbox->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QGroupBox_QBaseEventFilter(QGroupBox* self, QObject* watched, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_EventFilter_IsBase(true);
        return vqgroupbox->eventFilter(watched, event);
    } else {
        return vqgroupbox->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnEventFilter(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_EventFilter_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_TimerEvent(QGroupBox* self, QTimerEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->timerEvent(event);
    } else {
        vqgroupbox->timerEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseTimerEvent(QGroupBox* self, QTimerEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_TimerEvent_IsBase(true);
        vqgroupbox->timerEvent(event);
    } else {
        vqgroupbox->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnTimerEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_TimerEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_CustomEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->customEvent(event);
    } else {
        vqgroupbox->customEvent(event);
    }
}

// Base class handler implementation
void QGroupBox_QBaseCustomEvent(QGroupBox* self, QEvent* event) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_CustomEvent_IsBase(true);
        vqgroupbox->customEvent(event);
    } else {
        vqgroupbox->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnCustomEvent(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_CustomEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_ConnectNotify(QGroupBox* self, QMetaMethod* signal) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->connectNotify(*signal);
    } else {
        vqgroupbox->connectNotify(*signal);
    }
}

// Base class handler implementation
void QGroupBox_QBaseConnectNotify(QGroupBox* self, QMetaMethod* signal) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ConnectNotify_IsBase(true);
        vqgroupbox->connectNotify(*signal);
    } else {
        vqgroupbox->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnConnectNotify(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_ConnectNotify_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_DisconnectNotify(QGroupBox* self, QMetaMethod* signal) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->disconnectNotify(*signal);
    } else {
        vqgroupbox->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QGroupBox_QBaseDisconnectNotify(QGroupBox* self, QMetaMethod* signal) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DisconnectNotify_IsBase(true);
        vqgroupbox->disconnectNotify(*signal);
    } else {
        vqgroupbox->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDisconnectNotify(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_DisconnectNotify_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_UpdateMicroFocus(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->updateMicroFocus();
    } else {
        vqgroupbox->updateMicroFocus();
    }
}

// Base class handler implementation
void QGroupBox_QBaseUpdateMicroFocus(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_UpdateMicroFocus_IsBase(true);
        vqgroupbox->updateMicroFocus();
    } else {
        vqgroupbox->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnUpdateMicroFocus(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_Create(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->create();
    } else {
        vqgroupbox->create();
    }
}

// Base class handler implementation
void QGroupBox_QBaseCreate(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_Create_IsBase(true);
        vqgroupbox->create();
    } else {
        vqgroupbox->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnCreate(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_Create_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QGroupBox_Destroy(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->destroy();
    } else {
        vqgroupbox->destroy();
    }
}

// Base class handler implementation
void QGroupBox_QBaseDestroy(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_Destroy_IsBase(true);
        vqgroupbox->destroy();
    } else {
        vqgroupbox->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnDestroy(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_Destroy_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGroupBox_FocusNextChild(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->focusNextChild();
    } else {
        return vqgroupbox->focusNextChild();
    }
}

// Base class handler implementation
bool QGroupBox_QBaseFocusNextChild(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusNextChild_IsBase(true);
        return vqgroupbox->focusNextChild();
    } else {
        return vqgroupbox->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusNextChild(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusNextChild_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGroupBox_FocusPreviousChild(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        return vqgroupbox->focusPreviousChild();
    } else {
        return vqgroupbox->focusPreviousChild();
    }
}

// Base class handler implementation
bool QGroupBox_QBaseFocusPreviousChild(QGroupBox* self) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusPreviousChild_IsBase(true);
        return vqgroupbox->focusPreviousChild();
    } else {
        return vqgroupbox->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusPreviousChild(QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self)) {
        vqgroupbox->setQGroupBox_FocusPreviousChild_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QGroupBox_Sender(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->sender();
    } else {
        return vqgroupbox->sender();
    }
}

// Base class handler implementation
QObject* QGroupBox_QBaseSender(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_Sender_IsBase(true);
        return vqgroupbox->sender();
    } else {
        return vqgroupbox->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnSender(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_Sender_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QGroupBox_SenderSignalIndex(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->senderSignalIndex();
    } else {
        return vqgroupbox->senderSignalIndex();
    }
}

// Base class handler implementation
int QGroupBox_QBaseSenderSignalIndex(const QGroupBox* self) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_SenderSignalIndex_IsBase(true);
        return vqgroupbox->senderSignalIndex();
    } else {
        return vqgroupbox->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnSenderSignalIndex(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_SenderSignalIndex_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QGroupBox_Receivers(const QGroupBox* self, const char* signal) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->receivers(signal);
    } else {
        return vqgroupbox->receivers(signal);
    }
}

// Base class handler implementation
int QGroupBox_QBaseReceivers(const QGroupBox* self, const char* signal) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_Receivers_IsBase(true);
        return vqgroupbox->receivers(signal);
    } else {
        return vqgroupbox->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnReceivers(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_Receivers_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QGroupBox_IsSignalConnected(const QGroupBox* self, QMetaMethod* signal) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        return vqgroupbox->isSignalConnected(*signal);
    } else {
        return vqgroupbox->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QGroupBox_QBaseIsSignalConnected(const QGroupBox* self, QMetaMethod* signal) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_IsSignalConnected_IsBase(true);
        return vqgroupbox->isSignalConnected(*signal);
    } else {
        return vqgroupbox->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnIsSignalConnected(const QGroupBox* self, intptr_t slot) {
    if (auto* vqgroupbox = const_cast<VirtualQGroupBox*>(dynamic_cast<const VirtualQGroupBox*>(self))) {
        vqgroupbox->setQGroupBox_IsSignalConnected_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_IsSignalConnected_Callback>(slot));
    }
}

void QGroupBox_Delete(QGroupBox* self) {
    delete self;
}
