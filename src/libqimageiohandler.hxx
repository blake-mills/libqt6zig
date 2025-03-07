#pragma once
#ifndef SRCC_LIBVIRTUALQIMAGEIOHANDLER_H
#define SRCC_LIBVIRTUALQIMAGEIOHANDLER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QImageIOHandler so that we can call protected methods
class VirtualQImageIOHandler : public QImageIOHandler {

  public:
    // Virtual class public types (including callbacks)
    using QImageIOHandler_CanRead_Callback = bool (*)();
    using QImageIOHandler_Read_Callback = bool (*)(QImageIOHandler*, QImage*);
    using QImageIOHandler_Write_Callback = bool (*)(QImageIOHandler*, const QImage&);
    using QImageIOHandler_Option_Callback = QVariant (*)(const QImageIOHandler*, QImageIOHandler::ImageOption);
    using QImageIOHandler_SetOption_Callback = void (*)(QImageIOHandler*, QImageIOHandler::ImageOption, const QVariant&);
    using QImageIOHandler_SupportsOption_Callback = bool (*)(const QImageIOHandler*, QImageIOHandler::ImageOption);
    using QImageIOHandler_JumpToNextImage_Callback = bool (*)();
    using QImageIOHandler_JumpToImage_Callback = bool (*)(QImageIOHandler*, int);
    using QImageIOHandler_LoopCount_Callback = int (*)();
    using QImageIOHandler_ImageCount_Callback = int (*)();
    using QImageIOHandler_NextImageDelay_Callback = int (*)();
    using QImageIOHandler_CurrentImageNumber_Callback = int (*)();
    using QImageIOHandler_CurrentImageRect_Callback = QRect (*)();

  protected:
    // Instance callback storage
    QImageIOHandler_CanRead_Callback qimageiohandler_canread_callback = nullptr;
    QImageIOHandler_Read_Callback qimageiohandler_read_callback = nullptr;
    QImageIOHandler_Write_Callback qimageiohandler_write_callback = nullptr;
    QImageIOHandler_Option_Callback qimageiohandler_option_callback = nullptr;
    QImageIOHandler_SetOption_Callback qimageiohandler_setoption_callback = nullptr;
    QImageIOHandler_SupportsOption_Callback qimageiohandler_supportsoption_callback = nullptr;
    QImageIOHandler_JumpToNextImage_Callback qimageiohandler_jumptonextimage_callback = nullptr;
    QImageIOHandler_JumpToImage_Callback qimageiohandler_jumptoimage_callback = nullptr;
    QImageIOHandler_LoopCount_Callback qimageiohandler_loopcount_callback = nullptr;
    QImageIOHandler_ImageCount_Callback qimageiohandler_imagecount_callback = nullptr;
    QImageIOHandler_NextImageDelay_Callback qimageiohandler_nextimagedelay_callback = nullptr;
    QImageIOHandler_CurrentImageNumber_Callback qimageiohandler_currentimagenumber_callback = nullptr;
    QImageIOHandler_CurrentImageRect_Callback qimageiohandler_currentimagerect_callback = nullptr;

    // Instance base flags
    mutable bool qimageiohandler_canread_isbase = false;
    mutable bool qimageiohandler_read_isbase = false;
    mutable bool qimageiohandler_write_isbase = false;
    mutable bool qimageiohandler_option_isbase = false;
    mutable bool qimageiohandler_setoption_isbase = false;
    mutable bool qimageiohandler_supportsoption_isbase = false;
    mutable bool qimageiohandler_jumptonextimage_isbase = false;
    mutable bool qimageiohandler_jumptoimage_isbase = false;
    mutable bool qimageiohandler_loopcount_isbase = false;
    mutable bool qimageiohandler_imagecount_isbase = false;
    mutable bool qimageiohandler_nextimagedelay_isbase = false;
    mutable bool qimageiohandler_currentimagenumber_isbase = false;
    mutable bool qimageiohandler_currentimagerect_isbase = false;

  public:
    VirtualQImageIOHandler() : QImageIOHandler(){};

    ~VirtualQImageIOHandler() {
        qimageiohandler_canread_callback = nullptr;
        qimageiohandler_read_callback = nullptr;
        qimageiohandler_write_callback = nullptr;
        qimageiohandler_option_callback = nullptr;
        qimageiohandler_setoption_callback = nullptr;
        qimageiohandler_supportsoption_callback = nullptr;
        qimageiohandler_jumptonextimage_callback = nullptr;
        qimageiohandler_jumptoimage_callback = nullptr;
        qimageiohandler_loopcount_callback = nullptr;
        qimageiohandler_imagecount_callback = nullptr;
        qimageiohandler_nextimagedelay_callback = nullptr;
        qimageiohandler_currentimagenumber_callback = nullptr;
        qimageiohandler_currentimagerect_callback = nullptr;
    }

