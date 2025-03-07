#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QLibrary>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
#include <qlibrary.h>
#include "libqlibrary.h"
#include "libqlibrary.hxx"

QLibrary* QLibrary_new() {
    return new VirtualQLibrary();
}

QLibrary* QLibrary_new2(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQLibrary(fileName_QString);
}

QLibrary* QLibrary_new3(libqt_string fileName, int verNum) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQLibrary(fileName_QString, static_cast<int>(verNum));
}

QLibrary* QLibrary_new4(libqt_string fileName, libqt_string version) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return new VirtualQLibrary(fileName_QString, version_QString);
}

QLibrary* QLibrary_new5(QObject* parent) {
    return new VirtualQLibrary(parent);
}

QLibrary* QLibrary_new6(libqt_string fileName, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQLibrary(fileName_QString, parent);
}

QLibrary* QLibrary_new7(libqt_string fileName, int verNum, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return new VirtualQLibrary(fileName_QString, static_cast<int>(verNum), parent);
}

QLibrary* QLibrary_new8(libqt_string fileName, libqt_string version, QObject* parent) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    return new VirtualQLibrary(fileName_QString, version_QString, parent);
}

QMetaObject* QLibrary_MetaObject(const QLibrary* self) {
    return (QMetaObject*)self->metaObject();
}

