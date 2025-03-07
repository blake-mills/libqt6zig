#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQDTLS_H
#define SRC_NETWORKC_LIBVIRTUALQDTLS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDtlsClientVerifier so that we can call protected methods
class VirtualQDtlsClientVerifier : public QDtlsClientVerifier {

  public:
    // Virtual class public types (including callbacks)
    using QDtlsClientVerifier_Metacall_Callback = int (*)(QDtlsClientVerifier*, QMetaObject::Call, int, void**);
    using QDtlsClientVerifier_Event_Callback = bool (*)(QDtlsClientVerifier*, QEvent*);
    using QDtlsClientVerifier_EventFilter_Callback = bool (*)(QDtlsClientVerifier*, QObject*, QEvent*);
    using QDtlsClientVerifier_TimerEvent_Callback = void (*)(QDtlsClientVerifier*, QTimerEvent*);
    using QDtlsClientVerifier_ChildEvent_Callback = void (*)(QDtlsClientVerifier*, QChildEvent*);
    using QDtlsClientVerifier_CustomEvent_Callback = void (*)(QDtlsClientVerifier*, QEvent*);
    using QDtlsClientVerifier_ConnectNotify_Callback = void (*)(QDtlsClientVerifier*, const QMetaMethod&);
    using QDtlsClientVerifier_DisconnectNotify_Callback = void (*)(QDtlsClientVerifier*, const QMetaMethod&);
    using QDtlsClientVerifier_Sender_Callback = QObject* (*)();
    using QDtlsClientVerifier_SenderSignalIndex_Callback = int (*)();
    using QDtlsClientVerifier_Receivers_Callback = int (*)(const QDtlsClientVerifier*, const char*);
    using QDtlsClientVerifier_IsSignalConnected_Callback = bool (*)(const QDtlsClientVerifier*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDtlsClientVerifier_Metacall_Callback qdtlsclientverifier_metacall_callback = nullptr;
    QDtlsClientVerifier_Event_Callback qdtlsclientverifier_event_callback = nullptr;
    QDtlsClientVerifier_EventFilter_Callback qdtlsclientverifier_eventfilter_callback = nullptr;
    QDtlsClientVerifier_TimerEvent_Callback qdtlsclientverifier_timerevent_callback = nullptr;
    QDtlsClientVerifier_ChildEvent_Callback qdtlsclientverifier_childevent_callback = nullptr;
    QDtlsClientVerifier_CustomEvent_Callback qdtlsclientverifier_customevent_callback = nullptr;
    QDtlsClientVerifier_ConnectNotify_Callback qdtlsclientverifier_connectnotify_callback = nullptr;
    QDtlsClientVerifier_DisconnectNotify_Callback qdtlsclientverifier_disconnectnotify_callback = nullptr;
    QDtlsClientVerifier_Sender_Callback qdtlsclientverifier_sender_callback = nullptr;
    QDtlsClientVerifier_SenderSignalIndex_Callback qdtlsclientverifier_sendersignalindex_callback = nullptr;
    QDtlsClientVerifier_Receivers_Callback qdtlsclientverifier_receivers_callback = nullptr;
    QDtlsClientVerifier_IsSignalConnected_Callback qdtlsclientverifier_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdtlsclientverifier_metacall_isbase = false;
    mutable bool qdtlsclientverifier_event_isbase = false;
    mutable bool qdtlsclientverifier_eventfilter_isbase = false;
    mutable bool qdtlsclientverifier_timerevent_isbase = false;
    mutable bool qdtlsclientverifier_childevent_isbase = false;
    mutable bool qdtlsclientverifier_customevent_isbase = false;
    mutable bool qdtlsclientverifier_connectnotify_isbase = false;
    mutable bool qdtlsclientverifier_disconnectnotify_isbase = false;
    mutable bool qdtlsclientverifier_sender_isbase = false;
    mutable bool qdtlsclientverifier_sendersignalindex_isbase = false;
    mutable bool qdtlsclientverifier_receivers_isbase = false;
    mutable bool qdtlsclientverifier_issignalconnected_isbase = false;

  public:
    VirtualQDtlsClientVerifier() : QDtlsClientVerifier(){};
    VirtualQDtlsClientVerifier(QObject* parent) : QDtlsClientVerifier(parent){};

    ~VirtualQDtlsClientVerifier() {
        qdtlsclientverifier_metacall_callback = nullptr;
        qdtlsclientverifier_event_callback = nullptr;
        qdtlsclientverifier_eventfilter_callback = nullptr;
        qdtlsclientverifier_timerevent_callback = nullptr;
        qdtlsclientverifier_childevent_callback = nullptr;
        qdtlsclientverifier_customevent_callback = nullptr;
        qdtlsclientverifier_connectnotify_callback = nullptr;
        qdtlsclientverifier_disconnectnotify_callback = nullptr;
        qdtlsclientverifier_sender_callback = nullptr;
        qdtlsclientverifier_sendersignalindex_callback = nullptr;
        qdtlsclientverifier_receivers_callback = nullptr;
        qdtlsclientverifier_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDtlsClientVerifier_Metacall_Callback(QDtlsClientVerifier_Metacall_Callback cb) { qdtlsclientverifier_metacall_callback = cb; }
    void setQDtlsClientVerifier_Event_Callback(QDtlsClientVerifier_Event_Callback cb) { qdtlsclientverifier_event_callback = cb; }
    void setQDtlsClientVerifier_EventFilter_Callback(QDtlsClientVerifier_EventFilter_Callback cb) { qdtlsclientverifier_eventfilter_callback = cb; }
    void setQDtlsClientVerifier_TimerEvent_Callback(QDtlsClientVerifier_TimerEvent_Callback cb) { qdtlsclientverifier_timerevent_callback = cb; }
    void setQDtlsClientVerifier_ChildEvent_Callback(QDtlsClientVerifier_ChildEvent_Callback cb) { qdtlsclientverifier_childevent_callback = cb; }
    void setQDtlsClientVerifier_CustomEvent_Callback(QDtlsClientVerifier_CustomEvent_Callback cb) { qdtlsclientverifier_customevent_callback = cb; }
    void setQDtlsClientVerifier_ConnectNotify_Callback(QDtlsClientVerifier_ConnectNotify_Callback cb) { qdtlsclientverifier_connectnotify_callback = cb; }
    void setQDtlsClientVerifier_DisconnectNotify_Callback(QDtlsClientVerifier_DisconnectNotify_Callback cb) { qdtlsclientverifier_disconnectnotify_callback = cb; }
    void setQDtlsClientVerifier_Sender_Callback(QDtlsClientVerifier_Sender_Callback cb) { qdtlsclientverifier_sender_callback = cb; }
    void setQDtlsClientVerifier_SenderSignalIndex_Callback(QDtlsClientVerifier_SenderSignalIndex_Callback cb) { qdtlsclientverifier_sendersignalindex_callback = cb; }
    void setQDtlsClientVerifier_Receivers_Callback(QDtlsClientVerifier_Receivers_Callback cb) { qdtlsclientverifier_receivers_callback = cb; }
    void setQDtlsClientVerifier_IsSignalConnected_Callback(QDtlsClientVerifier_IsSignalConnected_Callback cb) { qdtlsclientverifier_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDtlsClientVerifier_Metacall_IsBase(bool value) const { qdtlsclientverifier_metacall_isbase = value; }
    void setQDtlsClientVerifier_Event_IsBase(bool value) const { qdtlsclientverifier_event_isbase = value; }
    void setQDtlsClientVerifier_EventFilter_IsBase(bool value) const { qdtlsclientverifier_eventfilter_isbase = value; }
    void setQDtlsClientVerifier_TimerEvent_IsBase(bool value) const { qdtlsclientverifier_timerevent_isbase = value; }
    void setQDtlsClientVerifier_ChildEvent_IsBase(bool value) const { qdtlsclientverifier_childevent_isbase = value; }
    void setQDtlsClientVerifier_CustomEvent_IsBase(bool value) const { qdtlsclientverifier_customevent_isbase = value; }
    void setQDtlsClientVerifier_ConnectNotify_IsBase(bool value) const { qdtlsclientverifier_connectnotify_isbase = value; }
    void setQDtlsClientVerifier_DisconnectNotify_IsBase(bool value) const { qdtlsclientverifier_disconnectnotify_isbase = value; }
    void setQDtlsClientVerifier_Sender_IsBase(bool value) const { qdtlsclientverifier_sender_isbase = value; }
    void setQDtlsClientVerifier_SenderSignalIndex_IsBase(bool value) const { qdtlsclientverifier_sendersignalindex_isbase = value; }
    void setQDtlsClientVerifier_Receivers_IsBase(bool value) const { qdtlsclientverifier_receivers_isbase = value; }
    void setQDtlsClientVerifier_IsSignalConnected_IsBase(bool value) const { qdtlsclientverifier_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdtlsclientverifier_metacall_isbase) {
            qdtlsclientverifier_metacall_isbase = false;
            return QDtlsClientVerifier::qt_metacall(param1, param2, param3);
        } else if (qdtlsclientverifier_metacall_callback != nullptr) {
            return qdtlsclientverifier_metacall_callback(this, param1, param2, param3);
        } else {
            return QDtlsClientVerifier::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdtlsclientverifier_event_isbase) {
            qdtlsclientverifier_event_isbase = false;
            return QDtlsClientVerifier::event(event);
        } else if (qdtlsclientverifier_event_callback != nullptr) {
            return qdtlsclientverifier_event_callback(this, event);
        } else {
            return QDtlsClientVerifier::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdtlsclientverifier_eventfilter_isbase) {
            qdtlsclientverifier_eventfilter_isbase = false;
            return QDtlsClientVerifier::eventFilter(watched, event);
        } else if (qdtlsclientverifier_eventfilter_callback != nullptr) {
            return qdtlsclientverifier_eventfilter_callback(this, watched, event);
        } else {
            return QDtlsClientVerifier::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdtlsclientverifier_timerevent_isbase) {
            qdtlsclientverifier_timerevent_isbase = false;
            QDtlsClientVerifier::timerEvent(event);
        } else if (qdtlsclientverifier_timerevent_callback != nullptr) {
            qdtlsclientverifier_timerevent_callback(this, event);
        } else {
            QDtlsClientVerifier::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdtlsclientverifier_childevent_isbase) {
            qdtlsclientverifier_childevent_isbase = false;
            QDtlsClientVerifier::childEvent(event);
        } else if (qdtlsclientverifier_childevent_callback != nullptr) {
            qdtlsclientverifier_childevent_callback(this, event);
        } else {
            QDtlsClientVerifier::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdtlsclientverifier_customevent_isbase) {
            qdtlsclientverifier_customevent_isbase = false;
            QDtlsClientVerifier::customEvent(event);
        } else if (qdtlsclientverifier_customevent_callback != nullptr) {
            qdtlsclientverifier_customevent_callback(this, event);
        } else {
            QDtlsClientVerifier::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdtlsclientverifier_connectnotify_isbase) {
            qdtlsclientverifier_connectnotify_isbase = false;
            QDtlsClientVerifier::connectNotify(signal);
        } else if (qdtlsclientverifier_connectnotify_callback != nullptr) {
            qdtlsclientverifier_connectnotify_callback(this, signal);
        } else {
            QDtlsClientVerifier::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdtlsclientverifier_disconnectnotify_isbase) {
            qdtlsclientverifier_disconnectnotify_isbase = false;
            QDtlsClientVerifier::disconnectNotify(signal);
        } else if (qdtlsclientverifier_disconnectnotify_callback != nullptr) {
            qdtlsclientverifier_disconnectnotify_callback(this, signal);
        } else {
            QDtlsClientVerifier::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdtlsclientverifier_sender_isbase) {
            qdtlsclientverifier_sender_isbase = false;
            return QDtlsClientVerifier::sender();
        } else if (qdtlsclientverifier_sender_callback != nullptr) {
            return qdtlsclientverifier_sender_callback();
        } else {
            return QDtlsClientVerifier::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdtlsclientverifier_sendersignalindex_isbase) {
            qdtlsclientverifier_sendersignalindex_isbase = false;
            return QDtlsClientVerifier::senderSignalIndex();
        } else if (qdtlsclientverifier_sendersignalindex_callback != nullptr) {
            return qdtlsclientverifier_sendersignalindex_callback();
        } else {
            return QDtlsClientVerifier::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdtlsclientverifier_receivers_isbase) {
            qdtlsclientverifier_receivers_isbase = false;
            return QDtlsClientVerifier::receivers(signal);
        } else if (qdtlsclientverifier_receivers_callback != nullptr) {
            return qdtlsclientverifier_receivers_callback(this, signal);
        } else {
            return QDtlsClientVerifier::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdtlsclientverifier_issignalconnected_isbase) {
            qdtlsclientverifier_issignalconnected_isbase = false;
            return QDtlsClientVerifier::isSignalConnected(signal);
        } else if (qdtlsclientverifier_issignalconnected_callback != nullptr) {
            return qdtlsclientverifier_issignalconnected_callback(this, signal);
        } else {
            return QDtlsClientVerifier::isSignalConnected(signal);
        }
    }
};

// This class is a subclass of QDtls so that we can call protected methods
class VirtualQDtls : public QDtls {

  public:
    // Virtual class public types (including callbacks)
    using QDtls_Metacall_Callback = int (*)(QDtls*, QMetaObject::Call, int, void**);
    using QDtls_Event_Callback = bool (*)(QDtls*, QEvent*);
    using QDtls_EventFilter_Callback = bool (*)(QDtls*, QObject*, QEvent*);
    using QDtls_TimerEvent_Callback = void (*)(QDtls*, QTimerEvent*);
    using QDtls_ChildEvent_Callback = void (*)(QDtls*, QChildEvent*);
    using QDtls_CustomEvent_Callback = void (*)(QDtls*, QEvent*);
    using QDtls_ConnectNotify_Callback = void (*)(QDtls*, const QMetaMethod&);
    using QDtls_DisconnectNotify_Callback = void (*)(QDtls*, const QMetaMethod&);
    using QDtls_Sender_Callback = QObject* (*)();
    using QDtls_SenderSignalIndex_Callback = int (*)();
    using QDtls_Receivers_Callback = int (*)(const QDtls*, const char*);
    using QDtls_IsSignalConnected_Callback = bool (*)(const QDtls*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QDtls_Metacall_Callback qdtls_metacall_callback = nullptr;
    QDtls_Event_Callback qdtls_event_callback = nullptr;
    QDtls_EventFilter_Callback qdtls_eventfilter_callback = nullptr;
    QDtls_TimerEvent_Callback qdtls_timerevent_callback = nullptr;
    QDtls_ChildEvent_Callback qdtls_childevent_callback = nullptr;
    QDtls_CustomEvent_Callback qdtls_customevent_callback = nullptr;
    QDtls_ConnectNotify_Callback qdtls_connectnotify_callback = nullptr;
    QDtls_DisconnectNotify_Callback qdtls_disconnectnotify_callback = nullptr;
    QDtls_Sender_Callback qdtls_sender_callback = nullptr;
    QDtls_SenderSignalIndex_Callback qdtls_sendersignalindex_callback = nullptr;
    QDtls_Receivers_Callback qdtls_receivers_callback = nullptr;
    QDtls_IsSignalConnected_Callback qdtls_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qdtls_metacall_isbase = false;
    mutable bool qdtls_event_isbase = false;
    mutable bool qdtls_eventfilter_isbase = false;
    mutable bool qdtls_timerevent_isbase = false;
    mutable bool qdtls_childevent_isbase = false;
    mutable bool qdtls_customevent_isbase = false;
    mutable bool qdtls_connectnotify_isbase = false;
    mutable bool qdtls_disconnectnotify_isbase = false;
    mutable bool qdtls_sender_isbase = false;
    mutable bool qdtls_sendersignalindex_isbase = false;
    mutable bool qdtls_receivers_isbase = false;
    mutable bool qdtls_issignalconnected_isbase = false;

  public:
    VirtualQDtls(QSslSocket::SslMode mode) : QDtls(mode){};
    VirtualQDtls(QSslSocket::SslMode mode, QObject* parent) : QDtls(mode, parent){};

    ~VirtualQDtls() {
        qdtls_metacall_callback = nullptr;
        qdtls_event_callback = nullptr;
        qdtls_eventfilter_callback = nullptr;
        qdtls_timerevent_callback = nullptr;
        qdtls_childevent_callback = nullptr;
        qdtls_customevent_callback = nullptr;
        qdtls_connectnotify_callback = nullptr;
        qdtls_disconnectnotify_callback = nullptr;
        qdtls_sender_callback = nullptr;
        qdtls_sendersignalindex_callback = nullptr;
        qdtls_receivers_callback = nullptr;
        qdtls_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQDtls_Metacall_Callback(QDtls_Metacall_Callback cb) { qdtls_metacall_callback = cb; }
    void setQDtls_Event_Callback(QDtls_Event_Callback cb) { qdtls_event_callback = cb; }
    void setQDtls_EventFilter_Callback(QDtls_EventFilter_Callback cb) { qdtls_eventfilter_callback = cb; }
    void setQDtls_TimerEvent_Callback(QDtls_TimerEvent_Callback cb) { qdtls_timerevent_callback = cb; }
    void setQDtls_ChildEvent_Callback(QDtls_ChildEvent_Callback cb) { qdtls_childevent_callback = cb; }
    void setQDtls_CustomEvent_Callback(QDtls_CustomEvent_Callback cb) { qdtls_customevent_callback = cb; }
    void setQDtls_ConnectNotify_Callback(QDtls_ConnectNotify_Callback cb) { qdtls_connectnotify_callback = cb; }
    void setQDtls_DisconnectNotify_Callback(QDtls_DisconnectNotify_Callback cb) { qdtls_disconnectnotify_callback = cb; }
    void setQDtls_Sender_Callback(QDtls_Sender_Callback cb) { qdtls_sender_callback = cb; }
    void setQDtls_SenderSignalIndex_Callback(QDtls_SenderSignalIndex_Callback cb) { qdtls_sendersignalindex_callback = cb; }
    void setQDtls_Receivers_Callback(QDtls_Receivers_Callback cb) { qdtls_receivers_callback = cb; }
    void setQDtls_IsSignalConnected_Callback(QDtls_IsSignalConnected_Callback cb) { qdtls_issignalconnected_callback = cb; }

    // Base flag setters
    void setQDtls_Metacall_IsBase(bool value) const { qdtls_metacall_isbase = value; }
    void setQDtls_Event_IsBase(bool value) const { qdtls_event_isbase = value; }
    void setQDtls_EventFilter_IsBase(bool value) const { qdtls_eventfilter_isbase = value; }
    void setQDtls_TimerEvent_IsBase(bool value) const { qdtls_timerevent_isbase = value; }
    void setQDtls_ChildEvent_IsBase(bool value) const { qdtls_childevent_isbase = value; }
    void setQDtls_CustomEvent_IsBase(bool value) const { qdtls_customevent_isbase = value; }
    void setQDtls_ConnectNotify_IsBase(bool value) const { qdtls_connectnotify_isbase = value; }
    void setQDtls_DisconnectNotify_IsBase(bool value) const { qdtls_disconnectnotify_isbase = value; }
    void setQDtls_Sender_IsBase(bool value) const { qdtls_sender_isbase = value; }
    void setQDtls_SenderSignalIndex_IsBase(bool value) const { qdtls_sendersignalindex_isbase = value; }
    void setQDtls_Receivers_IsBase(bool value) const { qdtls_receivers_isbase = value; }
    void setQDtls_IsSignalConnected_IsBase(bool value) const { qdtls_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qdtls_metacall_isbase) {
            qdtls_metacall_isbase = false;
            return QDtls::qt_metacall(param1, param2, param3);
        } else if (qdtls_metacall_callback != nullptr) {
            return qdtls_metacall_callback(this, param1, param2, param3);
        } else {
            return QDtls::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qdtls_event_isbase) {
            qdtls_event_isbase = false;
            return QDtls::event(event);
        } else if (qdtls_event_callback != nullptr) {
            return qdtls_event_callback(this, event);
        } else {
            return QDtls::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qdtls_eventfilter_isbase) {
            qdtls_eventfilter_isbase = false;
            return QDtls::eventFilter(watched, event);
        } else if (qdtls_eventfilter_callback != nullptr) {
            return qdtls_eventfilter_callback(this, watched, event);
        } else {
            return QDtls::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qdtls_timerevent_isbase) {
            qdtls_timerevent_isbase = false;
            QDtls::timerEvent(event);
        } else if (qdtls_timerevent_callback != nullptr) {
            qdtls_timerevent_callback(this, event);
        } else {
            QDtls::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qdtls_childevent_isbase) {
            qdtls_childevent_isbase = false;
            QDtls::childEvent(event);
        } else if (qdtls_childevent_callback != nullptr) {
            qdtls_childevent_callback(this, event);
        } else {
            QDtls::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qdtls_customevent_isbase) {
            qdtls_customevent_isbase = false;
            QDtls::customEvent(event);
        } else if (qdtls_customevent_callback != nullptr) {
            qdtls_customevent_callback(this, event);
        } else {
            QDtls::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qdtls_connectnotify_isbase) {
            qdtls_connectnotify_isbase = false;
            QDtls::connectNotify(signal);
        } else if (qdtls_connectnotify_callback != nullptr) {
            qdtls_connectnotify_callback(this, signal);
        } else {
            QDtls::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qdtls_disconnectnotify_isbase) {
            qdtls_disconnectnotify_isbase = false;
            QDtls::disconnectNotify(signal);
        } else if (qdtls_disconnectnotify_callback != nullptr) {
            qdtls_disconnectnotify_callback(this, signal);
        } else {
            QDtls::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qdtls_sender_isbase) {
            qdtls_sender_isbase = false;
            return QDtls::sender();
        } else if (qdtls_sender_callback != nullptr) {
            return qdtls_sender_callback();
        } else {
            return QDtls::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qdtls_sendersignalindex_isbase) {
            qdtls_sendersignalindex_isbase = false;
            return QDtls::senderSignalIndex();
        } else if (qdtls_sendersignalindex_callback != nullptr) {
            return qdtls_sendersignalindex_callback();
        } else {
            return QDtls::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qdtls_receivers_isbase) {
            qdtls_receivers_isbase = false;
            return QDtls::receivers(signal);
        } else if (qdtls_receivers_callback != nullptr) {
            return qdtls_receivers_callback(this, signal);
        } else {
            return QDtls::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qdtls_issignalconnected_isbase) {
            qdtls_issignalconnected_isbase = false;
            return QDtls::isSignalConnected(signal);
        } else if (qdtls_issignalconnected_callback != nullptr) {
            return qdtls_issignalconnected_callback(this, signal);
        } else {
            return QDtls::isSignalConnected(signal);
        }
    }
};

#endif
