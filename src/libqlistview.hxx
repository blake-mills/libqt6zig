#pragma once
#ifndef SRCC_LIBVIRTUALQLISTVIEW_H
#define SRCC_LIBVIRTUALQLISTVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QListView so that we can call protected methods
class VirtualQListView : public QListView {

  public:
    // Virtual class public types (including callbacks)
    using QAbstractItemView::CursorAction;
    using QAbstractItemView::DropIndicatorPosition;
    using QAbstractItemView::State;
    using QListView_Metacall_Callback = int (*)(QListView*, QMetaObject::Call, int, void**);
    using QListView_VisualRect_Callback = QRect (*)(const QListView*, const QModelIndex&);
    using QListView_ScrollTo_Callback = void (*)(QListView*, const QModelIndex&, QAbstractItemView::ScrollHint);
    using QListView_IndexAt_Callback = QModelIndex (*)(const QListView*, const QPoint&);
    using QListView_DoItemsLayout_Callback = void (*)();
    using QListView_Reset_Callback = void (*)();
    using QListView_SetRootIndex_Callback = void (*)(QListView*, const QModelIndex&);
    using QListView_Event_Callback = bool (*)(QListView*, QEvent*);
    using QListView_ScrollContentsBy_Callback = void (*)(QListView*, int, int);
    using QListView_DataChanged_Callback = void (*)(QListView*, const QModelIndex&, const QModelIndex&, const QList<int>&);
    using QListView_RowsInserted_Callback = void (*)(QListView*, const QModelIndex&, int, int);
    using QListView_RowsAboutToBeRemoved_Callback = void (*)(QListView*, const QModelIndex&, int, int);
    using QListView_MouseMoveEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_MouseReleaseEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_WheelEvent_Callback = void (*)(QListView*, QWheelEvent*);
    using QListView_TimerEvent_Callback = void (*)(QListView*, QTimerEvent*);
    using QListView_ResizeEvent_Callback = void (*)(QListView*, QResizeEvent*);
    using QListView_DragMoveEvent_Callback = void (*)(QListView*, QDragMoveEvent*);
    using QListView_DragLeaveEvent_Callback = void (*)(QListView*, QDragLeaveEvent*);
    using QListView_DropEvent_Callback = void (*)(QListView*, QDropEvent*);
    using QListView_StartDrag_Callback = void (*)(QListView*, Qt::DropActions);
    using QListView_InitViewItemOption_Callback = void (*)(const QListView*, QStyleOptionViewItem*);
    using QListView_PaintEvent_Callback = void (*)(QListView*, QPaintEvent*);
    using QListView_HorizontalOffset_Callback = int (*)();
    using QListView_VerticalOffset_Callback = int (*)();
    using QListView_MoveCursor_Callback = QModelIndex (*)(QListView*, int, Qt::KeyboardModifiers);
    using QListView_SetSelection_Callback = void (*)(QListView*, const QRect&, QItemSelectionModel::SelectionFlags);
    using QListView_VisualRegionForSelection_Callback = QRegion (*)(const QListView*, const QItemSelection&);
    using QListView_SelectedIndexes_Callback = QModelIndexList (*)();
    using QListView_UpdateGeometries_Callback = void (*)();
    using QListView_IsIndexHidden_Callback = bool (*)(const QListView*, const QModelIndex&);
    using QListView_SelectionChanged_Callback = void (*)(QListView*, const QItemSelection&, const QItemSelection&);
    using QListView_CurrentChanged_Callback = void (*)(QListView*, const QModelIndex&, const QModelIndex&);
    using QListView_ViewportSizeHint_Callback = QSize (*)();
    using QListView_SetModel_Callback = void (*)(QListView*, QAbstractItemModel*);
    using QListView_SetSelectionModel_Callback = void (*)(QListView*, QItemSelectionModel*);
    using QListView_KeyboardSearch_Callback = void (*)(QListView*, const QString&);
    using QListView_SizeHintForRow_Callback = int (*)(const QListView*, int);
    using QListView_SizeHintForColumn_Callback = int (*)(const QListView*, int);
    using QListView_ItemDelegateForIndex_Callback = QAbstractItemDelegate* (*)(const QListView*, const QModelIndex&);
    using QListView_InputMethodQuery_Callback = QVariant (*)(const QListView*, Qt::InputMethodQuery);
    using QListView_SelectAll_Callback = void (*)();
    using QListView_UpdateEditorData_Callback = void (*)();
    using QListView_UpdateEditorGeometries_Callback = void (*)();
    using QListView_VerticalScrollbarAction_Callback = void (*)(QListView*, int);
    using QListView_HorizontalScrollbarAction_Callback = void (*)(QListView*, int);
    using QListView_VerticalScrollbarValueChanged_Callback = void (*)(QListView*, int);
    using QListView_HorizontalScrollbarValueChanged_Callback = void (*)(QListView*, int);
    using QListView_CloseEditor_Callback = void (*)(QListView*, QWidget*, QAbstractItemDelegate::EndEditHint);
    using QListView_CommitData_Callback = void (*)(QListView*, QWidget*);
    using QListView_EditorDestroyed_Callback = void (*)(QListView*, QObject*);
    using QListView_Edit2_Callback = bool (*)(QListView*, const QModelIndex&, QAbstractItemView::EditTrigger, QEvent*);
    using QListView_SelectionCommand_Callback = QItemSelectionModel::SelectionFlags (*)(const QListView*, const QModelIndex&, const QEvent*);
    using QListView_FocusNextPrevChild_Callback = bool (*)(QListView*, bool);
    using QListView_ViewportEvent_Callback = bool (*)(QListView*, QEvent*);
    using QListView_MousePressEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_MouseDoubleClickEvent_Callback = void (*)(QListView*, QMouseEvent*);
    using QListView_DragEnterEvent_Callback = void (*)(QListView*, QDragEnterEvent*);
    using QListView_FocusInEvent_Callback = void (*)(QListView*, QFocusEvent*);
    using QListView_FocusOutEvent_Callback = void (*)(QListView*, QFocusEvent*);
    using QListView_KeyPressEvent_Callback = void (*)(QListView*, QKeyEvent*);
    using QListView_InputMethodEvent_Callback = void (*)(QListView*, QInputMethodEvent*);
    using QListView_EventFilter_Callback = bool (*)(QListView*, QObject*, QEvent*);
    using QListView_MinimumSizeHint_Callback = QSize (*)();
    using QListView_SizeHint_Callback = QSize (*)();
    using QListView_SetupViewport_Callback = void (*)(QListView*, QWidget*);
    using QListView_ContextMenuEvent_Callback = void (*)(QListView*, QContextMenuEvent*);
    using QListView_ChangeEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_InitStyleOption_Callback = void (*)(const QListView*, QStyleOptionFrame*);
    using QListView_DevType_Callback = int (*)();
    using QListView_SetVisible_Callback = void (*)(QListView*, bool);
    using QListView_HeightForWidth_Callback = int (*)(const QListView*, int);
    using QListView_HasHeightForWidth_Callback = bool (*)();
    using QListView_PaintEngine_Callback = QPaintEngine* (*)();
    using QListView_KeyReleaseEvent_Callback = void (*)(QListView*, QKeyEvent*);
    using QListView_EnterEvent_Callback = void (*)(QListView*, QEnterEvent*);
    using QListView_LeaveEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_MoveEvent_Callback = void (*)(QListView*, QMoveEvent*);
    using QListView_CloseEvent_Callback = void (*)(QListView*, QCloseEvent*);
    using QListView_TabletEvent_Callback = void (*)(QListView*, QTabletEvent*);
    using QListView_ActionEvent_Callback = void (*)(QListView*, QActionEvent*);
    using QListView_ShowEvent_Callback = void (*)(QListView*, QShowEvent*);
    using QListView_HideEvent_Callback = void (*)(QListView*, QHideEvent*);
    using QListView_NativeEvent_Callback = bool (*)(QListView*, const QByteArray&, void*, qintptr*);
    using QListView_Metric_Callback = int (*)(const QListView*, QPaintDevice::PaintDeviceMetric);
    using QListView_InitPainter_Callback = void (*)(const QListView*, QPainter*);
    using QListView_Redirected_Callback = QPaintDevice* (*)(const QListView*, QPoint*);
    using QListView_SharedPainter_Callback = QPainter* (*)();
    using QListView_ChildEvent_Callback = void (*)(QListView*, QChildEvent*);
    using QListView_CustomEvent_Callback = void (*)(QListView*, QEvent*);
    using QListView_ConnectNotify_Callback = void (*)(QListView*, const QMetaMethod&);
    using QListView_DisconnectNotify_Callback = void (*)(QListView*, const QMetaMethod&);
    using QListView_ResizeContents_Callback = void (*)(QListView*, int, int);
    using QListView_ContentsSize_Callback = QSize (*)();
    using QListView_RectForIndex_Callback = QRect (*)(const QListView*, const QModelIndex&);
    using QListView_SetPositionForIndex_Callback = void (*)(QListView*, const QPoint&, const QModelIndex&);
    using QListView_State_Callback = QAbstractItemView::State (*)();
    using QListView_SetState_Callback = void (*)(QListView*, int);
    using QListView_ScheduleDelayedItemsLayout_Callback = void (*)();
    using QListView_ExecuteDelayedItemsLayout_Callback = void (*)();
    using QListView_SetDirtyRegion_Callback = void (*)(QListView*, const QRegion&);
    using QListView_ScrollDirtyRegion_Callback = void (*)(QListView*, int, int);
    using QListView_DirtyRegionOffset_Callback = QPoint (*)();
    using QListView_StartAutoScroll_Callback = void (*)();
    using QListView_StopAutoScroll_Callback = void (*)();
    using QListView_DoAutoScroll_Callback = void (*)();
    using QListView_DropIndicatorPosition_Callback = QAbstractItemView::DropIndicatorPosition (*)();
    using QListView_SetViewportMargins_Callback = void (*)(QListView*, int, int, int, int);
    using QListView_ViewportMargins_Callback = QMargins (*)();
    using QListView_DrawFrame_Callback = void (*)(QListView*, QPainter*);
    using QListView_UpdateMicroFocus_Callback = void (*)();
    using QListView_Create_Callback = void (*)();
    using QListView_Destroy_Callback = void (*)();
    using QListView_FocusNextChild_Callback = bool (*)();
    using QListView_FocusPreviousChild_Callback = bool (*)();
    using QListView_Sender_Callback = QObject* (*)();
    using QListView_SenderSignalIndex_Callback = int (*)();
    using QListView_Receivers_Callback = int (*)(const QListView*, const char*);
    using QListView_IsSignalConnected_Callback = bool (*)(const QListView*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QListView_Metacall_Callback qlistview_metacall_callback = nullptr;
    QListView_VisualRect_Callback qlistview_visualrect_callback = nullptr;
    QListView_ScrollTo_Callback qlistview_scrollto_callback = nullptr;
    QListView_IndexAt_Callback qlistview_indexat_callback = nullptr;
    QListView_DoItemsLayout_Callback qlistview_doitemslayout_callback = nullptr;
    QListView_Reset_Callback qlistview_reset_callback = nullptr;
    QListView_SetRootIndex_Callback qlistview_setrootindex_callback = nullptr;
    QListView_Event_Callback qlistview_event_callback = nullptr;
    QListView_ScrollContentsBy_Callback qlistview_scrollcontentsby_callback = nullptr;
    QListView_DataChanged_Callback qlistview_datachanged_callback = nullptr;
    QListView_RowsInserted_Callback qlistview_rowsinserted_callback = nullptr;
    QListView_RowsAboutToBeRemoved_Callback qlistview_rowsabouttoberemoved_callback = nullptr;
    QListView_MouseMoveEvent_Callback qlistview_mousemoveevent_callback = nullptr;
    QListView_MouseReleaseEvent_Callback qlistview_mousereleaseevent_callback = nullptr;
    QListView_WheelEvent_Callback qlistview_wheelevent_callback = nullptr;
    QListView_TimerEvent_Callback qlistview_timerevent_callback = nullptr;
    QListView_ResizeEvent_Callback qlistview_resizeevent_callback = nullptr;
    QListView_DragMoveEvent_Callback qlistview_dragmoveevent_callback = nullptr;
    QListView_DragLeaveEvent_Callback qlistview_dragleaveevent_callback = nullptr;
    QListView_DropEvent_Callback qlistview_dropevent_callback = nullptr;
    QListView_StartDrag_Callback qlistview_startdrag_callback = nullptr;
    QListView_InitViewItemOption_Callback qlistview_initviewitemoption_callback = nullptr;
    QListView_PaintEvent_Callback qlistview_paintevent_callback = nullptr;
    QListView_HorizontalOffset_Callback qlistview_horizontaloffset_callback = nullptr;
    QListView_VerticalOffset_Callback qlistview_verticaloffset_callback = nullptr;
    QListView_MoveCursor_Callback qlistview_movecursor_callback = nullptr;
    QListView_SetSelection_Callback qlistview_setselection_callback = nullptr;
    QListView_VisualRegionForSelection_Callback qlistview_visualregionforselection_callback = nullptr;
    QListView_SelectedIndexes_Callback qlistview_selectedindexes_callback = nullptr;
    QListView_UpdateGeometries_Callback qlistview_updategeometries_callback = nullptr;
    QListView_IsIndexHidden_Callback qlistview_isindexhidden_callback = nullptr;
    QListView_SelectionChanged_Callback qlistview_selectionchanged_callback = nullptr;
    QListView_CurrentChanged_Callback qlistview_currentchanged_callback = nullptr;
    QListView_ViewportSizeHint_Callback qlistview_viewportsizehint_callback = nullptr;
    QListView_SetModel_Callback qlistview_setmodel_callback = nullptr;
    QListView_SetSelectionModel_Callback qlistview_setselectionmodel_callback = nullptr;
    QListView_KeyboardSearch_Callback qlistview_keyboardsearch_callback = nullptr;
    QListView_SizeHintForRow_Callback qlistview_sizehintforrow_callback = nullptr;
    QListView_SizeHintForColumn_Callback qlistview_sizehintforcolumn_callback = nullptr;
    QListView_ItemDelegateForIndex_Callback qlistview_itemdelegateforindex_callback = nullptr;
    QListView_InputMethodQuery_Callback qlistview_inputmethodquery_callback = nullptr;
    QListView_SelectAll_Callback qlistview_selectall_callback = nullptr;
    QListView_UpdateEditorData_Callback qlistview_updateeditordata_callback = nullptr;
    QListView_UpdateEditorGeometries_Callback qlistview_updateeditorgeometries_callback = nullptr;
    QListView_VerticalScrollbarAction_Callback qlistview_verticalscrollbaraction_callback = nullptr;
    QListView_HorizontalScrollbarAction_Callback qlistview_horizontalscrollbaraction_callback = nullptr;
    QListView_VerticalScrollbarValueChanged_Callback qlistview_verticalscrollbarvaluechanged_callback = nullptr;
    QListView_HorizontalScrollbarValueChanged_Callback qlistview_horizontalscrollbarvaluechanged_callback = nullptr;
    QListView_CloseEditor_Callback qlistview_closeeditor_callback = nullptr;
    QListView_CommitData_Callback qlistview_commitdata_callback = nullptr;
    QListView_EditorDestroyed_Callback qlistview_editordestroyed_callback = nullptr;
    QListView_Edit2_Callback qlistview_edit2_callback = nullptr;
    QListView_SelectionCommand_Callback qlistview_selectioncommand_callback = nullptr;
    QListView_FocusNextPrevChild_Callback qlistview_focusnextprevchild_callback = nullptr;
    QListView_ViewportEvent_Callback qlistview_viewportevent_callback = nullptr;
    QListView_MousePressEvent_Callback qlistview_mousepressevent_callback = nullptr;
    QListView_MouseDoubleClickEvent_Callback qlistview_mousedoubleclickevent_callback = nullptr;
    QListView_DragEnterEvent_Callback qlistview_dragenterevent_callback = nullptr;
    QListView_FocusInEvent_Callback qlistview_focusinevent_callback = nullptr;
    QListView_FocusOutEvent_Callback qlistview_focusoutevent_callback = nullptr;
    QListView_KeyPressEvent_Callback qlistview_keypressevent_callback = nullptr;
    QListView_InputMethodEvent_Callback qlistview_inputmethodevent_callback = nullptr;
    QListView_EventFilter_Callback qlistview_eventfilter_callback = nullptr;
    QListView_MinimumSizeHint_Callback qlistview_minimumsizehint_callback = nullptr;
    QListView_SizeHint_Callback qlistview_sizehint_callback = nullptr;
    QListView_SetupViewport_Callback qlistview_setupviewport_callback = nullptr;
    QListView_ContextMenuEvent_Callback qlistview_contextmenuevent_callback = nullptr;
    QListView_ChangeEvent_Callback qlistview_changeevent_callback = nullptr;
    QListView_InitStyleOption_Callback qlistview_initstyleoption_callback = nullptr;
    QListView_DevType_Callback qlistview_devtype_callback = nullptr;
    QListView_SetVisible_Callback qlistview_setvisible_callback = nullptr;
    QListView_HeightForWidth_Callback qlistview_heightforwidth_callback = nullptr;
    QListView_HasHeightForWidth_Callback qlistview_hasheightforwidth_callback = nullptr;
    QListView_PaintEngine_Callback qlistview_paintengine_callback = nullptr;
    QListView_KeyReleaseEvent_Callback qlistview_keyreleaseevent_callback = nullptr;
    QListView_EnterEvent_Callback qlistview_enterevent_callback = nullptr;
    QListView_LeaveEvent_Callback qlistview_leaveevent_callback = nullptr;
    QListView_MoveEvent_Callback qlistview_moveevent_callback = nullptr;
    QListView_CloseEvent_Callback qlistview_closeevent_callback = nullptr;
    QListView_TabletEvent_Callback qlistview_tabletevent_callback = nullptr;
    QListView_ActionEvent_Callback qlistview_actionevent_callback = nullptr;
    QListView_ShowEvent_Callback qlistview_showevent_callback = nullptr;
    QListView_HideEvent_Callback qlistview_hideevent_callback = nullptr;
    QListView_NativeEvent_Callback qlistview_nativeevent_callback = nullptr;
    QListView_Metric_Callback qlistview_metric_callback = nullptr;
    QListView_InitPainter_Callback qlistview_initpainter_callback = nullptr;
    QListView_Redirected_Callback qlistview_redirected_callback = nullptr;
    QListView_SharedPainter_Callback qlistview_sharedpainter_callback = nullptr;
    QListView_ChildEvent_Callback qlistview_childevent_callback = nullptr;
    QListView_CustomEvent_Callback qlistview_customevent_callback = nullptr;
    QListView_ConnectNotify_Callback qlistview_connectnotify_callback = nullptr;
    QListView_DisconnectNotify_Callback qlistview_disconnectnotify_callback = nullptr;
    QListView_ResizeContents_Callback qlistview_resizecontents_callback = nullptr;
    QListView_ContentsSize_Callback qlistview_contentssize_callback = nullptr;
    QListView_RectForIndex_Callback qlistview_rectforindex_callback = nullptr;
    QListView_SetPositionForIndex_Callback qlistview_setpositionforindex_callback = nullptr;
    QListView_State_Callback qlistview_state_callback = nullptr;
    QListView_SetState_Callback qlistview_setstate_callback = nullptr;
    QListView_ScheduleDelayedItemsLayout_Callback qlistview_scheduledelayeditemslayout_callback = nullptr;
    QListView_ExecuteDelayedItemsLayout_Callback qlistview_executedelayeditemslayout_callback = nullptr;
    QListView_SetDirtyRegion_Callback qlistview_setdirtyregion_callback = nullptr;
    QListView_ScrollDirtyRegion_Callback qlistview_scrolldirtyregion_callback = nullptr;
    QListView_DirtyRegionOffset_Callback qlistview_dirtyregionoffset_callback = nullptr;
    QListView_StartAutoScroll_Callback qlistview_startautoscroll_callback = nullptr;
    QListView_StopAutoScroll_Callback qlistview_stopautoscroll_callback = nullptr;
    QListView_DoAutoScroll_Callback qlistview_doautoscroll_callback = nullptr;
    QListView_DropIndicatorPosition_Callback qlistview_dropindicatorposition_callback = nullptr;
    QListView_SetViewportMargins_Callback qlistview_setviewportmargins_callback = nullptr;
    QListView_ViewportMargins_Callback qlistview_viewportmargins_callback = nullptr;
    QListView_DrawFrame_Callback qlistview_drawframe_callback = nullptr;
    QListView_UpdateMicroFocus_Callback qlistview_updatemicrofocus_callback = nullptr;
    QListView_Create_Callback qlistview_create_callback = nullptr;
    QListView_Destroy_Callback qlistview_destroy_callback = nullptr;
    QListView_FocusNextChild_Callback qlistview_focusnextchild_callback = nullptr;
    QListView_FocusPreviousChild_Callback qlistview_focuspreviouschild_callback = nullptr;
    QListView_Sender_Callback qlistview_sender_callback = nullptr;
    QListView_SenderSignalIndex_Callback qlistview_sendersignalindex_callback = nullptr;
    QListView_Receivers_Callback qlistview_receivers_callback = nullptr;
    QListView_IsSignalConnected_Callback qlistview_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qlistview_metacall_isbase = false;
    mutable bool qlistview_visualrect_isbase = false;
    mutable bool qlistview_scrollto_isbase = false;
    mutable bool qlistview_indexat_isbase = false;
    mutable bool qlistview_doitemslayout_isbase = false;
    mutable bool qlistview_reset_isbase = false;
    mutable bool qlistview_setrootindex_isbase = false;
    mutable bool qlistview_event_isbase = false;
    mutable bool qlistview_scrollcontentsby_isbase = false;
    mutable bool qlistview_datachanged_isbase = false;
    mutable bool qlistview_rowsinserted_isbase = false;
    mutable bool qlistview_rowsabouttoberemoved_isbase = false;
    mutable bool qlistview_mousemoveevent_isbase = false;
    mutable bool qlistview_mousereleaseevent_isbase = false;
    mutable bool qlistview_wheelevent_isbase = false;
    mutable bool qlistview_timerevent_isbase = false;
    mutable bool qlistview_resizeevent_isbase = false;
    mutable bool qlistview_dragmoveevent_isbase = false;
    mutable bool qlistview_dragleaveevent_isbase = false;
    mutable bool qlistview_dropevent_isbase = false;
    mutable bool qlistview_startdrag_isbase = false;
    mutable bool qlistview_initviewitemoption_isbase = false;
    mutable bool qlistview_paintevent_isbase = false;
    mutable bool qlistview_horizontaloffset_isbase = false;
    mutable bool qlistview_verticaloffset_isbase = false;
    mutable bool qlistview_movecursor_isbase = false;
    mutable bool qlistview_setselection_isbase = false;
    mutable bool qlistview_visualregionforselection_isbase = false;
    mutable bool qlistview_selectedindexes_isbase = false;
    mutable bool qlistview_updategeometries_isbase = false;
    mutable bool qlistview_isindexhidden_isbase = false;
    mutable bool qlistview_selectionchanged_isbase = false;
    mutable bool qlistview_currentchanged_isbase = false;
    mutable bool qlistview_viewportsizehint_isbase = false;
    mutable bool qlistview_setmodel_isbase = false;
    mutable bool qlistview_setselectionmodel_isbase = false;
    mutable bool qlistview_keyboardsearch_isbase = false;
    mutable bool qlistview_sizehintforrow_isbase = false;
    mutable bool qlistview_sizehintforcolumn_isbase = false;
    mutable bool qlistview_itemdelegateforindex_isbase = false;
    mutable bool qlistview_inputmethodquery_isbase = false;
    mutable bool qlistview_selectall_isbase = false;
    mutable bool qlistview_updateeditordata_isbase = false;
    mutable bool qlistview_updateeditorgeometries_isbase = false;
    mutable bool qlistview_verticalscrollbaraction_isbase = false;
    mutable bool qlistview_horizontalscrollbaraction_isbase = false;
    mutable bool qlistview_verticalscrollbarvaluechanged_isbase = false;
    mutable bool qlistview_horizontalscrollbarvaluechanged_isbase = false;
    mutable bool qlistview_closeeditor_isbase = false;
    mutable bool qlistview_commitdata_isbase = false;
    mutable bool qlistview_editordestroyed_isbase = false;
    mutable bool qlistview_edit2_isbase = false;
    mutable bool qlistview_selectioncommand_isbase = false;
    mutable bool qlistview_focusnextprevchild_isbase = false;
    mutable bool qlistview_viewportevent_isbase = false;
    mutable bool qlistview_mousepressevent_isbase = false;
    mutable bool qlistview_mousedoubleclickevent_isbase = false;
    mutable bool qlistview_dragenterevent_isbase = false;
    mutable bool qlistview_focusinevent_isbase = false;
    mutable bool qlistview_focusoutevent_isbase = false;
    mutable bool qlistview_keypressevent_isbase = false;
    mutable bool qlistview_inputmethodevent_isbase = false;
    mutable bool qlistview_eventfilter_isbase = false;
    mutable bool qlistview_minimumsizehint_isbase = false;
    mutable bool qlistview_sizehint_isbase = false;
    mutable bool qlistview_setupviewport_isbase = false;
    mutable bool qlistview_contextmenuevent_isbase = false;
    mutable bool qlistview_changeevent_isbase = false;
    mutable bool qlistview_initstyleoption_isbase = false;
    mutable bool qlistview_devtype_isbase = false;
    mutable bool qlistview_setvisible_isbase = false;
    mutable bool qlistview_heightforwidth_isbase = false;
    mutable bool qlistview_hasheightforwidth_isbase = false;
    mutable bool qlistview_paintengine_isbase = false;
    mutable bool qlistview_keyreleaseevent_isbase = false;
    mutable bool qlistview_enterevent_isbase = false;
    mutable bool qlistview_leaveevent_isbase = false;
    mutable bool qlistview_moveevent_isbase = false;
    mutable bool qlistview_closeevent_isbase = false;
    mutable bool qlistview_tabletevent_isbase = false;
    mutable bool qlistview_actionevent_isbase = false;
    mutable bool qlistview_showevent_isbase = false;
    mutable bool qlistview_hideevent_isbase = false;
    mutable bool qlistview_nativeevent_isbase = false;
    mutable bool qlistview_metric_isbase = false;
    mutable bool qlistview_initpainter_isbase = false;
    mutable bool qlistview_redirected_isbase = false;
    mutable bool qlistview_sharedpainter_isbase = false;
    mutable bool qlistview_childevent_isbase = false;
    mutable bool qlistview_customevent_isbase = false;
    mutable bool qlistview_connectnotify_isbase = false;
    mutable bool qlistview_disconnectnotify_isbase = false;
    mutable bool qlistview_resizecontents_isbase = false;
    mutable bool qlistview_contentssize_isbase = false;
    mutable bool qlistview_rectforindex_isbase = false;
    mutable bool qlistview_setpositionforindex_isbase = false;
    mutable bool qlistview_state_isbase = false;
    mutable bool qlistview_setstate_isbase = false;
    mutable bool qlistview_scheduledelayeditemslayout_isbase = false;
    mutable bool qlistview_executedelayeditemslayout_isbase = false;
    mutable bool qlistview_setdirtyregion_isbase = false;
    mutable bool qlistview_scrolldirtyregion_isbase = false;
    mutable bool qlistview_dirtyregionoffset_isbase = false;
    mutable bool qlistview_startautoscroll_isbase = false;
    mutable bool qlistview_stopautoscroll_isbase = false;
    mutable bool qlistview_doautoscroll_isbase = false;
    mutable bool qlistview_dropindicatorposition_isbase = false;
    mutable bool qlistview_setviewportmargins_isbase = false;
    mutable bool qlistview_viewportmargins_isbase = false;
    mutable bool qlistview_drawframe_isbase = false;
    mutable bool qlistview_updatemicrofocus_isbase = false;
    mutable bool qlistview_create_isbase = false;
    mutable bool qlistview_destroy_isbase = false;
    mutable bool qlistview_focusnextchild_isbase = false;
    mutable bool qlistview_focuspreviouschild_isbase = false;
    mutable bool qlistview_sender_isbase = false;
    mutable bool qlistview_sendersignalindex_isbase = false;
    mutable bool qlistview_receivers_isbase = false;
    mutable bool qlistview_issignalconnected_isbase = false;

  public:
    VirtualQListView(QWidget* parent) : QListView(parent){};
    VirtualQListView() : QListView(){};

    ~VirtualQListView() {
        qlistview_metacall_callback = nullptr;
        qlistview_visualrect_callback = nullptr;
        qlistview_scrollto_callback = nullptr;
        qlistview_indexat_callback = nullptr;
        qlistview_doitemslayout_callback = nullptr;
        qlistview_reset_callback = nullptr;
        qlistview_setrootindex_callback = nullptr;
        qlistview_event_callback = nullptr;
        qlistview_scrollcontentsby_callback = nullptr;
        qlistview_datachanged_callback = nullptr;
        qlistview_rowsinserted_callback = nullptr;
        qlistview_rowsabouttoberemoved_callback = nullptr;
        qlistview_mousemoveevent_callback = nullptr;
        qlistview_mousereleaseevent_callback = nullptr;
        qlistview_wheelevent_callback = nullptr;
        qlistview_timerevent_callback = nullptr;
        qlistview_resizeevent_callback = nullptr;
        qlistview_dragmoveevent_callback = nullptr;
        qlistview_dragleaveevent_callback = nullptr;
        qlistview_dropevent_callback = nullptr;
        qlistview_startdrag_callback = nullptr;
        qlistview_initviewitemoption_callback = nullptr;
        qlistview_paintevent_callback = nullptr;
        qlistview_horizontaloffset_callback = nullptr;
        qlistview_verticaloffset_callback = nullptr;
        qlistview_movecursor_callback = nullptr;
        qlistview_setselection_callback = nullptr;
        qlistview_visualregionforselection_callback = nullptr;
        qlistview_selectedindexes_callback = nullptr;
        qlistview_updategeometries_callback = nullptr;
        qlistview_isindexhidden_callback = nullptr;
        qlistview_selectionchanged_callback = nullptr;
        qlistview_currentchanged_callback = nullptr;
        qlistview_viewportsizehint_callback = nullptr;
        qlistview_setmodel_callback = nullptr;
        qlistview_setselectionmodel_callback = nullptr;
        qlistview_keyboardsearch_callback = nullptr;
        qlistview_sizehintforrow_callback = nullptr;
        qlistview_sizehintforcolumn_callback = nullptr;
        qlistview_itemdelegateforindex_callback = nullptr;
        qlistview_inputmethodquery_callback = nullptr;
        qlistview_selectall_callback = nullptr;
        qlistview_updateeditordata_callback = nullptr;
        qlistview_updateeditorgeometries_callback = nullptr;
        qlistview_verticalscrollbaraction_callback = nullptr;
        qlistview_horizontalscrollbaraction_callback = nullptr;
        qlistview_verticalscrollbarvaluechanged_callback = nullptr;
        qlistview_horizontalscrollbarvaluechanged_callback = nullptr;
        qlistview_closeeditor_callback = nullptr;
        qlistview_commitdata_callback = nullptr;
        qlistview_editordestroyed_callback = nullptr;
        qlistview_edit2_callback = nullptr;
        qlistview_selectioncommand_callback = nullptr;
        qlistview_focusnextprevchild_callback = nullptr;
        qlistview_viewportevent_callback = nullptr;
        qlistview_mousepressevent_callback = nullptr;
        qlistview_mousedoubleclickevent_callback = nullptr;
        qlistview_dragenterevent_callback = nullptr;
        qlistview_focusinevent_callback = nullptr;
        qlistview_focusoutevent_callback = nullptr;
        qlistview_keypressevent_callback = nullptr;
        qlistview_inputmethodevent_callback = nullptr;
        qlistview_eventfilter_callback = nullptr;
        qlistview_minimumsizehint_callback = nullptr;
        qlistview_sizehint_callback = nullptr;
        qlistview_setupviewport_callback = nullptr;
        qlistview_contextmenuevent_callback = nullptr;
        qlistview_changeevent_callback = nullptr;
        qlistview_initstyleoption_callback = nullptr;
        qlistview_devtype_callback = nullptr;
        qlistview_setvisible_callback = nullptr;
        qlistview_heightforwidth_callback = nullptr;
        qlistview_hasheightforwidth_callback = nullptr;
        qlistview_paintengine_callback = nullptr;
        qlistview_keyreleaseevent_callback = nullptr;
        qlistview_enterevent_callback = nullptr;
        qlistview_leaveevent_callback = nullptr;
        qlistview_moveevent_callback = nullptr;
        qlistview_closeevent_callback = nullptr;
        qlistview_tabletevent_callback = nullptr;
        qlistview_actionevent_callback = nullptr;
        qlistview_showevent_callback = nullptr;
        qlistview_hideevent_callback = nullptr;
        qlistview_nativeevent_callback = nullptr;
        qlistview_metric_callback = nullptr;
        qlistview_initpainter_callback = nullptr;
        qlistview_redirected_callback = nullptr;
        qlistview_sharedpainter_callback = nullptr;
        qlistview_childevent_callback = nullptr;
        qlistview_customevent_callback = nullptr;
        qlistview_connectnotify_callback = nullptr;
        qlistview_disconnectnotify_callback = nullptr;
        qlistview_resizecontents_callback = nullptr;
        qlistview_contentssize_callback = nullptr;
        qlistview_rectforindex_callback = nullptr;
        qlistview_setpositionforindex_callback = nullptr;
        qlistview_state_callback = nullptr;
        qlistview_setstate_callback = nullptr;
        qlistview_scheduledelayeditemslayout_callback = nullptr;
        qlistview_executedelayeditemslayout_callback = nullptr;
        qlistview_setdirtyregion_callback = nullptr;
        qlistview_scrolldirtyregion_callback = nullptr;
        qlistview_dirtyregionoffset_callback = nullptr;
        qlistview_startautoscroll_callback = nullptr;
        qlistview_stopautoscroll_callback = nullptr;
        qlistview_doautoscroll_callback = nullptr;
        qlistview_dropindicatorposition_callback = nullptr;
        qlistview_setviewportmargins_callback = nullptr;
        qlistview_viewportmargins_callback = nullptr;
        qlistview_drawframe_callback = nullptr;
        qlistview_updatemicrofocus_callback = nullptr;
        qlistview_create_callback = nullptr;
        qlistview_destroy_callback = nullptr;
        qlistview_focusnextchild_callback = nullptr;
        qlistview_focuspreviouschild_callback = nullptr;
        qlistview_sender_callback = nullptr;
        qlistview_sendersignalindex_callback = nullptr;
        qlistview_receivers_callback = nullptr;
        qlistview_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQListView_Metacall_Callback(QListView_Metacall_Callback cb) { qlistview_metacall_callback = cb; }
    void setQListView_VisualRect_Callback(QListView_VisualRect_Callback cb) { qlistview_visualrect_callback = cb; }
    void setQListView_ScrollTo_Callback(QListView_ScrollTo_Callback cb) { qlistview_scrollto_callback = cb; }
    void setQListView_IndexAt_Callback(QListView_IndexAt_Callback cb) { qlistview_indexat_callback = cb; }
    void setQListView_DoItemsLayout_Callback(QListView_DoItemsLayout_Callback cb) { qlistview_doitemslayout_callback = cb; }
    void setQListView_Reset_Callback(QListView_Reset_Callback cb) { qlistview_reset_callback = cb; }
    void setQListView_SetRootIndex_Callback(QListView_SetRootIndex_Callback cb) { qlistview_setrootindex_callback = cb; }
    void setQListView_Event_Callback(QListView_Event_Callback cb) { qlistview_event_callback = cb; }
    void setQListView_ScrollContentsBy_Callback(QListView_ScrollContentsBy_Callback cb) { qlistview_scrollcontentsby_callback = cb; }
    void setQListView_DataChanged_Callback(QListView_DataChanged_Callback cb) { qlistview_datachanged_callback = cb; }
    void setQListView_RowsInserted_Callback(QListView_RowsInserted_Callback cb) { qlistview_rowsinserted_callback = cb; }
    void setQListView_RowsAboutToBeRemoved_Callback(QListView_RowsAboutToBeRemoved_Callback cb) { qlistview_rowsabouttoberemoved_callback = cb; }
    void setQListView_MouseMoveEvent_Callback(QListView_MouseMoveEvent_Callback cb) { qlistview_mousemoveevent_callback = cb; }
    void setQListView_MouseReleaseEvent_Callback(QListView_MouseReleaseEvent_Callback cb) { qlistview_mousereleaseevent_callback = cb; }
    void setQListView_WheelEvent_Callback(QListView_WheelEvent_Callback cb) { qlistview_wheelevent_callback = cb; }
    void setQListView_TimerEvent_Callback(QListView_TimerEvent_Callback cb) { qlistview_timerevent_callback = cb; }
    void setQListView_ResizeEvent_Callback(QListView_ResizeEvent_Callback cb) { qlistview_resizeevent_callback = cb; }
    void setQListView_DragMoveEvent_Callback(QListView_DragMoveEvent_Callback cb) { qlistview_dragmoveevent_callback = cb; }
    void setQListView_DragLeaveEvent_Callback(QListView_DragLeaveEvent_Callback cb) { qlistview_dragleaveevent_callback = cb; }
    void setQListView_DropEvent_Callback(QListView_DropEvent_Callback cb) { qlistview_dropevent_callback = cb; }
    void setQListView_StartDrag_Callback(QListView_StartDrag_Callback cb) { qlistview_startdrag_callback = cb; }
    void setQListView_InitViewItemOption_Callback(QListView_InitViewItemOption_Callback cb) { qlistview_initviewitemoption_callback = cb; }
    void setQListView_PaintEvent_Callback(QListView_PaintEvent_Callback cb) { qlistview_paintevent_callback = cb; }
    void setQListView_HorizontalOffset_Callback(QListView_HorizontalOffset_Callback cb) { qlistview_horizontaloffset_callback = cb; }
    void setQListView_VerticalOffset_Callback(QListView_VerticalOffset_Callback cb) { qlistview_verticaloffset_callback = cb; }
    void setQListView_MoveCursor_Callback(QListView_MoveCursor_Callback cb) { qlistview_movecursor_callback = cb; }
    void setQListView_SetSelection_Callback(QListView_SetSelection_Callback cb) { qlistview_setselection_callback = cb; }
    void setQListView_VisualRegionForSelection_Callback(QListView_VisualRegionForSelection_Callback cb) { qlistview_visualregionforselection_callback = cb; }
    void setQListView_SelectedIndexes_Callback(QListView_SelectedIndexes_Callback cb) { qlistview_selectedindexes_callback = cb; }
    void setQListView_UpdateGeometries_Callback(QListView_UpdateGeometries_Callback cb) { qlistview_updategeometries_callback = cb; }
    void setQListView_IsIndexHidden_Callback(QListView_IsIndexHidden_Callback cb) { qlistview_isindexhidden_callback = cb; }
    void setQListView_SelectionChanged_Callback(QListView_SelectionChanged_Callback cb) { qlistview_selectionchanged_callback = cb; }
    void setQListView_CurrentChanged_Callback(QListView_CurrentChanged_Callback cb) { qlistview_currentchanged_callback = cb; }
    void setQListView_ViewportSizeHint_Callback(QListView_ViewportSizeHint_Callback cb) { qlistview_viewportsizehint_callback = cb; }
    void setQListView_SetModel_Callback(QListView_SetModel_Callback cb) { qlistview_setmodel_callback = cb; }
    void setQListView_SetSelectionModel_Callback(QListView_SetSelectionModel_Callback cb) { qlistview_setselectionmodel_callback = cb; }
    void setQListView_KeyboardSearch_Callback(QListView_KeyboardSearch_Callback cb) { qlistview_keyboardsearch_callback = cb; }
    void setQListView_SizeHintForRow_Callback(QListView_SizeHintForRow_Callback cb) { qlistview_sizehintforrow_callback = cb; }
    void setQListView_SizeHintForColumn_Callback(QListView_SizeHintForColumn_Callback cb) { qlistview_sizehintforcolumn_callback = cb; }
    void setQListView_ItemDelegateForIndex_Callback(QListView_ItemDelegateForIndex_Callback cb) { qlistview_itemdelegateforindex_callback = cb; }
    void setQListView_InputMethodQuery_Callback(QListView_InputMethodQuery_Callback cb) { qlistview_inputmethodquery_callback = cb; }
    void setQListView_SelectAll_Callback(QListView_SelectAll_Callback cb) { qlistview_selectall_callback = cb; }
    void setQListView_UpdateEditorData_Callback(QListView_UpdateEditorData_Callback cb) { qlistview_updateeditordata_callback = cb; }
    void setQListView_UpdateEditorGeometries_Callback(QListView_UpdateEditorGeometries_Callback cb) { qlistview_updateeditorgeometries_callback = cb; }
    void setQListView_VerticalScrollbarAction_Callback(QListView_VerticalScrollbarAction_Callback cb) { qlistview_verticalscrollbaraction_callback = cb; }
    void setQListView_HorizontalScrollbarAction_Callback(QListView_HorizontalScrollbarAction_Callback cb) { qlistview_horizontalscrollbaraction_callback = cb; }
    void setQListView_VerticalScrollbarValueChanged_Callback(QListView_VerticalScrollbarValueChanged_Callback cb) { qlistview_verticalscrollbarvaluechanged_callback = cb; }
    void setQListView_HorizontalScrollbarValueChanged_Callback(QListView_HorizontalScrollbarValueChanged_Callback cb) { qlistview_horizontalscrollbarvaluechanged_callback = cb; }
    void setQListView_CloseEditor_Callback(QListView_CloseEditor_Callback cb) { qlistview_closeeditor_callback = cb; }
    void setQListView_CommitData_Callback(QListView_CommitData_Callback cb) { qlistview_commitdata_callback = cb; }
    void setQListView_EditorDestroyed_Callback(QListView_EditorDestroyed_Callback cb) { qlistview_editordestroyed_callback = cb; }
    void setQListView_Edit2_Callback(QListView_Edit2_Callback cb) { qlistview_edit2_callback = cb; }
    void setQListView_SelectionCommand_Callback(QListView_SelectionCommand_Callback cb) { qlistview_selectioncommand_callback = cb; }
    void setQListView_FocusNextPrevChild_Callback(QListView_FocusNextPrevChild_Callback cb) { qlistview_focusnextprevchild_callback = cb; }
    void setQListView_ViewportEvent_Callback(QListView_ViewportEvent_Callback cb) { qlistview_viewportevent_callback = cb; }
    void setQListView_MousePressEvent_Callback(QListView_MousePressEvent_Callback cb) { qlistview_mousepressevent_callback = cb; }
    void setQListView_MouseDoubleClickEvent_Callback(QListView_MouseDoubleClickEvent_Callback cb) { qlistview_mousedoubleclickevent_callback = cb; }
    void setQListView_DragEnterEvent_Callback(QListView_DragEnterEvent_Callback cb) { qlistview_dragenterevent_callback = cb; }
    void setQListView_FocusInEvent_Callback(QListView_FocusInEvent_Callback cb) { qlistview_focusinevent_callback = cb; }
    void setQListView_FocusOutEvent_Callback(QListView_FocusOutEvent_Callback cb) { qlistview_focusoutevent_callback = cb; }
    void setQListView_KeyPressEvent_Callback(QListView_KeyPressEvent_Callback cb) { qlistview_keypressevent_callback = cb; }
    void setQListView_InputMethodEvent_Callback(QListView_InputMethodEvent_Callback cb) { qlistview_inputmethodevent_callback = cb; }
    void setQListView_EventFilter_Callback(QListView_EventFilter_Callback cb) { qlistview_eventfilter_callback = cb; }
    void setQListView_MinimumSizeHint_Callback(QListView_MinimumSizeHint_Callback cb) { qlistview_minimumsizehint_callback = cb; }
    void setQListView_SizeHint_Callback(QListView_SizeHint_Callback cb) { qlistview_sizehint_callback = cb; }
    void setQListView_SetupViewport_Callback(QListView_SetupViewport_Callback cb) { qlistview_setupviewport_callback = cb; }
    void setQListView_ContextMenuEvent_Callback(QListView_ContextMenuEvent_Callback cb) { qlistview_contextmenuevent_callback = cb; }
    void setQListView_ChangeEvent_Callback(QListView_ChangeEvent_Callback cb) { qlistview_changeevent_callback = cb; }
    void setQListView_InitStyleOption_Callback(QListView_InitStyleOption_Callback cb) { qlistview_initstyleoption_callback = cb; }
    void setQListView_DevType_Callback(QListView_DevType_Callback cb) { qlistview_devtype_callback = cb; }
    void setQListView_SetVisible_Callback(QListView_SetVisible_Callback cb) { qlistview_setvisible_callback = cb; }
    void setQListView_HeightForWidth_Callback(QListView_HeightForWidth_Callback cb) { qlistview_heightforwidth_callback = cb; }
    void setQListView_HasHeightForWidth_Callback(QListView_HasHeightForWidth_Callback cb) { qlistview_hasheightforwidth_callback = cb; }
    void setQListView_PaintEngine_Callback(QListView_PaintEngine_Callback cb) { qlistview_paintengine_callback = cb; }
    void setQListView_KeyReleaseEvent_Callback(QListView_KeyReleaseEvent_Callback cb) { qlistview_keyreleaseevent_callback = cb; }
    void setQListView_EnterEvent_Callback(QListView_EnterEvent_Callback cb) { qlistview_enterevent_callback = cb; }
    void setQListView_LeaveEvent_Callback(QListView_LeaveEvent_Callback cb) { qlistview_leaveevent_callback = cb; }
    void setQListView_MoveEvent_Callback(QListView_MoveEvent_Callback cb) { qlistview_moveevent_callback = cb; }
    void setQListView_CloseEvent_Callback(QListView_CloseEvent_Callback cb) { qlistview_closeevent_callback = cb; }
    void setQListView_TabletEvent_Callback(QListView_TabletEvent_Callback cb) { qlistview_tabletevent_callback = cb; }
    void setQListView_ActionEvent_Callback(QListView_ActionEvent_Callback cb) { qlistview_actionevent_callback = cb; }
    void setQListView_ShowEvent_Callback(QListView_ShowEvent_Callback cb) { qlistview_showevent_callback = cb; }
    void setQListView_HideEvent_Callback(QListView_HideEvent_Callback cb) { qlistview_hideevent_callback = cb; }
    void setQListView_NativeEvent_Callback(QListView_NativeEvent_Callback cb) { qlistview_nativeevent_callback = cb; }
    void setQListView_Metric_Callback(QListView_Metric_Callback cb) { qlistview_metric_callback = cb; }
    void setQListView_InitPainter_Callback(QListView_InitPainter_Callback cb) { qlistview_initpainter_callback = cb; }
    void setQListView_Redirected_Callback(QListView_Redirected_Callback cb) { qlistview_redirected_callback = cb; }
    void setQListView_SharedPainter_Callback(QListView_SharedPainter_Callback cb) { qlistview_sharedpainter_callback = cb; }
    void setQListView_ChildEvent_Callback(QListView_ChildEvent_Callback cb) { qlistview_childevent_callback = cb; }
    void setQListView_CustomEvent_Callback(QListView_CustomEvent_Callback cb) { qlistview_customevent_callback = cb; }
    void setQListView_ConnectNotify_Callback(QListView_ConnectNotify_Callback cb) { qlistview_connectnotify_callback = cb; }
    void setQListView_DisconnectNotify_Callback(QListView_DisconnectNotify_Callback cb) { qlistview_disconnectnotify_callback = cb; }
    void setQListView_ResizeContents_Callback(QListView_ResizeContents_Callback cb) { qlistview_resizecontents_callback = cb; }
    void setQListView_ContentsSize_Callback(QListView_ContentsSize_Callback cb) { qlistview_contentssize_callback = cb; }
    void setQListView_RectForIndex_Callback(QListView_RectForIndex_Callback cb) { qlistview_rectforindex_callback = cb; }
    void setQListView_SetPositionForIndex_Callback(QListView_SetPositionForIndex_Callback cb) { qlistview_setpositionforindex_callback = cb; }
    void setQListView_State_Callback(QListView_State_Callback cb) { qlistview_state_callback = cb; }
    void setQListView_SetState_Callback(QListView_SetState_Callback cb) { qlistview_setstate_callback = cb; }
    void setQListView_ScheduleDelayedItemsLayout_Callback(QListView_ScheduleDelayedItemsLayout_Callback cb) { qlistview_scheduledelayeditemslayout_callback = cb; }
    void setQListView_ExecuteDelayedItemsLayout_Callback(QListView_ExecuteDelayedItemsLayout_Callback cb) { qlistview_executedelayeditemslayout_callback = cb; }
    void setQListView_SetDirtyRegion_Callback(QListView_SetDirtyRegion_Callback cb) { qlistview_setdirtyregion_callback = cb; }
    void setQListView_ScrollDirtyRegion_Callback(QListView_ScrollDirtyRegion_Callback cb) { qlistview_scrolldirtyregion_callback = cb; }
    void setQListView_DirtyRegionOffset_Callback(QListView_DirtyRegionOffset_Callback cb) { qlistview_dirtyregionoffset_callback = cb; }
    void setQListView_StartAutoScroll_Callback(QListView_StartAutoScroll_Callback cb) { qlistview_startautoscroll_callback = cb; }
    void setQListView_StopAutoScroll_Callback(QListView_StopAutoScroll_Callback cb) { qlistview_stopautoscroll_callback = cb; }
    void setQListView_DoAutoScroll_Callback(QListView_DoAutoScroll_Callback cb) { qlistview_doautoscroll_callback = cb; }
    void setQListView_DropIndicatorPosition_Callback(QListView_DropIndicatorPosition_Callback cb) { qlistview_dropindicatorposition_callback = cb; }
    void setQListView_SetViewportMargins_Callback(QListView_SetViewportMargins_Callback cb) { qlistview_setviewportmargins_callback = cb; }
    void setQListView_ViewportMargins_Callback(QListView_ViewportMargins_Callback cb) { qlistview_viewportmargins_callback = cb; }
    void setQListView_DrawFrame_Callback(QListView_DrawFrame_Callback cb) { qlistview_drawframe_callback = cb; }
    void setQListView_UpdateMicroFocus_Callback(QListView_UpdateMicroFocus_Callback cb) { qlistview_updatemicrofocus_callback = cb; }
    void setQListView_Create_Callback(QListView_Create_Callback cb) { qlistview_create_callback = cb; }
    void setQListView_Destroy_Callback(QListView_Destroy_Callback cb) { qlistview_destroy_callback = cb; }
    void setQListView_FocusNextChild_Callback(QListView_FocusNextChild_Callback cb) { qlistview_focusnextchild_callback = cb; }
    void setQListView_FocusPreviousChild_Callback(QListView_FocusPreviousChild_Callback cb) { qlistview_focuspreviouschild_callback = cb; }
    void setQListView_Sender_Callback(QListView_Sender_Callback cb) { qlistview_sender_callback = cb; }
    void setQListView_SenderSignalIndex_Callback(QListView_SenderSignalIndex_Callback cb) { qlistview_sendersignalindex_callback = cb; }
    void setQListView_Receivers_Callback(QListView_Receivers_Callback cb) { qlistview_receivers_callback = cb; }
    void setQListView_IsSignalConnected_Callback(QListView_IsSignalConnected_Callback cb) { qlistview_issignalconnected_callback = cb; }

    // Base flag setters
    void setQListView_Metacall_IsBase(bool value) const { qlistview_metacall_isbase = value; }
    void setQListView_VisualRect_IsBase(bool value) const { qlistview_visualrect_isbase = value; }
    void setQListView_ScrollTo_IsBase(bool value) const { qlistview_scrollto_isbase = value; }
    void setQListView_IndexAt_IsBase(bool value) const { qlistview_indexat_isbase = value; }
    void setQListView_DoItemsLayout_IsBase(bool value) const { qlistview_doitemslayout_isbase = value; }
    void setQListView_Reset_IsBase(bool value) const { qlistview_reset_isbase = value; }
    void setQListView_SetRootIndex_IsBase(bool value) const { qlistview_setrootindex_isbase = value; }
    void setQListView_Event_IsBase(bool value) const { qlistview_event_isbase = value; }
    void setQListView_ScrollContentsBy_IsBase(bool value) const { qlistview_scrollcontentsby_isbase = value; }
    void setQListView_DataChanged_IsBase(bool value) const { qlistview_datachanged_isbase = value; }
    void setQListView_RowsInserted_IsBase(bool value) const { qlistview_rowsinserted_isbase = value; }
    void setQListView_RowsAboutToBeRemoved_IsBase(bool value) const { qlistview_rowsabouttoberemoved_isbase = value; }
    void setQListView_MouseMoveEvent_IsBase(bool value) const { qlistview_mousemoveevent_isbase = value; }
    void setQListView_MouseReleaseEvent_IsBase(bool value) const { qlistview_mousereleaseevent_isbase = value; }
    void setQListView_WheelEvent_IsBase(bool value) const { qlistview_wheelevent_isbase = value; }
    void setQListView_TimerEvent_IsBase(bool value) const { qlistview_timerevent_isbase = value; }
    void setQListView_ResizeEvent_IsBase(bool value) const { qlistview_resizeevent_isbase = value; }
    void setQListView_DragMoveEvent_IsBase(bool value) const { qlistview_dragmoveevent_isbase = value; }
    void setQListView_DragLeaveEvent_IsBase(bool value) const { qlistview_dragleaveevent_isbase = value; }
    void setQListView_DropEvent_IsBase(bool value) const { qlistview_dropevent_isbase = value; }
    void setQListView_StartDrag_IsBase(bool value) const { qlistview_startdrag_isbase = value; }
    void setQListView_InitViewItemOption_IsBase(bool value) const { qlistview_initviewitemoption_isbase = value; }
    void setQListView_PaintEvent_IsBase(bool value) const { qlistview_paintevent_isbase = value; }
    void setQListView_HorizontalOffset_IsBase(bool value) const { qlistview_horizontaloffset_isbase = value; }
    void setQListView_VerticalOffset_IsBase(bool value) const { qlistview_verticaloffset_isbase = value; }
    void setQListView_MoveCursor_IsBase(bool value) const { qlistview_movecursor_isbase = value; }
    void setQListView_SetSelection_IsBase(bool value) const { qlistview_setselection_isbase = value; }
    void setQListView_VisualRegionForSelection_IsBase(bool value) const { qlistview_visualregionforselection_isbase = value; }
    void setQListView_SelectedIndexes_IsBase(bool value) const { qlistview_selectedindexes_isbase = value; }
    void setQListView_UpdateGeometries_IsBase(bool value) const { qlistview_updategeometries_isbase = value; }
    void setQListView_IsIndexHidden_IsBase(bool value) const { qlistview_isindexhidden_isbase = value; }
    void setQListView_SelectionChanged_IsBase(bool value) const { qlistview_selectionchanged_isbase = value; }
    void setQListView_CurrentChanged_IsBase(bool value) const { qlistview_currentchanged_isbase = value; }
    void setQListView_ViewportSizeHint_IsBase(bool value) const { qlistview_viewportsizehint_isbase = value; }
    void setQListView_SetModel_IsBase(bool value) const { qlistview_setmodel_isbase = value; }
    void setQListView_SetSelectionModel_IsBase(bool value) const { qlistview_setselectionmodel_isbase = value; }
    void setQListView_KeyboardSearch_IsBase(bool value) const { qlistview_keyboardsearch_isbase = value; }
    void setQListView_SizeHintForRow_IsBase(bool value) const { qlistview_sizehintforrow_isbase = value; }
    void setQListView_SizeHintForColumn_IsBase(bool value) const { qlistview_sizehintforcolumn_isbase = value; }
    void setQListView_ItemDelegateForIndex_IsBase(bool value) const { qlistview_itemdelegateforindex_isbase = value; }
    void setQListView_InputMethodQuery_IsBase(bool value) const { qlistview_inputmethodquery_isbase = value; }
    void setQListView_SelectAll_IsBase(bool value) const { qlistview_selectall_isbase = value; }
    void setQListView_UpdateEditorData_IsBase(bool value) const { qlistview_updateeditordata_isbase = value; }
    void setQListView_UpdateEditorGeometries_IsBase(bool value) const { qlistview_updateeditorgeometries_isbase = value; }
    void setQListView_VerticalScrollbarAction_IsBase(bool value) const { qlistview_verticalscrollbaraction_isbase = value; }
    void setQListView_HorizontalScrollbarAction_IsBase(bool value) const { qlistview_horizontalscrollbaraction_isbase = value; }
    void setQListView_VerticalScrollbarValueChanged_IsBase(bool value) const { qlistview_verticalscrollbarvaluechanged_isbase = value; }
    void setQListView_HorizontalScrollbarValueChanged_IsBase(bool value) const { qlistview_horizontalscrollbarvaluechanged_isbase = value; }
    void setQListView_CloseEditor_IsBase(bool value) const { qlistview_closeeditor_isbase = value; }
    void setQListView_CommitData_IsBase(bool value) const { qlistview_commitdata_isbase = value; }
    void setQListView_EditorDestroyed_IsBase(bool value) const { qlistview_editordestroyed_isbase = value; }
    void setQListView_Edit2_IsBase(bool value) const { qlistview_edit2_isbase = value; }
    void setQListView_SelectionCommand_IsBase(bool value) const { qlistview_selectioncommand_isbase = value; }
    void setQListView_FocusNextPrevChild_IsBase(bool value) const { qlistview_focusnextprevchild_isbase = value; }
    void setQListView_ViewportEvent_IsBase(bool value) const { qlistview_viewportevent_isbase = value; }
    void setQListView_MousePressEvent_IsBase(bool value) const { qlistview_mousepressevent_isbase = value; }
    void setQListView_MouseDoubleClickEvent_IsBase(bool value) const { qlistview_mousedoubleclickevent_isbase = value; }
    void setQListView_DragEnterEvent_IsBase(bool value) const { qlistview_dragenterevent_isbase = value; }
    void setQListView_FocusInEvent_IsBase(bool value) const { qlistview_focusinevent_isbase = value; }
    void setQListView_FocusOutEvent_IsBase(bool value) const { qlistview_focusoutevent_isbase = value; }
    void setQListView_KeyPressEvent_IsBase(bool value) const { qlistview_keypressevent_isbase = value; }
    void setQListView_InputMethodEvent_IsBase(bool value) const { qlistview_inputmethodevent_isbase = value; }
    void setQListView_EventFilter_IsBase(bool value) const { qlistview_eventfilter_isbase = value; }
    void setQListView_MinimumSizeHint_IsBase(bool value) const { qlistview_minimumsizehint_isbase = value; }
    void setQListView_SizeHint_IsBase(bool value) const { qlistview_sizehint_isbase = value; }
    void setQListView_SetupViewport_IsBase(bool value) const { qlistview_setupviewport_isbase = value; }
    void setQListView_ContextMenuEvent_IsBase(bool value) const { qlistview_contextmenuevent_isbase = value; }
    void setQListView_ChangeEvent_IsBase(bool value) const { qlistview_changeevent_isbase = value; }
    void setQListView_InitStyleOption_IsBase(bool value) const { qlistview_initstyleoption_isbase = value; }
    void setQListView_DevType_IsBase(bool value) const { qlistview_devtype_isbase = value; }
    void setQListView_SetVisible_IsBase(bool value) const { qlistview_setvisible_isbase = value; }
    void setQListView_HeightForWidth_IsBase(bool value) const { qlistview_heightforwidth_isbase = value; }
    void setQListView_HasHeightForWidth_IsBase(bool value) const { qlistview_hasheightforwidth_isbase = value; }
    void setQListView_PaintEngine_IsBase(bool value) const { qlistview_paintengine_isbase = value; }
    void setQListView_KeyReleaseEvent_IsBase(bool value) const { qlistview_keyreleaseevent_isbase = value; }
    void setQListView_EnterEvent_IsBase(bool value) const { qlistview_enterevent_isbase = value; }
    void setQListView_LeaveEvent_IsBase(bool value) const { qlistview_leaveevent_isbase = value; }
    void setQListView_MoveEvent_IsBase(bool value) const { qlistview_moveevent_isbase = value; }
    void setQListView_CloseEvent_IsBase(bool value) const { qlistview_closeevent_isbase = value; }
    void setQListView_TabletEvent_IsBase(bool value) const { qlistview_tabletevent_isbase = value; }
    void setQListView_ActionEvent_IsBase(bool value) const { qlistview_actionevent_isbase = value; }
    void setQListView_ShowEvent_IsBase(bool value) const { qlistview_showevent_isbase = value; }
    void setQListView_HideEvent_IsBase(bool value) const { qlistview_hideevent_isbase = value; }
    void setQListView_NativeEvent_IsBase(bool value) const { qlistview_nativeevent_isbase = value; }
    void setQListView_Metric_IsBase(bool value) const { qlistview_metric_isbase = value; }
    void setQListView_InitPainter_IsBase(bool value) const { qlistview_initpainter_isbase = value; }
    void setQListView_Redirected_IsBase(bool value) const { qlistview_redirected_isbase = value; }
    void setQListView_SharedPainter_IsBase(bool value) const { qlistview_sharedpainter_isbase = value; }
    void setQListView_ChildEvent_IsBase(bool value) const { qlistview_childevent_isbase = value; }
    void setQListView_CustomEvent_IsBase(bool value) const { qlistview_customevent_isbase = value; }
    void setQListView_ConnectNotify_IsBase(bool value) const { qlistview_connectnotify_isbase = value; }
    void setQListView_DisconnectNotify_IsBase(bool value) const { qlistview_disconnectnotify_isbase = value; }
    void setQListView_ResizeContents_IsBase(bool value) const { qlistview_resizecontents_isbase = value; }
    void setQListView_ContentsSize_IsBase(bool value) const { qlistview_contentssize_isbase = value; }
    void setQListView_RectForIndex_IsBase(bool value) const { qlistview_rectforindex_isbase = value; }
    void setQListView_SetPositionForIndex_IsBase(bool value) const { qlistview_setpositionforindex_isbase = value; }
    void setQListView_State_IsBase(bool value) const { qlistview_state_isbase = value; }
    void setQListView_SetState_IsBase(bool value) const { qlistview_setstate_isbase = value; }
    void setQListView_ScheduleDelayedItemsLayout_IsBase(bool value) const { qlistview_scheduledelayeditemslayout_isbase = value; }
    void setQListView_ExecuteDelayedItemsLayout_IsBase(bool value) const { qlistview_executedelayeditemslayout_isbase = value; }
    void setQListView_SetDirtyRegion_IsBase(bool value) const { qlistview_setdirtyregion_isbase = value; }
    void setQListView_ScrollDirtyRegion_IsBase(bool value) const { qlistview_scrolldirtyregion_isbase = value; }
    void setQListView_DirtyRegionOffset_IsBase(bool value) const { qlistview_dirtyregionoffset_isbase = value; }
    void setQListView_StartAutoScroll_IsBase(bool value) const { qlistview_startautoscroll_isbase = value; }
    void setQListView_StopAutoScroll_IsBase(bool value) const { qlistview_stopautoscroll_isbase = value; }
    void setQListView_DoAutoScroll_IsBase(bool value) const { qlistview_doautoscroll_isbase = value; }
    void setQListView_DropIndicatorPosition_IsBase(bool value) const { qlistview_dropindicatorposition_isbase = value; }
    void setQListView_SetViewportMargins_IsBase(bool value) const { qlistview_setviewportmargins_isbase = value; }
    void setQListView_ViewportMargins_IsBase(bool value) const { qlistview_viewportmargins_isbase = value; }
    void setQListView_DrawFrame_IsBase(bool value) const { qlistview_drawframe_isbase = value; }
    void setQListView_UpdateMicroFocus_IsBase(bool value) const { qlistview_updatemicrofocus_isbase = value; }
    void setQListView_Create_IsBase(bool value) const { qlistview_create_isbase = value; }
    void setQListView_Destroy_IsBase(bool value) const { qlistview_destroy_isbase = value; }
    void setQListView_FocusNextChild_IsBase(bool value) const { qlistview_focusnextchild_isbase = value; }
    void setQListView_FocusPreviousChild_IsBase(bool value) const { qlistview_focuspreviouschild_isbase = value; }
    void setQListView_Sender_IsBase(bool value) const { qlistview_sender_isbase = value; }
    void setQListView_SenderSignalIndex_IsBase(bool value) const { qlistview_sendersignalindex_isbase = value; }
    void setQListView_Receivers_IsBase(bool value) const { qlistview_receivers_isbase = value; }
    void setQListView_IsSignalConnected_IsBase(bool value) const { qlistview_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qlistview_metacall_isbase) {
            qlistview_metacall_isbase = false;
            return QListView::qt_metacall(param1, param2, param3);
        } else if (qlistview_metacall_callback != nullptr) {
            return qlistview_metacall_callback(this, param1, param2, param3);
        } else {
            return QListView::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect visualRect(const QModelIndex& index) const override {
        if (qlistview_visualrect_isbase) {
            qlistview_visualrect_isbase = false;
            return QListView::visualRect(index);
        } else if (qlistview_visualrect_callback != nullptr) {
            return qlistview_visualrect_callback(this, index);
        } else {
            return QListView::visualRect(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
        if (qlistview_scrollto_isbase) {
            qlistview_scrollto_isbase = false;
            QListView::scrollTo(index, hint);
        } else if (qlistview_scrollto_callback != nullptr) {
            qlistview_scrollto_callback(this, index, hint);
        } else {
            QListView::scrollTo(index, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex indexAt(const QPoint& p) const override {
        if (qlistview_indexat_isbase) {
            qlistview_indexat_isbase = false;
            return QListView::indexAt(p);
        } else if (qlistview_indexat_callback != nullptr) {
            return qlistview_indexat_callback(this, p);
        } else {
            return QListView::indexAt(p);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void doItemsLayout() override {
        if (qlistview_doitemslayout_isbase) {
            qlistview_doitemslayout_isbase = false;
            QListView::doItemsLayout();
        } else if (qlistview_doitemslayout_callback != nullptr) {
            qlistview_doitemslayout_callback();
        } else {
            QListView::doItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qlistview_reset_isbase) {
            qlistview_reset_isbase = false;
            QListView::reset();
        } else if (qlistview_reset_callback != nullptr) {
            qlistview_reset_callback();
        } else {
            QListView::reset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setRootIndex(const QModelIndex& index) override {
        if (qlistview_setrootindex_isbase) {
            qlistview_setrootindex_isbase = false;
            QListView::setRootIndex(index);
        } else if (qlistview_setrootindex_callback != nullptr) {
            qlistview_setrootindex_callback(this, index);
        } else {
            QListView::setRootIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qlistview_event_isbase) {
            qlistview_event_isbase = false;
            return QListView::event(e);
        } else if (qlistview_event_callback != nullptr) {
            return qlistview_event_callback(this, e);
        } else {
            return QListView::event(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void scrollContentsBy(int dx, int dy) override {
        if (qlistview_scrollcontentsby_isbase) {
            qlistview_scrollcontentsby_isbase = false;
            QListView::scrollContentsBy(dx, dy);
        } else if (qlistview_scrollcontentsby_callback != nullptr) {
            qlistview_scrollcontentsby_callback(this, dx, dy);
        } else {
            QListView::scrollContentsBy(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
        if (qlistview_datachanged_isbase) {
            qlistview_datachanged_isbase = false;
            QListView::dataChanged(topLeft, bottomRight, roles);
        } else if (qlistview_datachanged_callback != nullptr) {
            qlistview_datachanged_callback(this, topLeft, bottomRight, roles);
        } else {
            QListView::dataChanged(topLeft, bottomRight, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
        if (qlistview_rowsinserted_isbase) {
            qlistview_rowsinserted_isbase = false;
            QListView::rowsInserted(parent, start, end);
        } else if (qlistview_rowsinserted_callback != nullptr) {
            qlistview_rowsinserted_callback(this, parent, start, end);
        } else {
            QListView::rowsInserted(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
        if (qlistview_rowsabouttoberemoved_isbase) {
            qlistview_rowsabouttoberemoved_isbase = false;
            QListView::rowsAboutToBeRemoved(parent, start, end);
        } else if (qlistview_rowsabouttoberemoved_callback != nullptr) {
            qlistview_rowsabouttoberemoved_callback(this, parent, start, end);
        } else {
            QListView::rowsAboutToBeRemoved(parent, start, end);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseMoveEvent(QMouseEvent* e) override {
        if (qlistview_mousemoveevent_isbase) {
            qlistview_mousemoveevent_isbase = false;
            QListView::mouseMoveEvent(e);
        } else if (qlistview_mousemoveevent_callback != nullptr) {
            qlistview_mousemoveevent_callback(this, e);
        } else {
            QListView::mouseMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseReleaseEvent(QMouseEvent* e) override {
        if (qlistview_mousereleaseevent_isbase) {
            qlistview_mousereleaseevent_isbase = false;
            QListView::mouseReleaseEvent(e);
        } else if (qlistview_mousereleaseevent_callback != nullptr) {
            qlistview_mousereleaseevent_callback(this, e);
        } else {
            QListView::mouseReleaseEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void wheelEvent(QWheelEvent* e) override {
        if (qlistview_wheelevent_isbase) {
            qlistview_wheelevent_isbase = false;
            QListView::wheelEvent(e);
        } else if (qlistview_wheelevent_callback != nullptr) {
            qlistview_wheelevent_callback(this, e);
        } else {
            QListView::wheelEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* e) override {
        if (qlistview_timerevent_isbase) {
            qlistview_timerevent_isbase = false;
            QListView::timerEvent(e);
        } else if (qlistview_timerevent_callback != nullptr) {
            qlistview_timerevent_callback(this, e);
        } else {
            QListView::timerEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resizeEvent(QResizeEvent* e) override {
        if (qlistview_resizeevent_isbase) {
            qlistview_resizeevent_isbase = false;
            QListView::resizeEvent(e);
        } else if (qlistview_resizeevent_callback != nullptr) {
            qlistview_resizeevent_callback(this, e);
        } else {
            QListView::resizeEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragMoveEvent(QDragMoveEvent* e) override {
        if (qlistview_dragmoveevent_isbase) {
            qlistview_dragmoveevent_isbase = false;
            QListView::dragMoveEvent(e);
        } else if (qlistview_dragmoveevent_callback != nullptr) {
            qlistview_dragmoveevent_callback(this, e);
        } else {
            QListView::dragMoveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
        if (qlistview_dragleaveevent_isbase) {
            qlistview_dragleaveevent_isbase = false;
            QListView::dragLeaveEvent(e);
        } else if (qlistview_dragleaveevent_callback != nullptr) {
            qlistview_dragleaveevent_callback(this, e);
        } else {
            QListView::dragLeaveEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dropEvent(QDropEvent* e) override {
        if (qlistview_dropevent_isbase) {
            qlistview_dropevent_isbase = false;
            QListView::dropEvent(e);
        } else if (qlistview_dropevent_callback != nullptr) {
            qlistview_dropevent_callback(this, e);
        } else {
            QListView::dropEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void startDrag(Qt::DropActions supportedActions) override {
        if (qlistview_startdrag_isbase) {
            qlistview_startdrag_isbase = false;
            QListView::startDrag(supportedActions);
        } else if (qlistview_startdrag_callback != nullptr) {
            qlistview_startdrag_callback(this, supportedActions);
        } else {
            QListView::startDrag(supportedActions);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
        if (qlistview_initviewitemoption_isbase) {
            qlistview_initviewitemoption_isbase = false;
            QListView::initViewItemOption(option);
        } else if (qlistview_initviewitemoption_callback != nullptr) {
            qlistview_initviewitemoption_callback(this, option);
        } else {
            QListView::initViewItemOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void paintEvent(QPaintEvent* e) override {
        if (qlistview_paintevent_isbase) {
            qlistview_paintevent_isbase = false;
            QListView::paintEvent(e);
        } else if (qlistview_paintevent_callback != nullptr) {
            qlistview_paintevent_callback(this, e);
        } else {
            QListView::paintEvent(e);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int horizontalOffset() const override {
        if (qlistview_horizontaloffset_isbase) {
            qlistview_horizontaloffset_isbase = false;
            return QListView::horizontalOffset();
        } else if (qlistview_horizontaloffset_callback != nullptr) {
            return qlistview_horizontaloffset_callback();
        } else {
            return QListView::horizontalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int verticalOffset() const override {
        if (qlistview_verticaloffset_isbase) {
            qlistview_verticaloffset_isbase = false;
            return QListView::verticalOffset();
        } else if (qlistview_verticaloffset_callback != nullptr) {
            return qlistview_verticaloffset_callback();
        } else {
            return QListView::verticalOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
        if (qlistview_movecursor_isbase) {
            qlistview_movecursor_isbase = false;
            return QListView::moveCursor(cursorAction, modifiers);
        } else if (qlistview_movecursor_callback != nullptr) {
            return qlistview_movecursor_callback(this, cursorAction, modifiers);
        } else {
            return QListView::moveCursor(cursorAction, modifiers);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
        if (qlistview_setselection_isbase) {
            qlistview_setselection_isbase = false;
            QListView::setSelection(rect, command);
        } else if (qlistview_setselection_callback != nullptr) {
            qlistview_setselection_callback(this, rect, command);
        } else {
            QListView::setSelection(rect, command);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
        if (qlistview_visualregionforselection_isbase) {
            qlistview_visualregionforselection_isbase = false;
            return QListView::visualRegionForSelection(selection);
        } else if (qlistview_visualregionforselection_callback != nullptr) {
            return qlistview_visualregionforselection_callback(this, selection);
        } else {
            return QListView::visualRegionForSelection(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList selectedIndexes() const override {
        if (qlistview_selectedindexes_isbase) {
            qlistview_selectedindexes_isbase = false;
            return QListView::selectedIndexes();
        } else if (qlistview_selectedindexes_callback != nullptr) {
            return qlistview_selectedindexes_callback();
        } else {
            return QListView::selectedIndexes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateGeometries() override {
        if (qlistview_updategeometries_isbase) {
            qlistview_updategeometries_isbase = false;
            QListView::updateGeometries();
        } else if (qlistview_updategeometries_callback != nullptr) {
            qlistview_updategeometries_callback();
        } else {
            QListView::updateGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool isIndexHidden(const QModelIndex& index) const override {
        if (qlistview_isindexhidden_isbase) {
            qlistview_isindexhidden_isbase = false;
            return QListView::isIndexHidden(index);
        } else if (qlistview_isindexhidden_callback != nullptr) {
            return qlistview_isindexhidden_callback(this, index);
        } else {
            return QListView::isIndexHidden(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
        if (qlistview_selectionchanged_isbase) {
            qlistview_selectionchanged_isbase = false;
            QListView::selectionChanged(selected, deselected);
        } else if (qlistview_selectionchanged_callback != nullptr) {
            qlistview_selectionchanged_callback(this, selected, deselected);
        } else {
            QListView::selectionChanged(selected, deselected);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
        if (qlistview_currentchanged_isbase) {
            qlistview_currentchanged_isbase = false;
            QListView::currentChanged(current, previous);
        } else if (qlistview_currentchanged_callback != nullptr) {
            qlistview_currentchanged_callback(this, current, previous);
        } else {
            QListView::currentChanged(current, previous);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize viewportSizeHint() const override {
        if (qlistview_viewportsizehint_isbase) {
            qlistview_viewportsizehint_isbase = false;
            return QListView::viewportSizeHint();
        } else if (qlistview_viewportsizehint_callback != nullptr) {
            return qlistview_viewportsizehint_callback();
        } else {
            return QListView::viewportSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setModel(QAbstractItemModel* model) override {
        if (qlistview_setmodel_isbase) {
            qlistview_setmodel_isbase = false;
            QListView::setModel(model);
        } else if (qlistview_setmodel_callback != nullptr) {
            qlistview_setmodel_callback(this, model);
        } else {
            QListView::setModel(model);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
        if (qlistview_setselectionmodel_isbase) {
            qlistview_setselectionmodel_isbase = false;
            QListView::setSelectionModel(selectionModel);
        } else if (qlistview_setselectionmodel_callback != nullptr) {
            qlistview_setselectionmodel_callback(this, selectionModel);
        } else {
            QListView::setSelectionModel(selectionModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyboardSearch(const QString& search) override {
        if (qlistview_keyboardsearch_isbase) {
            qlistview_keyboardsearch_isbase = false;
            QListView::keyboardSearch(search);
        } else if (qlistview_keyboardsearch_callback != nullptr) {
            qlistview_keyboardsearch_callback(this, search);
        } else {
            QListView::keyboardSearch(search);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForRow(int row) const override {
        if (qlistview_sizehintforrow_isbase) {
            qlistview_sizehintforrow_isbase = false;
            return QListView::sizeHintForRow(row);
        } else if (qlistview_sizehintforrow_callback != nullptr) {
            return qlistview_sizehintforrow_callback(this, row);
        } else {
            return QListView::sizeHintForRow(row);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int sizeHintForColumn(int column) const override {
        if (qlistview_sizehintforcolumn_isbase) {
            qlistview_sizehintforcolumn_isbase = false;
            return QListView::sizeHintForColumn(column);
        } else if (qlistview_sizehintforcolumn_callback != nullptr) {
            return qlistview_sizehintforcolumn_callback(this, column);
        } else {
            return QListView::sizeHintForColumn(column);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
        if (qlistview_itemdelegateforindex_isbase) {
            qlistview_itemdelegateforindex_isbase = false;
            return QListView::itemDelegateForIndex(index);
        } else if (qlistview_itemdelegateforindex_callback != nullptr) {
            return qlistview_itemdelegateforindex_callback(this, index);
        } else {
            return QListView::itemDelegateForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
        if (qlistview_inputmethodquery_isbase) {
            qlistview_inputmethodquery_isbase = false;
            return QListView::inputMethodQuery(query);
        } else if (qlistview_inputmethodquery_callback != nullptr) {
            return qlistview_inputmethodquery_callback(this, query);
        } else {
            return QListView::inputMethodQuery(query);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectAll() override {
        if (qlistview_selectall_isbase) {
            qlistview_selectall_isbase = false;
            QListView::selectAll();
        } else if (qlistview_selectall_callback != nullptr) {
            qlistview_selectall_callback();
        } else {
            QListView::selectAll();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorData() override {
        if (qlistview_updateeditordata_isbase) {
            qlistview_updateeditordata_isbase = false;
            QListView::updateEditorData();
        } else if (qlistview_updateeditordata_callback != nullptr) {
            qlistview_updateeditordata_callback();
        } else {
            QListView::updateEditorData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void updateEditorGeometries() override {
        if (qlistview_updateeditorgeometries_isbase) {
            qlistview_updateeditorgeometries_isbase = false;
            QListView::updateEditorGeometries();
        } else if (qlistview_updateeditorgeometries_callback != nullptr) {
            qlistview_updateeditorgeometries_callback();
        } else {
            QListView::updateEditorGeometries();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarAction(int action) override {
        if (qlistview_verticalscrollbaraction_isbase) {
            qlistview_verticalscrollbaraction_isbase = false;
            QListView::verticalScrollbarAction(action);
        } else if (qlistview_verticalscrollbaraction_callback != nullptr) {
            qlistview_verticalscrollbaraction_callback(this, action);
        } else {
            QListView::verticalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarAction(int action) override {
        if (qlistview_horizontalscrollbaraction_isbase) {
            qlistview_horizontalscrollbaraction_isbase = false;
            QListView::horizontalScrollbarAction(action);
        } else if (qlistview_horizontalscrollbaraction_callback != nullptr) {
            qlistview_horizontalscrollbaraction_callback(this, action);
        } else {
            QListView::horizontalScrollbarAction(action);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void verticalScrollbarValueChanged(int value) override {
        if (qlistview_verticalscrollbarvaluechanged_isbase) {
            qlistview_verticalscrollbarvaluechanged_isbase = false;
            QListView::verticalScrollbarValueChanged(value);
        } else if (qlistview_verticalscrollbarvaluechanged_callback != nullptr) {
            qlistview_verticalscrollbarvaluechanged_callback(this, value);
        } else {
            QListView::verticalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void horizontalScrollbarValueChanged(int value) override {
        if (qlistview_horizontalscrollbarvaluechanged_isbase) {
            qlistview_horizontalscrollbarvaluechanged_isbase = false;
            QListView::horizontalScrollbarValueChanged(value);
        } else if (qlistview_horizontalscrollbarvaluechanged_callback != nullptr) {
            qlistview_horizontalscrollbarvaluechanged_callback(this, value);
        } else {
            QListView::horizontalScrollbarValueChanged(value);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
        if (qlistview_closeeditor_isbase) {
            qlistview_closeeditor_isbase = false;
            QListView::closeEditor(editor, hint);
        } else if (qlistview_closeeditor_callback != nullptr) {
            qlistview_closeeditor_callback(this, editor, hint);
        } else {
            QListView::closeEditor(editor, hint);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void commitData(QWidget* editor) override {
        if (qlistview_commitdata_isbase) {
            qlistview_commitdata_isbase = false;
            QListView::commitData(editor);
        } else if (qlistview_commitdata_callback != nullptr) {
            qlistview_commitdata_callback(this, editor);
        } else {
            QListView::commitData(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void editorDestroyed(QObject* editor) override {
        if (qlistview_editordestroyed_isbase) {
            qlistview_editordestroyed_isbase = false;
            QListView::editorDestroyed(editor);
        } else if (qlistview_editordestroyed_callback != nullptr) {
            qlistview_editordestroyed_callback(this, editor);
        } else {
            QListView::editorDestroyed(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
        if (qlistview_edit2_isbase) {
            qlistview_edit2_isbase = false;
            return QListView::edit(index, trigger, event);
        } else if (qlistview_edit2_callback != nullptr) {
            return qlistview_edit2_callback(this, index, trigger, event);
        } else {
            return QListView::edit(index, trigger, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
        if (qlistview_selectioncommand_isbase) {
            qlistview_selectioncommand_isbase = false;
            return QListView::selectionCommand(index, event);
        } else if (qlistview_selectioncommand_callback != nullptr) {
            return qlistview_selectioncommand_callback(this, index, event);
        } else {
            return QListView::selectionCommand(index, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool focusNextPrevChild(bool next) override {
        if (qlistview_focusnextprevchild_isbase) {
            qlistview_focusnextprevchild_isbase = false;
            return QListView::focusNextPrevChild(next);
        } else if (qlistview_focusnextprevchild_callback != nullptr) {
            return qlistview_focusnextprevchild_callback(this, next);
        } else {
            return QListView::focusNextPrevChild(next);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool viewportEvent(QEvent* event) override {
        if (qlistview_viewportevent_isbase) {
            qlistview_viewportevent_isbase = false;
            return QListView::viewportEvent(event);
        } else if (qlistview_viewportevent_callback != nullptr) {
            return qlistview_viewportevent_callback(this, event);
        } else {
            return QListView::viewportEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mousePressEvent(QMouseEvent* event) override {
        if (qlistview_mousepressevent_isbase) {
            qlistview_mousepressevent_isbase = false;
            QListView::mousePressEvent(event);
        } else if (qlistview_mousepressevent_callback != nullptr) {
            qlistview_mousepressevent_callback(this, event);
        } else {
            QListView::mousePressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
        if (qlistview_mousedoubleclickevent_isbase) {
            qlistview_mousedoubleclickevent_isbase = false;
            QListView::mouseDoubleClickEvent(event);
        } else if (qlistview_mousedoubleclickevent_callback != nullptr) {
            qlistview_mousedoubleclickevent_callback(this, event);
        } else {
            QListView::mouseDoubleClickEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void dragEnterEvent(QDragEnterEvent* event) override {
        if (qlistview_dragenterevent_isbase) {
            qlistview_dragenterevent_isbase = false;
            QListView::dragEnterEvent(event);
        } else if (qlistview_dragenterevent_callback != nullptr) {
            qlistview_dragenterevent_callback(this, event);
        } else {
            QListView::dragEnterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusInEvent(QFocusEvent* event) override {
        if (qlistview_focusinevent_isbase) {
            qlistview_focusinevent_isbase = false;
            QListView::focusInEvent(event);
        } else if (qlistview_focusinevent_callback != nullptr) {
            qlistview_focusinevent_callback(this, event);
        } else {
            QListView::focusInEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void focusOutEvent(QFocusEvent* event) override {
        if (qlistview_focusoutevent_isbase) {
            qlistview_focusoutevent_isbase = false;
            QListView::focusOutEvent(event);
        } else if (qlistview_focusoutevent_callback != nullptr) {
            qlistview_focusoutevent_callback(this, event);
        } else {
            QListView::focusOutEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyPressEvent(QKeyEvent* event) override {
        if (qlistview_keypressevent_isbase) {
            qlistview_keypressevent_isbase = false;
            QListView::keyPressEvent(event);
        } else if (qlistview_keypressevent_callback != nullptr) {
            qlistview_keypressevent_callback(this, event);
        } else {
            QListView::keyPressEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void inputMethodEvent(QInputMethodEvent* event) override {
        if (qlistview_inputmethodevent_isbase) {
            qlistview_inputmethodevent_isbase = false;
            QListView::inputMethodEvent(event);
        } else if (qlistview_inputmethodevent_callback != nullptr) {
            qlistview_inputmethodevent_callback(this, event);
        } else {
            QListView::inputMethodEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* object, QEvent* event) override {
        if (qlistview_eventfilter_isbase) {
            qlistview_eventfilter_isbase = false;
            return QListView::eventFilter(object, event);
        } else if (qlistview_eventfilter_callback != nullptr) {
            return qlistview_eventfilter_callback(this, object, event);
        } else {
            return QListView::eventFilter(object, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize minimumSizeHint() const override {
        if (qlistview_minimumsizehint_isbase) {
            qlistview_minimumsizehint_isbase = false;
            return QListView::minimumSizeHint();
        } else if (qlistview_minimumsizehint_callback != nullptr) {
            return qlistview_minimumsizehint_callback();
        } else {
            return QListView::minimumSizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeHint() const override {
        if (qlistview_sizehint_isbase) {
            qlistview_sizehint_isbase = false;
            return QListView::sizeHint();
        } else if (qlistview_sizehint_callback != nullptr) {
            return qlistview_sizehint_callback();
        } else {
            return QListView::sizeHint();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setupViewport(QWidget* viewport) override {
        if (qlistview_setupviewport_isbase) {
            qlistview_setupviewport_isbase = false;
            QListView::setupViewport(viewport);
        } else if (qlistview_setupviewport_callback != nullptr) {
            qlistview_setupviewport_callback(this, viewport);
        } else {
            QListView::setupViewport(viewport);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void contextMenuEvent(QContextMenuEvent* param1) override {
        if (qlistview_contextmenuevent_isbase) {
            qlistview_contextmenuevent_isbase = false;
            QListView::contextMenuEvent(param1);
        } else if (qlistview_contextmenuevent_callback != nullptr) {
            qlistview_contextmenuevent_callback(this, param1);
        } else {
            QListView::contextMenuEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void changeEvent(QEvent* param1) override {
        if (qlistview_changeevent_isbase) {
            qlistview_changeevent_isbase = false;
            QListView::changeEvent(param1);
        } else if (qlistview_changeevent_callback != nullptr) {
            qlistview_changeevent_callback(this, param1);
        } else {
            QListView::changeEvent(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initStyleOption(QStyleOptionFrame* option) const override {
        if (qlistview_initstyleoption_isbase) {
            qlistview_initstyleoption_isbase = false;
            QListView::initStyleOption(option);
        } else if (qlistview_initstyleoption_callback != nullptr) {
            qlistview_initstyleoption_callback(this, option);
        } else {
            QListView::initStyleOption(option);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int devType() const override {
        if (qlistview_devtype_isbase) {
            qlistview_devtype_isbase = false;
            return QListView::devType();
        } else if (qlistview_devtype_callback != nullptr) {
            return qlistview_devtype_callback();
        } else {
            return QListView::devType();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setVisible(bool visible) override {
        if (qlistview_setvisible_isbase) {
            qlistview_setvisible_isbase = false;
            QListView::setVisible(visible);
        } else if (qlistview_setvisible_callback != nullptr) {
            qlistview_setvisible_callback(this, visible);
        } else {
            QListView::setVisible(visible);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int heightForWidth(int param1) const override {
        if (qlistview_heightforwidth_isbase) {
            qlistview_heightforwidth_isbase = false;
            return QListView::heightForWidth(param1);
        } else if (qlistview_heightforwidth_callback != nullptr) {
            return qlistview_heightforwidth_callback(this, param1);
        } else {
            return QListView::heightForWidth(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasHeightForWidth() const override {
        if (qlistview_hasheightforwidth_isbase) {
            qlistview_hasheightforwidth_isbase = false;
            return QListView::hasHeightForWidth();
        } else if (qlistview_hasheightforwidth_callback != nullptr) {
            return qlistview_hasheightforwidth_callback();
        } else {
            return QListView::hasHeightForWidth();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintEngine* paintEngine() const override {
        if (qlistview_paintengine_isbase) {
            qlistview_paintengine_isbase = false;
            return QListView::paintEngine();
        } else if (qlistview_paintengine_callback != nullptr) {
            return qlistview_paintengine_callback();
        } else {
            return QListView::paintEngine();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void keyReleaseEvent(QKeyEvent* event) override {
        if (qlistview_keyreleaseevent_isbase) {
            qlistview_keyreleaseevent_isbase = false;
            QListView::keyReleaseEvent(event);
        } else if (qlistview_keyreleaseevent_callback != nullptr) {
            qlistview_keyreleaseevent_callback(this, event);
        } else {
            QListView::keyReleaseEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void enterEvent(QEnterEvent* event) override {
        if (qlistview_enterevent_isbase) {
            qlistview_enterevent_isbase = false;
            QListView::enterEvent(event);
        } else if (qlistview_enterevent_callback != nullptr) {
            qlistview_enterevent_callback(this, event);
        } else {
            QListView::enterEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void leaveEvent(QEvent* event) override {
        if (qlistview_leaveevent_isbase) {
            qlistview_leaveevent_isbase = false;
            QListView::leaveEvent(event);
        } else if (qlistview_leaveevent_callback != nullptr) {
            qlistview_leaveevent_callback(this, event);
        } else {
            QListView::leaveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void moveEvent(QMoveEvent* event) override {
        if (qlistview_moveevent_isbase) {
            qlistview_moveevent_isbase = false;
            QListView::moveEvent(event);
        } else if (qlistview_moveevent_callback != nullptr) {
            qlistview_moveevent_callback(this, event);
        } else {
            QListView::moveEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void closeEvent(QCloseEvent* event) override {
        if (qlistview_closeevent_isbase) {
            qlistview_closeevent_isbase = false;
            QListView::closeEvent(event);
        } else if (qlistview_closeevent_callback != nullptr) {
            qlistview_closeevent_callback(this, event);
        } else {
            QListView::closeEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void tabletEvent(QTabletEvent* event) override {
        if (qlistview_tabletevent_isbase) {
            qlistview_tabletevent_isbase = false;
            QListView::tabletEvent(event);
        } else if (qlistview_tabletevent_callback != nullptr) {
            qlistview_tabletevent_callback(this, event);
        } else {
            QListView::tabletEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void actionEvent(QActionEvent* event) override {
        if (qlistview_actionevent_isbase) {
            qlistview_actionevent_isbase = false;
            QListView::actionEvent(event);
        } else if (qlistview_actionevent_callback != nullptr) {
            qlistview_actionevent_callback(this, event);
        } else {
            QListView::actionEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void showEvent(QShowEvent* event) override {
        if (qlistview_showevent_isbase) {
            qlistview_showevent_isbase = false;
            QListView::showEvent(event);
        } else if (qlistview_showevent_callback != nullptr) {
            qlistview_showevent_callback(this, event);
        } else {
            QListView::showEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void hideEvent(QHideEvent* event) override {
        if (qlistview_hideevent_isbase) {
            qlistview_hideevent_isbase = false;
            QListView::hideEvent(event);
        } else if (qlistview_hideevent_callback != nullptr) {
            qlistview_hideevent_callback(this, event);
        } else {
            QListView::hideEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
        if (qlistview_nativeevent_isbase) {
            qlistview_nativeevent_isbase = false;
            return QListView::nativeEvent(eventType, message, result);
        } else if (qlistview_nativeevent_callback != nullptr) {
            return qlistview_nativeevent_callback(this, eventType, message, result);
        } else {
            return QListView::nativeEvent(eventType, message, result);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
        if (qlistview_metric_isbase) {
            qlistview_metric_isbase = false;
            return QListView::metric(param1);
        } else if (qlistview_metric_callback != nullptr) {
            return qlistview_metric_callback(this, param1);
        } else {
            return QListView::metric(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void initPainter(QPainter* painter) const override {
        if (qlistview_initpainter_isbase) {
            qlistview_initpainter_isbase = false;
            QListView::initPainter(painter);
        } else if (qlistview_initpainter_callback != nullptr) {
            qlistview_initpainter_callback(this, painter);
        } else {
            QListView::initPainter(painter);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPaintDevice* redirected(QPoint* offset) const override {
        if (qlistview_redirected_isbase) {
            qlistview_redirected_isbase = false;
            return QListView::redirected(offset);
        } else if (qlistview_redirected_callback != nullptr) {
            return qlistview_redirected_callback(this, offset);
        } else {
            return QListView::redirected(offset);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QPainter* sharedPainter() const override {
        if (qlistview_sharedpainter_isbase) {
            qlistview_sharedpainter_isbase = false;
            return QListView::sharedPainter();
        } else if (qlistview_sharedpainter_callback != nullptr) {
            return qlistview_sharedpainter_callback();
        } else {
            return QListView::sharedPainter();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qlistview_childevent_isbase) {
            qlistview_childevent_isbase = false;
            QListView::childEvent(event);
        } else if (qlistview_childevent_callback != nullptr) {
            qlistview_childevent_callback(this, event);
        } else {
            QListView::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qlistview_customevent_isbase) {
            qlistview_customevent_isbase = false;
            QListView::customEvent(event);
        } else if (qlistview_customevent_callback != nullptr) {
            qlistview_customevent_callback(this, event);
        } else {
            QListView::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qlistview_connectnotify_isbase) {
            qlistview_connectnotify_isbase = false;
            QListView::connectNotify(signal);
        } else if (qlistview_connectnotify_callback != nullptr) {
            qlistview_connectnotify_callback(this, signal);
        } else {
            QListView::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qlistview_disconnectnotify_isbase) {
            qlistview_disconnectnotify_isbase = false;
            QListView::disconnectNotify(signal);
        } else if (qlistview_disconnectnotify_callback != nullptr) {
            qlistview_disconnectnotify_callback(this, signal);
        } else {
            QListView::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    void resizeContents(int width, int height) {
        if (qlistview_resizecontents_isbase) {
            qlistview_resizecontents_isbase = false;
            QListView::resizeContents(width, height);
        } else if (qlistview_resizecontents_callback != nullptr) {
            qlistview_resizecontents_callback(this, width, height);
        } else {
            QListView::resizeContents(width, height);
        }
    }

    // Virtual method for C ABI access and custom callback
    QSize contentsSize() const {
        if (qlistview_contentssize_isbase) {
            qlistview_contentssize_isbase = false;
            return QListView::contentsSize();
        } else if (qlistview_contentssize_callback != nullptr) {
            return qlistview_contentssize_callback();
        } else {
            return QListView::contentsSize();
        }
    }

    // Virtual method for C ABI access and custom callback
    QRect rectForIndex(const QModelIndex& index) const {
        if (qlistview_rectforindex_isbase) {
            qlistview_rectforindex_isbase = false;
            return QListView::rectForIndex(index);
        } else if (qlistview_rectforindex_callback != nullptr) {
            return qlistview_rectforindex_callback(this, index);
        } else {
            return QListView::rectForIndex(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    void setPositionForIndex(const QPoint& position, const QModelIndex& index) {
        if (qlistview_setpositionforindex_isbase) {
            qlistview_setpositionforindex_isbase = false;
            QListView::setPositionForIndex(position, index);
        } else if (qlistview_setpositionforindex_callback != nullptr) {
            qlistview_setpositionforindex_callback(this, position, index);
        } else {
            QListView::setPositionForIndex(position, index);
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::State state() const {
        if (qlistview_state_isbase) {
            qlistview_state_isbase = false;
            return QListView::state();
        } else if (qlistview_state_callback != nullptr) {
            return qlistview_state_callback();
        } else {
            return QListView::state();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setState(QAbstractItemView::State state) {
        if (qlistview_setstate_isbase) {
            qlistview_setstate_isbase = false;
            QListView::setState(state);
        } else if (qlistview_setstate_callback != nullptr) {
            qlistview_setstate_callback(this, state);
        } else {
            QListView::setState(state);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scheduleDelayedItemsLayout() {
        if (qlistview_scheduledelayeditemslayout_isbase) {
            qlistview_scheduledelayeditemslayout_isbase = false;
            QListView::scheduleDelayedItemsLayout();
        } else if (qlistview_scheduledelayeditemslayout_callback != nullptr) {
            qlistview_scheduledelayeditemslayout_callback();
        } else {
            QListView::scheduleDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void executeDelayedItemsLayout() {
        if (qlistview_executedelayeditemslayout_isbase) {
            qlistview_executedelayeditemslayout_isbase = false;
            QListView::executeDelayedItemsLayout();
        } else if (qlistview_executedelayeditemslayout_callback != nullptr) {
            qlistview_executedelayeditemslayout_callback();
        } else {
            QListView::executeDelayedItemsLayout();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setDirtyRegion(const QRegion& region) {
        if (qlistview_setdirtyregion_isbase) {
            qlistview_setdirtyregion_isbase = false;
            QListView::setDirtyRegion(region);
        } else if (qlistview_setdirtyregion_callback != nullptr) {
            qlistview_setdirtyregion_callback(this, region);
        } else {
            QListView::setDirtyRegion(region);
        }
    }

    // Virtual method for C ABI access and custom callback
    void scrollDirtyRegion(int dx, int dy) {
        if (qlistview_scrolldirtyregion_isbase) {
            qlistview_scrolldirtyregion_isbase = false;
            QListView::scrollDirtyRegion(dx, dy);
        } else if (qlistview_scrolldirtyregion_callback != nullptr) {
            qlistview_scrolldirtyregion_callback(this, dx, dy);
        } else {
            QListView::scrollDirtyRegion(dx, dy);
        }
    }

    // Virtual method for C ABI access and custom callback
    QPoint dirtyRegionOffset() const {
        if (qlistview_dirtyregionoffset_isbase) {
            qlistview_dirtyregionoffset_isbase = false;
            return QListView::dirtyRegionOffset();
        } else if (qlistview_dirtyregionoffset_callback != nullptr) {
            return qlistview_dirtyregionoffset_callback();
        } else {
            return QListView::dirtyRegionOffset();
        }
    }

    // Virtual method for C ABI access and custom callback
    void startAutoScroll() {
        if (qlistview_startautoscroll_isbase) {
            qlistview_startautoscroll_isbase = false;
            QListView::startAutoScroll();
        } else if (qlistview_startautoscroll_callback != nullptr) {
            qlistview_startautoscroll_callback();
        } else {
            QListView::startAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void stopAutoScroll() {
        if (qlistview_stopautoscroll_isbase) {
            qlistview_stopautoscroll_isbase = false;
            QListView::stopAutoScroll();
        } else if (qlistview_stopautoscroll_callback != nullptr) {
            qlistview_stopautoscroll_callback();
        } else {
            QListView::stopAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    void doAutoScroll() {
        if (qlistview_doautoscroll_isbase) {
            qlistview_doautoscroll_isbase = false;
            QListView::doAutoScroll();
        } else if (qlistview_doautoscroll_callback != nullptr) {
            qlistview_doautoscroll_callback();
        } else {
            QListView::doAutoScroll();
        }
    }

    // Virtual method for C ABI access and custom callback
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const {
        if (qlistview_dropindicatorposition_isbase) {
            qlistview_dropindicatorposition_isbase = false;
            return QListView::dropIndicatorPosition();
        } else if (qlistview_dropindicatorposition_callback != nullptr) {
            return qlistview_dropindicatorposition_callback();
        } else {
            return QListView::dropIndicatorPosition();
        }
    }

    // Virtual method for C ABI access and custom callback
    void setViewportMargins(int left, int top, int right, int bottom) {
        if (qlistview_setviewportmargins_isbase) {
            qlistview_setviewportmargins_isbase = false;
            QListView::setViewportMargins(left, top, right, bottom);
        } else if (qlistview_setviewportmargins_callback != nullptr) {
            qlistview_setviewportmargins_callback(this, left, top, right, bottom);
        } else {
            QListView::setViewportMargins(left, top, right, bottom);
        }
    }

    // Virtual method for C ABI access and custom callback
    QMargins viewportMargins() const {
        if (qlistview_viewportmargins_isbase) {
            qlistview_viewportmargins_isbase = false;
            return QListView::viewportMargins();
        } else if (qlistview_viewportmargins_callback != nullptr) {
            return qlistview_viewportmargins_callback();
        } else {
            return QListView::viewportMargins();
        }
    }

    // Virtual method for C ABI access and custom callback
    void drawFrame(QPainter* param1) {
        if (qlistview_drawframe_isbase) {
            qlistview_drawframe_isbase = false;
            QListView::drawFrame(param1);
        } else if (qlistview_drawframe_callback != nullptr) {
            qlistview_drawframe_callback(this, param1);
        } else {
            QListView::drawFrame(param1);
        }
    }

    // Virtual method for C ABI access and custom callback
    void updateMicroFocus() {
        if (qlistview_updatemicrofocus_isbase) {
            qlistview_updatemicrofocus_isbase = false;
            QListView::updateMicroFocus();
        } else if (qlistview_updatemicrofocus_callback != nullptr) {
            qlistview_updatemicrofocus_callback();
        } else {
            QListView::updateMicroFocus();
        }
    }

    // Virtual method for C ABI access and custom callback
    void create() {
        if (qlistview_create_isbase) {
            qlistview_create_isbase = false;
            QListView::create();
        } else if (qlistview_create_callback != nullptr) {
            qlistview_create_callback();
        } else {
            QListView::create();
        }
    }

    // Virtual method for C ABI access and custom callback
    void destroy() {
        if (qlistview_destroy_isbase) {
            qlistview_destroy_isbase = false;
            QListView::destroy();
        } else if (qlistview_destroy_callback != nullptr) {
            qlistview_destroy_callback();
        } else {
            QListView::destroy();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusNextChild() {
        if (qlistview_focusnextchild_isbase) {
            qlistview_focusnextchild_isbase = false;
            return QListView::focusNextChild();
        } else if (qlistview_focusnextchild_callback != nullptr) {
            return qlistview_focusnextchild_callback();
        } else {
            return QListView::focusNextChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool focusPreviousChild() {
        if (qlistview_focuspreviouschild_isbase) {
            qlistview_focuspreviouschild_isbase = false;
            return QListView::focusPreviousChild();
        } else if (qlistview_focuspreviouschild_callback != nullptr) {
            return qlistview_focuspreviouschild_callback();
        } else {
            return QListView::focusPreviousChild();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qlistview_sender_isbase) {
            qlistview_sender_isbase = false;
            return QListView::sender();
        } else if (qlistview_sender_callback != nullptr) {
            return qlistview_sender_callback();
        } else {
            return QListView::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qlistview_sendersignalindex_isbase) {
            qlistview_sendersignalindex_isbase = false;
            return QListView::senderSignalIndex();
        } else if (qlistview_sendersignalindex_callback != nullptr) {
            return qlistview_sendersignalindex_callback();
        } else {
            return QListView::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qlistview_receivers_isbase) {
            qlistview_receivers_isbase = false;
            return QListView::receivers(signal);
        } else if (qlistview_receivers_callback != nullptr) {
            return qlistview_receivers_callback(this, signal);
        } else {
            return QListView::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qlistview_issignalconnected_isbase) {
            qlistview_issignalconnected_isbase = false;
            return QListView::isSignalConnected(signal);
        } else if (qlistview_issignalconnected_callback != nullptr) {
            return qlistview_issignalconnected_callback(this, signal);
        } else {
            return QListView::isSignalConnected(signal);
        }
    }
};

#endif
