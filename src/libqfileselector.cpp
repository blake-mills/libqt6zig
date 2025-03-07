#include <QAnyStringView>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QFileSelector>
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
#include <QUrl>
#include <QVariant>
#include <qfileselector.h>
#include "libqfileselector.h"
#include "libqfileselector.hxx"

QFileSelector* QFileSelector_new() {
    return new VirtualQFileSelector();
}

QFileSelector* QFileSelector_new2(QObject* parent) {
    return new VirtualQFileSelector(parent);
}

QMetaObject* QFileSelector_MetaObject(const QFileSelector* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFileSelector_Metacast(QFileSelector* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFileSelector_Metacall(QFileSelector* self, int param1, int param2, void** param3) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QFileSelector_OnMetacall(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_Metacall_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QFileSelector_QBaseMetacall(QFileSelector* self, int param1, int param2, void** param3) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_Metacall_IsBase(true);
        return vqfileselector->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QFileSelector_Tr(const char* s) {
    QString _ret = QFileSelector::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileSelector_Select(const QFileSelector* self, libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    QString _ret = self->select(filePath_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QUrl* QFileSelector_SelectWithFilePath(const QFileSelector* self, QUrl* filePath) {
    return new QUrl(self->select(*filePath));
}

libqt_list /* of libqt_string */ QFileSelector_ExtraSelectors(const QFileSelector* self) {
    QStringList _ret = self->extraSelectors();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileSelector_SetExtraSelectors(QFileSelector* self, libqt_list /* of libqt_string */ list) {
    QStringList list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->setExtraSelectors(list_QList);
}

libqt_list /* of libqt_string */ QFileSelector_AllSelectors(const QFileSelector* self) {
    QStringList _ret = self->allSelectors();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QFileSelector_Tr2(const char* s, const char* c) {
    QString _ret = QFileSelector::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QFileSelector_Tr3(const char* s, const char* c, int n) {
    QString _ret = QFileSelector::tr(s, c, static_cast<int>(n));
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
bool QFileSelector_Event(QFileSelector* self, QEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        return vqfileselector->event(event);
    } else {
        return vqfileselector->event(event);
    }
}

// Base class handler implementation
bool QFileSelector_QBaseEvent(QFileSelector* self, QEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_Event_IsBase(true);
        return vqfileselector->event(event);
    } else {
        return vqfileselector->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnEvent(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_Event_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSelector_EventFilter(QFileSelector* self, QObject* watched, QEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        return vqfileselector->eventFilter(watched, event);
    } else {
        return vqfileselector->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QFileSelector_QBaseEventFilter(QFileSelector* self, QObject* watched, QEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_EventFilter_IsBase(true);
        return vqfileselector->eventFilter(watched, event);
    } else {
        return vqfileselector->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnEventFilter(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_EventFilter_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSelector_TimerEvent(QFileSelector* self, QTimerEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->timerEvent(event);
    } else {
        vqfileselector->timerEvent(event);
    }
}

// Base class handler implementation
void QFileSelector_QBaseTimerEvent(QFileSelector* self, QTimerEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_TimerEvent_IsBase(true);
        vqfileselector->timerEvent(event);
    } else {
        vqfileselector->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnTimerEvent(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_TimerEvent_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSelector_ChildEvent(QFileSelector* self, QChildEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->childEvent(event);
    } else {
        vqfileselector->childEvent(event);
    }
}

// Base class handler implementation
void QFileSelector_QBaseChildEvent(QFileSelector* self, QChildEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_ChildEvent_IsBase(true);
        vqfileselector->childEvent(event);
    } else {
        vqfileselector->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnChildEvent(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_ChildEvent_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSelector_CustomEvent(QFileSelector* self, QEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->customEvent(event);
    } else {
        vqfileselector->customEvent(event);
    }
}

// Base class handler implementation
void QFileSelector_QBaseCustomEvent(QFileSelector* self, QEvent* event) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_CustomEvent_IsBase(true);
        vqfileselector->customEvent(event);
    } else {
        vqfileselector->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnCustomEvent(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_CustomEvent_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSelector_ConnectNotify(QFileSelector* self, QMetaMethod* signal) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->connectNotify(*signal);
    } else {
        vqfileselector->connectNotify(*signal);
    }
}

// Base class handler implementation
void QFileSelector_QBaseConnectNotify(QFileSelector* self, QMetaMethod* signal) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_ConnectNotify_IsBase(true);
        vqfileselector->connectNotify(*signal);
    } else {
        vqfileselector->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnConnectNotify(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_ConnectNotify_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QFileSelector_DisconnectNotify(QFileSelector* self, QMetaMethod* signal) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->disconnectNotify(*signal);
    } else {
        vqfileselector->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QFileSelector_QBaseDisconnectNotify(QFileSelector* self, QMetaMethod* signal) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_DisconnectNotify_IsBase(true);
        vqfileselector->disconnectNotify(*signal);
    } else {
        vqfileselector->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnDisconnectNotify(QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = dynamic_cast<VirtualQFileSelector*>(self)) {
        vqfileselector->setQFileSelector_DisconnectNotify_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QFileSelector_Sender(const QFileSelector* self) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        return vqfileselector->sender();
    } else {
        return vqfileselector->sender();
    }
}

// Base class handler implementation
QObject* QFileSelector_QBaseSender(const QFileSelector* self) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        vqfileselector->setQFileSelector_Sender_IsBase(true);
        return vqfileselector->sender();
    } else {
        return vqfileselector->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnSender(const QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        vqfileselector->setQFileSelector_Sender_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileSelector_SenderSignalIndex(const QFileSelector* self) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        return vqfileselector->senderSignalIndex();
    } else {
        return vqfileselector->senderSignalIndex();
    }
}

// Base class handler implementation
int QFileSelector_QBaseSenderSignalIndex(const QFileSelector* self) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        vqfileselector->setQFileSelector_SenderSignalIndex_IsBase(true);
        return vqfileselector->senderSignalIndex();
    } else {
        return vqfileselector->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnSenderSignalIndex(const QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        vqfileselector->setQFileSelector_SenderSignalIndex_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QFileSelector_Receivers(const QFileSelector* self, const char* signal) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        return vqfileselector->receivers(signal);
    } else {
        return vqfileselector->receivers(signal);
    }
}

// Base class handler implementation
int QFileSelector_QBaseReceivers(const QFileSelector* self, const char* signal) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        vqfileselector->setQFileSelector_Receivers_IsBase(true);
        return vqfileselector->receivers(signal);
    } else {
        return vqfileselector->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnReceivers(const QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        vqfileselector->setQFileSelector_Receivers_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QFileSelector_IsSignalConnected(const QFileSelector* self, QMetaMethod* signal) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        return vqfileselector->isSignalConnected(*signal);
    } else {
        return vqfileselector->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QFileSelector_QBaseIsSignalConnected(const QFileSelector* self, QMetaMethod* signal) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        vqfileselector->setQFileSelector_IsSignalConnected_IsBase(true);
        return vqfileselector->isSignalConnected(*signal);
    } else {
        return vqfileselector->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QFileSelector_OnIsSignalConnected(const QFileSelector* self, intptr_t slot) {
    if (auto* vqfileselector = const_cast<VirtualQFileSelector*>(dynamic_cast<const VirtualQFileSelector*>(self))) {
        vqfileselector->setQFileSelector_IsSignalConnected_Callback(reinterpret_cast<VirtualQFileSelector::QFileSelector_IsSignalConnected_Callback>(slot));
    }
}

void QFileSelector_Delete(QFileSelector* self) {
    delete self;
}
