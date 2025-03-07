#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPainter>
#include <QRect>
#include <QRectF>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSvgRenderer>
#include <QThread>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QXmlStreamReader>
#include <qsvgrenderer.h>
#include "libqsvgrenderer.h"
#include "libqsvgrenderer.hxx"

QSvgRenderer* QSvgRenderer_new() {
    return new VirtualQSvgRenderer();
}

QSvgRenderer* QSvgRenderer_new2(libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualQSvgRenderer(filename_QString);
}

QSvgRenderer* QSvgRenderer_new3(libqt_string contents) {
    QByteArray contents_QByteArray(contents.data, contents.len);
    return new VirtualQSvgRenderer(contents_QByteArray);
}

QSvgRenderer* QSvgRenderer_new4(QXmlStreamReader* contents) {
    return new VirtualQSvgRenderer(contents);
}

QSvgRenderer* QSvgRenderer_new5(QObject* parent) {
    return new VirtualQSvgRenderer(parent);
}

QSvgRenderer* QSvgRenderer_new6(libqt_string filename, QObject* parent) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return new VirtualQSvgRenderer(filename_QString, parent);
}

QSvgRenderer* QSvgRenderer_new7(libqt_string contents, QObject* parent) {
    QByteArray contents_QByteArray(contents.data, contents.len);
    return new VirtualQSvgRenderer(contents_QByteArray, parent);
}

QSvgRenderer* QSvgRenderer_new8(QXmlStreamReader* contents, QObject* parent) {
    return new VirtualQSvgRenderer(contents, parent);
}