    // Callback setters
    void setQImageIOHandler_CanRead_Callback(QImageIOHandler_CanRead_Callback cb) { qimageiohandler_canread_callback = cb; }
    void setQImageIOHandler_Read_Callback(QImageIOHandler_Read_Callback cb) { qimageiohandler_read_callback = cb; }
    void setQImageIOHandler_Write_Callback(QImageIOHandler_Write_Callback cb) { qimageiohandler_write_callback = cb; }
    void setQImageIOHandler_Option_Callback(QImageIOHandler_Option_Callback cb) { qimageiohandler_option_callback = cb; }
    void setQImageIOHandler_SetOption_Callback(QImageIOHandler_SetOption_Callback cb) { qimageiohandler_setoption_callback = cb; }
    void setQImageIOHandler_SupportsOption_Callback(QImageIOHandler_SupportsOption_Callback cb) { qimageiohandler_supportsoption_callback = cb; }
    void setQImageIOHandler_JumpToNextImage_Callback(QImageIOHandler_JumpToNextImage_Callback cb) { qimageiohandler_jumptonextimage_callback = cb; }
    void setQImageIOHandler_JumpToImage_Callback(QImageIOHandler_JumpToImage_Callback cb) { qimageiohandler_jumptoimage_callback = cb; }
    void setQImageIOHandler_LoopCount_Callback(QImageIOHandler_LoopCount_Callback cb) { qimageiohandler_loopcount_callback = cb; }
    void setQImageIOHandler_ImageCount_Callback(QImageIOHandler_ImageCount_Callback cb) { qimageiohandler_imagecount_callback = cb; }
    void setQImageIOHandler_NextImageDelay_Callback(QImageIOHandler_NextImageDelay_Callback cb) { qimageiohandler_nextimagedelay_callback = cb; }
    void setQImageIOHandler_CurrentImageNumber_Callback(QImageIOHandler_CurrentImageNumber_Callback cb) { qimageiohandler_currentimagenumber_callback = cb; }
    void setQImageIOHandler_CurrentImageRect_Callback(QImageIOHandler_CurrentImageRect_Callback cb) { qimageiohandler_currentimagerect_callback = cb; }

