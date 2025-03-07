#pragma once
#ifndef SRCC_LIBVIRTUALQUNDOSTACK_H
#define SRCC_LIBVIRTUALQUNDOSTACK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QUndoCommand so that we can call protected methods
class VirtualQUndoCommand : public QUndoCommand {

  public:
    // Virtual class public types (including callbacks)
    using QUndoCommand_Undo_Callback = void (*)();
    using QUndoCommand_Redo_Callback = void (*)();
    using QUndoCommand_Id_Callback = int (*)();
    using QUndoCommand_MergeWith_Callback = bool (*)(QUndoCommand*, const QUndoCommand*);

  protected:
    // Instance callback storage
    QUndoCommand_Undo_Callback qundocommand_undo_callback = nullptr;
    QUndoCommand_Redo_Callback qundocommand_redo_callback = nullptr;
    QUndoCommand_Id_Callback qundocommand_id_callback = nullptr;
    QUndoCommand_MergeWith_Callback qundocommand_mergewith_callback = nullptr;

    // Instance base flags
    mutable bool qundocommand_undo_isbase = false;
    mutable bool qundocommand_redo_isbase = false;
    mutable bool qundocommand_id_isbase = false;
    mutable bool qundocommand_mergewith_isbase = false;

  public:
    VirtualQUndoCommand() : QUndoCommand(){};
    VirtualQUndoCommand(const QString& text) : QUndoCommand(text){};
    VirtualQUndoCommand(QUndoCommand* parent) : QUndoCommand(parent){};
    VirtualQUndoCommand(const QString& text, QUndoCommand* parent) : QUndoCommand(text, parent){};

    ~VirtualQUndoCommand() {
        qundocommand_undo_callback = nullptr;
        qundocommand_redo_callback = nullptr;
        qundocommand_id_callback = nullptr;
        qundocommand_mergewith_callback = nullptr;
    }

    // Callback setters
    void setQUndoCommand_Undo_Callback(QUndoCommand_Undo_Callback cb) { qundocommand_undo_callback = cb; }
    void setQUndoCommand_Redo_Callback(QUndoCommand_Redo_Callback cb) { qundocommand_redo_callback = cb; }
    void setQUndoCommand_Id_Callback(QUndoCommand_Id_Callback cb) { qundocommand_id_callback = cb; }
    void setQUndoCommand_MergeWith_Callback(QUndoCommand_MergeWith_Callback cb) { qundocommand_mergewith_callback = cb; }