QMetaObject* QSvgRenderer_MetaObject(const QSvgRenderer* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSvgRenderer_Metacast(QSvgRenderer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSvgRenderer_Metacall(QSvgRenderer* self, int param1, int param2, void** param3) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSvgRenderer_OnMetacall(QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_Metacall_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSvgRenderer_QBaseMetacall(QSvgRenderer* self, int param1, int param2, void** param3) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_Metacall_IsBase(true);
        return vqsvgrenderer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSvgRenderer_Tr(const char* s) {
    QString _ret = QSvgRenderer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QSvgRenderer_IsValid(const QSvgRenderer* self) {
    return self->isValid();
}

QSize* QSvgRenderer_DefaultSize(const QSvgRenderer* self) {
    return new QSize(self->defaultSize());
}

QRect* QSvgRenderer_ViewBox(const QSvgRenderer* self) {
    return new QRect(self->viewBox());
}

QRectF* QSvgRenderer_ViewBoxF(const QSvgRenderer* self) {
    return new QRectF(self->viewBoxF());
}

void QSvgRenderer_SetViewBox(QSvgRenderer* self, QRect* viewbox) {
    self->setViewBox(*viewbox);
}

void QSvgRenderer_SetViewBoxWithViewbox(QSvgRenderer* self, QRectF* viewbox) {
    self->setViewBox(*viewbox);
}

int QSvgRenderer_AspectRatioMode(const QSvgRenderer* self) {
    return static_cast<int>(self->aspectRatioMode());
}

void QSvgRenderer_SetAspectRatioMode(QSvgRenderer* self, int mode) {
    self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

bool QSvgRenderer_Animated(const QSvgRenderer* self) {
    return self->animated();
}

int QSvgRenderer_FramesPerSecond(const QSvgRenderer* self) {
    return self->framesPerSecond();
}

void QSvgRenderer_SetFramesPerSecond(QSvgRenderer* self, int num) {
    self->setFramesPerSecond(static_cast<int>(num));
}

int QSvgRenderer_CurrentFrame(const QSvgRenderer* self) {
    return self->currentFrame();
}

void QSvgRenderer_SetCurrentFrame(QSvgRenderer* self, int currentFrame) {
    self->setCurrentFrame(static_cast<int>(currentFrame));
}

int QSvgRenderer_AnimationDuration(const QSvgRenderer* self) {
    return self->animationDuration();
}

QRectF* QSvgRenderer_BoundsOnElement(const QSvgRenderer* self, libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QRectF(self->boundsOnElement(id_QString));
}

bool QSvgRenderer_ElementExists(const QSvgRenderer* self, libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return self->elementExists(id_QString);
}

QTransform* QSvgRenderer_TransformForElement(const QSvgRenderer* self, libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    return new QTransform(self->transformForElement(id_QString));
}

bool QSvgRenderer_Load(QSvgRenderer* self, libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->load(filename_QString);
}

bool QSvgRenderer_LoadWithContents(QSvgRenderer* self, libqt_string contents) {
    QByteArray contents_QByteArray(contents.data, contents.len);
    return self->load(contents_QByteArray);
}

bool QSvgRenderer_Load2(QSvgRenderer* self, QXmlStreamReader* contents) {
    return self->load(contents);
}

void QSvgRenderer_Render(QSvgRenderer* self, QPainter* p) {
    self->render(p);
}

void QSvgRenderer_Render2(QSvgRenderer* self, QPainter* p, QRectF* bounds) {
    self->render(p, *bounds);
}

void QSvgRenderer_Render3(QSvgRenderer* self, QPainter* p, libqt_string elementId) {
    QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
    self->render(p, elementId_QString);
}

void QSvgRenderer_RepaintNeeded(QSvgRenderer* self) {
    self->repaintNeeded();
}

void QSvgRenderer_Connect_RepaintNeeded(QSvgRenderer* self, intptr_t slot) {
    void (*slotFunc)(QSvgRenderer*) = reinterpret_cast<void (*)(QSvgRenderer*)>(slot);
    QSvgRenderer::connect(self, &QSvgRenderer::repaintNeeded, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QSvgRenderer_Tr2(const char* s, const char* c) {
    QString _ret = QSvgRenderer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QSvgRenderer_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSvgRenderer::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QSvgRenderer_Render32(QSvgRenderer* self, QPainter* p, libqt_string elementId, QRectF* bounds) {
    QString elementId_QString = QString::fromUtf8(elementId.data, elementId.len);
    self->render(p, elementId_QString, *bounds);
}

// Derived class handler implementation
bool QSvgRenderer_Event(QSvgRenderer* self, QEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        return vqsvgrenderer->event(event);
    } else {
        return vqsvgrenderer->event(event);
    }
}

// Base class handler implementation
bool QSvgRenderer_QBaseEvent(QSvgRenderer* self, QEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_Event_IsBase(true);
        return vqsvgrenderer->event(event);
    } else {
        return vqsvgrenderer->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnEvent(QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_Event_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgRenderer_EventFilter(QSvgRenderer* self, QObject* watched, QEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        return vqsvgrenderer->eventFilter(watched, event);
    } else {
        return vqsvgrenderer->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSvgRenderer_QBaseEventFilter(QSvgRenderer* self, QObject* watched, QEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_EventFilter_IsBase(true);
        return vqsvgrenderer->eventFilter(watched, event);
    } else {
        return vqsvgrenderer->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnEventFilter(QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_EventFilter_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_TimerEvent(QSvgRenderer* self, QTimerEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->timerEvent(event);
    } else {
        vqsvgrenderer->timerEvent(event);
    }
}

// Base class handler implementation
void QSvgRenderer_QBaseTimerEvent(QSvgRenderer* self, QTimerEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_TimerEvent_IsBase(true);
        vqsvgrenderer->timerEvent(event);
    } else {
        vqsvgrenderer->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnTimerEvent(QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_TimerEvent_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_ChildEvent(QSvgRenderer* self, QChildEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->childEvent(event);
    } else {
        vqsvgrenderer->childEvent(event);
    }
}

// Base class handler implementation
void QSvgRenderer_QBaseChildEvent(QSvgRenderer* self, QChildEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_ChildEvent_IsBase(true);
        vqsvgrenderer->childEvent(event);
    } else {
        vqsvgrenderer->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnChildEvent(QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_ChildEvent_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_CustomEvent(QSvgRenderer* self, QEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->customEvent(event);
    } else {
        vqsvgrenderer->customEvent(event);
    }
}

// Base class handler implementation
void QSvgRenderer_QBaseCustomEvent(QSvgRenderer* self, QEvent* event) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_CustomEvent_IsBase(true);
        vqsvgrenderer->customEvent(event);
    } else {
        vqsvgrenderer->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnCustomEvent(QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_CustomEvent_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_ConnectNotify(QSvgRenderer* self, QMetaMethod* signal) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->connectNotify(*signal);
    } else {
        vqsvgrenderer->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSvgRenderer_QBaseConnectNotify(QSvgRenderer* self, QMetaMethod* signal) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_ConnectNotify_IsBase(true);
        vqsvgrenderer->connectNotify(*signal);
    } else {
        vqsvgrenderer->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnConnectNotify(QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_ConnectNotify_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSvgRenderer_DisconnectNotify(QSvgRenderer* self, QMetaMethod* signal) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->disconnectNotify(*signal);
    } else {
        vqsvgrenderer->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSvgRenderer_QBaseDisconnectNotify(QSvgRenderer* self, QMetaMethod* signal) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_DisconnectNotify_IsBase(true);
        vqsvgrenderer->disconnectNotify(*signal);
    } else {
        vqsvgrenderer->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnDisconnectNotify(QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = dynamic_cast<VirtualQSvgRenderer*>(self)) {
        vqsvgrenderer->setQSvgRenderer_DisconnectNotify_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSvgRenderer_Sender(const QSvgRenderer* self) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        return vqsvgrenderer->sender();
    } else {
        return vqsvgrenderer->sender();
    }
}

// Base class handler implementation
QObject* QSvgRenderer_QBaseSender(const QSvgRenderer* self) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        vqsvgrenderer->setQSvgRenderer_Sender_IsBase(true);
        return vqsvgrenderer->sender();
    } else {
        return vqsvgrenderer->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnSender(const QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        vqsvgrenderer->setQSvgRenderer_Sender_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgRenderer_SenderSignalIndex(const QSvgRenderer* self) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        return vqsvgrenderer->senderSignalIndex();
    } else {
        return vqsvgrenderer->senderSignalIndex();
    }
}

// Base class handler implementation
int QSvgRenderer_QBaseSenderSignalIndex(const QSvgRenderer* self) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        vqsvgrenderer->setQSvgRenderer_SenderSignalIndex_IsBase(true);
        return vqsvgrenderer->senderSignalIndex();
    } else {
        return vqsvgrenderer->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnSenderSignalIndex(const QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        vqsvgrenderer->setQSvgRenderer_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSvgRenderer_Receivers(const QSvgRenderer* self, const char* signal) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        return vqsvgrenderer->receivers(signal);
    } else {
        return vqsvgrenderer->receivers(signal);
    }
}

// Base class handler implementation
int QSvgRenderer_QBaseReceivers(const QSvgRenderer* self, const char* signal) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        vqsvgrenderer->setQSvgRenderer_Receivers_IsBase(true);
        return vqsvgrenderer->receivers(signal);
    } else {
        return vqsvgrenderer->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnReceivers(const QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        vqsvgrenderer->setQSvgRenderer_Receivers_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSvgRenderer_IsSignalConnected(const QSvgRenderer* self, QMetaMethod* signal) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        return vqsvgrenderer->isSignalConnected(*signal);
    } else {
        return vqsvgrenderer->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSvgRenderer_QBaseIsSignalConnected(const QSvgRenderer* self, QMetaMethod* signal) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        vqsvgrenderer->setQSvgRenderer_IsSignalConnected_IsBase(true);
        return vqsvgrenderer->isSignalConnected(*signal);
    } else {
        return vqsvgrenderer->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSvgRenderer_OnIsSignalConnected(const QSvgRenderer* self, intptr_t slot) {
    if (auto* vqsvgrenderer = const_cast<VirtualQSvgRenderer*>(dynamic_cast<const VirtualQSvgRenderer*>(self))) {
        vqsvgrenderer->setQSvgRenderer_IsSignalConnected_Callback(reinterpret_cast<VirtualQSvgRenderer::QSvgRenderer_IsSignalConnected_Callback>(slot));
    }
}

void QSvgRenderer_Delete(QSvgRenderer* self) {
    delete self;
}
