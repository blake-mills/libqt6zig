#pragma once
#ifndef SRCC_LIBVIRTUALQAPPLICATION_H
#define SRCC_LIBVIRTUALQAPPLICATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QApplication so that we can call protected methods
class VirtualQApplication : public QApplication {

  public:
    // Virtual class public types (including callbacks)
    using QApplication_Metacall_Callback = int (*)(QApplication*, QMetaObject::Call, int, void**);
    using QApplication_Notify_Callback = bool (*)(QApplication*, QObject*, QEvent*);
    using QApplication_Event_Callback = bool (*)(QApplication*, QEvent*);
    using QApplication_EventFilter_Callback = bool (*)(QApplication*, QObject*, QEvent*);
    using QApplication_TimerEvent_Callback = void (*)(QApplication*, QTimerEvent*);
    using QApplication_ChildEvent_Callback = void (*)(QApplication*, QChildEvent*);
    using QApplication_CustomEvent_Callback = void (*)(QApplication*, QEvent*);
    using QApplication_ConnectNotify_Callback = void (*)(QApplication*, const QMetaMethod&);
    using QApplication_DisconnectNotify_Callback = void (*)(QApplication*, const QMetaMethod&);
    using QApplication_ResolveInterface_Callback = void* (*)(const QApplication*, const char*, int);
    using QApplication_Sender_Callback = QObject* (*)();
    using QApplication_SenderSignalIndex_Callback = int (*)();
    using QApplication_Receivers_Callback = int (*)(const QApplication*, const char*);
    using QApplication_IsSignalConnected_Callback = bool (*)(const QApplication*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QApplication_Metacall_Callback qapplication_metacall_callback = nullptr;
    QApplication_Notify_Callback qapplication_notify_callback = nullptr;
    QApplication_Event_Callback qapplication_event_callback = nullptr;
    QApplication_EventFilter_Callback qapplication_eventfilter_callback = nullptr;
    QApplication_TimerEvent_Callback qapplication_timerevent_callback = nullptr;
    QApplication_ChildEvent_Callback qapplication_childevent_callback = nullptr;
    QApplication_CustomEvent_Callback qapplication_customevent_callback = nullptr;
    QApplication_ConnectNotify_Callback qapplication_connectnotify_callback = nullptr;
    QApplication_DisconnectNotify_Callback qapplication_disconnectnotify_callback = nullptr;
    QApplication_ResolveInterface_Callback qapplication_resolveinterface_callback = nullptr;
    QApplication_Sender_Callback qapplication_sender_callback = nullptr;
    QApplication_SenderSignalIndex_Callback qapplication_sendersignalindex_callback = nullptr;
    QApplication_Receivers_Callback qapplication_receivers_callback = nullptr;
    QApplication_IsSignalConnected_Callback qapplication_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qapplication_metacall_isbase = false;
    mutable bool qapplication_notify_isbase = false;
    mutable bool qapplication_event_isbase = false;
    mutable bool qapplication_eventfilter_isbase = false;
    mutable bool qapplication_timerevent_isbase = false;
    mutable bool qapplication_childevent_isbase = false;
    mutable bool qapplication_customevent_isbase = false;
    mutable bool qapplication_connectnotify_isbase = false;
    mutable bool qapplication_disconnectnotify_isbase = false;
    mutable bool qapplication_resolveinterface_isbase = false;
    mutable bool qapplication_sender_isbase = false;
    mutable bool qapplication_sendersignalindex_isbase = false;
    mutable bool qapplication_receivers_isbase = false;
    mutable bool qapplication_issignalconnected_isbase = false;

  public:
    VirtualQApplication(int& argc, char** argv) : QApplication(argc, argv){};
    VirtualQApplication(int& argc, char** argv, int param3) : QApplication(argc, argv, param3){};

    ~VirtualQApplication() {
        qapplication_metacall_callback = nullptr;
        qapplication_notify_callback = nullptr;
        qapplication_event_callback = nullptr;
        qapplication_eventfilter_callback = nullptr;
        qapplication_timerevent_callback = nullptr;
        qapplication_childevent_callback = nullptr;
        qapplication_customevent_callback = nullptr;
        qapplication_connectnotify_callback = nullptr;
        qapplication_disconnectnotify_callback = nullptr;
        qapplication_resolveinterface_callback = nullptr;
        qapplication_sender_callback = nullptr;
        qapplication_sendersignalindex_callback = nullptr;
        qapplication_receivers_callback = nullptr;
        qapplication_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQApplication_Metacall_Callback(QApplication_Metacall_Callback cb) { qapplication_metacall_callback = cb; }
    void setQApplication_Notify_Callback(QApplication_Notify_Callback cb) { qapplication_notify_callback = cb; }
    void setQApplication_Event_Callback(QApplication_Event_Callback cb) { qapplication_event_callback = cb; }
    void setQApplication_EventFilter_Callback(QApplication_EventFilter_Callback cb) { qapplication_eventfilter_callback = cb; }
    void setQApplication_TimerEvent_Callback(QApplication_TimerEvent_Callback cb) { qapplication_timerevent_callback = cb; }
    void setQApplication_ChildEvent_Callback(QApplication_ChildEvent_Callback cb) { qapplication_childevent_callback = cb; }
    void setQApplication_CustomEvent_Callback(QApplication_CustomEvent_Callback cb) { qapplication_customevent_callback = cb; }
    void setQApplication_ConnectNotify_Callback(QApplication_ConnectNotify_Callback cb) { qapplication_connectnotify_callback = cb; }
    void setQApplication_DisconnectNotify_Callback(QApplication_DisconnectNotify_Callback cb) { qapplication_disconnectnotify_callback = cb; }
    void setQApplication_ResolveInterface_Callback(QApplication_ResolveInterface_Callback cb) { qapplication_resolveinterface_callback = cb; }
    void setQApplication_Sender_Callback(QApplication_Sender_Callback cb) { qapplication_sender_callback = cb; }
    void setQApplication_SenderSignalIndex_Callback(QApplication_SenderSignalIndex_Callback cb) { qapplication_sendersignalindex_callback = cb; }
    void setQApplication_Receivers_Callback(QApplication_Receivers_Callback cb) { qapplication_receivers_callback = cb; }
    void setQApplication_IsSignalConnected_Callback(QApplication_IsSignalConnected_Callback cb) { qapplication_issignalconnected_callback = cb; }

    // Base flag setters
    void setQApplication_Metacall_IsBase(bool value) const { qapplication_metacall_isbase = value; }
    void setQApplication_Notify_IsBase(bool value) const { qapplication_notify_isbase = value; }
    void setQApplication_Event_IsBase(bool value) const { qapplication_event_isbase = value; }
    void setQApplication_EventFilter_IsBase(bool value) const { qapplication_eventfilter_isbase = value; }
    void setQApplication_TimerEvent_IsBase(bool value) const { qapplication_timerevent_isbase = value; }
    void setQApplication_ChildEvent_IsBase(bool value) const { qapplication_childevent_isbase = value; }
    void setQApplication_CustomEvent_IsBase(bool value) const { qapplication_customevent_isbase = value; }
    void setQApplication_ConnectNotify_IsBase(bool value) const { qapplication_connectnotify_isbase = value; }
    void setQApplication_DisconnectNotify_IsBase(bool value) const { qapplication_disconnectnotify_isbase = value; }
    void setQApplication_ResolveInterface_IsBase(bool value) const { qapplication_resolveinterface_isbase = value; }
    void setQApplication_Sender_IsBase(bool value) const { qapplication_sender_isbase = value; }
    void setQApplication_SenderSignalIndex_IsBase(bool value) const { qapplication_sendersignalindex_isbase = value; }
    void setQApplication_Receivers_IsBase(bool value) const { qapplication_receivers_isbase = value; }
    void setQApplication_IsSignalConnected_IsBase(bool value) const { qapplication_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qapplication_metacall_isbase) {
            qapplication_metacall_isbase = false;
            return QApplication::qt_metacall(param1, param2, param3);
        } else if (qapplication_metacall_callback != nullptr) {
            return qapplication_metacall_callback(this, param1, param2, param3);
        } else {
            return QApplication::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool notify(QObject* param1, QEvent* param2) override {
        if (qapplication_notify_isbase) {
            qapplication_notify_isbase = false;
            return QApplication::notify(param1, param2);
        } else if (qapplication_notify_callback != nullptr) {
            return qapplication_notify_callback(this, param1, param2);
        } else {
            return QApplication::notify(param1, param2);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qapplication_event_isbase) {
            qapplication_event_isbase = false;
            return QApplication::event(param1);
        } else if (qapplication_event_callback != nullptr) {
            return qapplication_event_callback(this, param1);
        } else {
            return QApplication::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qapplication_eventfilter_isbase) {
            qapplication_eventfilter_isbase = false;
            return QApplication::eventFilter(watched, event);
        } else if (qapplication_eventfilter_callback != nullptr) {
            return qapplication_eventfilter_callback(this, watched, event);
        } else {
            return QApplication::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qapplication_timerevent_isbase) {
            qapplication_timerevent_isbase = false;
            QApplication::timerEvent(event);
        } else if (qapplication_timerevent_callback != nullptr) {
            qapplication_timerevent_callback(this, event);
        } else {
            QApplication::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qapplication_childevent_isbase) {
            qapplication_childevent_isbase = false;
            QApplication::childEvent(event);
        } else if (qapplication_childevent_callback != nullptr) {
            qapplication_childevent_callback(this, event);
        } else {
            QApplication::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qapplication_customevent_isbase) {
            qapplication_customevent_isbase = false;
            QApplication::customEvent(event);
        } else if (qapplication_customevent_callback != nullptr) {
            qapplication_customevent_callback(this, event);
        } else {
            QApplication::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qapplication_connectnotify_isbase) {
            qapplication_connectnotify_isbase = false;
            QApplication::connectNotify(signal);
        } else if (qapplication_connectnotify_callback != nullptr) {
            qapplication_connectnotify_callback(this, signal);
        } else {
            QApplication::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qapplication_disconnectnotify_isbase) {
            qapplication_disconnectnotify_isbase = false;
            QApplication::disconnectNotify(signal);
        } else if (qapplication_disconnectnotify_callback != nullptr) {
            qapplication_disconnectnotify_callback(this, signal);
        } else {
            QApplication::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void* resolveInterface(const char* name, int revision) const {
        if (qapplication_resolveinterface_isbase) {
            qapplication_resolveinterface_isbase = false;
            return QApplication::resolveInterface(name, revision);
        } else if (qapplication_resolveinterface_callback != nullptr) {
            return qapplication_resolveinterface_callback(this, name, revision);
        } else {
            return QApplication::resolveInterface(name, revision);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qapplication_sender_isbase) {
            qapplication_sender_isbase = false;
            return QApplication::sender();
        } else if (qapplication_sender_callback != nullptr) {
            return qapplication_sender_callback();
        } else {
            return QApplication::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qapplication_sendersignalindex_isbase) {
            qapplication_sendersignalindex_isbase = false;
            return QApplication::senderSignalIndex();
        } else if (qapplication_sendersignalindex_callback != nullptr) {
            return qapplication_sendersignalindex_callback();
        } else {
            return QApplication::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qapplication_receivers_isbase) {
            qapplication_receivers_isbase = false;
            return QApplication::receivers(signal);
        } else if (qapplication_receivers_callback != nullptr) {
            return qapplication_receivers_callback(this, signal);
        } else {
            return QApplication::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qapplication_issignalconnected_isbase) {
            qapplication_issignalconnected_isbase = false;
            return QApplication::isSignalConnected(signal);
        } else if (qapplication_issignalconnected_callback != nullptr) {
            return qapplication_issignalconnected_callback(this, signal);
        } else {
            return QApplication::isSignalConnected(signal);
        }
    }
};

#endif