void* QLibrary_Metacast(QLibrary* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QLibrary_Metacall(QLibrary* self, int param1, int param2, void** param3) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QLibrary_OnMetacall(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_Metacall_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QLibrary_QBaseMetacall(QLibrary* self, int param1, int param2, void** param3) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_Metacall_IsBase(true);
        return vqlibrary->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QLibrary_Tr(const char* s) {
    QString _ret = QLibrary::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QLibrary_Load(QLibrary* self) {
    return self->load();
}

bool QLibrary_Unload(QLibrary* self) {
    return self->unload();
}

bool QLibrary_IsLoaded(const QLibrary* self) {
    return self->isLoaded();
}

bool QLibrary_IsLibrary(libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    return QLibrary::isLibrary(fileName_QString);
}

void QLibrary_SetFileName(QLibrary* self, libqt_string fileName) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileName(fileName_QString);
}

libqt_string QLibrary_FileName(const QLibrary* self) {
    QString _ret = self->fileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLibrary_SetFileNameAndVersion(QLibrary* self, libqt_string fileName, int verNum) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->setFileNameAndVersion(fileName_QString, static_cast<int>(verNum));
}

void QLibrary_SetFileNameAndVersion2(QLibrary* self, libqt_string fileName, libqt_string version) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    QString version_QString = QString::fromUtf8(version.data, version.len);
    self->setFileNameAndVersion(fileName_QString, version_QString);
}

libqt_string QLibrary_ErrorString(const QLibrary* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QLibrary_SetLoadHints(QLibrary* self, int hints) {
    self->setLoadHints(static_cast<QLibrary::LoadHints>(hints));
}

int QLibrary_LoadHints(const QLibrary* self) {
    return static_cast<int>(self->loadHints());
}

libqt_string QLibrary_Tr2(const char* s, const char* c) {
    QString _ret = QLibrary::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QLibrary_Tr3(const char* s, const char* c, int n) {
    QString _ret = QLibrary::tr(s, c, static_cast<int>(n));
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
bool QLibrary_Event(QLibrary* self, QEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        return vqlibrary->event(event);
    } else {
        return vqlibrary->event(event);
    }
}

// Base class handler implementation
bool QLibrary_QBaseEvent(QLibrary* self, QEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_Event_IsBase(true);
        return vqlibrary->event(event);
    } else {
        return vqlibrary->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnEvent(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_Event_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLibrary_EventFilter(QLibrary* self, QObject* watched, QEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        return vqlibrary->eventFilter(watched, event);
    } else {
        return vqlibrary->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QLibrary_QBaseEventFilter(QLibrary* self, QObject* watched, QEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_EventFilter_IsBase(true);
        return vqlibrary->eventFilter(watched, event);
    } else {
        return vqlibrary->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnEventFilter(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_EventFilter_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_TimerEvent(QLibrary* self, QTimerEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->timerEvent(event);
    } else {
        vqlibrary->timerEvent(event);
    }
}

// Base class handler implementation
void QLibrary_QBaseTimerEvent(QLibrary* self, QTimerEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_TimerEvent_IsBase(true);
        vqlibrary->timerEvent(event);
    } else {
        vqlibrary->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnTimerEvent(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_TimerEvent_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_ChildEvent(QLibrary* self, QChildEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->childEvent(event);
    } else {
        vqlibrary->childEvent(event);
    }
}

// Base class handler implementation
void QLibrary_QBaseChildEvent(QLibrary* self, QChildEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_ChildEvent_IsBase(true);
        vqlibrary->childEvent(event);
    } else {
        vqlibrary->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnChildEvent(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_ChildEvent_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_CustomEvent(QLibrary* self, QEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->customEvent(event);
    } else {
        vqlibrary->customEvent(event);
    }
}

// Base class handler implementation
void QLibrary_QBaseCustomEvent(QLibrary* self, QEvent* event) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_CustomEvent_IsBase(true);
        vqlibrary->customEvent(event);
    } else {
        vqlibrary->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnCustomEvent(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_CustomEvent_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_ConnectNotify(QLibrary* self, QMetaMethod* signal) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->connectNotify(*signal);
    } else {
        vqlibrary->connectNotify(*signal);
    }
}

// Base class handler implementation
void QLibrary_QBaseConnectNotify(QLibrary* self, QMetaMethod* signal) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_ConnectNotify_IsBase(true);
        vqlibrary->connectNotify(*signal);
    } else {
        vqlibrary->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnConnectNotify(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_ConnectNotify_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QLibrary_DisconnectNotify(QLibrary* self, QMetaMethod* signal) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->disconnectNotify(*signal);
    } else {
        vqlibrary->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QLibrary_QBaseDisconnectNotify(QLibrary* self, QMetaMethod* signal) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_DisconnectNotify_IsBase(true);
        vqlibrary->disconnectNotify(*signal);
    } else {
        vqlibrary->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnDisconnectNotify(QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = dynamic_cast<VirtualQLibrary*>(self)) {
        vqlibrary->setQLibrary_DisconnectNotify_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QLibrary_Sender(const QLibrary* self) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        return vqlibrary->sender();
    } else {
        return vqlibrary->sender();
    }
}

// Base class handler implementation
QObject* QLibrary_QBaseSender(const QLibrary* self) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        vqlibrary->setQLibrary_Sender_IsBase(true);
        return vqlibrary->sender();
    } else {
        return vqlibrary->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnSender(const QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        vqlibrary->setQLibrary_Sender_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QLibrary_SenderSignalIndex(const QLibrary* self) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        return vqlibrary->senderSignalIndex();
    } else {
        return vqlibrary->senderSignalIndex();
    }
}

// Base class handler implementation
int QLibrary_QBaseSenderSignalIndex(const QLibrary* self) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        vqlibrary->setQLibrary_SenderSignalIndex_IsBase(true);
        return vqlibrary->senderSignalIndex();
    } else {
        return vqlibrary->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnSenderSignalIndex(const QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        vqlibrary->setQLibrary_SenderSignalIndex_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QLibrary_Receivers(const QLibrary* self, const char* signal) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        return vqlibrary->receivers(signal);
    } else {
        return vqlibrary->receivers(signal);
    }
}

// Base class handler implementation
int QLibrary_QBaseReceivers(const QLibrary* self, const char* signal) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        vqlibrary->setQLibrary_Receivers_IsBase(true);
        return vqlibrary->receivers(signal);
    } else {
        return vqlibrary->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnReceivers(const QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        vqlibrary->setQLibrary_Receivers_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QLibrary_IsSignalConnected(const QLibrary* self, QMetaMethod* signal) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        return vqlibrary->isSignalConnected(*signal);
    } else {
        return vqlibrary->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QLibrary_QBaseIsSignalConnected(const QLibrary* self, QMetaMethod* signal) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        vqlibrary->setQLibrary_IsSignalConnected_IsBase(true);
        return vqlibrary->isSignalConnected(*signal);
    } else {
        return vqlibrary->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QLibrary_OnIsSignalConnected(const QLibrary* self, intptr_t slot) {
    if (auto* vqlibrary = const_cast<VirtualQLibrary*>(dynamic_cast<const VirtualQLibrary*>(self))) {
        vqlibrary->setQLibrary_IsSignalConnected_Callback(reinterpret_cast<VirtualQLibrary::QLibrary_IsSignalConnected_Callback>(slot));
    }
}

void QLibrary_Delete(QLibrary* self) {
    delete self;
}
