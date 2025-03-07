#include <QAbstractScrollArea>
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
#include <QFrame>
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
#include <QScrollBar>
#include <QShowEvent>
#include <QSize>
#include <QSizePolicy>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <QWindow>
#include <qabstractscrollarea.h>
#include "libqabstractscrollarea.h"
#include "libqabstractscrollarea.hxx"

QAbstractScrollArea* QAbstractScrollArea_new(QWidget* parent) {
    return new VirtualQAbstractScrollArea(parent);
}

QAbstractScrollArea* QAbstractScrollArea_new2() {
    return new VirtualQAbstractScrollArea();
}

QMetaObject* QAbstractScrollArea_MetaObject(const QAbstractScrollArea* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstractScrollArea_Metacast(QAbstractScrollArea* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstractScrollArea_Metacall(QAbstractScrollArea* self, int param1, int param2, void** param3) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAbstractScrollArea_OnMetacall(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_Metacall_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAbstractScrollArea_QBaseMetacall(QAbstractScrollArea* self, int param1, int param2, void** param3) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_Metacall_IsBase(true);
        return vqabstractscrollarea->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAbstractScrollArea_Tr(const char* s) {
    QString _ret = QAbstractScrollArea::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAbstractScrollArea_VerticalScrollBarPolicy(const QAbstractScrollArea* self) {
    return static_cast<int>(self->verticalScrollBarPolicy());
}

void QAbstractScrollArea_SetVerticalScrollBarPolicy(QAbstractScrollArea* self, int verticalScrollBarPolicy) {
    self->setVerticalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(verticalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_VerticalScrollBar(const QAbstractScrollArea* self) {
    return self->verticalScrollBar();
}

void QAbstractScrollArea_SetVerticalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
    self->setVerticalScrollBar(scrollbar);
}

int QAbstractScrollArea_HorizontalScrollBarPolicy(const QAbstractScrollArea* self) {
    return static_cast<int>(self->horizontalScrollBarPolicy());
}

void QAbstractScrollArea_SetHorizontalScrollBarPolicy(QAbstractScrollArea* self, int horizontalScrollBarPolicy) {
    self->setHorizontalScrollBarPolicy(static_cast<Qt::ScrollBarPolicy>(horizontalScrollBarPolicy));
}

QScrollBar* QAbstractScrollArea_HorizontalScrollBar(const QAbstractScrollArea* self) {
    return self->horizontalScrollBar();
}

void QAbstractScrollArea_SetHorizontalScrollBar(QAbstractScrollArea* self, QScrollBar* scrollbar) {
    self->setHorizontalScrollBar(scrollbar);
}

QWidget* QAbstractScrollArea_CornerWidget(const QAbstractScrollArea* self) {
    return self->cornerWidget();
}

void QAbstractScrollArea_SetCornerWidget(QAbstractScrollArea* self, QWidget* widget) {
    self->setCornerWidget(widget);
}

void QAbstractScrollArea_AddScrollBarWidget(QAbstractScrollArea* self, QWidget* widget, int alignment) {
    self->addScrollBarWidget(widget, static_cast<Qt::Alignment>(alignment));
}

libqt_list /* of QWidget* */ QAbstractScrollArea_ScrollBarWidgets(QAbstractScrollArea* self, int alignment) {
    QWidgetList _ret = self->scrollBarWidgets(static_cast<Qt::Alignment>(alignment));
    // Convert QList<> from C++ memory to manually-managed C memory
    QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QWidget* QAbstractScrollArea_Viewport(const QAbstractScrollArea* self) {
    return self->viewport();
}

void QAbstractScrollArea_SetViewport(QAbstractScrollArea* self, QWidget* widget) {
    self->setViewport(widget);
}

QSize* QAbstractScrollArea_MaximumViewportSize(const QAbstractScrollArea* self) {
    return new QSize(self->maximumViewportSize());
}

int QAbstractScrollArea_SizeAdjustPolicy(const QAbstractScrollArea* self) {
    return static_cast<int>(self->sizeAdjustPolicy());
}

void QAbstractScrollArea_SetSizeAdjustPolicy(QAbstractScrollArea* self, int policy) {
    self->setSizeAdjustPolicy(static_cast<QAbstractScrollArea::SizeAdjustPolicy>(policy));
}

libqt_string QAbstractScrollArea_Tr2(const char* s, const char* c) {
    QString _ret = QAbstractScrollArea::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAbstractScrollArea_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAbstractScrollArea::tr(s, c, static_cast<int>(n));
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
QSize* QAbstractScrollArea_MinimumSizeHint(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return new QSize(vqabstractscrollarea->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseMinimumSizeHint(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_MinimumSizeHint_IsBase(true);
        return new QSize(vqabstractscrollarea->minimumSizeHint());
    } else {
        return new QSize(self->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMinimumSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractScrollArea_SizeHint(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return new QSize(vqabstractscrollarea->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseSizeHint(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_SizeHint_IsBase(true);
        return new QSize(vqabstractscrollarea->sizeHint());
    } else {
        return new QSize(self->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_SizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_SetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setupViewport(viewport);
    } else {
        vqabstractscrollarea->setupViewport(viewport);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetupViewport(QAbstractScrollArea* self, QWidget* viewport) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_SetupViewport_IsBase(true);
        vqabstractscrollarea->setupViewport(viewport);
    } else {
        vqabstractscrollarea->setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetupViewport(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_SetupViewport_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_EventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->eventFilter(param1, param2);
    } else {
        return vqabstractscrollarea->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseEventFilter(QAbstractScrollArea* self, QObject* param1, QEvent* param2) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_EventFilter_IsBase(true);
        return vqabstractscrollarea->eventFilter(param1, param2);
    } else {
        return vqabstractscrollarea->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEventFilter(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_EventFilter_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_Event(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->event(param1);
    } else {
        return vqabstractscrollarea->event(param1);
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseEvent(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_Event_IsBase(true);
        return vqabstractscrollarea->event(param1);
    } else {
        return vqabstractscrollarea->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_Event_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_ViewportEvent(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->viewportEvent(param1);
    } else {
        return vqabstractscrollarea->viewportEvent(param1);
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseViewportEvent(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportEvent_IsBase(true);
        return vqabstractscrollarea->viewportEvent(param1);
    } else {
        return vqabstractscrollarea->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->resizeEvent(param1);
    } else {
        vqabstractscrollarea->resizeEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseResizeEvent(QAbstractScrollArea* self, QResizeEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ResizeEvent_IsBase(true);
        vqabstractscrollarea->resizeEvent(param1);
    } else {
        vqabstractscrollarea->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnResizeEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ResizeEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_PaintEvent(QAbstractScrollArea* self, QPaintEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->paintEvent(param1);
    } else {
        vqabstractscrollarea->paintEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBasePaintEvent(QAbstractScrollArea* self, QPaintEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_PaintEvent_IsBase(true);
        vqabstractscrollarea->paintEvent(param1);
    } else {
        vqabstractscrollarea->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnPaintEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_PaintEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_MousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->mousePressEvent(param1);
    } else {
        vqabstractscrollarea->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMousePressEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MousePressEvent_IsBase(true);
        vqabstractscrollarea->mousePressEvent(param1);
    } else {
        vqabstractscrollarea->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMousePressEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MousePressEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_MouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->mouseReleaseEvent(param1);
    } else {
        vqabstractscrollarea->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseReleaseEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseReleaseEvent_IsBase(true);
        vqabstractscrollarea->mouseReleaseEvent(param1);
    } else {
        vqabstractscrollarea->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseReleaseEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_MouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->mouseDoubleClickEvent(param1);
    } else {
        vqabstractscrollarea->mouseDoubleClickEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseDoubleClickEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseDoubleClickEvent_IsBase(true);
        vqabstractscrollarea->mouseDoubleClickEvent(param1);
    } else {
        vqabstractscrollarea->mouseDoubleClickEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseDoubleClickEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_MouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->mouseMoveEvent(param1);
    } else {
        vqabstractscrollarea->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMouseMoveEvent(QAbstractScrollArea* self, QMouseEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseMoveEvent_IsBase(true);
        vqabstractscrollarea->mouseMoveEvent(param1);
    } else {
        vqabstractscrollarea->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMouseMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MouseMoveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_WheelEvent(QAbstractScrollArea* self, QWheelEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->wheelEvent(param1);
    } else {
        vqabstractscrollarea->wheelEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseWheelEvent(QAbstractScrollArea* self, QWheelEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_WheelEvent_IsBase(true);
        vqabstractscrollarea->wheelEvent(param1);
    } else {
        vqabstractscrollarea->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnWheelEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_WheelEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->contextMenuEvent(param1);
    } else {
        vqabstractscrollarea->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseContextMenuEvent(QAbstractScrollArea* self, QContextMenuEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ContextMenuEvent_IsBase(true);
        vqabstractscrollarea->contextMenuEvent(param1);
    } else {
        vqabstractscrollarea->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnContextMenuEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ContextMenuEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_DragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->dragEnterEvent(param1);
    } else {
        vqabstractscrollarea->dragEnterEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragEnterEvent(QAbstractScrollArea* self, QDragEnterEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DragEnterEvent_IsBase(true);
        vqabstractscrollarea->dragEnterEvent(param1);
    } else {
        vqabstractscrollarea->dragEnterEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragEnterEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DragEnterEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_DragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->dragMoveEvent(param1);
    } else {
        vqabstractscrollarea->dragMoveEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragMoveEvent(QAbstractScrollArea* self, QDragMoveEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DragMoveEvent_IsBase(true);
        vqabstractscrollarea->dragMoveEvent(param1);
    } else {
        vqabstractscrollarea->dragMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DragMoveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_DragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->dragLeaveEvent(param1);
    } else {
        vqabstractscrollarea->dragLeaveEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDragLeaveEvent(QAbstractScrollArea* self, QDragLeaveEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DragLeaveEvent_IsBase(true);
        vqabstractscrollarea->dragLeaveEvent(param1);
    } else {
        vqabstractscrollarea->dragLeaveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDragLeaveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DragLeaveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_DropEvent(QAbstractScrollArea* self, QDropEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->dropEvent(param1);
    } else {
        vqabstractscrollarea->dropEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDropEvent(QAbstractScrollArea* self, QDropEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DropEvent_IsBase(true);
        vqabstractscrollarea->dropEvent(param1);
    } else {
        vqabstractscrollarea->dropEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDropEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DropEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_KeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->keyPressEvent(param1);
    } else {
        vqabstractscrollarea->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseKeyPressEvent(QAbstractScrollArea* self, QKeyEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_KeyPressEvent_IsBase(true);
        vqabstractscrollarea->keyPressEvent(param1);
    } else {
        vqabstractscrollarea->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnKeyPressEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_KeyPressEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ScrollContentsBy(QAbstractScrollArea* self, int dx, int dy) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqabstractscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseScrollContentsBy(QAbstractScrollArea* self, int dx, int dy) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ScrollContentsBy_IsBase(true);
        vqabstractscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        vqabstractscrollarea->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnScrollContentsBy(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QAbstractScrollArea_ViewportSizeHint(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return new QSize(vqabstractscrollarea->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QAbstractScrollArea_QBaseViewportSizeHint(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportSizeHint_IsBase(true);
        return new QSize(vqabstractscrollarea->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportSizeHint(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportSizeHint_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ChangeEvent(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->changeEvent(param1);
    } else {
        vqabstractscrollarea->changeEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseChangeEvent(QAbstractScrollArea* self, QEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ChangeEvent_IsBase(true);
        vqabstractscrollarea->changeEvent(param1);
    } else {
        vqabstractscrollarea->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnChangeEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ChangeEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_InitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->initStyleOption(option);
    } else {
        vqabstractscrollarea->initStyleOption(option);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseInitStyleOption(const QAbstractScrollArea* self, QStyleOptionFrame* option) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_InitStyleOption_IsBase(true);
        vqabstractscrollarea->initStyleOption(option);
    } else {
        vqabstractscrollarea->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInitStyleOption(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_InitStyleOption_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_DevType(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->devType();
    } else {
        return vqabstractscrollarea->devType();
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseDevType(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_DevType_IsBase(true);
        return vqabstractscrollarea->devType();
    } else {
        return vqabstractscrollarea->devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDevType(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_DevType_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_SetVisible(QAbstractScrollArea* self, bool visible) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setVisible(visible);
    } else {
        vqabstractscrollarea->setVisible(visible);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetVisible(QAbstractScrollArea* self, bool visible) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_SetVisible_IsBase(true);
        vqabstractscrollarea->setVisible(visible);
    } else {
        vqabstractscrollarea->setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetVisible(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_SetVisible_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_HeightForWidth(const QAbstractScrollArea* self, int param1) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractscrollarea->heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseHeightForWidth(const QAbstractScrollArea* self, int param1) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_HeightForWidth_IsBase(true);
        return vqabstractscrollarea->heightForWidth(static_cast<int>(param1));
    } else {
        return vqabstractscrollarea->heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHeightForWidth(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_HeightForWidth_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_HasHeightForWidth(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->hasHeightForWidth();
    } else {
        return vqabstractscrollarea->hasHeightForWidth();
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseHasHeightForWidth(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_HasHeightForWidth_IsBase(true);
        return vqabstractscrollarea->hasHeightForWidth();
    } else {
        return vqabstractscrollarea->hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHasHeightForWidth(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_HasHeightForWidth_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QAbstractScrollArea_PaintEngine(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->paintEngine();
    } else {
        return vqabstractscrollarea->paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QAbstractScrollArea_QBasePaintEngine(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_PaintEngine_IsBase(true);
        return vqabstractscrollarea->paintEngine();
    } else {
        return vqabstractscrollarea->paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnPaintEngine(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_PaintEngine_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_KeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->keyReleaseEvent(event);
    } else {
        vqabstractscrollarea->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseKeyReleaseEvent(QAbstractScrollArea* self, QKeyEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_KeyReleaseEvent_IsBase(true);
        vqabstractscrollarea->keyReleaseEvent(event);
    } else {
        vqabstractscrollarea->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnKeyReleaseEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_FocusInEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->focusInEvent(event);
    } else {
        vqabstractscrollarea->focusInEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseFocusInEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusInEvent_IsBase(true);
        vqabstractscrollarea->focusInEvent(event);
    } else {
        vqabstractscrollarea->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusInEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusInEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_FocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->focusOutEvent(event);
    } else {
        vqabstractscrollarea->focusOutEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseFocusOutEvent(QAbstractScrollArea* self, QFocusEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusOutEvent_IsBase(true);
        vqabstractscrollarea->focusOutEvent(event);
    } else {
        vqabstractscrollarea->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusOutEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusOutEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_EnterEvent(QAbstractScrollArea* self, QEnterEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->enterEvent(event);
    } else {
        vqabstractscrollarea->enterEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseEnterEvent(QAbstractScrollArea* self, QEnterEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_EnterEvent_IsBase(true);
        vqabstractscrollarea->enterEvent(event);
    } else {
        vqabstractscrollarea->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnEnterEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_EnterEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_LeaveEvent(QAbstractScrollArea* self, QEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->leaveEvent(event);
    } else {
        vqabstractscrollarea->leaveEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseLeaveEvent(QAbstractScrollArea* self, QEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_LeaveEvent_IsBase(true);
        vqabstractscrollarea->leaveEvent(event);
    } else {
        vqabstractscrollarea->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnLeaveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_LeaveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_MoveEvent(QAbstractScrollArea* self, QMoveEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->moveEvent(event);
    } else {
        vqabstractscrollarea->moveEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseMoveEvent(QAbstractScrollArea* self, QMoveEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MoveEvent_IsBase(true);
        vqabstractscrollarea->moveEvent(event);
    } else {
        vqabstractscrollarea->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMoveEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_MoveEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_CloseEvent(QAbstractScrollArea* self, QCloseEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->closeEvent(event);
    } else {
        vqabstractscrollarea->closeEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseCloseEvent(QAbstractScrollArea* self, QCloseEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_CloseEvent_IsBase(true);
        vqabstractscrollarea->closeEvent(event);
    } else {
        vqabstractscrollarea->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnCloseEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_CloseEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_TabletEvent(QAbstractScrollArea* self, QTabletEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->tabletEvent(event);
    } else {
        vqabstractscrollarea->tabletEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseTabletEvent(QAbstractScrollArea* self, QTabletEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_TabletEvent_IsBase(true);
        vqabstractscrollarea->tabletEvent(event);
    } else {
        vqabstractscrollarea->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnTabletEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_TabletEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ActionEvent(QAbstractScrollArea* self, QActionEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->actionEvent(event);
    } else {
        vqabstractscrollarea->actionEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseActionEvent(QAbstractScrollArea* self, QActionEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ActionEvent_IsBase(true);
        vqabstractscrollarea->actionEvent(event);
    } else {
        vqabstractscrollarea->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnActionEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ActionEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ShowEvent(QAbstractScrollArea* self, QShowEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->showEvent(event);
    } else {
        vqabstractscrollarea->showEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseShowEvent(QAbstractScrollArea* self, QShowEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ShowEvent_IsBase(true);
        vqabstractscrollarea->showEvent(event);
    } else {
        vqabstractscrollarea->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnShowEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ShowEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_HideEvent(QAbstractScrollArea* self, QHideEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->hideEvent(event);
    } else {
        vqabstractscrollarea->hideEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseHideEvent(QAbstractScrollArea* self, QHideEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_HideEvent_IsBase(true);
        vqabstractscrollarea->hideEvent(event);
    } else {
        vqabstractscrollarea->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnHideEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_HideEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_NativeEvent(QAbstractScrollArea* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseNativeEvent(QAbstractScrollArea* self, libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_NativeEvent_IsBase(true);
        return vqabstractscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return vqabstractscrollarea->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnNativeEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_NativeEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_Metric(const QAbstractScrollArea* self, int param1) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseMetric(const QAbstractScrollArea* self, int param1) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_Metric_IsBase(true);
        return vqabstractscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return vqabstractscrollarea->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnMetric(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_Metric_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_InitPainter(const QAbstractScrollArea* self, QPainter* painter) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->initPainter(painter);
    } else {
        vqabstractscrollarea->initPainter(painter);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseInitPainter(const QAbstractScrollArea* self, QPainter* painter) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_InitPainter_IsBase(true);
        vqabstractscrollarea->initPainter(painter);
    } else {
        vqabstractscrollarea->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInitPainter(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_InitPainter_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QAbstractScrollArea_Redirected(const QAbstractScrollArea* self, QPoint* offset) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->redirected(offset);
    } else {
        return vqabstractscrollarea->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QAbstractScrollArea_QBaseRedirected(const QAbstractScrollArea* self, QPoint* offset) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_Redirected_IsBase(true);
        return vqabstractscrollarea->redirected(offset);
    } else {
        return vqabstractscrollarea->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnRedirected(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_Redirected_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QAbstractScrollArea_SharedPainter(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->sharedPainter();
    } else {
        return vqabstractscrollarea->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QAbstractScrollArea_QBaseSharedPainter(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_SharedPainter_IsBase(true);
        return vqabstractscrollarea->sharedPainter();
    } else {
        return vqabstractscrollarea->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSharedPainter(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_SharedPainter_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_InputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->inputMethodEvent(param1);
    } else {
        vqabstractscrollarea->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseInputMethodEvent(QAbstractScrollArea* self, QInputMethodEvent* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_InputMethodEvent_IsBase(true);
        vqabstractscrollarea->inputMethodEvent(param1);
    } else {
        vqabstractscrollarea->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInputMethodEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_InputMethodEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QAbstractScrollArea_InputMethodQuery(const QAbstractScrollArea* self, int param1) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return new QVariant(vqabstractscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QAbstractScrollArea_QBaseInputMethodQuery(const QAbstractScrollArea* self, int param1) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_InputMethodQuery_IsBase(true);
        return new QVariant(vqabstractscrollarea->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnInputMethodQuery(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_InputMethodQuery_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_FocusNextPrevChild(QAbstractScrollArea* self, bool next) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->focusNextPrevChild(next);
    } else {
        return vqabstractscrollarea->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseFocusNextPrevChild(QAbstractScrollArea* self, bool next) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusNextPrevChild_IsBase(true);
        return vqabstractscrollarea->focusNextPrevChild(next);
    } else {
        return vqabstractscrollarea->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusNextPrevChild(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_TimerEvent(QAbstractScrollArea* self, QTimerEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->timerEvent(event);
    } else {
        vqabstractscrollarea->timerEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseTimerEvent(QAbstractScrollArea* self, QTimerEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_TimerEvent_IsBase(true);
        vqabstractscrollarea->timerEvent(event);
    } else {
        vqabstractscrollarea->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnTimerEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_TimerEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ChildEvent(QAbstractScrollArea* self, QChildEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->childEvent(event);
    } else {
        vqabstractscrollarea->childEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseChildEvent(QAbstractScrollArea* self, QChildEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ChildEvent_IsBase(true);
        vqabstractscrollarea->childEvent(event);
    } else {
        vqabstractscrollarea->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnChildEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ChildEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_CustomEvent(QAbstractScrollArea* self, QEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->customEvent(event);
    } else {
        vqabstractscrollarea->customEvent(event);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseCustomEvent(QAbstractScrollArea* self, QEvent* event) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_CustomEvent_IsBase(true);
        vqabstractscrollarea->customEvent(event);
    } else {
        vqabstractscrollarea->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnCustomEvent(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_CustomEvent_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_ConnectNotify(QAbstractScrollArea* self, QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->connectNotify(*signal);
    } else {
        vqabstractscrollarea->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseConnectNotify(QAbstractScrollArea* self, QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ConnectNotify_IsBase(true);
        vqabstractscrollarea->connectNotify(*signal);
    } else {
        vqabstractscrollarea->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnConnectNotify(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_ConnectNotify_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_DisconnectNotify(QAbstractScrollArea* self, QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->disconnectNotify(*signal);
    } else {
        vqabstractscrollarea->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDisconnectNotify(QAbstractScrollArea* self, QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DisconnectNotify_IsBase(true);
        vqabstractscrollarea->disconnectNotify(*signal);
    } else {
        vqabstractscrollarea->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDisconnectNotify(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DisconnectNotify_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_SetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqabstractscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetViewportMargins(QAbstractScrollArea* self, int left, int top, int right, int bottom) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins_IsBase(true);
        vqabstractscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        vqabstractscrollarea->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetViewportMargins(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_SetViewportMargins_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_SetViewportMarginsWithMargins(QAbstractScrollArea* self, QMargins* margins) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setViewportMargins(*margins);
    } else {
        vqabstractscrollarea->setViewportMargins(*margins);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseSetViewportMarginsWithMargins(QAbstractScrollArea* self, QMargins* margins) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_SetViewportMarginsWithMargins_IsBase(true);
        vqabstractscrollarea->setViewportMargins(*margins);
    } else {
        vqabstractscrollarea->setViewportMargins(*margins);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSetViewportMarginsWithMargins(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_SetViewportMarginsWithMargins_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SetViewportMarginsWithMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QAbstractScrollArea_ViewportMargins(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return new QMargins(vqabstractscrollarea->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QAbstractScrollArea_QBaseViewportMargins(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportMargins_IsBase(true);
        return new QMargins(vqabstractscrollarea->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnViewportMargins(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_ViewportMargins_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_DrawFrame(QAbstractScrollArea* self, QPainter* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->drawFrame(param1);
    } else {
        vqabstractscrollarea->drawFrame(param1);
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDrawFrame(QAbstractScrollArea* self, QPainter* param1) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DrawFrame_IsBase(true);
        vqabstractscrollarea->drawFrame(param1);
    } else {
        vqabstractscrollarea->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDrawFrame(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_DrawFrame_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_UpdateMicroFocus(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->updateMicroFocus();
    } else {
        vqabstractscrollarea->updateMicroFocus();
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseUpdateMicroFocus(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_UpdateMicroFocus_IsBase(true);
        vqabstractscrollarea->updateMicroFocus();
    } else {
        vqabstractscrollarea->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnUpdateMicroFocus(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_Create(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->create();
    } else {
        vqabstractscrollarea->create();
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseCreate(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_Create_IsBase(true);
        vqabstractscrollarea->create();
    } else {
        vqabstractscrollarea->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnCreate(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_Create_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QAbstractScrollArea_Destroy(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->destroy();
    } else {
        vqabstractscrollarea->destroy();
    }
}

// Base class handler implementation
void QAbstractScrollArea_QBaseDestroy(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_Destroy_IsBase(true);
        vqabstractscrollarea->destroy();
    } else {
        vqabstractscrollarea->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnDestroy(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_Destroy_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_FocusNextChild(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->focusNextChild();
    } else {
        return vqabstractscrollarea->focusNextChild();
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseFocusNextChild(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusNextChild_IsBase(true);
        return vqabstractscrollarea->focusNextChild();
    } else {
        return vqabstractscrollarea->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusNextChild(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusNextChild_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_FocusPreviousChild(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        return vqabstractscrollarea->focusPreviousChild();
    } else {
        return vqabstractscrollarea->focusPreviousChild();
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseFocusPreviousChild(QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusPreviousChild_IsBase(true);
        return vqabstractscrollarea->focusPreviousChild();
    } else {
        return vqabstractscrollarea->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnFocusPreviousChild(QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = dynamic_cast<VirtualQAbstractScrollArea*>(self)) {
        vqabstractscrollarea->setQAbstractScrollArea_FocusPreviousChild_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAbstractScrollArea_Sender(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->sender();
    } else {
        return vqabstractscrollarea->sender();
    }
}

// Base class handler implementation
QObject* QAbstractScrollArea_QBaseSender(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_Sender_IsBase(true);
        return vqabstractscrollarea->sender();
    } else {
        return vqabstractscrollarea->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSender(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_Sender_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_SenderSignalIndex(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->senderSignalIndex();
    } else {
        return vqabstractscrollarea->senderSignalIndex();
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseSenderSignalIndex(const QAbstractScrollArea* self) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_SenderSignalIndex_IsBase(true);
        return vqabstractscrollarea->senderSignalIndex();
    } else {
        return vqabstractscrollarea->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnSenderSignalIndex(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAbstractScrollArea_Receivers(const QAbstractScrollArea* self, const char* signal) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->receivers(signal);
    } else {
        return vqabstractscrollarea->receivers(signal);
    }
}

// Base class handler implementation
int QAbstractScrollArea_QBaseReceivers(const QAbstractScrollArea* self, const char* signal) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_Receivers_IsBase(true);
        return vqabstractscrollarea->receivers(signal);
    } else {
        return vqabstractscrollarea->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnReceivers(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_Receivers_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAbstractScrollArea_IsSignalConnected(const QAbstractScrollArea* self, QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        return vqabstractscrollarea->isSignalConnected(*signal);
    } else {
        return vqabstractscrollarea->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAbstractScrollArea_QBaseIsSignalConnected(const QAbstractScrollArea* self, QMetaMethod* signal) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_IsSignalConnected_IsBase(true);
        return vqabstractscrollarea->isSignalConnected(*signal);
    } else {
        return vqabstractscrollarea->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAbstractScrollArea_OnIsSignalConnected(const QAbstractScrollArea* self, intptr_t slot) {
    if (auto* vqabstractscrollarea = const_cast<VirtualQAbstractScrollArea*>(dynamic_cast<const VirtualQAbstractScrollArea*>(self))) {
        vqabstractscrollarea->setQAbstractScrollArea_IsSignalConnected_Callback(reinterpret_cast<VirtualQAbstractScrollArea::QAbstractScrollArea_IsSignalConnected_Callback>(slot));
    }
}

void QAbstractScrollArea_Delete(QAbstractScrollArea* self) {
    delete self;
}
