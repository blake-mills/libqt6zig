#pragma once
#ifndef SRCC_LIBVIRTUALQMDISUBWINDOW_H
#define SRCC_LIBVIRTUALQMDISUBWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QMdiSubWindow so that we can call protected methods
class VirtualQMdiSubWindow : public QMdiSubWindow {

  public:
    // Virtual class public types (including callbacks)
    using QMdiSubWindow_Metacall_Callback = int (*)(QMdiSubWindow*, QMetaObject::Call, int, void**);
    using QMdiSubWindow_SizeHint_Callback = QSize (*)();
    using QMdiSubWindow_MinimumSizeHint_Callback = QSize (*)();
    using QMdiSubWindow_EventFilter_Callback = bool (*)(QMdiSubWindow*, QObject*, QEvent*);
    using QMdiSubWindow_Event_Callback = bool (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ShowEvent_Callback = void (*)(QMdiSubWindow*, QShowEvent*);
    using QMdiSubWindow_HideEvent_Callback = void (*)(QMdiSubWindow*, QHideEvent*);
    using QMdiSubWindow_ChangeEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_CloseEvent_Callback = void (*)(QMdiSubWindow*, QCloseEvent*);
    using QMdiSubWindow_LeaveEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ResizeEvent_Callback = void (*)(QMdiSubWindow*, QResizeEvent*);
    using QMdiSubWindow_TimerEvent_Callback = void (*)(QMdiSubWindow*, QTimerEvent*);
    using QMdiSubWindow_MoveEvent_Callback = void (*)(QMdiSubWindow*, QMoveEvent*);
    using QMdiSubWindow_PaintEvent_Callback = void (*)(QMdiSubWindow*, QPaintEvent*);
    using QMdiSubWindow_MousePressEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseDoubleClickEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseReleaseEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_MouseMoveEvent_Callback = void (*)(QMdiSubWindow*, QMouseEvent*);
    using QMdiSubWindow_KeyPressEvent_Callback = void (*)(QMdiSubWindow*, QKeyEvent*);
    using QMdiSubWindow_ContextMenuEvent_Callback = void (*)(QMdiSubWindow*, QContextMenuEvent*);
    using QMdiSubWindow_FocusInEvent_Callback = void (*)(QMdiSubWindow*, QFocusEvent*);
    using QMdiSubWindow_FocusOutEvent_Callback = void (*)(QMdiSubWindow*, QFocusEvent*);
    using QMdiSubWindow_ChildEvent_Callback = void (*)(QMdiSubWindow*, QChildEvent*);
    using QMdiSubWindow_DevType_Callback = int (*)();
    using QMdiSubWindow_SetVisible_Callback = void (*)(QMdiSubWindow*, bool);
    using QMdiSubWindow_HeightForWidth_Callback = int (*)(const QMdiSubWindow*, int);
    using QMdiSubWindow_HasHeightForWidth_Callback = bool (*)();
    using QMdiSubWindow_PaintEngine_Callback = QPaintEngine* (*)();
    using QMdiSubWindow_WheelEvent_Callback = void (*)(QMdiSubWindow*, QWheelEvent*);
    using QMdiSubWindow_KeyReleaseEvent_Callback = void (*)(QMdiSubWindow*, QKeyEvent*);
    using QMdiSubWindow_EnterEvent_Callback = void (*)(QMdiSubWindow*, QEnterEvent*);
    using QMdiSubWindow_TabletEvent_Callback = void (*)(QMdiSubWindow*, QTabletEvent*);
    using QMdiSubWindow_ActionEvent_Callback = void (*)(QMdiSubWindow*, QActionEvent*);
    using QMdiSubWindow_DragEnterEvent_Callback = void (*)(QMdiSubWindow*, QDragEnterEvent*);
    using QMdiSubWindow_DragMoveEvent_Callback = void (*)(QMdiSubWindow*, QDragMoveEvent*);
    using QMdiSubWindow_DragLeaveEvent_Callback = void (*)(QMdiSubWindow*, QDragLeaveEvent*);
    using QMdiSubWindow_DropEvent_Callback = void (*)(QMdiSubWindow*, QDropEvent*);
    using QMdiSubWindow_NativeEvent_Callback = bool (*)(QMdiSubWindow*, const QByteArray&, void*, qintptr*);
    using QMdiSubWindow_Metric_Callback = int (*)(const QMdiSubWindow*, QPaintDevice::PaintDeviceMetric);
    using QMdiSubWindow_InitPainter_Callback = void (*)(const QMdiSubWindow*, QPainter*);
    using QMdiSubWindow_Redirected_Callback = QPaintDevice* (*)(const QMdiSubWindow*, QPoint*);
    using QMdiSubWindow_SharedPainter_Callback = QPainter* (*)();
    using QMdiSubWindow_InputMethodEvent_Callback = void (*)(QMdiSubWindow*, QInputMethodEvent*);
    using QMdiSubWindow_InputMethodQuery_Callback = QVariant (*)(const QMdiSubWindow*, Qt::InputMethodQuery);
    using QMdiSubWindow_FocusNextPrevChild_Callback = bool (*)(QMdiSubWindow*, bool);
    using QMdiSubWindow_CustomEvent_Callback = void (*)(QMdiSubWindow*, QEvent*);
    using QMdiSubWindow_ConnectNotify_Callback = void (*)(QMdiSubWindow*, const QMetaMethod&);
    using QMdiSubWindow_DisconnectNotify_Callback = void (*)(QMdiSubWindow*, const QMetaMethod&);
    using QMdiSubWindow_UpdateMicroFocus_Callback = void (*)();
    using QMdiSubWindow_Create_Callback = void (*)();
    using QMdiSubWindow_Destroy_Callback = void (*)();
    using QMdiSubWindow_FocusNextChild_Callback = bool (*)();
    using QMdiSubWindow_FocusPreviousChild_Callback = bool (*)();
    using QMdiSubWindow_Sender_Callback = QObject* (*)();
    using QMdiSubWindow_SenderSignalIndex_Callback = int (*)();
    using QMdiSubWindow_Receivers_Callback = int (*)(const QMdiSubWindow*, const char*);
    using QMdiSubWindow_IsSignalConnected_Callback = bool (*)(const QMdiSubWindow*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QMdiSubWindow_Metacall_Callback qmdisubwindow_metacall_callback = nullptr;
    QMdiSubWindow_SizeHint_Callback qmdisubwindow_sizehint_callback = nullptr;
    QMdiSubWindow_MinimumSizeHint_Callback qmdisubwindow_minimumsizehint_callback = nullptr;
    QMdiSubWindow_EventFilter_Callback qmdisubwindow_eventfilter_callback = nullptr;
    QMdiSubWindow_Event_Callback qmdisubwindow_event_callback = nullptr;
    QMdiSubWindow_ShowEvent_Callback qmdisubwindow_showevent_callback = nullptr;
    QMdiSubWindow_HideEvent_Callback qmdisubwindow_hideevent_callback = nullptr;
    QMdiSubWindow_ChangeEvent_Callback qmdisubwindow_changeevent_callback = nullptr;
    QMdiSubWindow_CloseEvent_Callback qmdisubwindow_closeevent_callback = nullptr;
    QMdiSubWindow_LeaveEvent_Callback qmdisubwindow_leaveevent_callback = nullptr;
    QMdiSubWindow_ResizeEvent_Callback qmdisubwindow_resizeevent_callback = nullptr;
    QMdiSubWindow_TimerEvent_Callback qmdisubwindow_timerevent_callback = nullptr;
    QMdiSubWindow_MoveEvent_Callback qmdisubwindow_moveevent_callback = nullptr;
    QMdiSubWindow_PaintEvent_Callback qmdisubwindow_paintevent_callback = nullptr;
    QMdiSubWindow_MousePressEvent_Callback qmdisubwindow_mousepressevent_callback = nullptr;
    QMdiSubWindow_MouseDoubleClickEvent_Callback qmdisubwindow_mousedoubleclickevent_callback = nullptr;
    QMdiSubWindow_MouseReleaseEvent_Callback qmdisubwindow_mousereleaseevent_callback = nullptr;
    QMdiSubWindow_MouseMoveEvent_Callback qmdisubwindow_mousemoveevent_callback = nullptr;
    QMdiSubWindow_KeyPressEvent_Callback qmdisubwindow_keypressevent_callback = nullptr;
    QMdiSubWindow_ContextMenuEvent_Callback qmdisubwindow_contextmenuevent_callback = nullptr;
    QMdiSubWindow_FocusInEvent_Callback qmdisubwindow_focusinevent_callback = nullptr;
    QMdiSubWindow_FocusOutEvent_Callback qmdisubwindow_focusoutevent_callback = nullptr;
    QMdiSubWindow_ChildEvent_Callback qmdisubwindow_childevent_callback = nullptr;
    QMdiSubWindow_DevType_Callback qmdisubwindow_devtype_callback = nullptr;
    QMdiSubWindow_SetVisible_Callback qmdisubwindow_setvisible_callback = nullptr;
    QMdiSubWindow_HeightForWidth_Callback qmdisubwindow_heightforwidth_callback = nullptr;
    QMdiSubWindow_HasHeightForWidth_Callback qmdisubwindow_hasheightforwidth_callback = nullptr;
    QMdiSubWindow_PaintEngine_Callback qmdisubwindow_paintengine_callback = nullptr;
    QMdiSubWindow_WheelEvent_Callback qmdisubwindow_wheelevent_callback = nullptr;
    QMdiSubWindow_KeyReleaseEvent_Callback qmdisubwindow_keyreleaseevent_callback = nullptr;
    QMdiSubWindow_EnterEvent_Callback qmdisubwindow_enterevent_callback = nullptr;
    QMdiSubWindow_TabletEvent_Callback qmdisubwindow_tabletevent_callback = nullptr;
    QMdiSubWindow_ActionEvent_Callback qmdisubwindow_actionevent_callback = nullptr;
    QMdiSubWindow_DragEnterEvent_Callback qmdisubwindow_dragenterevent_callback = nullptr;
    QMdiSubWindow_DragMoveEvent_Callback qmdisubwindow_dragmoveevent_callback = nullptr;
    QMdiSubWindow_DragLeaveEvent_Callback qmdisubwindow_dragleaveevent_callback = nullptr;
    QMdiSubWindow_DropEvent_Callback qmdisubwindow_dropevent_callback = nullptr;
    QMdiSubWindow_NativeEvent_Callback qmdisubwindow_nativeevent_callback = nullptr;
    QMdiSubWindow_Metric_Callback qmdisubwindow_metric_callback = nullptr;
    QMdiSubWindow_InitPainter_Callback qmdisubwindow_initpainter_callback = nullptr;
    QMdiSubWindow_Redirected_Callback qmdisubwindow_redirected_callback = nullptr;
    QMdiSubWindow_SharedPainter_Callback qmdisubwindow_sharedpainter_callback = nullptr;
    QMdiSubWindow_InputMethodEvent_Callback qmdisubwindow_inputmethodevent_callback = nullptr;
    QMdiSubWindow_InputMethodQuery_Callback qmdisubwindow_inputmethodquery_callback = nullptr;
    QMdiSubWindow_FocusNextPrevChild_Callback qmdisubwindow_focusnextprevchild_callback = nullptr;
    QMdiSubWindow_CustomEvent_Callback qmdisubwindow_customevent_callback = nullptr;
    QMdiSubWindow_ConnectNotify_Callback qmdisubwindow_connectnotify_callback = nullptr;
    QMdiSubWindow_DisconnectNotify_Callback qmdisubwindow_disconnectnotify_callback = nullptr;
    QMdiSubWindow_UpdateMicroFocus_Callback qmdisubwindow_updatemicrofocus_callback = nullptr;
    QMdiSubWindow_Create_Callback qmdisubwindow_create_callback = nullptr;
    QMdiSubWindow_Destroy_Callback qmdisubwindow_destroy_callback = nullptr;
    QMdiSubWindow_FocusNextChild_Callback qmdisubwindow_focusnextchild_callback = nullptr;
    QMdiSubWindow_FocusPreviousChild_Callback qmdisubwindow_focuspreviouschild_callback = nullptr;
    QMdiSubWindow_Sender_Callback qmdisubwindow_sender_callback = nullptr;
    QMdiSubWindow_SenderSignalIndex_Callback qmdisubwindow_sendersignalindex_callback = nullptr;
    QMdiSubWindow_Receivers_Callback qmdisubwindow_receivers_callback = nullptr;
    QMdiSubWindow_IsSignalConnected_Callback qmdisubwindow_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qmdisubwindow_metacall_isbase = false;
    mutable bool qmdisubwindow_sizehint_isbase = false;
    mutable bool qmdisubwindow_minimumsizehint_isbase = false;
    mutable bool qmdisubwindow_eventfilter_isbase = false;
    mutable bool qmdisubwindow_event_isbase = false;
    mutable bool qmdisubwindow_showevent_isbase = false;
    mutable bool qmdisubwindow_hideevent_isbase = false;
    mutable bool qmdisubwindow_changeevent_isbase = false;
    mutable bool qmdisubwindow_closeevent_isbase = false;
    mutable bool qmdisubwindow_leaveevent_isbase = false;
    mutable bool qmdisubwindow_resizeevent_isbase = false;
    mutable bool qmdisubwindow_timerevent_isbase = false;
    mutable bool qmdisubwindow_moveevent_isbase = false;
    mutable bool qmdisubwindow_paintevent_isbase = false;
    mutable bool qmdisubwindow_mousepressevent_isbase = false;
    mutable bool qmdisubwindow_mousedoubleclickevent_isbase = false;
    mutable bool qmdisubwindow_mousereleaseevent_isbase = false;
    mutable bool qmdisubwindow_mousemoveevent_isbase = false;
    mutable bool qmdisubwindow_keypressevent_isbase = false;
    mutable bool qmdisubwindow_contextmenuevent_isbase = false;
    mutable bool qmdisubwindow_focusinevent_isbase = false;
    mutable bool qmdisubwindow_focusoutevent_isbase = false;
    mutable bool qmdisubwindow_childevent_isbase = false;
    mutable bool qmdisubwindow_devtype_isbase = false;
    mutable bool qmdisubwindow_setvisible_isbase = false;
    mutable bool qmdisubwindow_heightforwidth_isbase = false;
    mutable bool qmdisubwindow_hasheightforwidth_isbase = false;
    mutable bool qmdisubwindow_paintengine_isbase = false;
    mutable bool qmdisubwindow_wheelevent_isbase = false;
    mutable bool qmdisubwindow_keyreleaseevent_isbase = false;
    mutable bool qmdisubwindow_enterevent_isbase = false;
    mutable bool qmdisubwindow_tabletevent_isbase = false;
    mutable bool qmdisubwindow_actionevent_isbase = false;
    mutable bool qmdisubwindow_dragenterevent_isbase = false;
    mutable bool qmdisubwindow_dragmoveevent_isbase = false;
    mutable bool qmdisubwindow_dragleaveevent_isbase = false;
    mutable bool qmdisubwindow_dropevent_isbase = false;
    mutable bool qmdisubwindow_nativeevent_isbase = false;
    mutable bool qmdisubwindow_metric_isbase = false;
    mutable bool qmdisubwindow_initpainter_isbase = false;
    mutable bool qmdisubwindow_redirected_isbase = false;
    mutable bool qmdisubwindow_sharedpainter_isbase = false;
    mutable bool qmdisubwindow_inputmethodevent_isbase = false;
    mutable bool qmdisubwindow_inputmethodquery_isbase = false;
    mutable bool qmdisubwindow_focusnextprevchild_isbase = false;
    mutable bool qmdisubwindow_customevent_isbase = false;
    mutable bool qmdisubwindow_connectnotify_isbase = false;
    mutable bool qmdisubwindow_disconnectnotify_isbase = false;
    mutable bool qmdisubwindow_updatemicrofocus_isbase = false;
    mutable bool qmdisubwindow_create_isbase = false;
    mutable bool qmdisubwindow_destroy_isbase = false;
    mutable bool qmdisubwindow_focusnextchild_isbase = false;
    mutable bool qmdisubwindow_focuspreviouschild_isbase = false;
    mutable bool qmdisubwindow_sender_isbase = false;
    mutable bool qmdisubwindow_sendersignalindex_isbase = false;
    mutable bool qmdisubwindow_receivers_isbase = false;
    mutable bool qmdisubwindow_issignalconnected_isbase = false;

  public:
    VirtualQMdiSubWindow(QWidget* parent) : QMdiSubWindow(parent){};
    VirtualQMdiSubWindow() : QMdiSubWindow(){};
    VirtualQMdiSubWindow(QWidget* parent, Qt::WindowFlags flags) : QMdiSubWindow(parent, flags){};

    ~VirtualQMdiSubWindow() {
        qmdisubwindow_metacall_callback = nullptr;
        qmdisubwindow_sizehint_callback = nullptr;
        qmdisubwindow_minimumsizehint_callback = nullptr;
        qmdisubwindow_eventfilter_callback = nullptr;
        qmdisubwindow_event_callback = nullptr;
        qmdisubwindow_showevent_callback = nullptr;
        qmdisubwindow_hideevent_callback = nullptr;
        qmdisubwindow_changeevent_callback = nullptr;
        qmdisubwindow_closeevent_callback = nullptr;
        qmdisubwindow_leaveevent_callback = nullptr;
        qmdisubwindow_resizeevent_callback = nullptr;
        qmdisubwindow_timerevent_callback = nullptr;
        qmdisubwindow_moveevent_callback = nullptr;
        qmdisubwindow_paintevent_callback = nullptr;
        qmdisubwindow_mousepressevent_callback = nullptr;
        qmdisubwindow_mousedoubleclickevent_callback = nullptr;
        qmdisubwindow_mousereleaseevent_callback = nullptr;
        qmdisubwindow_mousemoveevent_callback = nullptr;
        qmdisubwindow_keypressevent_callback = nullptr;
        qmdisubwindow_contextmenuevent_callback = nullptr;
        qmdisubwindow_focusinevent_callback = nullptr;
        qmdisubwindow_focusoutevent_callback = nullptr;
        qmdisubwindow_childevent_callback = nullptr;
        qmdisubwindow_devtype_callback = nullptr;
        qmdisubwindow_setvisible_callback = nullptr;
        qmdisubwindow_heightforwidth_callback = nullptr;
        qmdisubwindow_hasheightforwidth_callback = nullptr;
        qmdisubwindow_paintengine_callback = nullptr;
        qmdisubwindow_wheelevent_callback = nullptr;
        qmdisubwindow_keyreleaseevent_callback = nullptr;
        qmdisubwindow_enterevent_callback = nullptr;
        qmdisubwindow_tabletevent_callback = nullptr;
        qmdisubwindow_actionevent_callback = nullptr;
        qmdisubwindow_dragenterevent_callback = nullptr;
        qmdisubwindow_dragmoveevent_callback = nullptr;
        qmdisubwindow_dragleaveevent_callback = nullptr;
        qmdisubwindow_dropevent_callback = nullptr;
        qmdisubwindow_nativeevent_callback = nullptr;
        qmdisubwindow_metric_callback = nullptr;
        qmdisubwindow_initpainter_callback = nullptr;
        qmdisubwindow_redirected_callback = nullptr;
        qmdisubwindow_sharedpainter_callback = nullptr;
        qmdisubwindow_inputmethodevent_callback = nullptr;
        qmdisubwindow_inputmethodquery_callback = nullptr;
        qmdisubwindow_focusnextprevchild_callback = nullptr;
        qmdisubwindow_customevent_callback = nullptr;
        qmdisubwindow_connectnotify_callback = nullptr;
        qmdisubwindow_disconnectnotify_callback = nullptr;
        qmdisubwindow_updatemicrofocus_callback = nullptr;
        qmdisubwindow_create_callback = nullptr;
        qmdisubwindow_destroy_callback = nullptr;
        qmdisubwindow_focusnextchild_callback = nullptr;
        qmdisubwindow_focuspreviouschild_callback = nullptr;
        qmdisubwindow_sender_callback = nullptr;
        qmdisubwindow_sendersignalindex_callback = nullptr;
        qmdisubwindow_receivers_callback = nullptr;
        qmdisubwindow_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQMdiSubWindow_Metacall_Callback(QMdiSubWindow_Metacall_Callback cb) { qmdisubwindow_metacall_callback = cb; }
    void setQMdiSubWindow_SizeHint_Callback(QMdiSubWindow_SizeHint_Callback cb) { qmdisubwindow_sizehint_callback = cb; }
    void setQMdiSubWindow_MinimumSizeHint_Callback(QMdiSubWindow_MinimumSizeHint_Callback cb) { qmdisubwindow_minimumsizehint_callback = cb; }
    void setQMdiSubWindow_EventFilter_Callback(QMdiSubWindow_EventFilter_Callback cb) { qmdisubwindow_eventfilter_callback = cb; }
    void setQMdiSubWindow_Event_Callback(QMdiSubWindow_Event_Callback cb) { qmdisubwindow_event_callback = cb; }
    void setQMdiSubWindow_ShowEvent_Callback(QMdiSubWindow_ShowEvent_Callback cb) { qmdisubwindow_showevent_callback = cb; }
    void setQMdiSubWindow_HideEvent_Callback(QMdiSubWindow_HideEvent_Callback cb) { qmdisubwindow_hideevent_callback = cb; }
    void setQMdiSubWindow_ChangeEvent_Callback(QMdiSubWindow_ChangeEvent_Callback cb) { qmdisubwindow_changeevent_callback = cb; }
    void setQMdiSubWindow_CloseEvent_Callback(QMdiSubWindow_CloseEvent_Callback cb) { qmdisubwindow_closeevent_callback = cb; }
    void setQMdiSubWindow_LeaveEvent_Callback(QMdiSubWindow_LeaveEvent_Callback cb) { qmdisubwindow_leaveevent_callback = cb; }
    void setQMdiSubWindow_ResizeEvent_Callback(QMdiSubWindow_ResizeEvent_Callback cb) { qmdisubwindow_resizeevent_callback = cb; }
    void setQMdiSubWindow_TimerEvent_Callback(QMdiSubWindow_TimerEvent_Callback cb) { qmdisubwindow_timerevent_callback = cb; }
    void setQMdiSubWindow_MoveEvent_Callback(QMdiSubWindow_MoveEvent_Callback cb) { qmdisubwindow_moveevent_callback = cb; }
    void setQMdiSubWindow_PaintEvent_Callback(QMdiSubWindow_PaintEvent_Callback cb) { qmdisubwindow_paintevent_callback = cb; }
    void setQMdiSubWindow_MousePressEvent_Callback(QMdiSubWindow_MousePressEvent_Callback cb) { qmdisubwindow_mousepressevent_callback = cb; }
    void setQMdiSubWindow_MouseDoubleClickEvent_Callback(QMdiSubWindow_MouseDoubleClickEvent_Callback cb) { qmdisubwindow_mousedoubleclickevent_callback = cb; }
    void setQMdiSubWindow_MouseReleaseEvent_Callback(QMdiSubWindow_MouseReleaseEvent_Callback cb) { qmdisubwindow_mousereleaseevent_callback = cb; }
    void setQMdiSubWindow_MouseMoveEvent_Callback(QMdiSubWindow_MouseMoveEvent_Callback cb) { qmdisubwindow_mousemoveevent_callback = cb; }
    void setQMdiSubWindow_KeyPressEvent_Callback(QMdiSubWindow_KeyPressEvent_Callback cb) { qmdisubwindow_keypressevent_callback = cb; }
    void setQMdiSubWindow_ContextMenuEvent_Callback(QMdiSubWindow_ContextMenuEvent_Callback cb) { qmdisubwindow_contextmenuevent_callback = cb; }
    void setQMdiSubWindow_FocusInEvent_Callback(QMdiSubWindow_FocusInEvent_Callback cb) { qmdisubwindow_focusinevent_callback = cb; }
    void setQMdiSubWindow_FocusOutEvent_Callback(QMdiSubWindow_FocusOutEvent_Callback cb) { qmdisubwindow_focusoutevent_callback = cb; }
    void setQMdiSubWindow_ChildEvent_Callback(QMdiSubWindow_ChildEvent_Callback cb) { qmdisubwindow_childevent_callback = cb; }
    void setQMdiSubWindow_DevType_Callback(QMdiSubWindow_DevType_Callback cb) { qmdisubwindow_devtype_callback = cb; }
    void setQMdiSubWindow_SetVisible_Callback(QMdiSubWindow_SetVisible_Callback cb) { qmdisubwindow_setvisible_callback = cb; }
    void setQMdiSubWindow_HeightForWidth_Callback(QMdiSubWindow_HeightForWidth_Callback cb) { qmdisubwindow_heightforwidth_callback = cb; }
    void setQMdiSubWindow_HasHeightForWidth_Callback(QMdiSubWindow_HasHeightForWidth_Callback cb) { qmdisubwindow_hasheightforwidth_callback = cb; }
    void setQMdiSubWindow_PaintEngine_Callback(QMdiSubWindow_PaintEngine_Callback cb) { qmdisubwindow_paintengine_callback = cb; }
    void setQMdiSubWindow_WheelEvent_Callback(QMdiSubWindow_WheelEvent_Callback cb) { qmdisubwindow_wheelevent_callback = cb; }
    void setQMdiSubWindow_KeyReleaseEvent_Callback(QMdiSubWindow_KeyReleaseEvent_Callback cb) { qmdisubwindow_keyreleaseevent_callback = cb; }
    void setQMdiSubWindow_EnterEvent_Callback(QMdiSubWindow_EnterEvent_Callback cb) { qmdisubwindow_enterevent_callback = cb; }
    void setQMdiSubWindow_TabletEvent_Callback(QMdiSubWindow_TabletEvent_Callback cb) { qmdisubwindow_tabletevent_callback = cb; }
    void setQMdiSubWindow_ActionEvent_Callback(QMdiSubWindow_ActionEvent_Callback cb) { qmdisubwindow_actionevent_callback = cb; }
    void setQMdiSubWindow_DragEnterEvent_Callback(QMdiSubWindow_DragEnterEvent_Callback cb) { qmdisubwindow_dragenterevent_callback = cb; }
    void setQMdiSubWindow_DragMoveEvent_Callback(QMdiSubWindow_DragMoveEvent_Callback cb) { qmdisubwindow_dragmoveevent_callback = cb; }
    void setQMdiSubWindow_DragLeaveEvent_Callback(QMdiSubWindow_DragLeaveEvent_Callback cb) { qmdisubwindow_dragleaveevent_callback = cb; }
    void setQMdiSubWindow_DropEvent_Callback(QMdiSubWindow_DropEvent_Callback cb) { qmdisubwindow_dropevent_callback = cb; }
    void setQMdiSubWindow_NativeEvent_Callback(QMdiSubWindow_NativeEvent_Callback cb) { qmdisubwindow_nativeevent_callback = cb; }
    void setQMdiSubWindow_Metric_Callback(QMdiSubWindow_Metric_Callback cb) { qmdisubwindow_metric_callback = cb; }
    void setQMdiSubWindow_InitPainter_Callback(QMdiSubWindow_InitPainter_Callback cb) { qmdisubwindow_initpainter_callback = cb; }
    void setQMdiSubWindow_Redirected_Callback(QMdiSubWindow_Redirected_Callback cb) { qmdisubwindow_redirected_callback = cb; }
    void setQMdiSubWindow_SharedPainter_Callback(QMdiSubWindow_SharedPainter_Callback cb) { qmdisubwindow_sharedpainter_callback = cb; }
    void setQMdiSubWindow_InputMethodEvent_Callback(QMdiSubWindow_InputMethodEvent_Callback cb) { qmdisubwindow_inputmethodevent_callback = cb; }
    void setQMdiSubWindow_InputMethodQuery_Callback(QMdiSubWindow_InputMethodQuery_Callback cb) { qmdisubwindow_inputmethodquery_callback = cb; }
    void setQMdiSubWindow_FocusNextPrevChild_Callback(QMdiSubWindow_FocusNextPrevChild_Callback cb) { qmdisubwindow_focusnextprevchild_callback = cb; }
    void setQMdiSubWindow_CustomEvent_Callback(QMdiSubWindow_CustomEvent_Callback cb) { qmdisubwindow_customevent_callback = cb; }
    void setQMdiSubWindow_ConnectNotify_Callback(QMdiSubWindow_ConnectNotify_Callback cb) { qmdisubwindow_connectnotify_callback = cb; }
    void setQMdiSubWindow_DisconnectNotify_Callback(QMdiSubWindow_DisconnectNotify_Callback cb) { qmdisubwindow_disconnectnotify_callback = cb; }
    void setQMdiSubWindow_UpdateMicroFocus_Callback(QMdiSubWindow_UpdateMicroFocus_Callback cb) { qmdisubwindow_updatemicrofocus_callback = cb; }
    void setQMdiSubWindow_Create_Callback(QMdiSubWindow_Create_Callback cb) { qmdisubwindow_create_callback = cb; }
    void setQMdiSubWindow_Destroy_Callback(QMdiSubWindow_Destroy_Callback cb) { qmdisubwindow_destroy_callback = cb; }
    void setQMdiSubWindow_FocusNextChild_Callback(QMdiSubWindow_FocusNextChild_Callback cb) { qmdisubwindow_focusnextchild_callback = cb; }
    void setQMdiSubWindow_FocusPreviousChild_Callback(QMdiSubWindow_FocusPreviousChild_Callback cb) { qmdisubwindow_focuspreviouschild_callback = cb; }
    void setQMdiSubWindow_Sender_Callback(QMdiSubWindow_Sender_Callback cb) { qmdisubwindow_sender_callback = cb; }
    void setQMdiSubWindow_SenderSignalIndex_Callback(QMdiSubWindow_SenderSignalIndex_Callback cb) { qmdisubwindow_sendersignalindex_callback = cb; }
    void setQMdiSubWindow_Receivers_Callback(QMdiSubWindow_Receivers_Callback cb) { qmdisubwindow_receivers_callback = cb; }
    void setQMdiSubWindow_IsSignalConnected_Callback(QMdiSubWindow_IsSignalConnected_Callback cb) { qmdisubwindow_issignalconnected_callback = cb; }

    // Base flag setters
    void setQMdiSubWindow_Metacall_IsBase(bool value) const { qmdisubwindow_metacall_isbase = value; }
    void setQMdiSubWindow_SizeHint_IsBase(bool value) const { qmdisubwindow_sizehint_isbase = value; }
    void setQMdiSubWindow_MinimumSizeHint_IsBase(bool value) const { qmdisubwindow_minimumsizehint_isbase = value; }
    void setQMdiSubWindow_EventFilter_IsBase(bool value) const { qmdisubwindow_eventfilter_isbase = value; }
    void setQMdiSubWindow_Event_IsBase(bool value) const { qmdisubwindow_event_isbase = value; }
    void setQMdiSubWindow_ShowEvent_IsBase(bool value) const { qmdisubwindow_showevent_isbase = value; }
    void setQMdiSubWindow_HideEvent_IsBase(bool value) const { qmdisubwindow_hideevent_isbase = value; }
    void setQMdiSubWindow_ChangeEvent_IsBase(bool value) const { qmdisubwindow_changeevent_isbase = value; }
    void setQMdiSubWindow_CloseEvent_IsBase(bool value) const { qmdisubwindow_closeevent_isbase = value; }
    void setQMdiSubWindow_LeaveEvent_IsBase(bool value) const { qmdisubwindow_leaveevent_isbase = value; }
    void setQMdiSubWindow_ResizeEvent_IsBase(bool value) const { qmdisubwindow_resizeevent_isbase = value; }
    void setQMdiSubWindow_TimerEvent_IsBase(bool value) const { qmdisubwindow_timerevent_isbase = value; }
    void setQMdiSubWindow_MoveEvent_IsBase(bool value) const { qmdisubwindow_moveevent_isbase = value; }
    void setQMdiSubWindow_PaintEvent_IsBase(bool value) const { qmdisubwindow_paintevent_isbase = value; }
    void setQMdiSubWindow_MousePressEvent_IsBase(bool value) const { qmdisubwindow_mousepressevent_isbase = value; }
    void setQMdiSubWindow_MouseDoubleClickEvent_IsBase(bool value) const { qmdisubwindow_mousedoubleclickevent_isbase = value; }
    void setQMdiSubWindow_MouseReleaseEvent_IsBase(bool value) const { qmdisubwindow_mousereleaseevent_isbase = value; }
    void setQMdiSubWindow_MouseMoveEvent_IsBase(bool value) const { qmdisubwindow_mousemoveevent_isbase = value; }
    void setQMdiSubWindow_KeyPressEvent_IsBase(bool value) const { qmdisubwindow_keypressevent_isbase = value; }
    void setQMdiSubWindow_ContextMenuEvent_IsBase(bool value) const { qmdisubwindow_contextmenuevent_isbase = value; }
    void setQMdiSubWindow_FocusInEvent_IsBase(bool value) const { qmdisubwindow_focusinevent_isbase = value; }
    void setQMdiSubWindow_FocusOutEvent_IsBase(bool value) const { qmdisubwindow_focusoutevent_isbase = value; }
    void setQMdiSubWindow_ChildEvent_IsBase(bool value) const { qmdisubwindow_childevent_isbase = value; }
    void setQMdiSubWindow_DevType_IsBase(bool value) const { qmdisubwindow_devtype_isbase = value; }
    void setQMdiSubWindow_SetVisible_IsBase(bool value) const { qmdisubwindow_setvisible_isbase = value; }
    void setQMdiSubWindow_HeightForWidth_IsBase(bool value) const { qmdisubwindow_heightforwidth_isbase = value; }
    void setQMdiSubWindow_HasHeightForWidth_IsBase(bool value) const { qmdisubwindow_hasheightforwidth_isbase = value; }
    void setQMdiSubWindow_PaintEngine_IsBase(bool value) const { qmdisubwindow_paintengine_isbase = value; }
    void setQMdiSubWindow_WheelEvent_IsBase(bool value) const { qmdisubwindow_wheelevent_isbase = value; }
    void setQMdiSubWindow_KeyReleaseEvent_IsBase(bool value) const { qmdisubwindow_keyreleaseevent_isbase = value; }
    void setQMdiSubWindow_EnterEvent_IsBase(bool value) const { qmdisubwindow_enterevent_isbase = value; }
    void setQMdiSubWindow_TabletEvent_IsBase(bool value) const { qmdisubwindow_tabletevent_isbase = value; }
    void setQMdiSubWindow_ActionEvent_IsBase(bool value) const { qmdisubwindow_actionevent_isbase = value; }
    void setQMdiSubWindow_DragEnterEvent_IsBase(bool value) const { qmdisubwindow_dragenterevent_isbase = value; }
    void setQMdiSubWindow_DragMoveEvent_IsBase(bool value) const { qmdisubwindow_dragmoveevent_isbase = value; }
    void setQMdiSubWindow_DragLeaveEvent_IsBase(bool value) const { qmdisubwindow_dragleaveevent_isbase = value; }
    void setQMdiSubWindow_DropEvent_IsBase(bool value) const { qmdisubwindow_dropevent_isbase = value; }
    void setQMdiSubWindow_NativeEvent_IsBase(bool value) const { qmdisubwindow_nativeevent_isbase = value; }
    void setQMdiSubWindow_Metric_IsBase(bool value) const { qmdisubwindow_metric_isbase = value; }
    void setQMdiSubWindow_InitPainter_IsBase(bool value) const { qmdisubwindow_initpainter_isbase = value; }
    void setQMdiSubWindow_Redirected_IsBase(bool value) const { qmdisubwindow_redirected_isbase = value; }
    void setQMdiSubWindow_SharedPainter_IsBase(bool value) const { qmdisubwindow_sharedpainter_isbase = value; }
    void setQMdiSubWindow_InputMethodEvent_IsBase(bool value) const { qmdisubwindow_inputmethodevent_isbase = value; }
    void setQMdiSubWindow_InputMethodQuery_IsBase(bool value) const { qmdisubwindow_inputmethodquery_isbase = value; }
    void setQMdiSubWindow_FocusNextPrevChild_IsBase(bool value) const { qmdisubwindow_focusnextprevchild_isbase = value; }
    void setQMdiSubWindow_CustomEvent_IsBase(bool value) const { qmdisubwindow_customevent_isbase = value; }
    void setQMdiSubWindow_ConnectNotify_IsBase(bool value) const { qmdisubwindow_connectnotify_isbase = value; }
    void setQMdiSubWindow_DisconnectNotify_IsBase(bool value) const { qmdisubwindow_disconnectnotify_isbase = value; }
    void setQMdiSubWindow_UpdateMicroFocus_IsBase(bool value) const { qmdisubwindow_updatemicrofocus_isbase = value; }
    void setQMdiSubWindow_Create_IsBase(bool value) const { qmdisubwindow_create_isbase = value; }
    void setQMdiSubWindow_Destroy_IsBase(bool value) const { qmdisubwindow_destroy_isbase = value; }
    void setQMdiSubWindow_FocusNextChild_IsBase(bool value) const { qmdisubwindow_focusnextchild_isbase = value; }
    void setQMdiSubWindow_FocusPreviousChild_IsBase(bool value) const { qmdisubwindow_focuspreviouschild_isbase = value; }
    void setQMdiSubWindow_Sender_IsBase(bool value) const { qmdisubwindow_sender_isbase = value; }
    void setQMdiSubWindow_SenderSignalIndex_IsBase(bool value) const { qmdisubwindow_sendersignalindex_isbase = value; }
    void setQMdiSubWindow_Receivers_IsBase(bool value) const { qmdisubwindow_receivers_isbase = value; }
    void setQMdiSubWindow_IsSignalConnected_IsBase(bool value) const { qmdisubwindow_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qmdisubwindow_metacall_isbase) {
            qmdisubwindow_metacall_isbase = false;
            return QMdiSubWindow::qt_metacall(param1, param2, param3);
        } else if (qmdisubwindow_metacall_callback != nullptr) {
            return qmdisubwindow_metacall_callback(this, param1, param2, param3);
        } else {
            return QMdiSubWindow::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qmdisubwindow_sizehint_isbase) {
            qmdisubwindow_sizehint_isbase = false;
            return QMdiSubWindow::sizeHint();
        } else if (qmdisubwindow_sizehint_callback != nullptr) {
            return qmdisubwindow_sizehint_callback();
        } else {
            return QMdiSubWindow::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qmdisubwindow_minimumsizehint_isbase) {
            qmdisubwindow_minimumsizehint_isbase = false;
            return QMdiSubWindow::minimumSizeHint();
        } else if (qmdisubwindow_minimumsizehint_callback != nullptr) {
            return qmdisubwindow_minimumsizehint_callback();
        } else {
            return QMdiSubWindow::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qmdisubwindow_eventfilter_isbase) {
            qmdisubwindow_eventfilter_isbase = false;
            return QMdiSubWindow::eventFilter(object, event);
        } else if (qmdisubwindow_eventfilter_callback != nullptr) {
            return qmdisubwindow_eventfilter_callback(this, object, event);
        } else {
            return QMdiSubWindow::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qmdisubwindow_event_isbase) {
            qmdisubwindow_event_isbase = false;
            return QMdiSubWindow::event(event);
        } else if (qmdisubwindow_event_callback != nullptr) {
            return qmdisubwindow_event_callback(this, event);
        } else {
            return QMdiSubWindow::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* showEvent) override {
        if (qmdisubwindow_showevent_isbase) {
            qmdisubwindow_showevent_isbase = false;
            QMdiSubWindow::showEvent(showEvent);
        } else if (qmdisubwindow_showevent_callback != nullptr) {
            qmdisubwindow_showevent_callback(this, showEvent);
        } else {
            QMdiSubWindow::showEvent(showEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* hideEvent) override {
        if (qmdisubwindow_hideevent_isbase) {
            qmdisubwindow_hideevent_isbase = false;
            QMdiSubWindow::hideEvent(hideEvent);
        } else if (qmdisubwindow_hideevent_callback != nullptr) {
            qmdisubwindow_hideevent_callback(this, hideEvent);
        } else {
            QMdiSubWindow::hideEvent(hideEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* changeEvent) override {
        if (qmdisubwindow_changeevent_isbase) {
            qmdisubwindow_changeevent_isbase = false;
            QMdiSubWindow::changeEvent(changeEvent);
        } else if (qmdisubwindow_changeevent_callback != nullptr) {
            qmdisubwindow_changeevent_callback(this, changeEvent);
        } else {
            QMdiSubWindow::changeEvent(changeEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* closeEvent) override {
        if (qmdisubwindow_closeevent_isbase) {
            qmdisubwindow_closeevent_isbase = false;
            QMdiSubWindow::closeEvent(closeEvent);
        } else if (qmdisubwindow_closeevent_callback != nullptr) {
            qmdisubwindow_closeevent_callback(this, closeEvent);
        } else {
            QMdiSubWindow::closeEvent(closeEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* leaveEvent) override {
        if (qmdisubwindow_leaveevent_isbase) {
            qmdisubwindow_leaveevent_isbase = false;
            QMdiSubWindow::leaveEvent(leaveEvent);
        } else if (qmdisubwindow_leaveevent_callback != nullptr) {
            qmdisubwindow_leaveevent_callback(this, leaveEvent);
        } else {
            QMdiSubWindow::leaveEvent(leaveEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* resizeEvent) override {
        if (qmdisubwindow_resizeevent_isbase) {
            qmdisubwindow_resizeevent_isbase = false;
            QMdiSubWindow::resizeEvent(resizeEvent);
        } else if (qmdisubwindow_resizeevent_callback != nullptr) {
            qmdisubwindow_resizeevent_callback(this, resizeEvent);
        } else {
            QMdiSubWindow::resizeEvent(resizeEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* timerEvent) override {
        if (qmdisubwindow_timerevent_isbase) {
            qmdisubwindow_timerevent_isbase = false;
            QMdiSubWindow::timerEvent(timerEvent);
        } else if (qmdisubwindow_timerevent_callback != nullptr) {
            qmdisubwindow_timerevent_callback(this, timerEvent);
        } else {
            QMdiSubWindow::timerEvent(timerEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* moveEvent) override {
        if (qmdisubwindow_moveevent_isbase) {
            qmdisubwindow_moveevent_isbase = false;
            QMdiSubWindow::moveEvent(moveEvent);
        } else if (qmdisubwindow_moveevent_callback != nullptr) {
            qmdisubwindow_moveevent_callback(this, moveEvent);
        } else {
            QMdiSubWindow::moveEvent(moveEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* paintEvent) override {
        if (qmdisubwindow_paintevent_isbase) {
            qmdisubwindow_paintevent_isbase = false;
            QMdiSubWindow::paintEvent(paintEvent);
        } else if (qmdisubwindow_paintevent_callback != nullptr) {
            qmdisubwindow_paintevent_callback(this, paintEvent);
        } else {
            QMdiSubWindow::paintEvent(paintEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousepressevent_isbase) {
            qmdisubwindow_mousepressevent_isbase = false;
            QMdiSubWindow::mousePressEvent(mouseEvent);
        } else if (qmdisubwindow_mousepressevent_callback != nullptr) {
            qmdisubwindow_mousepressevent_callback(this, mouseEvent);
        } else {
            QMdiSubWindow::mousePressEvent(mouseEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousedoubleclickevent_isbase) {
            qmdisubwindow_mousedoubleclickevent_isbase = false;
            QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
        } else if (qmdisubwindow_mousedoubleclickevent_callback != nullptr) {
            qmdisubwindow_mousedoubleclickevent_callback(this, mouseEvent);
        } else {
            QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousereleaseevent_isbase) {
            qmdisubwindow_mousereleaseevent_isbase = false;
            QMdiSubWindow::mouseReleaseEvent(mouseEvent);
        } else if (qmdisubwindow_mousereleaseevent_callback != nullptr) {
            qmdisubwindow_mousereleaseevent_callback(this, mouseEvent);
        } else {
            QMdiSubWindow::mouseReleaseEvent(mouseEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* mouseEvent) override {
        if (qmdisubwindow_mousemoveevent_isbase) {
            qmdisubwindow_mousemoveevent_isbase = false;
            QMdiSubWindow::mouseMoveEvent(mouseEvent);
        } else if (qmdisubwindow_mousemoveevent_callback != nullptr) {
            qmdisubwindow_mousemoveevent_callback(this, mouseEvent);
        } else {
            QMdiSubWindow::mouseMoveEvent(mouseEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* keyEvent) override {
        if (qmdisubwindow_keypressevent_isbase) {
            qmdisubwindow_keypressevent_isbase = false;
            QMdiSubWindow::keyPressEvent(keyEvent);
        } else if (qmdisubwindow_keypressevent_callback != nullptr) {
            qmdisubwindow_keypressevent_callback(this, keyEvent);
        } else {
            QMdiSubWindow::keyPressEvent(keyEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* contextMenuEvent) override {
        if (qmdisubwindow_contextmenuevent_isbase) {
            qmdisubwindow_contextmenuevent_isbase = false;
            QMdiSubWindow::contextMenuEvent(contextMenuEvent);
        } else if (qmdisubwindow_contextmenuevent_callback != nullptr) {
            qmdisubwindow_contextmenuevent_callback(this, contextMenuEvent);
        } else {
            QMdiSubWindow::contextMenuEvent(contextMenuEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* focusInEvent) override {
        if (qmdisubwindow_focusinevent_isbase) {
            qmdisubwindow_focusinevent_isbase = false;
            QMdiSubWindow::focusInEvent(focusInEvent);
        } else if (qmdisubwindow_focusinevent_callback != nullptr) {
            qmdisubwindow_focusinevent_callback(this, focusInEvent);
        } else {
            QMdiSubWindow::focusInEvent(focusInEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* focusOutEvent) override {
        if (qmdisubwindow_focusoutevent_isbase) {
            qmdisubwindow_focusoutevent_isbase = false;
            QMdiSubWindow::focusOutEvent(focusOutEvent);
        } else if (qmdisubwindow_focusoutevent_callback != nullptr) {
            qmdisubwindow_focusoutevent_callback(this, focusOutEvent);
        } else {
            QMdiSubWindow::focusOutEvent(focusOutEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* childEvent) override {
        if (qmdisubwindow_childevent_isbase) {
            qmdisubwindow_childevent_isbase = false;
            QMdiSubWindow::childEvent(childEvent);
        } else if (qmdisubwindow_childevent_callback != nullptr) {
            qmdisubwindow_childevent_callback(this, childEvent);
        } else {
            QMdiSubWindow::childEvent(childEvent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qmdisubwindow_devtype_isbase) {
            qmdisubwindow_devtype_isbase = false;
            return QMdiSubWindow::devType();
        } else if (qmdisubwindow_devtype_callback != nullptr) {
            return qmdisubwindow_devtype_callback();
        } else {
            return QMdiSubWindow::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qmdisubwindow_setvisible_isbase) {
            qmdisubwindow_setvisible_isbase = false;
            QMdiSubWindow::setVisible(visible);
        } else if (qmdisubwindow_setvisible_callback != nullptr) {
            qmdisubwindow_setvisible_callback(this, visible);
        } else {
            QMdiSubWindow::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qmdisubwindow_heightforwidth_isbase) {
            qmdisubwindow_heightforwidth_isbase = false;
            return QMdiSubWindow::heightForWidth(param1);
        } else if (qmdisubwindow_heightforwidth_callback != nullptr) {
            return qmdisubwindow_heightforwidth_callback(this, param1);
        } else {
            return QMdiSubWindow::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qmdisubwindow_hasheightforwidth_isbase) {
            qmdisubwindow_hasheightforwidth_isbase = false;
            return QMdiSubWindow::hasHeightForWidth();
        } else if (qmdisubwindow_hasheightforwidth_callback != nullptr) {
            return qmdisubwindow_hasheightforwidth_callback();
        } else {
            return QMdiSubWindow::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qmdisubwindow_paintengine_isbase) {
            qmdisubwindow_paintengine_isbase = false;
            return QMdiSubWindow::paintEngine();
        } else if (qmdisubwindow_paintengine_callback != nullptr) {
            return qmdisubwindow_paintengine_callback();
        } else {
            return QMdiSubWindow::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* event) override {
        if (qmdisubwindow_wheelevent_isbase) {
            qmdisubwindow_wheelevent_isbase = false;
            QMdiSubWindow::wheelEvent(event);
        } else if (qmdisubwindow_wheelevent_callback != nullptr) {
            qmdisubwindow_wheelevent_callback(this, event);
        } else {
            QMdiSubWindow::wheelEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qmdisubwindow_keyreleaseevent_isbase) {
            qmdisubwindow_keyreleaseevent_isbase = false;
            QMdiSubWindow::keyReleaseEvent(event);
        } else if (qmdisubwindow_keyreleaseevent_callback != nullptr) {
            qmdisubwindow_keyreleaseevent_callback(this, event);
        } else {
            QMdiSubWindow::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qmdisubwindow_enterevent_isbase) {
            qmdisubwindow_enterevent_isbase = false;
            QMdiSubWindow::enterEvent(event);
        } else if (qmdisubwindow_enterevent_callback != nullptr) {
            qmdisubwindow_enterevent_callback(this, event);
        } else {
            QMdiSubWindow::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qmdisubwindow_tabletevent_isbase) {
            qmdisubwindow_tabletevent_isbase = false;
            QMdiSubWindow::tabletEvent(event);
        } else if (qmdisubwindow_tabletevent_callback != nullptr) {
            qmdisubwindow_tabletevent_callback(this, event);
        } else {
            QMdiSubWindow::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qmdisubwindow_actionevent_isbase) {
            qmdisubwindow_actionevent_isbase = false;
            QMdiSubWindow::actionEvent(event);
        } else if (qmdisubwindow_actionevent_callback != nullptr) {
            qmdisubwindow_actionevent_callback(this, event);
        } else {
            QMdiSubWindow::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qmdisubwindow_dragenterevent_isbase) {
            qmdisubwindow_dragenterevent_isbase = false;
            QMdiSubWindow::dragEnterEvent(event);
        } else if (qmdisubwindow_dragenterevent_callback != nullptr) {
            qmdisubwindow_dragenterevent_callback(this, event);
        } else {
            QMdiSubWindow::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* event) override {
        if (qmdisubwindow_dragmoveevent_isbase) {
            qmdisubwindow_dragmoveevent_isbase = false;
            QMdiSubWindow::dragMoveEvent(event);
        } else if (qmdisubwindow_dragmoveevent_callback != nullptr) {
            qmdisubwindow_dragmoveevent_callback(this, event);
        } else {
            QMdiSubWindow::dragMoveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
        if (qmdisubwindow_dragleaveevent_isbase) {
            qmdisubwindow_dragleaveevent_isbase = false;
            QMdiSubWindow::dragLeaveEvent(event);
        } else if (qmdisubwindow_dragleaveevent_callback != nullptr) {
            qmdisubwindow_dragleaveevent_callback(this, event);
        } else {
            QMdiSubWindow::dragLeaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* event) override {
        if (qmdisubwindow_dropevent_isbase) {
            qmdisubwindow_dropevent_isbase = false;
            QMdiSubWindow::dropEvent(event);
        } else if (qmdisubwindow_dropevent_callback != nullptr) {
            qmdisubwindow_dropevent_callback(this, event);
        } else {
            QMdiSubWindow::dropEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qmdisubwindow_nativeevent_isbase) {
            qmdisubwindow_nativeevent_isbase = false;
            return QMdiSubWindow::nativeEvent(eventType, message, result);
        } else if (qmdisubwindow_nativeevent_callback != nullptr) {
            return qmdisubwindow_nativeevent_callback(this, eventType, message, result);
        } else {
            return QMdiSubWindow::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qmdisubwindow_metric_isbase) {
            qmdisubwindow_metric_isbase = false;
            return QMdiSubWindow::metric(param1);
        } else if (qmdisubwindow_metric_callback != nullptr) {
            return qmdisubwindow_metric_callback(this, param1);
        } else {
            return QMdiSubWindow::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qmdisubwindow_initpainter_isbase) {
            qmdisubwindow_initpainter_isbase = false;
            QMdiSubWindow::initPainter(painter);
        } else if (qmdisubwindow_initpainter_callback != nullptr) {
            qmdisubwindow_initpainter_callback(this, painter);
        } else {
            QMdiSubWindow::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qmdisubwindow_redirected_isbase) {
            qmdisubwindow_redirected_isbase = false;
            return QMdiSubWindow::redirected(offset);
        } else if (qmdisubwindow_redirected_callback != nullptr) {
            return qmdisubwindow_redirected_callback(this, offset);
        } else {
            return QMdiSubWindow::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qmdisubwindow_sharedpainter_isbase) {
            qmdisubwindow_sharedpainter_isbase = false;
            return QMdiSubWindow::sharedPainter();
        } else if (qmdisubwindow_sharedpainter_callback != nullptr) {
            return qmdisubwindow_sharedpainter_callback();
        } else {
            return QMdiSubWindow::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* param1) override {
        if (qmdisubwindow_inputmethodevent_isbase) {
            qmdisubwindow_inputmethodevent_isbase = false;
            QMdiSubWindow::inputMethodEvent(param1);
        } else if (qmdisubwindow_inputmethodevent_callback != nullptr) {
            qmdisubwindow_inputmethodevent_callback(this, param1);
        } else {
            QMdiSubWindow::inputMethodEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
        if (qmdisubwindow_inputmethodquery_isbase) {
            qmdisubwindow_inputmethodquery_isbase = false;
            return QMdiSubWindow::inputMethodQuery(param1);
        } else if (qmdisubwindow_inputmethodquery_callback != nullptr) {
            return qmdisubwindow_inputmethodquery_callback(this, param1);
        } else {
            return QMdiSubWindow::inputMethodQuery(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qmdisubwindow_focusnextprevchild_isbase) {
            qmdisubwindow_focusnextprevchild_isbase = false;
            return QMdiSubWindow::focusNextPrevChild(next);
        } else if (qmdisubwindow_focusnextprevchild_callback != nullptr) {
            return qmdisubwindow_focusnextprevchild_callback(this, next);
        } else {
            return QMdiSubWindow::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qmdisubwindow_customevent_isbase) {
            qmdisubwindow_customevent_isbase = false;
            QMdiSubWindow::customEvent(event);
        } else if (qmdisubwindow_customevent_callback != nullptr) {
            qmdisubwindow_customevent_callback(this, event);
        } else {
            QMdiSubWindow::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qmdisubwindow_connectnotify_isbase) {
            qmdisubwindow_connectnotify_isbase = false;
            QMdiSubWindow::connectNotify(signal);
        } else if (qmdisubwindow_connectnotify_callback != nullptr) {
            qmdisubwindow_connectnotify_callback(this, signal);
        } else {
            QMdiSubWindow::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qmdisubwindow_disconnectnotify_isbase) {
            qmdisubwindow_disconnectnotify_isbase = false;
            QMdiSubWindow::disconnectNotify(signal);
        } else if (qmdisubwindow_disconnectnotify_callback != nullptr) {
            qmdisubwindow_disconnectnotify_callback(this, signal);
        } else {
            QMdiSubWindow::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qmdisubwindow_updatemicrofocus_isbase) {
            qmdisubwindow_updatemicrofocus_isbase = false;
            QMdiSubWindow::updateMicroFocus();
        } else if (qmdisubwindow_updatemicrofocus_callback != nullptr) {
            qmdisubwindow_updatemicrofocus_callback();
        } else {
            QMdiSubWindow::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qmdisubwindow_create_isbase) {
            qmdisubwindow_create_isbase = false;
            QMdiSubWindow::create();
        } else if (qmdisubwindow_create_callback != nullptr) {
            qmdisubwindow_create_callback();
        } else {
            QMdiSubWindow::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qmdisubwindow_destroy_isbase) {
            qmdisubwindow_destroy_isbase = false;
            QMdiSubWindow::destroy();
        } else if (qmdisubwindow_destroy_callback != nullptr) {
            qmdisubwindow_destroy_callback();
        } else {
            QMdiSubWindow::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qmdisubwindow_focusnextchild_isbase) {
            qmdisubwindow_focusnextchild_isbase = false;
            return QMdiSubWindow::focusNextChild();
        } else if (qmdisubwindow_focusnextchild_callback != nullptr) {
            return qmdisubwindow_focusnextchild_callback();
        } else {
            return QMdiSubWindow::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qmdisubwindow_focuspreviouschild_isbase) {
            qmdisubwindow_focuspreviouschild_isbase = false;
            return QMdiSubWindow::focusPreviousChild();
        } else if (qmdisubwindow_focuspreviouschild_callback != nullptr) {
            return qmdisubwindow_focuspreviouschild_callback();
        } else {
            return QMdiSubWindow::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qmdisubwindow_sender_isbase) {
            qmdisubwindow_sender_isbase = false;
            return QMdiSubWindow::sender();
        } else if (qmdisubwindow_sender_callback != nullptr) {
            return qmdisubwindow_sender_callback();
        } else {
            return QMdiSubWindow::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qmdisubwindow_sendersignalindex_isbase) {
            qmdisubwindow_sendersignalindex_isbase = false;
            return QMdiSubWindow::senderSignalIndex();
        } else if (qmdisubwindow_sendersignalindex_callback != nullptr) {
            return qmdisubwindow_sendersignalindex_callback();
        } else {
            return QMdiSubWindow::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qmdisubwindow_receivers_isbase) {
            qmdisubwindow_receivers_isbase = false;
            return QMdiSubWindow::receivers(signal);
        } else if (qmdisubwindow_receivers_callback != nullptr) {
            return qmdisubwindow_receivers_callback(this, signal);
        } else {
            return QMdiSubWindow::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qmdisubwindow_issignalconnected_isbase) {
            qmdisubwindow_issignalconnected_isbase = false;
            return QMdiSubWindow::isSignalConnected(signal);
        } else if (qmdisubwindow_issignalconnected_callback != nullptr) {
            return qmdisubwindow_issignalconnected_callback(this, signal);
        } else {
            return QMdiSubWindow::isSignalConnected(signal);
        }
    }
};

#endif