    // Base flag setters
    void setQUndoCommand_Undo_IsBase(bool value) const { qundocommand_undo_isbase = value; }
    void setQUndoCommand_Redo_IsBase(bool value) const { qundocommand_redo_isbase = value; }
    void setQUndoCommand_Id_IsBase(bool value) const { qundocommand_id_isbase = value; }
    void setQUndoCommand_MergeWith_IsBase(bool value) const { qundocommand_mergewith_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void undo() override {
        if (qundocommand_undo_isbase) {
            qundocommand_undo_isbase = false;
            QUndoCommand::undo();
        } else if (qundocommand_undo_callback != nullptr) {
            qundocommand_undo_callback();
        } else {
            QUndoCommand::undo();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void redo() override {
        if (qundocommand_redo_isbase) {
            qundocommand_redo_isbase = false;
            QUndoCommand::redo();
        } else if (qundocommand_redo_callback != nullptr) {
            qundocommand_redo_callback();
        } else {
            QUndoCommand::redo();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int id() const override {
        if (qundocommand_id_isbase) {
            qundocommand_id_isbase = false;
            return QUndoCommand::id();
        } else if (qundocommand_id_callback != nullptr) {
            return qundocommand_id_callback();
        } else {
            return QUndoCommand::id();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool mergeWith(const QUndoCommand* other) override {
        if (qundocommand_mergewith_isbase) {
            qundocommand_mergewith_isbase = false;
            return QUndoCommand::mergeWith(other);
        } else if (qundocommand_mergewith_callback != nullptr) {
            return qundocommand_mergewith_callback(this, other);
        } else {
            return QUndoCommand::mergeWith(other);
        }
    }
};

// This class is a subclass of QUndoStack so that we can call protected methods
class VirtualQUndoStack : public QUndoStack {

  public:
    // Virtual class public types (including callbacks)
    using QUndoStack_Metacall_Callback = int (*)(QUndoStack*, QMetaObject::Call, int, void**);
    using QUndoStack_Event_Callback = bool (*)(QUndoStack*, QEvent*);
    using QUndoStack_EventFilter_Callback = bool (*)(QUndoStack*, QObject*, QEvent*);
    using QUndoStack_TimerEvent_Callback = void (*)(QUndoStack*, QTimerEvent*);
    using QUndoStack_ChildEvent_Callback = void (*)(QUndoStack*, QChildEvent*);
    using QUndoStack_CustomEvent_Callback = void (*)(QUndoStack*, QEvent*);
    using QUndoStack_ConnectNotify_Callback = void (*)(QUndoStack*, const QMetaMethod&);
    using QUndoStack_DisconnectNotify_Callback = void (*)(QUndoStack*, const QMetaMethod&);
    using QUndoStack_Sender_Callback = QObject* (*)();
    using QUndoStack_SenderSignalIndex_Callback = int (*)();
    using QUndoStack_Receivers_Callback = int (*)(const QUndoStack*, const char*);
    using QUndoStack_IsSignalConnected_Callback = bool (*)(const QUndoStack*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QUndoStack_Metacall_Callback qundostack_metacall_callback = nullptr;
    QUndoStack_Event_Callback qundostack_event_callback = nullptr;
    QUndoStack_EventFilter_Callback qundostack_eventfilter_callback = nullptr;
    QUndoStack_TimerEvent_Callback qundostack_timerevent_callback = nullptr;
    QUndoStack_ChildEvent_Callback qundostack_childevent_callback = nullptr;
    QUndoStack_CustomEvent_Callback qundostack_customevent_callback = nullptr;
    QUndoStack_ConnectNotify_Callback qundostack_connectnotify_callback = nullptr;
    QUndoStack_DisconnectNotify_Callback qundostack_disconnectnotify_callback = nullptr;
    QUndoStack_Sender_Callback qundostack_sender_callback = nullptr;
    QUndoStack_SenderSignalIndex_Callback qundostack_sendersignalindex_callback = nullptr;
    QUndoStack_Receivers_Callback qundostack_receivers_callback = nullptr;
    QUndoStack_IsSignalConnected_Callback qundostack_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qundostack_metacall_isbase = false;
    mutable bool qundostack_event_isbase = false;
    mutable bool qundostack_eventfilter_isbase = false;
    mutable bool qundostack_timerevent_isbase = false;
    mutable bool qundostack_childevent_isbase = false;
    mutable bool qundostack_customevent_isbase = false;
    mutable bool qundostack_connectnotify_isbase = false;
    mutable bool qundostack_disconnectnotify_isbase = false;
    mutable bool qundostack_sender_isbase = false;
    mutable bool qundostack_sendersignalindex_isbase = false;
    mutable bool qundostack_receivers_isbase = false;
    mutable bool qundostack_issignalconnected_isbase = false;

  public:
    VirtualQUndoStack() : QUndoStack(){};
    VirtualQUndoStack(QObject* parent) : QUndoStack(parent){};

    ~VirtualQUndoStack() {
        qundostack_metacall_callback = nullptr;
        qundostack_event_callback = nullptr;
        qundostack_eventfilter_callback = nullptr;
        qundostack_timerevent_callback = nullptr;
        qundostack_childevent_callback = nullptr;
        qundostack_customevent_callback = nullptr;
        qundostack_connectnotify_callback = nullptr;
        qundostack_disconnectnotify_callback = nullptr;
        qundostack_sender_callback = nullptr;
        qundostack_sendersignalindex_callback = nullptr;
        qundostack_receivers_callback = nullptr;
        qundostack_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQUndoStack_Metacall_Callback(QUndoStack_Metacall_Callback cb) { qundostack_metacall_callback = cb; }
    void setQUndoStack_Event_Callback(QUndoStack_Event_Callback cb) { qundostack_event_callback = cb; }
    void setQUndoStack_EventFilter_Callback(QUndoStack_EventFilter_Callback cb) { qundostack_eventfilter_callback = cb; }
    void setQUndoStack_TimerEvent_Callback(QUndoStack_TimerEvent_Callback cb) { qundostack_timerevent_callback = cb; }
    void setQUndoStack_ChildEvent_Callback(QUndoStack_ChildEvent_Callback cb) { qundostack_childevent_callback = cb; }
    void setQUndoStack_CustomEvent_Callback(QUndoStack_CustomEvent_Callback cb) { qundostack_customevent_callback = cb; }
    void setQUndoStack_ConnectNotify_Callback(QUndoStack_ConnectNotify_Callback cb) { qundostack_connectnotify_callback = cb; }
    void setQUndoStack_DisconnectNotify_Callback(QUndoStack_DisconnectNotify_Callback cb) { qundostack_disconnectnotify_callback = cb; }
    void setQUndoStack_Sender_Callback(QUndoStack_Sender_Callback cb) { qundostack_sender_callback = cb; }
    void setQUndoStack_SenderSignalIndex_Callback(QUndoStack_SenderSignalIndex_Callback cb) { qundostack_sendersignalindex_callback = cb; }
    void setQUndoStack_Receivers_Callback(QUndoStack_Receivers_Callback cb) { qundostack_receivers_callback = cb; }
    void setQUndoStack_IsSignalConnected_Callback(QUndoStack_IsSignalConnected_Callback cb) { qundostack_issignalconnected_callback = cb; }

    // Base flag setters
    void setQUndoStack_Metacall_IsBase(bool value) const { qundostack_metacall_isbase = value; }
    void setQUndoStack_Event_IsBase(bool value) const { qundostack_event_isbase = value; }
    void setQUndoStack_EventFilter_IsBase(bool value) const { qundostack_eventfilter_isbase = value; }
    void setQUndoStack_TimerEvent_IsBase(bool value) const { qundostack_timerevent_isbase = value; }
    void setQUndoStack_ChildEvent_IsBase(bool value) const { qundostack_childevent_isbase = value; }
    void setQUndoStack_CustomEvent_IsBase(bool value) const { qundostack_customevent_isbase = value; }
    void setQUndoStack_ConnectNotify_IsBase(bool value) const { qundostack_connectnotify_isbase = value; }
    void setQUndoStack_DisconnectNotify_IsBase(bool value) const { qundostack_disconnectnotify_isbase = value; }
    void setQUndoStack_Sender_IsBase(bool value) const { qundostack_sender_isbase = value; }
    void setQUndoStack_SenderSignalIndex_IsBase(bool value) const { qundostack_sendersignalindex_isbase = value; }
    void setQUndoStack_Receivers_IsBase(bool value) const { qundostack_receivers_isbase = value; }
    void setQUndoStack_IsSignalConnected_IsBase(bool value) const { qundostack_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qundostack_metacall_isbase) {
            qundostack_metacall_isbase = false;
            return QUndoStack::qt_metacall(param1, param2, param3);
        } else if (qundostack_metacall_callback != nullptr) {
            return qundostack_metacall_callback(this, param1, param2, param3);
        } else {
            return QUndoStack::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qundostack_event_isbase) {
            qundostack_event_isbase = false;
            return QUndoStack::event(event);
        } else if (qundostack_event_callback != nullptr) {
            return qundostack_event_callback(this, event);
        } else {
            return QUndoStack::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qundostack_eventfilter_isbase) {
            qundostack_eventfilter_isbase = false;
            return QUndoStack::eventFilter(watched, event);
        } else if (qundostack_eventfilter_callback != nullptr) {
            return qundostack_eventfilter_callback(this, watched, event);
        } else {
            return QUndoStack::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qundostack_timerevent_isbase) {
            qundostack_timerevent_isbase = false;
            QUndoStack::timerEvent(event);
        } else if (qundostack_timerevent_callback != nullptr) {
            qundostack_timerevent_callback(this, event);
        } else {
            QUndoStack::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qundostack_childevent_isbase) {
            qundostack_childevent_isbase = false;
            QUndoStack::childEvent(event);
        } else if (qundostack_childevent_callback != nullptr) {
            qundostack_childevent_callback(this, event);
        } else {
            QUndoStack::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qundostack_customevent_isbase) {
            qundostack_customevent_isbase = false;
            QUndoStack::customEvent(event);
        } else if (qundostack_customevent_callback != nullptr) {
            qundostack_customevent_callback(this, event);
        } else {
            QUndoStack::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qundostack_connectnotify_isbase) {
            qundostack_connectnotify_isbase = false;
            QUndoStack::connectNotify(signal);
        } else if (qundostack_connectnotify_callback != nullptr) {
            qundostack_connectnotify_callback(this, signal);
        } else {
            QUndoStack::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qundostack_disconnectnotify_isbase) {
            qundostack_disconnectnotify_isbase = false;
            QUndoStack::disconnectNotify(signal);
        } else if (qundostack_disconnectnotify_callback != nullptr) {
            qundostack_disconnectnotify_callback(this, signal);
        } else {
            QUndoStack::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qundostack_sender_isbase) {
            qundostack_sender_isbase = false;
            return QUndoStack::sender();
        } else if (qundostack_sender_callback != nullptr) {
            return qundostack_sender_callback();
        } else {
            return QUndoStack::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qundostack_sendersignalindex_isbase) {
            qundostack_sendersignalindex_isbase = false;
            return QUndoStack::senderSignalIndex();
        } else if (qundostack_sendersignalindex_callback != nullptr) {
            return qundostack_sendersignalindex_callback();
        } else {
            return QUndoStack::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qundostack_receivers_isbase) {
            qundostack_receivers_isbase = false;
            return QUndoStack::receivers(signal);
        } else if (qundostack_receivers_callback != nullptr) {
            return qundostack_receivers_callback(this, signal);
        } else {
            return QUndoStack::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qundostack_issignalconnected_isbase) {
            qundostack_issignalconnected_isbase = false;
            return QUndoStack::isSignalConnected(signal);
        } else if (qundostack_issignalconnected_callback != nullptr) {
            return qundostack_issignalconnected_callback(this, signal);
        } else {
            return QUndoStack::isSignalConnected(signal);
        }
    }
};

#endif
