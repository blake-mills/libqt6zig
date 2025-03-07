#pragma once
#ifndef SRCC_LIBVIRTUALQFORMLAYOUT_H
#define SRCC_LIBVIRTUALQFORMLAYOUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QFormLayout so that we can call protected methods
class VirtualQFormLayout : public QFormLayout {

  public:
    // Virtual class public types (including callbacks)
    using QFormLayout_Metacall_Callback = int (*)(QFormLayout*, QMetaObject::Call, int, void**);
    using QFormLayout_Spacing_Callback = int (*)();
    using QFormLayout_SetSpacing_Callback = void (*)(QFormLayout*, int);
    using QFormLayout_AddItem_Callback = void (*)(QFormLayout*, QLayoutItem*);
    using QFormLayout_ItemAtWithIndex_Callback = QLayoutItem* (*)(const QFormLayout*, int);
    using QFormLayout_TakeAt_Callback = QLayoutItem* (*)(QFormLayout*, int);
    using QFormLayout_SetGeometry_Callback = void (*)(QFormLayout*, const QRect&);
    using QFormLayout_MinimumSize_Callback = QSize (*)();
    using QFormLayout_SizeHint_Callback = QSize (*)();
    using QFormLayout_Invalidate_Callback = void (*)();
    using QFormLayout_HasHeightForWidth_Callback = bool (*)();
    using QFormLayout_HeightForWidth_Callback = int (*)(const QFormLayout*, int);
    using QFormLayout_ExpandingDirections_Callback = Qt::Orientations (*)();
    using QFormLayout_Count_Callback = int (*)();
    using QFormLayout_Geometry_Callback = QRect (*)();
    using QFormLayout_MaximumSize_Callback = QSize (*)();
    using QFormLayout_IndexOf_Callback = int (*)(const QFormLayout*, const QWidget*);
    using QFormLayout_IsEmpty_Callback = bool (*)();
    using QFormLayout_ControlTypes_Callback = QSizePolicy::ControlTypes (*)();
    using QFormLayout_ReplaceWidget_Callback = QLayoutItem* (*)(QFormLayout*, QWidget*, QWidget*, Qt::FindChildOptions);
    using QFormLayout_Layout_Callback = QLayout* (*)();
    using QFormLayout_ChildEvent_Callback = void (*)(QFormLayout*, QChildEvent*);
    using QFormLayout_Event_Callback = bool (*)(QFormLayout*, QEvent*);
    using QFormLayout_EventFilter_Callback = bool (*)(QFormLayout*, QObject*, QEvent*);
    using QFormLayout_TimerEvent_Callback = void (*)(QFormLayout*, QTimerEvent*);
    using QFormLayout_CustomEvent_Callback = void (*)(QFormLayout*, QEvent*);
    using QFormLayout_ConnectNotify_Callback = void (*)(QFormLayout*, const QMetaMethod&);
    using QFormLayout_DisconnectNotify_Callback = void (*)(QFormLayout*, const QMetaMethod&);
    using QFormLayout_MinimumHeightForWidth_Callback = int (*)(const QFormLayout*, int);
    using QFormLayout_Widget_Callback = QWidget* (*)();
    using QFormLayout_SpacerItem_Callback = QSpacerItem* (*)();
    using QFormLayout_WidgetEvent_Callback = void (*)(QFormLayout*, QEvent*);
    using QFormLayout_AddChildLayout_Callback = void (*)(QFormLayout*, QLayout*);
    using QFormLayout_AddChildWidget_Callback = void (*)(QFormLayout*, QWidget*);
    using QFormLayout_AdoptLayout_Callback = bool (*)(QFormLayout*, QLayout*);
    using QFormLayout_AlignmentRect_Callback = QRect (*)(const QFormLayout*, const QRect&);
    using QFormLayout_Sender_Callback = QObject* (*)();
    using QFormLayout_SenderSignalIndex_Callback = int (*)();
    using QFormLayout_Receivers_Callback = int (*)(const QFormLayout*, const char*);
    using QFormLayout_IsSignalConnected_Callback = bool (*)(const QFormLayout*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QFormLayout_Metacall_Callback qformlayout_metacall_callback = nullptr;
    QFormLayout_Spacing_Callback qformlayout_spacing_callback = nullptr;
    QFormLayout_SetSpacing_Callback qformlayout_setspacing_callback = nullptr;
    QFormLayout_AddItem_Callback qformlayout_additem_callback = nullptr;
    QFormLayout_ItemAtWithIndex_Callback qformlayout_itematwithindex_callback = nullptr;
    QFormLayout_TakeAt_Callback qformlayout_takeat_callback = nullptr;
    QFormLayout_SetGeometry_Callback qformlayout_setgeometry_callback = nullptr;
    QFormLayout_MinimumSize_Callback qformlayout_minimumsize_callback = nullptr;
    QFormLayout_SizeHint_Callback qformlayout_sizehint_callback = nullptr;
    QFormLayout_Invalidate_Callback qformlayout_invalidate_callback = nullptr;
    QFormLayout_HasHeightForWidth_Callback qformlayout_hasheightforwidth_callback = nullptr;
    QFormLayout_HeightForWidth_Callback qformlayout_heightforwidth_callback = nullptr;
    QFormLayout_ExpandingDirections_Callback qformlayout_expandingdirections_callback = nullptr;
    QFormLayout_Count_Callback qformlayout_count_callback = nullptr;
    QFormLayout_Geometry_Callback qformlayout_geometry_callback = nullptr;
    QFormLayout_MaximumSize_Callback qformlayout_maximumsize_callback = nullptr;
    QFormLayout_IndexOf_Callback qformlayout_indexof_callback = nullptr;
    QFormLayout_IsEmpty_Callback qformlayout_isempty_callback = nullptr;
    QFormLayout_ControlTypes_Callback qformlayout_controltypes_callback = nullptr;
    QFormLayout_ReplaceWidget_Callback qformlayout_replacewidget_callback = nullptr;
    QFormLayout_Layout_Callback qformlayout_layout_callback = nullptr;
    QFormLayout_ChildEvent_Callback qformlayout_childevent_callback = nullptr;
    QFormLayout_Event_Callback qformlayout_event_callback = nullptr;
    QFormLayout_EventFilter_Callback qformlayout_eventfilter_callback = nullptr;
    QFormLayout_TimerEvent_Callback qformlayout_timerevent_callback = nullptr;
    QFormLayout_CustomEvent_Callback qformlayout_customevent_callback = nullptr;
    QFormLayout_ConnectNotify_Callback qformlayout_connectnotify_callback = nullptr;
    QFormLayout_DisconnectNotify_Callback qformlayout_disconnectnotify_callback = nullptr;
    QFormLayout_MinimumHeightForWidth_Callback qformlayout_minimumheightforwidth_callback = nullptr;
    QFormLayout_Widget_Callback qformlayout_widget_callback = nullptr;
    QFormLayout_SpacerItem_Callback qformlayout_spaceritem_callback = nullptr;
    QFormLayout_WidgetEvent_Callback qformlayout_widgetevent_callback = nullptr;
    QFormLayout_AddChildLayout_Callback qformlayout_addchildlayout_callback = nullptr;
    QFormLayout_AddChildWidget_Callback qformlayout_addchildwidget_callback = nullptr;
    QFormLayout_AdoptLayout_Callback qformlayout_adoptlayout_callback = nullptr;
    QFormLayout_AlignmentRect_Callback qformlayout_alignmentrect_callback = nullptr;
    QFormLayout_Sender_Callback qformlayout_sender_callback = nullptr;
    QFormLayout_SenderSignalIndex_Callback qformlayout_sendersignalindex_callback = nullptr;
    QFormLayout_Receivers_Callback qformlayout_receivers_callback = nullptr;
    QFormLayout_IsSignalConnected_Callback qformlayout_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qformlayout_metacall_isbase = false;
    mutable bool qformlayout_spacing_isbase = false;
    mutable bool qformlayout_setspacing_isbase = false;
    mutable bool qformlayout_additem_isbase = false;
    mutable bool qformlayout_itematwithindex_isbase = false;
    mutable bool qformlayout_takeat_isbase = false;
    mutable bool qformlayout_setgeometry_isbase = false;
    mutable bool qformlayout_minimumsize_isbase = false;
    mutable bool qformlayout_sizehint_isbase = false;
    mutable bool qformlayout_invalidate_isbase = false;
    mutable bool qformlayout_hasheightforwidth_isbase = false;
    mutable bool qformlayout_heightforwidth_isbase = false;
    mutable bool qformlayout_expandingdirections_isbase = false;
    mutable bool qformlayout_count_isbase = false;
    mutable bool qformlayout_geometry_isbase = false;
    mutable bool qformlayout_maximumsize_isbase = false;
    mutable bool qformlayout_indexof_isbase = false;
    mutable bool qformlayout_isempty_isbase = false;
    mutable bool qformlayout_controltypes_isbase = false;
    mutable bool qformlayout_replacewidget_isbase = false;
    mutable bool qformlayout_layout_isbase = false;
    mutable bool qformlayout_childevent_isbase = false;
    mutable bool qformlayout_event_isbase = false;
    mutable bool qformlayout_eventfilter_isbase = false;
    mutable bool qformlayout_timerevent_isbase = false;
    mutable bool qformlayout_customevent_isbase = false;
    mutable bool qformlayout_connectnotify_isbase = false;
    mutable bool qformlayout_disconnectnotify_isbase = false;
    mutable bool qformlayout_minimumheightforwidth_isbase = false;
    mutable bool qformlayout_widget_isbase = false;
    mutable bool qformlayout_spaceritem_isbase = false;
    mutable bool qformlayout_widgetevent_isbase = false;
    mutable bool qformlayout_addchildlayout_isbase = false;
    mutable bool qformlayout_addchildwidget_isbase = false;
    mutable bool qformlayout_adoptlayout_isbase = false;
    mutable bool qformlayout_alignmentrect_isbase = false;
    mutable bool qformlayout_sender_isbase = false;
    mutable bool qformlayout_sendersignalindex_isbase = false;
    mutable bool qformlayout_receivers_isbase = false;
    mutable bool qformlayout_issignalconnected_isbase = false;

  public:
    VirtualQFormLayout(QWidget* parent) : QFormLayout(parent){};
    VirtualQFormLayout() : QFormLayout(){};

    ~VirtualQFormLayout() {
        qformlayout_metacall_callback = nullptr;
        qformlayout_spacing_callback = nullptr;
        qformlayout_setspacing_callback = nullptr;
        qformlayout_additem_callback = nullptr;
        qformlayout_itematwithindex_callback = nullptr;
        qformlayout_takeat_callback = nullptr;
        qformlayout_setgeometry_callback = nullptr;
        qformlayout_minimumsize_callback = nullptr;
        qformlayout_sizehint_callback = nullptr;
        qformlayout_invalidate_callback = nullptr;
        qformlayout_hasheightforwidth_callback = nullptr;
        qformlayout_heightforwidth_callback = nullptr;
        qformlayout_expandingdirections_callback = nullptr;
        qformlayout_count_callback = nullptr;
        qformlayout_geometry_callback = nullptr;
        qformlayout_maximumsize_callback = nullptr;
        qformlayout_indexof_callback = nullptr;
        qformlayout_isempty_callback = nullptr;
        qformlayout_controltypes_callback = nullptr;
        qformlayout_replacewidget_callback = nullptr;
        qformlayout_layout_callback = nullptr;
        qformlayout_childevent_callback = nullptr;
        qformlayout_event_callback = nullptr;
        qformlayout_eventfilter_callback = nullptr;
        qformlayout_timerevent_callback = nullptr;
        qformlayout_customevent_callback = nullptr;
        qformlayout_connectnotify_callback = nullptr;
        qformlayout_disconnectnotify_callback = nullptr;
        qformlayout_minimumheightforwidth_callback = nullptr;
        qformlayout_widget_callback = nullptr;
        qformlayout_spaceritem_callback = nullptr;
        qformlayout_widgetevent_callback = nullptr;
        qformlayout_addchildlayout_callback = nullptr;
        qformlayout_addchildwidget_callback = nullptr;
        qformlayout_adoptlayout_callback = nullptr;
        qformlayout_alignmentrect_callback = nullptr;
        qformlayout_sender_callback = nullptr;
        qformlayout_sendersignalindex_callback = nullptr;
        qformlayout_receivers_callback = nullptr;
        qformlayout_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQFormLayout_Metacall_Callback(QFormLayout_Metacall_Callback cb) { qformlayout_metacall_callback = cb; }
    void setQFormLayout_Spacing_Callback(QFormLayout_Spacing_Callback cb) { qformlayout_spacing_callback = cb; }
    void setQFormLayout_SetSpacing_Callback(QFormLayout_SetSpacing_Callback cb) { qformlayout_setspacing_callback = cb; }
    void setQFormLayout_AddItem_Callback(QFormLayout_AddItem_Callback cb) { qformlayout_additem_callback = cb; }
    void setQFormLayout_ItemAtWithIndex_Callback(QFormLayout_ItemAtWithIndex_Callback cb) { qformlayout_itematwithindex_callback = cb; }
    void setQFormLayout_TakeAt_Callback(QFormLayout_TakeAt_Callback cb) { qformlayout_takeat_callback = cb; }
    void setQFormLayout_SetGeometry_Callback(QFormLayout_SetGeometry_Callback cb) { qformlayout_setgeometry_callback = cb; }
    void setQFormLayout_MinimumSize_Callback(QFormLayout_MinimumSize_Callback cb) { qformlayout_minimumsize_callback = cb; }
    void setQFormLayout_SizeHint_Callback(QFormLayout_SizeHint_Callback cb) { qformlayout_sizehint_callback = cb; }
    void setQFormLayout_Invalidate_Callback(QFormLayout_Invalidate_Callback cb) { qformlayout_invalidate_callback = cb; }
    void setQFormLayout_HasHeightForWidth_Callback(QFormLayout_HasHeightForWidth_Callback cb) { qformlayout_hasheightforwidth_callback = cb; }
    void setQFormLayout_HeightForWidth_Callback(QFormLayout_HeightForWidth_Callback cb) { qformlayout_heightforwidth_callback = cb; }
    void setQFormLayout_ExpandingDirections_Callback(QFormLayout_ExpandingDirections_Callback cb) { qformlayout_expandingdirections_callback = cb; }
    void setQFormLayout_Count_Callback(QFormLayout_Count_Callback cb) { qformlayout_count_callback = cb; }
    void setQFormLayout_Geometry_Callback(QFormLayout_Geometry_Callback cb) { qformlayout_geometry_callback = cb; }
    void setQFormLayout_MaximumSize_Callback(QFormLayout_MaximumSize_Callback cb) { qformlayout_maximumsize_callback = cb; }
    void setQFormLayout_IndexOf_Callback(QFormLayout_IndexOf_Callback cb) { qformlayout_indexof_callback = cb; }
    void setQFormLayout_IsEmpty_Callback(QFormLayout_IsEmpty_Callback cb) { qformlayout_isempty_callback = cb; }
    void setQFormLayout_ControlTypes_Callback(QFormLayout_ControlTypes_Callback cb) { qformlayout_controltypes_callback = cb; }
    void setQFormLayout_ReplaceWidget_Callback(QFormLayout_ReplaceWidget_Callback cb) { qformlayout_replacewidget_callback = cb; }
    void setQFormLayout_Layout_Callback(QFormLayout_Layout_Callback cb) { qformlayout_layout_callback = cb; }
    void setQFormLayout_ChildEvent_Callback(QFormLayout_ChildEvent_Callback cb) { qformlayout_childevent_callback = cb; }
    void setQFormLayout_Event_Callback(QFormLayout_Event_Callback cb) { qformlayout_event_callback = cb; }
    void setQFormLayout_EventFilter_Callback(QFormLayout_EventFilter_Callback cb) { qformlayout_eventfilter_callback = cb; }
    void setQFormLayout_TimerEvent_Callback(QFormLayout_TimerEvent_Callback cb) { qformlayout_timerevent_callback = cb; }
    void setQFormLayout_CustomEvent_Callback(QFormLayout_CustomEvent_Callback cb) { qformlayout_customevent_callback = cb; }
    void setQFormLayout_ConnectNotify_Callback(QFormLayout_ConnectNotify_Callback cb) { qformlayout_connectnotify_callback = cb; }
    void setQFormLayout_DisconnectNotify_Callback(QFormLayout_DisconnectNotify_Callback cb) { qformlayout_disconnectnotify_callback = cb; }
    void setQFormLayout_MinimumHeightForWidth_Callback(QFormLayout_MinimumHeightForWidth_Callback cb) { qformlayout_minimumheightforwidth_callback = cb; }
    void setQFormLayout_Widget_Callback(QFormLayout_Widget_Callback cb) { qformlayout_widget_callback = cb; }
    void setQFormLayout_SpacerItem_Callback(QFormLayout_SpacerItem_Callback cb) { qformlayout_spaceritem_callback = cb; }
    void setQFormLayout_WidgetEvent_Callback(QFormLayout_WidgetEvent_Callback cb) { qformlayout_widgetevent_callback = cb; }
    void setQFormLayout_AddChildLayout_Callback(QFormLayout_AddChildLayout_Callback cb) { qformlayout_addchildlayout_callback = cb; }
    void setQFormLayout_AddChildWidget_Callback(QFormLayout_AddChildWidget_Callback cb) { qformlayout_addchildwidget_callback = cb; }
    void setQFormLayout_AdoptLayout_Callback(QFormLayout_AdoptLayout_Callback cb) { qformlayout_adoptlayout_callback = cb; }
    void setQFormLayout_AlignmentRect_Callback(QFormLayout_AlignmentRect_Callback cb) { qformlayout_alignmentrect_callback = cb; }
    void setQFormLayout_Sender_Callback(QFormLayout_Sender_Callback cb) { qformlayout_sender_callback = cb; }
    void setQFormLayout_SenderSignalIndex_Callback(QFormLayout_SenderSignalIndex_Callback cb) { qformlayout_sendersignalindex_callback = cb; }
    void setQFormLayout_Receivers_Callback(QFormLayout_Receivers_Callback cb) { qformlayout_receivers_callback = cb; }
    void setQFormLayout_IsSignalConnected_Callback(QFormLayout_IsSignalConnected_Callback cb) { qformlayout_issignalconnected_callback = cb; }

    // Base flag setters
    void setQFormLayout_Metacall_IsBase(bool value) const { qformlayout_metacall_isbase = value; }
    void setQFormLayout_Spacing_IsBase(bool value) const { qformlayout_spacing_isbase = value; }
    void setQFormLayout_SetSpacing_IsBase(bool value) const { qformlayout_setspacing_isbase = value; }
    void setQFormLayout_AddItem_IsBase(bool value) const { qformlayout_additem_isbase = value; }
    void setQFormLayout_ItemAtWithIndex_IsBase(bool value) const { qformlayout_itematwithindex_isbase = value; }
    void setQFormLayout_TakeAt_IsBase(bool value) const { qformlayout_takeat_isbase = value; }
    void setQFormLayout_SetGeometry_IsBase(bool value) const { qformlayout_setgeometry_isbase = value; }
    void setQFormLayout_MinimumSize_IsBase(bool value) const { qformlayout_minimumsize_isbase = value; }
    void setQFormLayout_SizeHint_IsBase(bool value) const { qformlayout_sizehint_isbase = value; }
    void setQFormLayout_Invalidate_IsBase(bool value) const { qformlayout_invalidate_isbase = value; }
    void setQFormLayout_HasHeightForWidth_IsBase(bool value) const { qformlayout_hasheightforwidth_isbase = value; }
    void setQFormLayout_HeightForWidth_IsBase(bool value) const { qformlayout_heightforwidth_isbase = value; }
    void setQFormLayout_ExpandingDirections_IsBase(bool value) const { qformlayout_expandingdirections_isbase = value; }
    void setQFormLayout_Count_IsBase(bool value) const { qformlayout_count_isbase = value; }
    void setQFormLayout_Geometry_IsBase(bool value) const { qformlayout_geometry_isbase = value; }
    void setQFormLayout_MaximumSize_IsBase(bool value) const { qformlayout_maximumsize_isbase = value; }
    void setQFormLayout_IndexOf_IsBase(bool value) const { qformlayout_indexof_isbase = value; }
    void setQFormLayout_IsEmpty_IsBase(bool value) const { qformlayout_isempty_isbase = value; }
    void setQFormLayout_ControlTypes_IsBase(bool value) const { qformlayout_controltypes_isbase = value; }
    void setQFormLayout_ReplaceWidget_IsBase(bool value) const { qformlayout_replacewidget_isbase = value; }
    void setQFormLayout_Layout_IsBase(bool value) const { qformlayout_layout_isbase = value; }
    void setQFormLayout_ChildEvent_IsBase(bool value) const { qformlayout_childevent_isbase = value; }
    void setQFormLayout_Event_IsBase(bool value) const { qformlayout_event_isbase = value; }
    void setQFormLayout_EventFilter_IsBase(bool value) const { qformlayout_eventfilter_isbase = value; }
    void setQFormLayout_TimerEvent_IsBase(bool value) const { qformlayout_timerevent_isbase = value; }
    void setQFormLayout_CustomEvent_IsBase(bool value) const { qformlayout_customevent_isbase = value; }
    void setQFormLayout_ConnectNotify_IsBase(bool value) const { qformlayout_connectnotify_isbase = value; }
    void setQFormLayout_DisconnectNotify_IsBase(bool value) const { qformlayout_disconnectnotify_isbase = value; }
    void setQFormLayout_MinimumHeightForWidth_IsBase(bool value) const { qformlayout_minimumheightforwidth_isbase = value; }
    void setQFormLayout_Widget_IsBase(bool value) const { qformlayout_widget_isbase = value; }
    void setQFormLayout_SpacerItem_IsBase(bool value) const { qformlayout_spaceritem_isbase = value; }
    void setQFormLayout_WidgetEvent_IsBase(bool value) const { qformlayout_widgetevent_isbase = value; }
    void setQFormLayout_AddChildLayout_IsBase(bool value) const { qformlayout_addchildlayout_isbase = value; }
    void setQFormLayout_AddChildWidget_IsBase(bool value) const { qformlayout_addchildwidget_isbase = value; }
    void setQFormLayout_AdoptLayout_IsBase(bool value) const { qformlayout_adoptlayout_isbase = value; }
    void setQFormLayout_AlignmentRect_IsBase(bool value) const { qformlayout_alignmentrect_isbase = value; }
    void setQFormLayout_Sender_IsBase(bool value) const { qformlayout_sender_isbase = value; }
    void setQFormLayout_SenderSignalIndex_IsBase(bool value) const { qformlayout_sendersignalindex_isbase = value; }
    void setQFormLayout_Receivers_IsBase(bool value) const { qformlayout_receivers_isbase = value; }
    void setQFormLayout_IsSignalConnected_IsBase(bool value) const { qformlayout_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qformlayout_metacall_isbase) {
            qformlayout_metacall_isbase = false;
            return QFormLayout::qt_metacall(param1, param2, param3);
        } else if (qformlayout_metacall_callback != nullptr) {
            return qformlayout_metacall_callback(this, param1, param2, param3);
        } else {
            return QFormLayout::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int spacing() const override {
        if (qformlayout_spacing_isbase) {
            qformlayout_spacing_isbase = false;
            return QFormLayout::spacing();
        } else if (qformlayout_spacing_callback != nullptr) {
            return qformlayout_spacing_callback();
        } else {
            return QFormLayout::spacing();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSpacing(int spacing) override {
        if (qformlayout_setspacing_isbase) {
            qformlayout_setspacing_isbase = false;
            QFormLayout::setSpacing(spacing);
        } else if (qformlayout_setspacing_callback != nullptr) {
            qformlayout_setspacing_callback(this, spacing);
        } else {
            QFormLayout::setSpacing(spacing);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void addItem(QLayoutItem* item) override {
        if (qformlayout_additem_isbase) {
            qformlayout_additem_isbase = false;
            QFormLayout::addItem(item);
        } else if (qformlayout_additem_callback != nullptr) {
            qformlayout_additem_callback(this, item);
        } else {
            QFormLayout::addItem(item);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* itemAt(int index) const override {
        if (qformlayout_itematwithindex_isbase) {
            qformlayout_itematwithindex_isbase = false;
            return QFormLayout::itemAt(index);
        } else if (qformlayout_itematwithindex_callback != nullptr) {
            return qformlayout_itematwithindex_callback(this, index);
        } else {
            return QFormLayout::itemAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* takeAt(int index) override {
        if (qformlayout_takeat_isbase) {
            qformlayout_takeat_isbase = false;
            return QFormLayout::takeAt(index);
        } else if (qformlayout_takeat_callback != nullptr) {
            return qformlayout_takeat_callback(this, index);
        } else {
            return QFormLayout::takeAt(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setGeometry(const QRect& rect) override {
        if (qformlayout_setgeometry_isbase) {
            qformlayout_setgeometry_isbase = false;
            QFormLayout::setGeometry(rect);
        } else if (qformlayout_setgeometry_callback != nullptr) {
            qformlayout_setgeometry_callback(this, rect);
        } else {
            QFormLayout::setGeometry(rect);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSize() const override {
        if (qformlayout_minimumsize_isbase) {
            qformlayout_minimumsize_isbase = false;
            return QFormLayout::minimumSize();
        } else if (qformlayout_minimumsize_callback != nullptr) {
            return qformlayout_minimumsize_callback();
        } else {
            return QFormLayout::minimumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qformlayout_sizehint_isbase) {
            qformlayout_sizehint_isbase = false;
            return QFormLayout::sizeHint();
        } else if (qformlayout_sizehint_callback != nullptr) {
            return qformlayout_sizehint_callback();
        } else {
            return QFormLayout::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void invalidate() override {
        if (qformlayout_invalidate_isbase) {
            qformlayout_invalidate_isbase = false;
            QFormLayout::invalidate();
        } else if (qformlayout_invalidate_callback != nullptr) {
            qformlayout_invalidate_callback();
        } else {
            QFormLayout::invalidate();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qformlayout_hasheightforwidth_isbase) {
            qformlayout_hasheightforwidth_isbase = false;
            return QFormLayout::hasHeightForWidth();
        } else if (qformlayout_hasheightforwidth_callback != nullptr) {
            return qformlayout_hasheightforwidth_callback();
        } else {
            return QFormLayout::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int width) const override {
        if (qformlayout_heightforwidth_isbase) {
            qformlayout_heightforwidth_isbase = false;
            return QFormLayout::heightForWidth(width);
        } else if (qformlayout_heightforwidth_callback != nullptr) {
            return qformlayout_heightforwidth_callback(this, width);
        } else {
            return QFormLayout::heightForWidth(width);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::Orientations expandingDirections() const override {
        if (qformlayout_expandingdirections_isbase) {
            qformlayout_expandingdirections_isbase = false;
            return QFormLayout::expandingDirections();
        } else if (qformlayout_expandingdirections_callback != nullptr) {
            return qformlayout_expandingdirections_callback();
        } else {
            return QFormLayout::expandingDirections();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int count() const override {
        if (qformlayout_count_isbase) {
            qformlayout_count_isbase = false;
            return QFormLayout::count();
        } else if (qformlayout_count_callback != nullptr) {
            return qformlayout_count_callback();
        } else {
            return QFormLayout::count();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect geometry() const override {
        if (qformlayout_geometry_isbase) {
            qformlayout_geometry_isbase = false;
            return QFormLayout::geometry();
        } else if (qformlayout_geometry_callback != nullptr) {
            return qformlayout_geometry_callback();
        } else {
            return QFormLayout::geometry();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize maximumSize() const override {
        if (qformlayout_maximumsize_isbase) {
            qformlayout_maximumsize_isbase = false;
            return QFormLayout::maximumSize();
        } else if (qformlayout_maximumsize_callback != nullptr) {
            return qformlayout_maximumsize_callback();
        } else {
            return QFormLayout::maximumSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indexOf(const QWidget* param1) const override {
        if (qformlayout_indexof_isbase) {
            qformlayout_indexof_isbase = false;
            return QFormLayout::indexOf(param1);
        } else if (qformlayout_indexof_callback != nullptr) {
            return qformlayout_indexof_callback(this, param1);
        } else {
            return QFormLayout::indexOf(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isEmpty() const override {
        if (qformlayout_isempty_isbase) {
            qformlayout_isempty_isbase = false;
            return QFormLayout::isEmpty();
        } else if (qformlayout_isempty_callback != nullptr) {
            return qformlayout_isempty_callback();
        } else {
            return QFormLayout::isEmpty();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSizePolicy::ControlTypes controlTypes() const override {
        if (qformlayout_controltypes_isbase) {
            qformlayout_controltypes_isbase = false;
            return QFormLayout::controlTypes();
        } else if (qformlayout_controltypes_callback != nullptr) {
            return qformlayout_controltypes_callback();
        } else {
            return QFormLayout::controlTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
        if (qformlayout_replacewidget_isbase) {
            qformlayout_replacewidget_isbase = false;
            return QFormLayout::replaceWidget(from, to, options);
        } else if (qformlayout_replacewidget_callback != nullptr) {
            return qformlayout_replacewidget_callback(this, from, to, options);
        } else {
            return QFormLayout::replaceWidget(from, to, options);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QLayout* layout() override {
        if (qformlayout_layout_isbase) {
            qformlayout_layout_isbase = false;
            return QFormLayout::layout();
        } else if (qformlayout_layout_callback != nullptr) {
            return qformlayout_layout_callback();
        } else {
            return QFormLayout::layout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* e) override {
        if (qformlayout_childevent_isbase) {
            qformlayout_childevent_isbase = false;
            QFormLayout::childEvent(e);
        } else if (qformlayout_childevent_callback != nullptr) {
            qformlayout_childevent_callback(this, e);
        } else {
            QFormLayout::childEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qformlayout_event_isbase) {
            qformlayout_event_isbase = false;
            return QFormLayout::event(event);
        } else if (qformlayout_event_callback != nullptr) {
            return qformlayout_event_callback(this, event);
        } else {
            return QFormLayout::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qformlayout_eventfilter_isbase) {
            qformlayout_eventfilter_isbase = false;
            return QFormLayout::eventFilter(watched, event);
        } else if (qformlayout_eventfilter_callback != nullptr) {
            return qformlayout_eventfilter_callback(this, watched, event);
        } else {
            return QFormLayout::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qformlayout_timerevent_isbase) {
            qformlayout_timerevent_isbase = false;
            QFormLayout::timerEvent(event);
        } else if (qformlayout_timerevent_callback != nullptr) {
            qformlayout_timerevent_callback(this, event);
        } else {
            QFormLayout::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qformlayout_customevent_isbase) {
            qformlayout_customevent_isbase = false;
            QFormLayout::customEvent(event);
        } else if (qformlayout_customevent_callback != nullptr) {
            qformlayout_customevent_callback(this, event);
        } else {
            QFormLayout::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qformlayout_connectnotify_isbase) {
            qformlayout_connectnotify_isbase = false;
            QFormLayout::connectNotify(signal);
        } else if (qformlayout_connectnotify_callback != nullptr) {
            qformlayout_connectnotify_callback(this, signal);
        } else {
            QFormLayout::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qformlayout_disconnectnotify_isbase) {
            qformlayout_disconnectnotify_isbase = false;
            QFormLayout::disconnectNotify(signal);
        } else if (qformlayout_disconnectnotify_callback != nullptr) {
            qformlayout_disconnectnotify_callback(this, signal);
        } else {
            QFormLayout::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int minimumHeightForWidth(int param1) const override {
        if (qformlayout_minimumheightforwidth_isbase) {
            qformlayout_minimumheightforwidth_isbase = false;
            return QFormLayout::minimumHeightForWidth(param1);
        } else if (qformlayout_minimumheightforwidth_callback != nullptr) {
            return qformlayout_minimumheightforwidth_callback(this, param1);
        } else {
            return QFormLayout::minimumHeightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* widget() const override {
        if (qformlayout_widget_isbase) {
            qformlayout_widget_isbase = false;
            return QFormLayout::widget();
        } else if (qformlayout_widget_callback != nullptr) {
            return qformlayout_widget_callback();
        } else {
            return QFormLayout::widget();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSpacerItem* spacerItem() override {
        if (qformlayout_spaceritem_isbase) {
            qformlayout_spaceritem_isbase = false;
            return QFormLayout::spacerItem();
        } else if (qformlayout_spaceritem_callback != nullptr) {
            return qformlayout_spaceritem_callback();
        } else {
            return QFormLayout::spacerItem();
        }
    }

    // Virtual method for C ABI access and custom callback
    void widgetEvent(QEvent* param1) {
        if (qformlayout_widgetevent_isbase) {
            qformlayout_widgetevent_isbase = false;
            QFormLayout::widgetEvent(param1);
        } else if (qformlayout_widgetevent_callback != nullptr) {
            qformlayout_widgetevent_callback(this, param1);
        } else {
            QFormLayout::widgetEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildLayout(QLayout* l) {
        if (qformlayout_addchildlayout_isbase) {
            qformlayout_addchildlayout_isbase = false;
            QFormLayout::addChildLayout(l);
        } else if (qformlayout_addchildlayout_callback != nullptr) {
            qformlayout_addchildlayout_callback(this, l);
        } else {
            QFormLayout::addChildLayout(l);
        }
    }

    // Virtual method for C ABI access and custom callback
    void addChildWidget(QWidget* w) {
        if (qformlayout_addchildwidget_isbase) {
            qformlayout_addchildwidget_isbase = false;
            QFormLayout::addChildWidget(w);
        } else if (qformlayout_addchildwidget_callback != nullptr) {
            qformlayout_addchildwidget_callback(this, w);
        } else {
            QFormLayout::addChildWidget(w);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool adoptLayout(QLayout* layout) {
        if (qformlayout_adoptlayout_isbase) {
            qformlayout_adoptlayout_isbase = false;
            return QFormLayout::adoptLayout(layout);
        } else if (qformlayout_adoptlayout_callback != nullptr) {
            return qformlayout_adoptlayout_callback(this, layout);
        } else {
            return QFormLayout::adoptLayout(layout);
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect alignmentRect(const QRect& param1) const {
        if (qformlayout_alignmentrect_isbase) {
            qformlayout_alignmentrect_isbase = false;
            return QFormLayout::alignmentRect(param1);
        } else if (qformlayout_alignmentrect_callback != nullptr) {
            return qformlayout_alignmentrect_callback(this, param1);
        } else {
            return QFormLayout::alignmentRect(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qformlayout_sender_isbase) {
            qformlayout_sender_isbase = false;
            return QFormLayout::sender();
        } else if (qformlayout_sender_callback != nullptr) {
            return qformlayout_sender_callback();
        } else {
            return QFormLayout::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qformlayout_sendersignalindex_isbase) {
            qformlayout_sendersignalindex_isbase = false;
            return QFormLayout::senderSignalIndex();
        } else if (qformlayout_sendersignalindex_callback != nullptr) {
            return qformlayout_sendersignalindex_callback();
        } else {
            return QFormLayout::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qformlayout_receivers_isbase) {
            qformlayout_receivers_isbase = false;
            return QFormLayout::receivers(signal);
        } else if (qformlayout_receivers_callback != nullptr) {
            return qformlayout_receivers_callback(this, signal);
        } else {
            return QFormLayout::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qformlayout_issignalconnected_isbase) {
            qformlayout_issignalconnected_isbase = false;
            return QFormLayout::isSignalConnected(signal);
        } else if (qformlayout_issignalconnected_callback != nullptr) {
            return qformlayout_issignalconnected_callback(this, signal);
        } else {
            return QFormLayout::isSignalConnected(signal);
        }
    }
};

#endif
