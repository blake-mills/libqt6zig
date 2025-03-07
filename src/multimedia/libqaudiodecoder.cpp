#include <QAnyStringView>
#include <QAudioBuffer>
#include <QAudioDecoder>
#include <QAudioFormat>
#include <QBindingStorage>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
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
#include <qaudiodecoder.h>
#include "libqaudiodecoder.h"
#include "libqaudiodecoder.hxx"

QAudioDecoder* QAudioDecoder_new() {
    return new VirtualQAudioDecoder();
}

QAudioDecoder* QAudioDecoder_new2(QObject* parent) {
    return new VirtualQAudioDecoder(parent);
}

QMetaObject* QAudioDecoder_MetaObject(const QAudioDecoder* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAudioDecoder_Metacast(QAudioDecoder* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAudioDecoder_Metacall(QAudioDecoder* self, int param1, int param2, void** param3) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QAudioDecoder_OnMetacall(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_Metacall_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QAudioDecoder_QBaseMetacall(QAudioDecoder* self, int param1, int param2, void** param3) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_Metacall_IsBase(true);
        return vqaudiodecoder->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QAudioDecoder_Tr(const char* s) {
    QString _ret = QAudioDecoder::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

bool QAudioDecoder_IsSupported(const QAudioDecoder* self) {
    return self->isSupported();
}

bool QAudioDecoder_IsDecoding(const QAudioDecoder* self) {
    return self->isDecoding();
}

QUrl* QAudioDecoder_Source(const QAudioDecoder* self) {
    return new QUrl(self->source());
}

void QAudioDecoder_SetSource(QAudioDecoder* self, QUrl* fileName) {
    self->setSource(*fileName);
}

QIODevice* QAudioDecoder_SourceDevice(const QAudioDecoder* self) {
    return self->sourceDevice();
}

void QAudioDecoder_SetSourceDevice(QAudioDecoder* self, QIODevice* device) {
    self->setSourceDevice(device);
}

QAudioFormat* QAudioDecoder_AudioFormat(const QAudioDecoder* self) {
    return new QAudioFormat(self->audioFormat());
}

void QAudioDecoder_SetAudioFormat(QAudioDecoder* self, QAudioFormat* format) {
    self->setAudioFormat(*format);
}

int QAudioDecoder_Error(const QAudioDecoder* self) {
    return static_cast<int>(self->error());
}

libqt_string QAudioDecoder_ErrorString(const QAudioDecoder* self) {
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

QAudioBuffer* QAudioDecoder_Read(const QAudioDecoder* self) {
    return new QAudioBuffer(self->read());
}

bool QAudioDecoder_BufferAvailable(const QAudioDecoder* self) {
    return self->bufferAvailable();
}

long long QAudioDecoder_Position(const QAudioDecoder* self) {
    return static_cast<long long>(self->position());
}

long long QAudioDecoder_Duration(const QAudioDecoder* self) {
    return static_cast<long long>(self->duration());
}

void QAudioDecoder_Start(QAudioDecoder* self) {
    self->start();
}

void QAudioDecoder_Stop(QAudioDecoder* self) {
    self->stop();
}

void QAudioDecoder_BufferAvailableChanged(QAudioDecoder* self, bool param1) {
    self->bufferAvailableChanged(param1);
}

void QAudioDecoder_BufferReady(QAudioDecoder* self) {
    self->bufferReady();
}

void QAudioDecoder_Finished(QAudioDecoder* self) {
    self->finished();
}

void QAudioDecoder_IsDecodingChanged(QAudioDecoder* self, bool param1) {
    self->isDecodingChanged(param1);
}

void QAudioDecoder_FormatChanged(QAudioDecoder* self, QAudioFormat* format) {
    self->formatChanged(*format);
}

void QAudioDecoder_ErrorWithErrorVal(QAudioDecoder* self, int errorVal) {
    self->error(static_cast<QAudioDecoder::Error>(errorVal));
}

void QAudioDecoder_SourceChanged(QAudioDecoder* self) {
    self->sourceChanged();
}

void QAudioDecoder_PositionChanged(QAudioDecoder* self, long long position) {
    self->positionChanged(static_cast<qint64>(position));
}

void QAudioDecoder_DurationChanged(QAudioDecoder* self, long long duration) {
    self->durationChanged(static_cast<qint64>(duration));
}

libqt_string QAudioDecoder_Tr2(const char* s, const char* c) {
    QString _ret = QAudioDecoder::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAudioDecoder_Tr3(const char* s, const char* c, int n) {
    QString _ret = QAudioDecoder::tr(s, c, static_cast<int>(n));
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
bool QAudioDecoder_Event(QAudioDecoder* self, QEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        return vqaudiodecoder->event(event);
    } else {
        return vqaudiodecoder->event(event);
    }
}

// Base class handler implementation
bool QAudioDecoder_QBaseEvent(QAudioDecoder* self, QEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_Event_IsBase(true);
        return vqaudiodecoder->event(event);
    } else {
        return vqaudiodecoder->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnEvent(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_Event_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioDecoder_EventFilter(QAudioDecoder* self, QObject* watched, QEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        return vqaudiodecoder->eventFilter(watched, event);
    } else {
        return vqaudiodecoder->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QAudioDecoder_QBaseEventFilter(QAudioDecoder* self, QObject* watched, QEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_EventFilter_IsBase(true);
        return vqaudiodecoder->eventFilter(watched, event);
    } else {
        return vqaudiodecoder->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnEventFilter(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_EventFilter_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioDecoder_TimerEvent(QAudioDecoder* self, QTimerEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->timerEvent(event);
    } else {
        vqaudiodecoder->timerEvent(event);
    }
}

// Base class handler implementation
void QAudioDecoder_QBaseTimerEvent(QAudioDecoder* self, QTimerEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_TimerEvent_IsBase(true);
        vqaudiodecoder->timerEvent(event);
    } else {
        vqaudiodecoder->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnTimerEvent(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_TimerEvent_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioDecoder_ChildEvent(QAudioDecoder* self, QChildEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->childEvent(event);
    } else {
        vqaudiodecoder->childEvent(event);
    }
}

// Base class handler implementation
void QAudioDecoder_QBaseChildEvent(QAudioDecoder* self, QChildEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_ChildEvent_IsBase(true);
        vqaudiodecoder->childEvent(event);
    } else {
        vqaudiodecoder->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnChildEvent(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_ChildEvent_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioDecoder_CustomEvent(QAudioDecoder* self, QEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->customEvent(event);
    } else {
        vqaudiodecoder->customEvent(event);
    }
}

// Base class handler implementation
void QAudioDecoder_QBaseCustomEvent(QAudioDecoder* self, QEvent* event) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_CustomEvent_IsBase(true);
        vqaudiodecoder->customEvent(event);
    } else {
        vqaudiodecoder->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnCustomEvent(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_CustomEvent_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioDecoder_ConnectNotify(QAudioDecoder* self, QMetaMethod* signal) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->connectNotify(*signal);
    } else {
        vqaudiodecoder->connectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioDecoder_QBaseConnectNotify(QAudioDecoder* self, QMetaMethod* signal) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_ConnectNotify_IsBase(true);
        vqaudiodecoder->connectNotify(*signal);
    } else {
        vqaudiodecoder->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnConnectNotify(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_ConnectNotify_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QAudioDecoder_DisconnectNotify(QAudioDecoder* self, QMetaMethod* signal) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->disconnectNotify(*signal);
    } else {
        vqaudiodecoder->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QAudioDecoder_QBaseDisconnectNotify(QAudioDecoder* self, QMetaMethod* signal) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_DisconnectNotify_IsBase(true);
        vqaudiodecoder->disconnectNotify(*signal);
    } else {
        vqaudiodecoder->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnDisconnectNotify(QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = dynamic_cast<VirtualQAudioDecoder*>(self)) {
        vqaudiodecoder->setQAudioDecoder_DisconnectNotify_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QAudioDecoder_Sender(const QAudioDecoder* self) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        return vqaudiodecoder->sender();
    } else {
        return vqaudiodecoder->sender();
    }
}

// Base class handler implementation
QObject* QAudioDecoder_QBaseSender(const QAudioDecoder* self) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        vqaudiodecoder->setQAudioDecoder_Sender_IsBase(true);
        return vqaudiodecoder->sender();
    } else {
        return vqaudiodecoder->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnSender(const QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        vqaudiodecoder->setQAudioDecoder_Sender_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioDecoder_SenderSignalIndex(const QAudioDecoder* self) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        return vqaudiodecoder->senderSignalIndex();
    } else {
        return vqaudiodecoder->senderSignalIndex();
    }
}

// Base class handler implementation
int QAudioDecoder_QBaseSenderSignalIndex(const QAudioDecoder* self) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        vqaudiodecoder->setQAudioDecoder_SenderSignalIndex_IsBase(true);
        return vqaudiodecoder->senderSignalIndex();
    } else {
        return vqaudiodecoder->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnSenderSignalIndex(const QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        vqaudiodecoder->setQAudioDecoder_SenderSignalIndex_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QAudioDecoder_Receivers(const QAudioDecoder* self, const char* signal) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        return vqaudiodecoder->receivers(signal);
    } else {
        return vqaudiodecoder->receivers(signal);
    }
}

// Base class handler implementation
int QAudioDecoder_QBaseReceivers(const QAudioDecoder* self, const char* signal) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        vqaudiodecoder->setQAudioDecoder_Receivers_IsBase(true);
        return vqaudiodecoder->receivers(signal);
    } else {
        return vqaudiodecoder->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnReceivers(const QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        vqaudiodecoder->setQAudioDecoder_Receivers_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QAudioDecoder_IsSignalConnected(const QAudioDecoder* self, QMetaMethod* signal) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        return vqaudiodecoder->isSignalConnected(*signal);
    } else {
        return vqaudiodecoder->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QAudioDecoder_QBaseIsSignalConnected(const QAudioDecoder* self, QMetaMethod* signal) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        vqaudiodecoder->setQAudioDecoder_IsSignalConnected_IsBase(true);
        return vqaudiodecoder->isSignalConnected(*signal);
    } else {
        return vqaudiodecoder->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QAudioDecoder_OnIsSignalConnected(const QAudioDecoder* self, intptr_t slot) {
    if (auto* vqaudiodecoder = const_cast<VirtualQAudioDecoder*>(dynamic_cast<const VirtualQAudioDecoder*>(self))) {
        vqaudiodecoder->setQAudioDecoder_IsSignalConnected_Callback(reinterpret_cast<VirtualQAudioDecoder::QAudioDecoder_IsSignalConnected_Callback>(slot));
    }
}

void QAudioDecoder_Delete(QAudioDecoder* self) {
    delete self;
}