    // Base flag setters
    void setQImageIOHandler_CanRead_IsBase(bool value) const { qimageiohandler_canread_isbase = value; }
    void setQImageIOHandler_Read_IsBase(bool value) const { qimageiohandler_read_isbase = value; }
    void setQImageIOHandler_Write_IsBase(bool value) const { qimageiohandler_write_isbase = value; }
    void setQImageIOHandler_Option_IsBase(bool value) const { qimageiohandler_option_isbase = value; }
    void setQImageIOHandler_SetOption_IsBase(bool value) const { qimageiohandler_setoption_isbase = value; }
    void setQImageIOHandler_SupportsOption_IsBase(bool value) const { qimageiohandler_supportsoption_isbase = value; }
    void setQImageIOHandler_JumpToNextImage_IsBase(bool value) const { qimageiohandler_jumptonextimage_isbase = value; }
    void setQImageIOHandler_JumpToImage_IsBase(bool value) const { qimageiohandler_jumptoimage_isbase = value; }
    void setQImageIOHandler_LoopCount_IsBase(bool value) const { qimageiohandler_loopcount_isbase = value; }
    void setQImageIOHandler_ImageCount_IsBase(bool value) const { qimageiohandler_imagecount_isbase = value; }
    void setQImageIOHandler_NextImageDelay_IsBase(bool value) const { qimageiohandler_nextimagedelay_isbase = value; }
    void setQImageIOHandler_CurrentImageNumber_IsBase(bool value) const { qimageiohandler_currentimagenumber_isbase = value; }
    void setQImageIOHandler_CurrentImageRect_IsBase(bool value) const { qimageiohandler_currentimagerect_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual bool canRead() const override {
        return qimageiohandler_canread_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool read(QImage* image) override {
        return qimageiohandler_read_callback(this, image);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool write(const QImage& image) override {
        if (qimageiohandler_write_isbase) {
            qimageiohandler_write_isbase = false;
            return QImageIOHandler::write(image);
        } else if (qimageiohandler_write_callback != nullptr) {
            return qimageiohandler_write_callback(this, image);
        } else {
            return QImageIOHandler::write(image);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant option(QImageIOHandler::ImageOption option) const override {
        if (qimageiohandler_option_isbase) {
            qimageiohandler_option_isbase = false;
            return QImageIOHandler::option(option);
        } else if (qimageiohandler_option_callback != nullptr) {
            return qimageiohandler_option_callback(this, option);
        } else {
            return QImageIOHandler::option(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setOption(QImageIOHandler::ImageOption option, const QVariant& value) override {
        if (qimageiohandler_setoption_isbase) {
            qimageiohandler_setoption_isbase = false;
            QImageIOHandler::setOption(option, value);
        } else if (qimageiohandler_setoption_callback != nullptr) {
            qimageiohandler_setoption_callback(this, option, value);
        } else {
            QImageIOHandler::setOption(option, value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool supportsOption(QImageIOHandler::ImageOption option) const override {
        if (qimageiohandler_supportsoption_isbase) {
            qimageiohandler_supportsoption_isbase = false;
            return QImageIOHandler::supportsOption(option);
        } else if (qimageiohandler_supportsoption_callback != nullptr) {
            return qimageiohandler_supportsoption_callback(this, option);
        } else {
            return QImageIOHandler::supportsOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool jumpToNextImage() override {
        if (qimageiohandler_jumptonextimage_isbase) {
            qimageiohandler_jumptonextimage_isbase = false;
            return QImageIOHandler::jumpToNextImage();
        } else if (qimageiohandler_jumptonextimage_callback != nullptr) {
            return qimageiohandler_jumptonextimage_callback();
        } else {
            return QImageIOHandler::jumpToNextImage();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool jumpToImage(int imageNumber) override {
        if (qimageiohandler_jumptoimage_isbase) {
            qimageiohandler_jumptoimage_isbase = false;
            return QImageIOHandler::jumpToImage(imageNumber);
        } else if (qimageiohandler_jumptoimage_callback != nullptr) {
            return qimageiohandler_jumptoimage_callback(this, imageNumber);
        } else {
            return QImageIOHandler::jumpToImage(imageNumber);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int loopCount() const override {
        if (qimageiohandler_loopcount_isbase) {
            qimageiohandler_loopcount_isbase = false;
            return QImageIOHandler::loopCount();
        } else if (qimageiohandler_loopcount_callback != nullptr) {
            return qimageiohandler_loopcount_callback();
        } else {
            return QImageIOHandler::loopCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int imageCount() const override {
        if (qimageiohandler_imagecount_isbase) {
            qimageiohandler_imagecount_isbase = false;
            return QImageIOHandler::imageCount();
        } else if (qimageiohandler_imagecount_callback != nullptr) {
            return qimageiohandler_imagecount_callback();
        } else {
            return QImageIOHandler::imageCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int nextImageDelay() const override {
        if (qimageiohandler_nextimagedelay_isbase) {
            qimageiohandler_nextimagedelay_isbase = false;
            return QImageIOHandler::nextImageDelay();
        } else if (qimageiohandler_nextimagedelay_callback != nullptr) {
            return qimageiohandler_nextimagedelay_callback();
        } else {
            return QImageIOHandler::nextImageDelay();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int currentImageNumber() const override {
        if (qimageiohandler_currentimagenumber_isbase) {
            qimageiohandler_currentimagenumber_isbase = false;
            return QImageIOHandler::currentImageNumber();
        } else if (qimageiohandler_currentimagenumber_callback != nullptr) {
            return qimageiohandler_currentimagenumber_callback();
        } else {
            return QImageIOHandler::currentImageNumber();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect currentImageRect() const override {
        if (qimageiohandler_currentimagerect_isbase) {
            qimageiohandler_currentimagerect_isbase = false;
            return QImageIOHandler::currentImageRect();
        } else if (qimageiohandler_currentimagerect_callback != nullptr) {
            return qimageiohandler_currentimagerect_callback();
        } else {
            return QImageIOHandler::currentImageRect();
        }
    }
};

// This class is a subclass of QImageIOPlugin so that we can call protected methods
class VirtualQImageIOPlugin : public QImageIOPlugin {

  public:
    // Virtual class public types (including callbacks)
    using QImageIOPlugin_Metacall_Callback = int (*)(QImageIOPlugin*, QMetaObject::Call, int, void**);
    using QImageIOPlugin_Capabilities_Callback = QImageIOPlugin::Capabilities (*)(const QImageIOPlugin*, QIODevice*, const QByteArray&);
    using QImageIOPlugin_Create_Callback = QImageIOHandler* (*)(const QImageIOPlugin*, QIODevice*, const QByteArray&);
    using QImageIOPlugin_Event_Callback = bool (*)(QImageIOPlugin*, QEvent*);
    using QImageIOPlugin_EventFilter_Callback = bool (*)(QImageIOPlugin*, QObject*, QEvent*);
    using QImageIOPlugin_TimerEvent_Callback = void (*)(QImageIOPlugin*, QTimerEvent*);
    using QImageIOPlugin_ChildEvent_Callback = void (*)(QImageIOPlugin*, QChildEvent*);
    using QImageIOPlugin_CustomEvent_Callback = void (*)(QImageIOPlugin*, QEvent*);
    using QImageIOPlugin_ConnectNotify_Callback = void (*)(QImageIOPlugin*, const QMetaMethod&);
    using QImageIOPlugin_DisconnectNotify_Callback = void (*)(QImageIOPlugin*, const QMetaMethod&);
    using QImageIOPlugin_Sender_Callback = QObject* (*)();
    using QImageIOPlugin_SenderSignalIndex_Callback = int (*)();
    using QImageIOPlugin_Receivers_Callback = int (*)(const QImageIOPlugin*, const char*);
    using QImageIOPlugin_IsSignalConnected_Callback = bool (*)(const QImageIOPlugin*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QImageIOPlugin_Metacall_Callback qimageioplugin_metacall_callback = nullptr;
    QImageIOPlugin_Capabilities_Callback qimageioplugin_capabilities_callback = nullptr;
    QImageIOPlugin_Create_Callback qimageioplugin_create_callback = nullptr;
    QImageIOPlugin_Event_Callback qimageioplugin_event_callback = nullptr;
    QImageIOPlugin_EventFilter_Callback qimageioplugin_eventfilter_callback = nullptr;
    QImageIOPlugin_TimerEvent_Callback qimageioplugin_timerevent_callback = nullptr;
    QImageIOPlugin_ChildEvent_Callback qimageioplugin_childevent_callback = nullptr;
    QImageIOPlugin_CustomEvent_Callback qimageioplugin_customevent_callback = nullptr;
    QImageIOPlugin_ConnectNotify_Callback qimageioplugin_connectnotify_callback = nullptr;
    QImageIOPlugin_DisconnectNotify_Callback qimageioplugin_disconnectnotify_callback = nullptr;
    QImageIOPlugin_Sender_Callback qimageioplugin_sender_callback = nullptr;
    QImageIOPlugin_SenderSignalIndex_Callback qimageioplugin_sendersignalindex_callback = nullptr;
    QImageIOPlugin_Receivers_Callback qimageioplugin_receivers_callback = nullptr;
    QImageIOPlugin_IsSignalConnected_Callback qimageioplugin_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qimageioplugin_metacall_isbase = false;
    mutable bool qimageioplugin_capabilities_isbase = false;
    mutable bool qimageioplugin_create_isbase = false;
    mutable bool qimageioplugin_event_isbase = false;
    mutable bool qimageioplugin_eventfilter_isbase = false;
    mutable bool qimageioplugin_timerevent_isbase = false;
    mutable bool qimageioplugin_childevent_isbase = false;
    mutable bool qimageioplugin_customevent_isbase = false;
    mutable bool qimageioplugin_connectnotify_isbase = false;
    mutable bool qimageioplugin_disconnectnotify_isbase = false;
    mutable bool qimageioplugin_sender_isbase = false;
    mutable bool qimageioplugin_sendersignalindex_isbase = false;
    mutable bool qimageioplugin_receivers_isbase = false;
    mutable bool qimageioplugin_issignalconnected_isbase = false;

  public:
    VirtualQImageIOPlugin() : QImageIOPlugin(){};
    VirtualQImageIOPlugin(QObject* parent) : QImageIOPlugin(parent){};

    ~VirtualQImageIOPlugin() {
        qimageioplugin_metacall_callback = nullptr;
        qimageioplugin_capabilities_callback = nullptr;
        qimageioplugin_create_callback = nullptr;
        qimageioplugin_event_callback = nullptr;
        qimageioplugin_eventfilter_callback = nullptr;
        qimageioplugin_timerevent_callback = nullptr;
        qimageioplugin_childevent_callback = nullptr;
        qimageioplugin_customevent_callback = nullptr;
        qimageioplugin_connectnotify_callback = nullptr;
        qimageioplugin_disconnectnotify_callback = nullptr;
        qimageioplugin_sender_callback = nullptr;
        qimageioplugin_sendersignalindex_callback = nullptr;
        qimageioplugin_receivers_callback = nullptr;
        qimageioplugin_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQImageIOPlugin_Metacall_Callback(QImageIOPlugin_Metacall_Callback cb) { qimageioplugin_metacall_callback = cb; }
    void setQImageIOPlugin_Capabilities_Callback(QImageIOPlugin_Capabilities_Callback cb) { qimageioplugin_capabilities_callback = cb; }
    void setQImageIOPlugin_Create_Callback(QImageIOPlugin_Create_Callback cb) { qimageioplugin_create_callback = cb; }
    void setQImageIOPlugin_Event_Callback(QImageIOPlugin_Event_Callback cb) { qimageioplugin_event_callback = cb; }
    void setQImageIOPlugin_EventFilter_Callback(QImageIOPlugin_EventFilter_Callback cb) { qimageioplugin_eventfilter_callback = cb; }
    void setQImageIOPlugin_TimerEvent_Callback(QImageIOPlugin_TimerEvent_Callback cb) { qimageioplugin_timerevent_callback = cb; }
    void setQImageIOPlugin_ChildEvent_Callback(QImageIOPlugin_ChildEvent_Callback cb) { qimageioplugin_childevent_callback = cb; }
    void setQImageIOPlugin_CustomEvent_Callback(QImageIOPlugin_CustomEvent_Callback cb) { qimageioplugin_customevent_callback = cb; }
    void setQImageIOPlugin_ConnectNotify_Callback(QImageIOPlugin_ConnectNotify_Callback cb) { qimageioplugin_connectnotify_callback = cb; }
    void setQImageIOPlugin_DisconnectNotify_Callback(QImageIOPlugin_DisconnectNotify_Callback cb) { qimageioplugin_disconnectnotify_callback = cb; }
    void setQImageIOPlugin_Sender_Callback(QImageIOPlugin_Sender_Callback cb) { qimageioplugin_sender_callback = cb; }
    void setQImageIOPlugin_SenderSignalIndex_Callback(QImageIOPlugin_SenderSignalIndex_Callback cb) { qimageioplugin_sendersignalindex_callback = cb; }
    void setQImageIOPlugin_Receivers_Callback(QImageIOPlugin_Receivers_Callback cb) { qimageioplugin_receivers_callback = cb; }
    void setQImageIOPlugin_IsSignalConnected_Callback(QImageIOPlugin_IsSignalConnected_Callback cb) { qimageioplugin_issignalconnected_callback = cb; }

    // Base flag setters
    void setQImageIOPlugin_Metacall_IsBase(bool value) const { qimageioplugin_metacall_isbase = value; }
    void setQImageIOPlugin_Capabilities_IsBase(bool value) const { qimageioplugin_capabilities_isbase = value; }
    void setQImageIOPlugin_Create_IsBase(bool value) const { qimageioplugin_create_isbase = value; }
    void setQImageIOPlugin_Event_IsBase(bool value) const { qimageioplugin_event_isbase = value; }
    void setQImageIOPlugin_EventFilter_IsBase(bool value) const { qimageioplugin_eventfilter_isbase = value; }
    void setQImageIOPlugin_TimerEvent_IsBase(bool value) const { qimageioplugin_timerevent_isbase = value; }
    void setQImageIOPlugin_ChildEvent_IsBase(bool value) const { qimageioplugin_childevent_isbase = value; }
    void setQImageIOPlugin_CustomEvent_IsBase(bool value) const { qimageioplugin_customevent_isbase = value; }
    void setQImageIOPlugin_ConnectNotify_IsBase(bool value) const { qimageioplugin_connectnotify_isbase = value; }
    void setQImageIOPlugin_DisconnectNotify_IsBase(bool value) const { qimageioplugin_disconnectnotify_isbase = value; }
    void setQImageIOPlugin_Sender_IsBase(bool value) const { qimageioplugin_sender_isbase = value; }
    void setQImageIOPlugin_SenderSignalIndex_IsBase(bool value) const { qimageioplugin_sendersignalindex_isbase = value; }
    void setQImageIOPlugin_Receivers_IsBase(bool value) const { qimageioplugin_receivers_isbase = value; }
    void setQImageIOPlugin_IsSignalConnected_IsBase(bool value) const { qimageioplugin_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qimageioplugin_metacall_isbase) {
            qimageioplugin_metacall_isbase = false;
            return QImageIOPlugin::qt_metacall(param1, param2, param3);
        } else if (qimageioplugin_metacall_callback != nullptr) {
            return qimageioplugin_metacall_callback(this, param1, param2, param3);
        } else {
            return QImageIOPlugin::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QImageIOPlugin::Capabilities capabilities(QIODevice* device, const QByteArray& format) const override {
        return qimageioplugin_capabilities_callback(this, device, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual QImageIOHandler* create(QIODevice* device, const QByteArray& format) const override {
        return qimageioplugin_create_callback(this, device, format);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qimageioplugin_event_isbase) {
            qimageioplugin_event_isbase = false;
            return QImageIOPlugin::event(event);
        } else if (qimageioplugin_event_callback != nullptr) {
            return qimageioplugin_event_callback(this, event);
        } else {
            return QImageIOPlugin::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qimageioplugin_eventfilter_isbase) {
            qimageioplugin_eventfilter_isbase = false;
            return QImageIOPlugin::eventFilter(watched, event);
        } else if (qimageioplugin_eventfilter_callback != nullptr) {
            return qimageioplugin_eventfilter_callback(this, watched, event);
        } else {
            return QImageIOPlugin::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qimageioplugin_timerevent_isbase) {
            qimageioplugin_timerevent_isbase = false;
            QImageIOPlugin::timerEvent(event);
        } else if (qimageioplugin_timerevent_callback != nullptr) {
            qimageioplugin_timerevent_callback(this, event);
        } else {
            QImageIOPlugin::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qimageioplugin_childevent_isbase) {
            qimageioplugin_childevent_isbase = false;
            QImageIOPlugin::childEvent(event);
        } else if (qimageioplugin_childevent_callback != nullptr) {
            qimageioplugin_childevent_callback(this, event);
        } else {
            QImageIOPlugin::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qimageioplugin_customevent_isbase) {
            qimageioplugin_customevent_isbase = false;
            QImageIOPlugin::customEvent(event);
        } else if (qimageioplugin_customevent_callback != nullptr) {
            qimageioplugin_customevent_callback(this, event);
        } else {
            QImageIOPlugin::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qimageioplugin_connectnotify_isbase) {
            qimageioplugin_connectnotify_isbase = false;
            QImageIOPlugin::connectNotify(signal);
        } else if (qimageioplugin_connectnotify_callback != nullptr) {
            qimageioplugin_connectnotify_callback(this, signal);
        } else {
            QImageIOPlugin::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qimageioplugin_disconnectnotify_isbase) {
            qimageioplugin_disconnectnotify_isbase = false;
            QImageIOPlugin::disconnectNotify(signal);
        } else if (qimageioplugin_disconnectnotify_callback != nullptr) {
            qimageioplugin_disconnectnotify_callback(this, signal);
        } else {
            QImageIOPlugin::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qimageioplugin_sender_isbase) {
            qimageioplugin_sender_isbase = false;
            return QImageIOPlugin::sender();
        } else if (qimageioplugin_sender_callback != nullptr) {
            return qimageioplugin_sender_callback();
        } else {
            return QImageIOPlugin::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qimageioplugin_sendersignalindex_isbase) {
            qimageioplugin_sendersignalindex_isbase = false;
            return QImageIOPlugin::senderSignalIndex();
        } else if (qimageioplugin_sendersignalindex_callback != nullptr) {
            return qimageioplugin_sendersignalindex_callback();
        } else {
            return QImageIOPlugin::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qimageioplugin_receivers_isbase) {
            qimageioplugin_receivers_isbase = false;
            return QImageIOPlugin::receivers(signal);
        } else if (qimageioplugin_receivers_callback != nullptr) {
            return qimageioplugin_receivers_callback(this, signal);
        } else {
            return QImageIOPlugin::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qimageioplugin_issignalconnected_isbase) {
            qimageioplugin_issignalconnected_isbase = false;
            return QImageIOPlugin::isSignalConnected(signal);
        } else if (qimageioplugin_issignalconnected_callback != nullptr) {
            return qimageioplugin_issignalconnected_callback(this, signal);
        } else {
            return QImageIOPlugin::isSignalConnected(signal);
        }
    }
};

#endif
