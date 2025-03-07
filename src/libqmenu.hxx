#pragma once
#ifndef SRCC_LIBVIRTUALQMENU_H
#define SRCC_LIBVIRTUALQMENU_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMenu so that we can call protected methods
class VirtualQMenu : public QMenu {

  public:
    // Virtual class public types (including callbacks)
    using QMenu_Metacall_Callback = int (*)(QMenu*, QMetaObject::Call, int, void**);
    using QMenu_SizeHint_Callback = QSize (*)();
    using QMenu_ChangeEvent_Callback = void (*)(QMenu*, QEvent*);
    using QMenu_KeyPressEvent_Callback = void (*)(QMenu*, QKeyEvent*);
    using QMenu_MouseReleaseEvent_Callback = void (*)(QMenu*, QMouseEvent*);
    using QMenu_MousePressEvent_Callback = void (*)(QMenu*, QMouseEvent*);
    using QMenu_MouseMoveEvent_Callback = void (*)(QMenu*, QMouseEvent*);
    using QMenu_WheelEvent_Callback = void (*)(QMenu*, QWheelEvent*);
    using QMenu_EnterEvent_Callback = void (*)(QMenu*, QEnterEvent*);
    using QMenu_LeaveEvent_Callback = void (*)(QMenu*, QEvent*);
    using QMenu_HideEvent_Callback = void (*)(QMenu*, QHideEvent*);
    using QMenu_PaintEvent_Callback = void (*)(QMenu*, QPaintEvent*);
    using QMenu_ActionEvent_Callback = void (*)(QMenu*, QActionEvent*);
    using QMenu_TimerEvent_Callback = void (*)(QMenu*, QTimerEvent*);
    using QMenu_Event_Callback = bool (*)(QMenu*, QEvent*);
    using QMenu_FocusNextPrevChild_Callback = bool (*)(QMenu*, bool);
    using QMenu_InitStyleOption_Callback = void (*)(const QMenu*, QStyleOptionMenuItem*, const QAction*);
    using QMenu_DevType_Callback = int (*)();
    using QMenu_SetVisible_Callback = void (*)(QMenu*, bool);
    using QMenu_MinimumSizeHint_Callback = QSize (*)();
    using QMenu_HeightForWidth_Callback = int (*)(const QMenu*, int);
    using QMenu_HasHeightForWidth_Callback = bool (*)();
    using QMenu_PaintEngine_Callback = QPaintEngine* (*)();
    using QMenu_MouseDoubleClickEvent_Callback = void (*)(QMenu*, QMouseEvent*);
    using QMenu_KeyReleaseEvent_Callback = void (*)(QMenu*, QKeyEvent*);
    using QMenu_FocusInEvent_Callback = void (*)(QMenu*, QFocusEvent*);
    using QMenu_FocusOutEvent_Callback = void (*)(QMenu*, QFocusEvent*);
    using QMenu_MoveEvent_Callback = void (*)(QMenu*, QMoveEvent*);
    using QMenu_ResizeEvent_Callback = void (*)(QMenu*, QResizeEvent*);
    using QMenu_CloseEvent_Callback = void (*)(QMenu*, QCloseEvent*);
    using QMenu_ContextMenuEvent_Callback = void (*)(QMenu*, QContextMenuEvent*);
    using QMenu_TabletEvent_Callback = void (*)(QMenu*, QTabletEvent*);
    using QMenu_DragEnterEvent_Callback = void (*)(QMenu*, QDragEnterEvent*);
    using QMenu_DragMoveEvent_Callback = void (*)(QMenu*, QDragMoveEvent*);
    using QMenu_DragLeaveEvent_Callback = void (*)(QMenu*, QDragLeaveEvent*);
    using QMenu_DropEvent_Callback = void (*)(QMenu*, QDropEvent*);
    using QMenu_ShowEvent_Callback = void (*)(QMenu*, QShowEvent*);
    using QMenu_NativeEvent_Callback = bool (*)(QMenu*, const QByteArray&, void*, qintptr*);
    using QMenu_Metric_Callback = int (*)(const QMenu*, QPaintDevice::PaintDeviceMetric);
    using QMenu_InitPainter_Callback = void (*)(const QMenu*, QPainter*);
    using QMenu_Redirected_Callback = QPaintDevice* (*)(const QMenu*, QPoint*);
    using QMenu_SharedPainter_Callback = QPainter* (*)();
    using QMenu_InputMethodEvent_Callback = void (*)(QMenu*, QInputMethodEvent*);
    using QMenu_InputMethodQuery_Callback = QVariant (*)(const QMenu*, Qt::InputMethodQuery);
    using QMenu_EventFilter_Callback = bool (*)(QMenu*, QObject*, QEvent*);
    using QMenu_ChildEvent_Callback = void (*)(QMenu*, QChildEvent*);
    using QMenu_CustomEvent_Callback = void (*)(QMenu*, QEvent*);
    using QMenu_ConnectNotify_Callback = void (*)(QMenu*, const QMetaMethod&);
    using QMenu_DisconnectNotify_Callback = void (*)(QMenu*, const QMetaMethod&);
    using QMenu_ColumnCount_Callback = int (*)();
    using QMenu_UpdateMicroFocus_Callback = void (*)();
    using QMenu_Create_Callback = void (*)();
    using QMenu_Destroy_Callback = void (*)();
    using QMenu_FocusNextChild_Callback = bool (*)();
    using QMenu_FocusPreviousChild_Callback = bool (*)();
    using QMenu_Sender_Callback = QObject* (*)();
    using QMenu_SenderSignalIndex_Callback = int (*)();
    using QMenu_Receivers_Callback = int (*)(const QMenu*, const char*);
    using QMenu_IsSignalConnected_Callback = bool (*)(const QMenu*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QMenu_Metacall_Callback qmenu_metacall_callback = nullptr;
    QMenu_SizeHint_Callback qmenu_sizehint_callback = nullptr;
    QMenu_ChangeEvent_Callback qmenu_changeevent_callback = nullptr;
    QMenu_KeyPressEvent_Callback qmenu_keypressevent_callback = nullptr;
    QMenu_MouseReleaseEvent_Callback qmenu_mousereleaseevent_callback = nullptr;
    QMenu_MousePressEvent_Callback qmenu_mousepressevent_callback = nullptr;
    QMenu_MouseMoveEvent_Callback qmenu_mousemoveevent_callback = nullptr;
    QMenu_WheelEvent_Callback qmenu_wheelevent_callback = nullptr;
    QMenu_EnterEvent_Callback qmenu_enterevent_callback = nullptr;
    QMenu_LeaveEvent_Callback qmenu_leaveevent_callback = nullptr;
    QMenu_HideEvent_Callback qmenu_hideevent_callback = nullptr;
    QMenu_PaintEvent_Callback qmenu_paintevent_callback = nullptr;
    QMenu_ActionEvent_Callback qmenu_actionevent_callback = nullptr;
    QMenu_TimerEvent_Callback qmenu_timerevent_callback = nullptr;
    QMenu_Event_Callback qmenu_event_callback = nullptr;
    QMenu_FocusNextPrevChild_Callback qmenu_focusnextprevchild_callback = nullptr;
    QMenu_InitStyleOption_Callback qmenu_initstyleoption_callback = nullptr;
    QMenu_DevType_Callback qmenu_devtype_callback = nullptr;
    QMenu_SetVisible_Callback qmenu_setvisible_callback = nullptr;
    QMenu_MinimumSizeHint_Callback qmenu_minimumsizehint_callback = nullptr;
    QMenu_HeightForWidth_Callback qmenu_heightforwidth_callback = nullptr;
    QMenu_HasHeightForWidth_Callback qmenu_hasheightforwidth_callback = nullptr;
    QMenu_PaintEngine_Callback qmenu_paintengine_callback = nullptr;
    QMenu_MouseDoubleClickEvent_Callback qmenu_mousedoubleclickevent_callback = nullptr;
    QMenu_KeyReleaseEvent_Callback qmenu_keyreleaseevent_callback = nullptr;
    QMenu_FocusInEvent_Callback qmenu_focusinevent_callback = nullptr;
    QMenu_FocusOutEvent_Callback qmenu_focusoutevent_callback = nullptr;
    QMenu_MoveEvent_Callback qmenu_moveevent_callback = nullptr;
    QMenu_ResizeEvent_Callback qmenu_resizeevent_callback = nullptr;
    QMenu_CloseEvent_Callback qmenu_closeevent_callback = nullptr;
    QMenu_ContextMenuEvent_Callback qmenu_contextmenuevent_callback = nullptr;
    QMenu_TabletEvent_Callback qmenu_tabletevent_callback = nullptr;
    QMenu_DragEnterEvent_Callback qmenu_dragenterevent_callback = nullptr;
    QMenu_DragMoveEvent_Callback qmenu_dragmoveevent_callback = nullptr;
    QMenu_DragLeaveEvent_Callback qmenu_dragleaveevent_callback = nullptr;
    QMenu_DropEvent_Callback qmenu_dropevent_callback = nullptr;
    QMenu_ShowEvent_Callback qmenu_showevent_callback = nullptr;
    QMenu_NativeEvent_Callback qmenu_nativeevent_callback = nullptr;
    QMenu_Metric_Callback qmenu_metric_callback = nullptr;
    QMenu_InitPainter_Callback qmenu_initpainter_callback = nullptr;
    QMenu_Redirected_Callback qmenu_redirected_callback = nullptr;
    QMenu_SharedPainter_Callback qmenu_sharedpainter_callback = nullptr;
    QMenu_InputMethodEvent_Callback qmenu_inputmethodevent_callback = nullptr;
    QMenu_InputMethodQuery_Callback qmenu_inputmethodquery_callback = nullptr;
    QMenu_EventFilter_Callback qmenu_eventfilter_callback = nullptr;
    QMenu_ChildEvent_Callback qmenu_childevent_callback = nullptr;
    QMenu_CustomEvent_Callback qmenu_customevent_callback = nullptr;
    QMenu_ConnectNotify_Callback qmenu_connectnotify_callback = nullptr;
    QMenu_DisconnectNotify_Callback qmenu_disconnectnotify_callback = nullptr;
    QMenu_ColumnCount_Callback qmenu_columncount_callback = nullptr;
    QMenu_UpdateMicroFocus_Callback qmenu_updatemicrofocus_callback = nullptr;
    QMenu_Create_Callback qmenu_create_callback = nullptr;
    QMenu_Destroy_Callback qmenu_destroy_callback = nullptr;
    QMenu_FocusNextChild_Callback qmenu_focusnextchild_callback = nullptr;
    QMenu_FocusPreviousChild_Callback qmenu_focuspreviouschild_callback = nullptr;
    QMenu_Sender_Callback qmenu_sender_callback = nullptr;
    QMenu_SenderSignalIndex_Callback qmenu_sendersignalindex_callback = nullptr;
    QMenu_Receivers_Callback qmenu_receivers_callback = nullptr;
    QMenu_IsSignalConnected_Callback qmenu_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmenu_metacall_isbase = false;
    mutable bool qmenu_sizehint_isbase = false;
    mutable bool qmenu_changeevent_isbase = false;
    mutable bool qmenu_keypressevent_isbase = false;
    mutable bool qmenu_mousereleaseevent_isbase = false;
    mutable bool qmenu_mousepressevent_isbase = false;
    mutable bool qmenu_mousemoveevent_isbase = false;
    mutable bool qmenu_wheelevent_isbase = false;
    mutable bool qmenu_enterevent_isbase = false;
    mutable bool qmenu_leaveevent_isbase = false;
    mutable bool qmenu_hideevent_isbase = false;
    mutable bool qmenu_paintevent_isbase = false;
    mutable bool qmenu_actionevent_isbase = false;
    mutable bool qmenu_timerevent_isbase = false;
    mutable bool qmenu_event_isbase = false;
    mutable bool qmenu_focusnextprevchild_isbase = false;
    mutable bool qmenu_initstyleoption_isbase = false;
    mutable bool qmenu_devtype_isbase = false;
    mutable bool qmenu_setvisible_isbase = false;
    mutable bool qmenu_minimumsizehint_isbase = false;
    mutable bool qmenu_heightforwidth_isbase = false;
    mutable bool qmenu_hasheightforwidth_isbase = false;
    mutable bool qmenu_paintengine_isbase = false;
    mutable bool qmenu_mousedoubleclickevent_isbase = false;
    mutable bool qmenu_keyreleaseevent_isbase = false;
    mutable bool qmenu_focusinevent_isbase = false;
    mutable bool qmenu_focusoutevent_isbase = false;
    mutable bool qmenu_moveevent_isbase = false;
    mutable bool qmenu_resizeevent_isbase = false;
    mutable bool qmenu_closeevent_isbase = false;
    mutable bool qmenu_contextmenuevent_isbase = false;
    mutable bool qmenu_tabletevent_isbase = false;
    mutable bool qmenu_dragenterevent_isbase = false;
    mutable bool qmenu_dragmoveevent_isbase = false;
    mutable bool qmenu_dragleaveevent_isbase = false;
    mutable bool qmenu_dropevent_isbase = false;
    mutable bool qmenu_showevent_isbase = false;
    mutable bool qmenu_nativeevent_isbase = false;
    mutable bool qmenu_metric_isbase = false;
    mutable bool qmenu_initpainter_isbase = false;
    mutable bool qmenu_redirected_isbase = false;
    mutable bool qmenu_sharedpainter_isbase = false;
    mutable bool qmenu_inputmethodevent_isbase = false;
    mutable bool qmenu_inputmethodquery_isbase = false;
    mutable bool qmenu_eventfilter_isbase = false;
    mutable bool qmenu_childevent_isbase = false;
    mutable bool qmenu_customevent_isbase = false;
    mutable bool qmenu_connectnotify_isbase = false;
    mutable bool qmenu_disconnectnotify_isbase = false;
    mutable bool qmenu_columncount_isbase = false;
    mutable bool qmenu_updatemicrofocus_isbase = false;
    mutable bool qmenu_create_isbase = false;
    mutable bool qmenu_destroy_isbase = false;
    mutable bool qmenu_focusnextchild_isbase = false;
    mutable bool qmenu_focuspreviouschild_isbase = false;
    mutable bool qmenu_sender_isbase = false;
    mutable bool qmenu_sendersignalindex_isbase = false;
    mutable bool qmenu_receivers_isbase = false;
    mutable bool qmenu_issignalconnected_isbase = false;

  public:
    VirtualQMenu(QWidget* parent) : QMenu(parent){};
    VirtualQMenu() : QMenu(){};
    VirtualQMenu(const QString& title) : QMenu(title){};
    VirtualQMenu(const QString& title, QWidget* parent) : QMenu(title, parent){};

    ~VirtualQMenu() {
        qmenu_metacall_callback = nullptr;
        qmenu_sizehint_callback = nullptr;
        qmenu_changeevent_callback = nullptr;
        qmenu_keypressevent_callback = nullptr;
        qmenu_mousereleaseevent_callback = nullptr;
        qmenu_mousepressevent_callback = nullptr;
        qmenu_mousemoveevent_callback = nullptr;
        qmenu_wheelevent_callback = nullptr;
        qmenu_enterevent_callback = nullptr;
        qmenu_leaveevent_callback = nullptr;
        qmenu_hideevent_callback = nullptr;
        qmenu_paintevent_callback = nullptr;
        qmenu_actionevent_callback = nullptr;
        qmenu_timerevent_callback = nullptr;
        qmenu_event_callback = nullptr;
        qmenu_focusnextprevchild_callback = nullptr;
        qmenu_initstyleoption_callback = nullptr;
        qmenu_devtype_callback = nullptr;
        qmenu_setvisible_callback = nullptr;
        qmenu_minimumsizehint_callback = nullptr;
        qmenu_heightforwidth_callback = nullptr;
        qmenu_hasheightforwidth_callback = nullptr;
        qmenu_paintengine_callback = nullptr;
        qmenu_mousedoubleclickevent_callback = nullptr;
        qmenu_keyreleaseevent_callback = nullptr;
        qmenu_focusinevent_callback = nullptr;
        qmenu_focusoutevent_callback = nullptr;
        qmenu_moveevent_callback = nullptr;
        qmenu_resizeevent_callback = nullptr;
        qmenu_closeevent_callback = nullptr;
        qmenu_contextmenuevent_callback = nullptr;
        qmenu_tabletevent_callback = nullptr;
        qmenu_dragenterevent_callback = nullptr;
        qmenu_dragmoveevent_callback = nullptr;
        qmenu_dragleaveevent_callback = nullptr;
        qmenu_dropevent_callback = nullptr;
        qmenu_showevent_callback = nullptr;
        qmenu_nativeevent_callback = nullptr;
        qmenu_metric_callback = nullptr;
        qmenu_initpainter_callback = nullptr;
        qmenu_redirected_callback = nullptr;
        qmenu_sharedpainter_callback = nullptr;
        qmenu_inputmethodevent_callback = nullptr;
        qmenu_inputmethodquery_callback = nullptr;
        qmenu_eventfilter_callback = nullptr;
        qmenu_childevent_callback = nullptr;
        qmenu_customevent_callback = nullptr;
        qmenu_connectnotify_callback = nullptr;
        qmenu_disconnectnotify_callback = nullptr;
        qmenu_columncount_callback = nullptr;
        qmenu_updatemicrofocus_callback = nullptr;
        qmenu_create_callback = nullptr;
        qmenu_destroy_callback = nullptr;
        qmenu_focusnextchild_callback = nullptr;
        qmenu_focuspreviouschild_callback = nullptr;
        qmenu_sender_callback = nullptr;
        qmenu_sendersignalindex_callback = nullptr;
        qmenu_receivers_callback = nullptr;
        qmenu_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQMenu_Metacall_Callback(QMenu_Metacall_Callback cb) { qmenu_metacall_callback = cb; }
    void setQMenu_SizeHint_Callback(QMenu_SizeHint_Callback cb) { qmenu_sizehint_callback = cb; }
    void setQMenu_ChangeEvent_Callback(QMenu_ChangeEvent_Callback cb) { qmenu_changeevent_callback = cb; }
    void setQMenu_KeyPressEvent_Callback(QMenu_KeyPressEvent_Callback cb) { qmenu_keypressevent_callback = cb; }
    void setQMenu_MouseReleaseEvent_Callback(QMenu_MouseReleaseEvent_Callback cb) { qmenu_mousereleaseevent_callback = cb; }
    void setQMenu_MousePressEvent_Callback(QMenu_MousePressEvent_Callback cb) { qmenu_mousepressevent_callback = cb; }
    void setQMenu_MouseMoveEvent_Callback(QMenu_MouseMoveEvent_Callback cb) { qmenu_mousemoveevent_callback = cb; }
    void setQMenu_WheelEvent_Callback(QMenu_WheelEvent_Callback cb) { qmenu_wheelevent_callback = cb; }
    void setQMenu_EnterEvent_Callback(QMenu_EnterEvent_Callback cb) { qmenu_enterevent_callback = cb; }
    void setQMenu_LeaveEvent_Callback(QMenu_LeaveEvent_Callback cb) { qmenu_leaveevent_callback = cb; }
    void setQMenu_HideEvent_Callback(QMenu_HideEvent_Callback cb) { qmenu_hideevent_callback = cb; }
    void setQMenu_PaintEvent_Callback(QMenu_PaintEvent_Callback cb) { qmenu_paintevent_callback = cb; }
    void setQMenu_ActionEvent_Callback(QMenu_ActionEvent_Callback cb) { qmenu_actionevent_callback = cb; }
    void setQMenu_TimerEvent_Callback(QMenu_TimerEvent_Callback cb) { qmenu_timerevent_callback = cb; }
    void setQMenu_Event_Callback(QMenu_Event_Callback cb) { qmenu_event_callback = cb; }
    void setQMenu_FocusNextPrevChild_Callback(QMenu_FocusNextPrevChild_Callback cb) { qmenu_focusnextprevchild_callback = cb; }
    void setQMenu_InitStyleOption_Callback(QMenu_InitStyleOption_Callback cb) { qmenu_initstyleoption_callback = cb; }
    void setQMenu_DevType_Callback(QMenu_DevType_Callback cb) { qmenu_devtype_callback = cb; }
    void setQMenu_SetVisible_Callback(QMenu_SetVisible_Callback cb) { qmenu_setvisible_callback = cb; }
    void setQMenu_MinimumSizeHint_Callback(QMenu_MinimumSizeHint_Callback cb) { qmenu_minimumsizehint_callback = cb; }
    void setQMenu_HeightForWidth_Callback(QMenu_HeightForWidth_Callback cb) { qmenu_heightforwidth_callback = cb; }
    void setQMenu_HasHeightForWidth_Callback(QMenu_HasHeightForWidth_Callback cb) { qmenu_hasheightforwidth_callback = cb; }
    void setQMenu_PaintEngine_Callback(QMenu_PaintEngine_Callback cb) { qmenu_paintengine_callback = cb; }
    void setQMenu_MouseDoubleClickEvent_Callback(QMenu_MouseDoubleClickEvent_Callback cb) { qmenu_mousedoubleclickevent_callback = cb; }
    void setQMenu_KeyReleaseEvent_Callback(QMenu_KeyReleaseEvent_Callback cb) { qmenu_keyreleaseevent_callback = cb; }
    void setQMenu_FocusInEvent_Callback(QMenu_FocusInEvent_Callback cb) { qmenu_focusinevent_callback = cb; }
    void setQMenu_FocusOutEvent_Callback(QMenu_FocusOutEvent_Callback cb) { qmenu_focusoutevent_callback = cb; }
    void setQMenu_MoveEvent_Callback(QMenu_MoveEvent_Callback cb) { qmenu_moveevent_callback = cb; }
    void setQMenu_ResizeEvent_Callback(QMenu_ResizeEvent_Callback cb) { qmenu_resizeevent_callback = cb; }
    void setQMenu_CloseEvent_Callback(QMenu_CloseEvent_Callback cb) { qmenu_closeevent_callback = cb; }
    void setQMenu_ContextMenuEvent_Callback(QMenu_ContextMenuEvent_Callback cb) { qmenu_contextmenuevent_callback = cb; }
    void setQMenu_TabletEvent_Callback(QMenu_TabletEvent_Callback cb) { qmenu_tabletevent_callback = cb; }
    void setQMenu_DragEnterEvent_Callback(QMenu_DragEnterEvent_Callback cb) { qmenu_dragenterevent_callback = cb; }
    void setQMenu_DragMoveEvent_Callback(QMenu_DragMoveEvent_Callback cb) { qmenu_dragmoveevent_callback = cb; }
    void setQMenu_DragLeaveEvent_Callback(QMenu_DragLeaveEvent_Callback cb) { qmenu_dragleaveevent_callback = cb; }
    void setQMenu_DropEvent_Callback(QMenu_DropEvent_Callback cb) { qmenu_dropevent_callback = cb; }
    void setQMenu_ShowEvent_Callback(QMenu_ShowEvent_Callback cb) { qmenu_showevent_callback = cb; }
    void setQMenu_NativeEvent_Callback(QMenu_NativeEvent_Callback cb) { qmenu_nativeevent_callback = cb; }
    void setQMenu_Metric_Callback(QMenu_Metric_Callback cb) { qmenu_metric_callback = cb; }
    void setQMenu_InitPainter_Callback(QMenu_InitPainter_Callback cb) { qmenu_initpainter_callback = cb; }
    void setQMenu_Redirected_Callback(QMenu_Redirected_Callback cb) { qmenu_redirected_callback = cb; }
    void setQMenu_SharedPainter_Callback(QMenu_SharedPainter_Callback cb) { qmenu_sharedpainter_callback = cb; }
    void setQMenu_InputMethodEvent_Callback(QMenu_InputMethodEvent_Callback cb) { qmenu_inputmethodevent_callback = cb; }
    void setQMenu_InputMethodQuery_Callback(QMenu_InputMethodQuery_Callback cb) { qmenu_inputmethodquery_callback = cb; }
    void setQMenu_EventFilter_Callback(QMenu_EventFilter_Callback cb) { qmenu_eventfilter_callback = cb; }
    void setQMenu_ChildEvent_Callback(QMenu_ChildEvent_Callback cb) { qmenu_childevent_callback = cb; }
    void setQMenu_CustomEvent_Callback(QMenu_CustomEvent_Callback cb) { qmenu_customevent_callback = cb; }
    void setQMenu_ConnectNotify_Callback(QMenu_ConnectNotify_Callback cb) { qmenu_connectnotify_callback = cb; }
    void setQMenu_DisconnectNotify_Callback(QMenu_DisconnectNotify_Callback cb) { qmenu_disconnectnotify_callback = cb; }
    void setQMenu_ColumnCount_Callback(QMenu_ColumnCount_Callback cb) { qmenu_columncount_callback = cb; }
    void setQMenu_UpdateMicroFocus_Callback(QMenu_UpdateMicroFocus_Callback cb) { qmenu_updatemicrofocus_callback = cb; }
    void setQMenu_Create_Callback(QMenu_Create_Callback cb) { qmenu_create_callback = cb; }
    void setQMenu_Destroy_Callback(QMenu_Destroy_Callback cb) { qmenu_destroy_callback = cb; }
    void setQMenu_FocusNextChild_Callback(QMenu_FocusNextChild_Callback cb) { qmenu_focusnextchild_callback = cb; }
    void setQMenu_FocusPreviousChild_Callback(QMenu_FocusPreviousChild_Callback cb) { qmenu_focuspreviouschild_callback = cb; }
    void setQMenu_Sender_Callback(QMenu_Sender_Callback cb) { qmenu_sender_callback = cb; }
    void setQMenu_SenderSignalIndex_Callback(QMenu_SenderSignalIndex_Callback cb) { qmenu_sendersignalindex_callback = cb; }
    void setQMenu_Receivers_Callback(QMenu_Receivers_Callback cb) { qmenu_receivers_callback = cb; }
    void setQMenu_IsSignalConnected_Callback(QMenu_IsSignalConnected_Callback cb) { qmenu_issignalconnected_callback = cb; }

    // Base flag setters
    void setQMenu_Metacall_IsBase(bool value) const { qmenu_metacall_isbase = value; }
    void setQMenu_SizeHint_IsBase(bool value) const { qmenu_sizehint_isbase = value; }
    void setQMenu_ChangeEvent_IsBase(bool value) const { qmenu_changeevent_isbase = value; }
    void setQMenu_KeyPressEvent_IsBase(bool value) const { qmenu_keypressevent_isbase = value; }
    void setQMenu_MouseReleaseEvent_IsBase(bool value) const { qmenu_mousereleaseevent_isbase = value; }
    void setQMenu_MousePressEvent_IsBase(bool value) const { qmenu_mousepressevent_isbase = value; }
    void setQMenu_MouseMoveEvent_IsBase(bool value) const { qmenu_mousemoveevent_isbase = value; }
    void setQMenu_WheelEvent_IsBase(bool value) const { qmenu_wheelevent_isbase = value; }
    void setQMenu_EnterEvent_IsBase(bool value) const { qmenu_enterevent_isbase = value; }
    void setQMenu_LeaveEvent_IsBase(bool value) const { qmenu_leaveevent_isbase = value; }
    void setQMenu_HideEvent_IsBase(bool value) const { qmenu_hideevent_isbase = value; }
    void setQMenu_PaintEvent_IsBase(bool value) const { qmenu_paintevent_isbase = value; }
    void setQMenu_ActionEvent_IsBase(bool value) const { qmenu_actionevent_isbase = value; }
    void setQMenu_TimerEvent_IsBase(bool value) const { qmenu_timerevent_isbase = value; }
    void setQMenu_Event_IsBase(bool value) const { qmenu_event_isbase = value; }
    void setQMenu_FocusNextPrevChild_IsBase(bool value) const { qmenu_focusnextprevchild_isbase = value; }
    void setQMenu_InitStyleOption_IsBase(bool value) const { qmenu_initstyleoption_isbase = value; }
    void setQMenu_DevType_IsBase(bool value) const { qmenu_devtype_isbase = value; }
    void setQMenu_SetVisible_IsBase(bool value) const { qmenu_setvisible_isbase = value; }
    void setQMenu_MinimumSizeHint_IsBase(bool value) const { qmenu_minimumsizehint_isbase = value; }
    void setQMenu_HeightForWidth_IsBase(bool value) const { qmenu_heightforwidth_isbase = value; }
    void setQMenu_HasHeightForWidth_IsBase(bool value) const { qmenu_hasheightforwidth_isbase = value; }
    void setQMenu_PaintEngine_IsBase(bool value) const { qmenu_paintengine_isbase = value; }
    void setQMenu_MouseDoubleClickEvent_IsBase(bool value) const { qmenu_mousedoubleclickevent_isbase = value; }
    void setQMenu_KeyReleaseEvent_IsBase(bool value) const { qmenu_keyreleaseevent_isbase = value; }
    void setQMenu_FocusInEvent_IsBase(bool value) const { qmenu_focusinevent_isbase = value; }
    void setQMenu_FocusOutEvent_IsBase(bool value) const { qmenu_focusoutevent_isbase = value; }
    void setQMenu_MoveEvent_IsBase(bool value) const { qmenu_moveevent_isbase = value; }
    void setQMenu_ResizeEvent_IsBase(bool value) const { qmenu_resizeevent_isbase = value; }
    void setQMenu_CloseEvent_IsBase(bool value) const { qmenu_closeevent_isbase = value; }
    void setQMenu_ContextMenuEvent_IsBase(bool value) const { qmenu_contextmenuevent_isbase = value; }
    void setQMenu_TabletEvent_IsBase(bool value) const { qmenu_tabletevent_isbase = value; }
    void setQMenu_DragEnterEvent_IsBase(bool value) const { qmenu_dragenterevent_isbase = value; }
    void setQMenu_DragMoveEvent_IsBase(bool value) const { qmenu_dragmoveevent_isbase = value; }
    void setQMenu_DragLeaveEvent_IsBase(bool value) const { qmenu_dragleaveevent_isbase = value; }
    void setQMenu_DropEvent_IsBase(bool value) const { qmenu_dropevent_isbase = value; }
    void setQMenu_ShowEvent_IsBase(bool value) const { qmenu_showevent_isbase = value; }
    void setQMenu_NativeEvent_IsBase(bool value) const { qmenu_nativeevent_isbase = value; }
    void setQMenu_Metric_IsBase(bool value) const { qmenu_metric_isbase = value; }
    void setQMenu_InitPainter_IsBase(bool value) const { qmenu_initpainter_isbase = value; }
    void setQMenu_Redirected_IsBase(bool value) const { qmenu_redirected_isbase = value; }
    void setQMenu_SharedPainter_IsBase(bool value) const { qmenu_sharedpainter_isbase = value; }
    void setQMenu_InputMethodEvent_IsBase(bool value) const { qmenu_inputmethodevent_isbase = value; }
    void setQMenu_InputMethodQuery_IsBase(bool value) const { qmenu_inputmethodquery_isbase = value; }
    void setQMenu_EventFilter_IsBase(bool value) const { qmenu_eventfilter_isbase = value; }
    void setQMenu_ChildEvent_IsBase(bool value) const { qmenu_childevent_isbase = value; }
    void setQMenu_CustomEvent_IsBase(bool value) const { qmenu_customevent_isbase = value; }
    void setQMenu_ConnectNotify_IsBase(bool value) const { qmenu_connectnotify_isbase = value; }
    void setQMenu_DisconnectNotify_IsBase(bool value) const { qmenu_disconnectnotify_isbase = value; }
    void setQMenu_ColumnCount_IsBase(bool value) const { qmenu_columncount_isbase = value; }
    void setQMenu_UpdateMicroFocus_IsBase(bool value) const { qmenu_updatemicrofocus_isbase = value; }
    void setQMenu_Create_IsBase(bool value) const { qmenu_create_isbase = value; }
    void setQMenu_Destroy_IsBase(bool value) const { qmenu_destroy_isbase = value; }
    void setQMenu_FocusNextChild_IsBase(bool value) const { qmenu_focusnextchild_isbase = value; }
    void setQMenu_FocusPreviousChild_IsBase(bool value) const { qmenu_focuspreviouschild_isbase = value; }
    void setQMenu_Sender_IsBase(bool value) const { qmenu_sender_isbase = value; }
    void setQMenu_SenderSignalIndex_IsBase(bool value) const { qmenu_sendersignalindex_isbase = value; }
    void setQMenu_Receivers_IsBase(bool value) const { qmenu_receivers_isbase = value; }
    void setQMenu_IsSignalConnected_IsBase(bool value) const { qmenu_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmenu_metacall_isbase) {
            qmenu_metacall_isbase = false;
            return QMenu::qt_metacall(param1, param2, param3);
        } else if (qmenu_metacall_callback != nullptr) {
            return qmenu_metacall_callback(this, param1, param2, param3);
        } else {
            return QMenu::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmenu_sizehint_isbase) {
            qmenu_sizehint_isbase = false;
            return QMenu::sizeHint();
        } else if (qmenu_sizehint_callback != nullptr) {
            return qmenu_sizehint_callback();
        } else {
            return QMenu::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qmenu_changeevent_isbase) {
            qmenu_changeevent_isbase = false;
            QMenu::changeEvent(param1);
        } else if (qmenu_changeevent_callback != nullptr) {
            qmenu_changeevent_callback(this, param1);
        } else {
            QMenu::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* param1) override {
        if (qmenu_keypressevent_isbase) {
            qmenu_keypressevent_isbase = false;
            QMenu::keyPressEvent(param1);
        } else if (qmenu_keypressevent_callback != nullptr) {
            qmenu_keypressevent_callback(this, param1);
        } else {
            QMenu::keyPressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* param1) override {
        if (qmenu_mousereleaseevent_isbase) {
            qmenu_mousereleaseevent_isbase = false;
            QMenu::mouseReleaseEvent(param1);
        } else if (qmenu_mousereleaseevent_callback != nullptr) {
            qmenu_mousereleaseevent_callback(this, param1);
        } else {
            QMenu::mouseReleaseEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* param1) override {
        if (qmenu_mousepressevent_isbase) {
            qmenu_mousepressevent_isbase = false;
            QMenu::mousePressEvent(param1);
        } else if (qmenu_mousepressevent_callback != nullptr) {
            qmenu_mousepressevent_callback(this, param1);
        } else {
            QMenu::mousePressEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* param1) override {
        if (qmenu_mousemoveevent_isbase) {
            qmenu_mousemoveevent_isbase = false;
            QMenu::mouseMoveEvent(param1);
        } else if (qmenu_mousemoveevent_callback != nullptr) {
            qmenu_mousemoveevent_callback(this, param1);
        } else {
            QMenu::mouseMoveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* param1) override {
        if (qmenu_wheelevent_isbase) {
            qmenu_wheelevent_isbase = false;
            QMenu::wheelEvent(param1);
        } else if (qmenu_wheelevent_callback != nullptr) {
            qmenu_wheelevent_callback(this, param1);
        } else {
            QMenu::wheelEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* param1) override {
        if (qmenu_enterevent_isbase) {
            qmenu_enterevent_isbase = false;
            QMenu::enterEvent(param1);
        } else if (qmenu_enterevent_callback != nullptr) {
            qmenu_enterevent_callback(this, param1);
        } else {
            QMenu::enterEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* param1) override {
        if (qmenu_leaveevent_isbase) {
            qmenu_leaveevent_isbase = false;
            QMenu::leaveEvent(param1);
        } else if (qmenu_leaveevent_callback != nullptr) {
            qmenu_leaveevent_callback(this, param1);
        } else {
            QMenu::leaveEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* param1) override {
        if (qmenu_hideevent_isbase) {
            qmenu_hideevent_isbase = false;
            QMenu::hideEvent(param1);
        } else if (qmenu_hideevent_callback != nullptr) {
            qmenu_hideevent_callback(this, param1);
        } else {
            QMenu::hideEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* param1) override {
        if (qmenu_paintevent_isbase) {
            qmenu_paintevent_isbase = false;
            QMenu::paintEvent(param1);
        } else if (qmenu_paintevent_callback != nullptr) {
            qmenu_paintevent_callback(this, param1);
        } else {
            QMenu::paintEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* param1) override {
        if (qmenu_actionevent_isbase) {
            qmenu_actionevent_isbase = false;
            QMenu::actionEvent(param1);
        } else if (qmenu_actionevent_callback != nullptr) {
            qmenu_actionevent_callback(this, param1);
        } else {
            QMenu::actionEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* param1) override {
        if (qmenu_timerevent_isbase) {
            qmenu_timerevent_isbase = false;
            QMenu::timerEvent(param1);
        } else if (qmenu_timerevent_callback != nullptr) {
            qmenu_timerevent_callback(this, param1);
        } else {
            QMenu::timerEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* param1) override {
        if (qmenu_event_isbase) {
            qmenu_event_isbase = false;
            return QMenu::event(param1);
        } else if (qmenu_event_callback != nullptr) {
            return qmenu_event_callback(this, param1);
        } else {
            return QMenu::event(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmenu_focusnextprevchild_isbase) {
            qmenu_focusnextprevchild_isbase = false;
            return QMenu::focusNextPrevChild(next);
        } else if (qmenu_focusnextprevchild_callback != nullptr) {
            return qmenu_focusnextprevchild_callback(this, next);
        } else {
            return QMenu::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionMenuItem* option, const QAction* action) const override {
        if (qmenu_initstyleoption_isbase) {
            qmenu_initstyleoption_isbase = false;
            QMenu::initStyleOption(option, action);
        } else if (qmenu_initstyleoption_callback != nullptr) {
            qmenu_initstyleoption_callback(this, option, action);
        } else {
            QMenu::initStyleOption(option, action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmenu_devtype_isbase) {
            qmenu_devtype_isbase = false;
            return QMenu::devType();
        } else if (qmenu_devtype_callback != nullptr) {
            return qmenu_devtype_callback();
        } else {
            return QMenu::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmenu_setvisible_isbase) {
            qmenu_setvisible_isbase = false;
            QMenu::setVisible(visible);
        } else if (qmenu_setvisible_callback != nullptr) {
            qmenu_setvisible_callback(this, visible);
        } else {
            QMenu::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmenu_minimumsizehint_isbase) {
            qmenu_minimumsizehint_isbase = false;
            return QMenu::minimumSizeHint();
        } else if (qmenu_minimumsizehint_callback != nullptr) {
            return qmenu_minimumsizehint_callback();
        } else {
            return QMenu::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmenu_heightforwidth_isbase) {
            qmenu_heightforwidth_isbase = false;
            return QMenu::heightForWidth(param1);
        } else if (qmenu_heightforwidth_callback != nullptr) {
            return qmenu_heightforwidth_callback(this, param1);
        } else {
            return QMenu::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmenu_hasheightforwidth_isbase) {
            qmenu_hasheightforwidth_isbase = false;
            return QMenu::hasHeightForWidth();
        } else if (qmenu_hasheightforwidth_callback != nullptr) {
            return qmenu_hasheightforwidth_callback();
        } else {
            return QMenu::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmenu_paintengine_isbase) {
            qmenu_paintengine_isbase = false;
            return QMenu::paintEngine();
        } else if (qmenu_paintengine_callback != nullptr) {
            return qmenu_paintengine_callback();
        } else {
            return QMenu::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qmenu_mousedoubleclickevent_isbase) {
            qmenu_mousedoubleclickevent_isbase = false;
            QMenu::mouseDoubleClickEvent(event);
        } else if (qmenu_mousedoubleclickevent_callback != nullptr) {
            qmenu_mousedoubleclickevent_callback(this, event);
        } else {
            QMenu::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmenu_keyreleaseevent_isbase) {
            qmenu_keyreleaseevent_isbase = false;
            QMenu::keyReleaseEvent(event);
        } else if (qmenu_keyreleaseevent_callback != nullptr) {
            qmenu_keyreleaseevent_callback(this, event);
        } else {
            QMenu::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qmenu_focusinevent_isbase) {
            qmenu_focusinevent_isbase = false;
            QMenu::focusInEvent(event);
        } else if (qmenu_focusinevent_callback != nullptr) {
            qmenu_focusinevent_callback(this, event);
        } else {
            QMenu::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qmenu_focusoutevent_isbase) {
            qmenu_focusoutevent_isbase = false;
            QMenu::focusOutEvent(event);
        } else if (qmenu_focusoutevent_callback != nullptr) {
            qmenu_focusoutevent_callback(this, event);
        } else {
            QMenu::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qmenu_moveevent_isbase) {
            qmenu_moveevent_isbase = false;
            QMenu::moveEvent(event);
        } else if (qmenu_moveevent_callback != nullptr) {
            qmenu_moveevent_callback(this, event);
        } else {
            QMenu::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* event) override {
        if (qmenu_resizeevent_isbase) {
            qmenu_resizeevent_isbase = false;
            QMenu::resizeEvent(event);
        } else if (qmenu_resizeevent_callback != nullptr) {
            qmenu_resizeevent_callback(this, event);
        } else {
            QMenu::resizeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qmenu_closeevent_isbase) {
            qmenu_closeevent_isbase = false;
            QMenu::closeEvent(event);
        } else if (qmenu_closeevent_callback != nullptr) {
            qmenu_closeevent_callback(this, event);
        } else {
            QMenu::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* event) override {
        if (qmenu_contextmenuevent_isbase) {
            qmenu_contextmenuevent_isbase = false;
            QMenu::contextMenuEvent(event);
        } else if (qmenu_contextmenuevent_callback != nullptr) {
            qmenu_contextmenuevent_callback(this, event);
        } else {
            QMenu::contextMenuEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmenu_tabletevent_isbase) {
            qmenu_tabletevent_isbase = false;
            QMenu::tabletEvent(event);
        } else if (qmenu_tabletevent_callback != nullptr) {
            qmenu_tabletevent_callback(this, event);
        } else {
            QMenu::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmenu_dragenterevent_isbase) {
            qmenu_dragenterevent_isbase = false;
            QMenu::dragEnterEvent(event);
        } else if (qmenu_dragenterevent_callback != nullptr) {
            qmenu_dragenterevent_callback(this, event);
        } else {
            QMenu::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmenu_dragmoveevent_isbase) {
            qmenu_dragmoveevent_isbase = false;
            QMenu::dragMoveEvent(event);
        } else if (qmenu_dragmoveevent_callback != nullptr) {
            qmenu_dragmoveevent_callback(this, event);
        } else {
            QMenu::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmenu_dragleaveevent_isbase) {
            qmenu_dragleaveevent_isbase = false;
            QMenu::dragLeaveEvent(event);
        } else if (qmenu_dragleaveevent_callback != nullptr) {
            qmenu_dragleaveevent_callback(this, event);
        } else {
            QMenu::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmenu_dropevent_isbase) {
            qmenu_dropevent_isbase = false;
            QMenu::dropEvent(event);
        } else if (qmenu_dropevent_callback != nullptr) {
            qmenu_dropevent_callback(this, event);
        } else {
            QMenu::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qmenu_showevent_isbase) {
            qmenu_showevent_isbase = false;
            QMenu::showEvent(event);
        } else if (qmenu_showevent_callback != nullptr) {
            qmenu_showevent_callback(this, event);
        } else {
            QMenu::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmenu_nativeevent_isbase) {
            qmenu_nativeevent_isbase = false;
            return QMenu::nativeEvent(eventType, message, result);
        } else if (qmenu_nativeevent_callback != nullptr) {
            return qmenu_nativeevent_callback(this, eventType, message, result);
        } else {
            return QMenu::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmenu_metric_isbase) {
            qmenu_metric_isbase = false;
            return QMenu::metric(param1);
        } else if (qmenu_metric_callback != nullptr) {
            return qmenu_metric_callback(this, param1);
        } else {
            return QMenu::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmenu_initpainter_isbase) {
            qmenu_initpainter_isbase = false;
            QMenu::initPainter(painter);
        } else if (qmenu_initpainter_callback != nullptr) {
            qmenu_initpainter_callback(this, painter);
        } else {
            QMenu::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmenu_redirected_isbase) {
            qmenu_redirected_isbase = false;
            return QMenu::redirected(offset);
        } else if (qmenu_redirected_callback != nullptr) {
            return qmenu_redirected_callback(this, offset);
        } else {
            return QMenu::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmenu_sharedpainter_isbase) {
            qmenu_sharedpainter_isbase = false;
            return QMenu::sharedPainter();
        } else if (qmenu_sharedpainter_callback != nullptr) {
            return qmenu_sharedpainter_callback();
        } else {
            return QMenu::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmenu_inputmethodevent_isbase) {
            qmenu_inputmethodevent_isbase = false;
            QMenu::inputMethodEvent(param1);
        } else if (qmenu_inputmethodevent_callback != nullptr) {
            qmenu_inputmethodevent_callback(this, param1);
        } else {
            QMenu::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmenu_inputmethodquery_isbase) {
            qmenu_inputmethodquery_isbase = false;
            return QMenu::inputMethodQuery(param1);
        } else if (qmenu_inputmethodquery_callback != nullptr) {
            return qmenu_inputmethodquery_callback(this, param1);
        } else {
            return QMenu::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qmenu_eventfilter_isbase) {
            qmenu_eventfilter_isbase = false;
            return QMenu::eventFilter(watched, event);
        } else if (qmenu_eventfilter_callback != nullptr) {
            return qmenu_eventfilter_callback(this, watched, event);
        } else {
            return QMenu::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qmenu_childevent_isbase) {
            qmenu_childevent_isbase = false;
            QMenu::childEvent(event);
        } else if (qmenu_childevent_callback != nullptr) {
            qmenu_childevent_callback(this, event);
        } else {
            QMenu::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmenu_customevent_isbase) {
            qmenu_customevent_isbase = false;
            QMenu::customEvent(event);
        } else if (qmenu_customevent_callback != nullptr) {
            qmenu_customevent_callback(this, event);
        } else {
            QMenu::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmenu_connectnotify_isbase) {
            qmenu_connectnotify_isbase = false;
            QMenu::connectNotify(signal);
        } else if (qmenu_connectnotify_callback != nullptr) {
            qmenu_connectnotify_callback(this, signal);
        } else {
            QMenu::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmenu_disconnectnotify_isbase) {
            qmenu_disconnectnotify_isbase = false;
            QMenu::disconnectNotify(signal);
        } else if (qmenu_disconnectnotify_callback != nullptr) {
            qmenu_disconnectnotify_callback(this, signal);
        } else {
            QMenu::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    int columnCount() const {
        if (qmenu_columncount_isbase) {
            qmenu_columncount_isbase = false;
            return QMenu::columnCount();
        } else if (qmenu_columncount_callback != nullptr) {
            return qmenu_columncount_callback();
        } else {
            return QMenu::columnCount();
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmenu_updatemicrofocus_isbase) {
            qmenu_updatemicrofocus_isbase = false;
            QMenu::updateMicroFocus();
        } else if (qmenu_updatemicrofocus_callback != nullptr) {
            qmenu_updatemicrofocus_callback();
        } else {
            QMenu::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmenu_create_isbase) {
            qmenu_create_isbase = false;
            QMenu::create();
        } else if (qmenu_create_callback != nullptr) {
            qmenu_create_callback();
        } else {
            QMenu::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmenu_destroy_isbase) {
            qmenu_destroy_isbase = false;
            QMenu::destroy();
        } else if (qmenu_destroy_callback != nullptr) {
            qmenu_destroy_callback();
        } else {
            QMenu::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmenu_focusnextchild_isbase) {
            qmenu_focusnextchild_isbase = false;
            return QMenu::focusNextChild();
        } else if (qmenu_focusnextchild_callback != nullptr) {
            return qmenu_focusnextchild_callback();
        } else {
            return QMenu::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmenu_focuspreviouschild_isbase) {
            qmenu_focuspreviouschild_isbase = false;
            return QMenu::focusPreviousChild();
        } else if (qmenu_focuspreviouschild_callback != nullptr) {
            return qmenu_focuspreviouschild_callback();
        } else {
            return QMenu::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmenu_sender_isbase) {
            qmenu_sender_isbase = false;
            return QMenu::sender();
        } else if (qmenu_sender_callback != nullptr) {
            return qmenu_sender_callback();
        } else {
            return QMenu::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmenu_sendersignalindex_isbase) {
            qmenu_sendersignalindex_isbase = false;
            return QMenu::senderSignalIndex();
        } else if (qmenu_sendersignalindex_callback != nullptr) {
            return qmenu_sendersignalindex_callback();
        } else {
            return QMenu::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmenu_receivers_isbase) {
            qmenu_receivers_isbase = false;
            return QMenu::receivers(signal);
        } else if (qmenu_receivers_callback != nullptr) {
            return qmenu_receivers_callback(this, signal);
        } else {
            return QMenu::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmenu_issignalconnected_isbase) {
            qmenu_issignalconnected_isbase = false;
            return QMenu::isSignalConnected(signal);
        } else if (qmenu_issignalconnected_callback != nullptr) {
            return qmenu_issignalconnected_callback(this, signal);
        } else {
            return QMenu::isSignalConnected(signal);
        }
    }
};

#endif
