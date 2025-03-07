#pragma once
#ifndef SRC_WEBENGINEC_LIBQWEBENGINEVIEW_H
#define SRC_WEBENGINEC_LIBQWEBENGINEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAction QAction;
typedef struct QActionEvent QActionEvent;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBackingStore QBackingStore;
typedef struct QBindingStorage QBindingStorage;
typedef struct QBitmap QBitmap;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QCursor QCursor;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEnterEvent QEnterEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QFontInfo QFontInfo;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGraphicsEffect QGraphicsEffect;
typedef struct QGraphicsProxyWidget QGraphicsProxyWidget;
typedef struct QHideEvent QHideEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QLayout QLayout;
typedef struct QLocale QLocale;
typedef struct QMargins QMargins;
typedef struct QMenu QMenu;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPageLayout QPageLayout;
typedef struct QPageRanges QPageRanges;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPalette QPalette;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QPointF QPointF;
typedef struct QPrinter QPrinter;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScreen QScreen;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QSizePolicy QSizePolicy;
typedef struct QStyle QStyle;
typedef struct QTabletEvent QTabletEvent;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWebEngineContextMenuRequest QWebEngineContextMenuRequest;
typedef struct QWebEngineHistory QWebEngineHistory;
typedef struct QWebEngineHttpRequest QWebEngineHttpRequest;
typedef struct QWebEnginePage QWebEnginePage;
typedef struct QWebEngineProfile QWebEngineProfile;
typedef struct QWebEngineSettings QWebEngineSettings;
typedef struct QWebEngineView QWebEngineView;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
#endif

QWebEngineView* QWebEngineView_new(QWidget* parent);
QWebEngineView* QWebEngineView_new2();
QWebEngineView* QWebEngineView_new3(QWebEngineProfile* profile);
QWebEngineView* QWebEngineView_new4(QWebEnginePage* page);
QWebEngineView* QWebEngineView_new5(QWebEngineProfile* profile, QWidget* parent);
QWebEngineView* QWebEngineView_new6(QWebEnginePage* page, QWidget* parent);
QMetaObject* QWebEngineView_MetaObject(const QWebEngineView* self);
void* QWebEngineView_Metacast(QWebEngineView* self, const char* param1);
int QWebEngineView_Metacall(QWebEngineView* self, int param1, int param2, void** param3);
void QWebEngineView_OnMetacall(QWebEngineView* self, intptr_t slot);
int QWebEngineView_QBaseMetacall(QWebEngineView* self, int param1, int param2, void** param3);
libqt_string QWebEngineView_Tr(const char* s);
QWebEngineView* QWebEngineView_ForPage(QWebEnginePage* page);
QWebEnginePage* QWebEngineView_Page(const QWebEngineView* self);
void QWebEngineView_SetPage(QWebEngineView* self, QWebEnginePage* page);
void QWebEngineView_Load(QWebEngineView* self, QUrl* url);
void QWebEngineView_LoadWithRequest(QWebEngineView* self, QWebEngineHttpRequest* request);
void QWebEngineView_SetHtml(QWebEngineView* self, libqt_string html);
void QWebEngineView_SetContent(QWebEngineView* self, libqt_string data);
QWebEngineHistory* QWebEngineView_History(const QWebEngineView* self);
libqt_string QWebEngineView_Title(const QWebEngineView* self);
void QWebEngineView_SetUrl(QWebEngineView* self, QUrl* url);
QUrl* QWebEngineView_Url(const QWebEngineView* self);
QUrl* QWebEngineView_IconUrl(const QWebEngineView* self);
QIcon* QWebEngineView_Icon(const QWebEngineView* self);
bool QWebEngineView_HasSelection(const QWebEngineView* self);
libqt_string QWebEngineView_SelectedText(const QWebEngineView* self);
QAction* QWebEngineView_PageAction(const QWebEngineView* self, int action);
void QWebEngineView_TriggerPageAction(QWebEngineView* self, int action);
double QWebEngineView_ZoomFactor(const QWebEngineView* self);
void QWebEngineView_SetZoomFactor(QWebEngineView* self, double factor);
QSize* QWebEngineView_SizeHint(const QWebEngineView* self);
void QWebEngineView_OnSizeHint(const QWebEngineView* self, intptr_t slot);
QSize* QWebEngineView_QBaseSizeHint(const QWebEngineView* self);
QWebEngineSettings* QWebEngineView_Settings(const QWebEngineView* self);
QMenu* QWebEngineView_CreateStandardContextMenu(QWebEngineView* self);
QWebEngineContextMenuRequest* QWebEngineView_LastContextMenuRequest(const QWebEngineView* self);
void QWebEngineView_PrintToPdf(QWebEngineView* self, libqt_string filePath);
void QWebEngineView_Print(QWebEngineView* self, QPrinter* printer);
void QWebEngineView_Stop(QWebEngineView* self);
void QWebEngineView_Back(QWebEngineView* self);
void QWebEngineView_Forward(QWebEngineView* self);
void QWebEngineView_Reload(QWebEngineView* self);
void QWebEngineView_LoadStarted(QWebEngineView* self);
void QWebEngineView_Connect_LoadStarted(QWebEngineView* self, intptr_t slot);
void QWebEngineView_LoadProgress(QWebEngineView* self, int progress);
void QWebEngineView_Connect_LoadProgress(QWebEngineView* self, intptr_t slot);
void QWebEngineView_LoadFinished(QWebEngineView* self, bool param1);
void QWebEngineView_Connect_LoadFinished(QWebEngineView* self, intptr_t slot);
void QWebEngineView_TitleChanged(QWebEngineView* self, libqt_string title);
void QWebEngineView_Connect_TitleChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_SelectionChanged(QWebEngineView* self);
void QWebEngineView_Connect_SelectionChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_UrlChanged(QWebEngineView* self, QUrl* param1);
void QWebEngineView_Connect_UrlChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_IconUrlChanged(QWebEngineView* self, QUrl* param1);
void QWebEngineView_Connect_IconUrlChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_IconChanged(QWebEngineView* self, QIcon* param1);
void QWebEngineView_Connect_IconChanged(QWebEngineView* self, intptr_t slot);
void QWebEngineView_RenderProcessTerminated(QWebEngineView* self, int terminationStatus, int exitCode);
void QWebEngineView_Connect_RenderProcessTerminated(QWebEngineView* self, intptr_t slot);
void QWebEngineView_PdfPrintingFinished(QWebEngineView* self, libqt_string filePath, bool success);
void QWebEngineView_Connect_PdfPrintingFinished(QWebEngineView* self, intptr_t slot);
void QWebEngineView_PrintRequested(QWebEngineView* self);
void QWebEngineView_Connect_PrintRequested(QWebEngineView* self, intptr_t slot);
void QWebEngineView_PrintFinished(QWebEngineView* self, bool success);
void QWebEngineView_Connect_PrintFinished(QWebEngineView* self, intptr_t slot);
QWebEngineView* QWebEngineView_CreateWindow(QWebEngineView* self, int typeVal);
void QWebEngineView_OnCreateWindow(QWebEngineView* self, intptr_t slot);
QWebEngineView* QWebEngineView_QBaseCreateWindow(QWebEngineView* self, int typeVal);
void QWebEngineView_ContextMenuEvent(QWebEngineView* self, QContextMenuEvent* param1);
void QWebEngineView_OnContextMenuEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseContextMenuEvent(QWebEngineView* self, QContextMenuEvent* param1);
bool QWebEngineView_Event(QWebEngineView* self, QEvent* param1);
void QWebEngineView_OnEvent(QWebEngineView* self, intptr_t slot);
bool QWebEngineView_QBaseEvent(QWebEngineView* self, QEvent* param1);
void QWebEngineView_ShowEvent(QWebEngineView* self, QShowEvent* param1);
void QWebEngineView_OnShowEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseShowEvent(QWebEngineView* self, QShowEvent* param1);
void QWebEngineView_HideEvent(QWebEngineView* self, QHideEvent* param1);
void QWebEngineView_OnHideEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseHideEvent(QWebEngineView* self, QHideEvent* param1);
void QWebEngineView_CloseEvent(QWebEngineView* self, QCloseEvent* param1);
void QWebEngineView_OnCloseEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseCloseEvent(QWebEngineView* self, QCloseEvent* param1);
void QWebEngineView_DragEnterEvent(QWebEngineView* self, QDragEnterEvent* e);
void QWebEngineView_OnDragEnterEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseDragEnterEvent(QWebEngineView* self, QDragEnterEvent* e);
void QWebEngineView_DragLeaveEvent(QWebEngineView* self, QDragLeaveEvent* e);
void QWebEngineView_OnDragLeaveEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseDragLeaveEvent(QWebEngineView* self, QDragLeaveEvent* e);
void QWebEngineView_DragMoveEvent(QWebEngineView* self, QDragMoveEvent* e);
void QWebEngineView_OnDragMoveEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseDragMoveEvent(QWebEngineView* self, QDragMoveEvent* e);
void QWebEngineView_DropEvent(QWebEngineView* self, QDropEvent* e);
void QWebEngineView_OnDropEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseDropEvent(QWebEngineView* self, QDropEvent* e);
libqt_string QWebEngineView_Tr2(const char* s, const char* c);
libqt_string QWebEngineView_Tr3(const char* s, const char* c, int n);
void QWebEngineView_SetHtml2(QWebEngineView* self, libqt_string html, QUrl* baseUrl);
void QWebEngineView_SetContent2(QWebEngineView* self, libqt_string data, libqt_string mimeType);
void QWebEngineView_SetContent3(QWebEngineView* self, libqt_string data, libqt_string mimeType, QUrl* baseUrl);
void QWebEngineView_TriggerPageAction2(QWebEngineView* self, int action, bool checked);
void QWebEngineView_PrintToPdf2(QWebEngineView* self, libqt_string filePath, QPageLayout* layout);
void QWebEngineView_PrintToPdf3(QWebEngineView* self, libqt_string filePath, QPageLayout* layout, QPageRanges* ranges);
int QWebEngineView_DevType(const QWebEngineView* self);
void QWebEngineView_OnDevType(const QWebEngineView* self, intptr_t slot);
int QWebEngineView_QBaseDevType(const QWebEngineView* self);
void QWebEngineView_SetVisible(QWebEngineView* self, bool visible);
void QWebEngineView_OnSetVisible(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseSetVisible(QWebEngineView* self, bool visible);
QSize* QWebEngineView_MinimumSizeHint(const QWebEngineView* self);
void QWebEngineView_OnMinimumSizeHint(const QWebEngineView* self, intptr_t slot);
QSize* QWebEngineView_QBaseMinimumSizeHint(const QWebEngineView* self);
int QWebEngineView_HeightForWidth(const QWebEngineView* self, int param1);
void QWebEngineView_OnHeightForWidth(const QWebEngineView* self, intptr_t slot);
int QWebEngineView_QBaseHeightForWidth(const QWebEngineView* self, int param1);
bool QWebEngineView_HasHeightForWidth(const QWebEngineView* self);
void QWebEngineView_OnHasHeightForWidth(const QWebEngineView* self, intptr_t slot);
bool QWebEngineView_QBaseHasHeightForWidth(const QWebEngineView* self);
QPaintEngine* QWebEngineView_PaintEngine(const QWebEngineView* self);
void QWebEngineView_OnPaintEngine(const QWebEngineView* self, intptr_t slot);
QPaintEngine* QWebEngineView_QBasePaintEngine(const QWebEngineView* self);
void QWebEngineView_MousePressEvent(QWebEngineView* self, QMouseEvent* event);
void QWebEngineView_OnMousePressEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseMousePressEvent(QWebEngineView* self, QMouseEvent* event);
void QWebEngineView_MouseReleaseEvent(QWebEngineView* self, QMouseEvent* event);
void QWebEngineView_OnMouseReleaseEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseMouseReleaseEvent(QWebEngineView* self, QMouseEvent* event);
void QWebEngineView_MouseDoubleClickEvent(QWebEngineView* self, QMouseEvent* event);
void QWebEngineView_OnMouseDoubleClickEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseMouseDoubleClickEvent(QWebEngineView* self, QMouseEvent* event);
void QWebEngineView_MouseMoveEvent(QWebEngineView* self, QMouseEvent* event);
void QWebEngineView_OnMouseMoveEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseMouseMoveEvent(QWebEngineView* self, QMouseEvent* event);
void QWebEngineView_WheelEvent(QWebEngineView* self, QWheelEvent* event);
void QWebEngineView_OnWheelEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseWheelEvent(QWebEngineView* self, QWheelEvent* event);
void QWebEngineView_KeyPressEvent(QWebEngineView* self, QKeyEvent* event);
void QWebEngineView_OnKeyPressEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseKeyPressEvent(QWebEngineView* self, QKeyEvent* event);
void QWebEngineView_KeyReleaseEvent(QWebEngineView* self, QKeyEvent* event);
void QWebEngineView_OnKeyReleaseEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseKeyReleaseEvent(QWebEngineView* self, QKeyEvent* event);
void QWebEngineView_FocusInEvent(QWebEngineView* self, QFocusEvent* event);
void QWebEngineView_OnFocusInEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseFocusInEvent(QWebEngineView* self, QFocusEvent* event);
void QWebEngineView_FocusOutEvent(QWebEngineView* self, QFocusEvent* event);
void QWebEngineView_OnFocusOutEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseFocusOutEvent(QWebEngineView* self, QFocusEvent* event);
void QWebEngineView_EnterEvent(QWebEngineView* self, QEnterEvent* event);
void QWebEngineView_OnEnterEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseEnterEvent(QWebEngineView* self, QEnterEvent* event);
void QWebEngineView_LeaveEvent(QWebEngineView* self, QEvent* event);
void QWebEngineView_OnLeaveEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseLeaveEvent(QWebEngineView* self, QEvent* event);
void QWebEngineView_PaintEvent(QWebEngineView* self, QPaintEvent* event);
void QWebEngineView_OnPaintEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBasePaintEvent(QWebEngineView* self, QPaintEvent* event);
void QWebEngineView_MoveEvent(QWebEngineView* self, QMoveEvent* event);
void QWebEngineView_OnMoveEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseMoveEvent(QWebEngineView* self, QMoveEvent* event);
void QWebEngineView_ResizeEvent(QWebEngineView* self, QResizeEvent* event);
void QWebEngineView_OnResizeEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseResizeEvent(QWebEngineView* self, QResizeEvent* event);
void QWebEngineView_TabletEvent(QWebEngineView* self, QTabletEvent* event);
void QWebEngineView_OnTabletEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseTabletEvent(QWebEngineView* self, QTabletEvent* event);
void QWebEngineView_ActionEvent(QWebEngineView* self, QActionEvent* event);
void QWebEngineView_OnActionEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseActionEvent(QWebEngineView* self, QActionEvent* event);
bool QWebEngineView_NativeEvent(QWebEngineView* self, libqt_string eventType, void* message, intptr_t* result);
void QWebEngineView_OnNativeEvent(QWebEngineView* self, intptr_t slot);
bool QWebEngineView_QBaseNativeEvent(QWebEngineView* self, libqt_string eventType, void* message, intptr_t* result);
void QWebEngineView_ChangeEvent(QWebEngineView* self, QEvent* param1);
void QWebEngineView_OnChangeEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseChangeEvent(QWebEngineView* self, QEvent* param1);
void QWebEngineView_InputMethodEvent(QWebEngineView* self, QInputMethodEvent* param1);
void QWebEngineView_OnInputMethodEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseInputMethodEvent(QWebEngineView* self, QInputMethodEvent* param1);
QVariant* QWebEngineView_InputMethodQuery(const QWebEngineView* self, int param1);
void QWebEngineView_OnInputMethodQuery(const QWebEngineView* self, intptr_t slot);
QVariant* QWebEngineView_QBaseInputMethodQuery(const QWebEngineView* self, int param1);
bool QWebEngineView_FocusNextPrevChild(QWebEngineView* self, bool next);
void QWebEngineView_OnFocusNextPrevChild(QWebEngineView* self, intptr_t slot);
bool QWebEngineView_QBaseFocusNextPrevChild(QWebEngineView* self, bool next);
bool QWebEngineView_EventFilter(QWebEngineView* self, QObject* watched, QEvent* event);
void QWebEngineView_OnEventFilter(QWebEngineView* self, intptr_t slot);
bool QWebEngineView_QBaseEventFilter(QWebEngineView* self, QObject* watched, QEvent* event);
void QWebEngineView_TimerEvent(QWebEngineView* self, QTimerEvent* event);
void QWebEngineView_OnTimerEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseTimerEvent(QWebEngineView* self, QTimerEvent* event);
void QWebEngineView_ChildEvent(QWebEngineView* self, QChildEvent* event);
void QWebEngineView_OnChildEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseChildEvent(QWebEngineView* self, QChildEvent* event);
void QWebEngineView_CustomEvent(QWebEngineView* self, QEvent* event);
void QWebEngineView_OnCustomEvent(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseCustomEvent(QWebEngineView* self, QEvent* event);
void QWebEngineView_ConnectNotify(QWebEngineView* self, QMetaMethod* signal);
void QWebEngineView_OnConnectNotify(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseConnectNotify(QWebEngineView* self, QMetaMethod* signal);
void QWebEngineView_DisconnectNotify(QWebEngineView* self, QMetaMethod* signal);
void QWebEngineView_OnDisconnectNotify(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseDisconnectNotify(QWebEngineView* self, QMetaMethod* signal);
int QWebEngineView_Metric(const QWebEngineView* self, int param1);
void QWebEngineView_OnMetric(const QWebEngineView* self, intptr_t slot);
int QWebEngineView_QBaseMetric(const QWebEngineView* self, int param1);
void QWebEngineView_InitPainter(const QWebEngineView* self, QPainter* painter);
void QWebEngineView_OnInitPainter(const QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseInitPainter(const QWebEngineView* self, QPainter* painter);
QPaintDevice* QWebEngineView_Redirected(const QWebEngineView* self, QPoint* offset);
void QWebEngineView_OnRedirected(const QWebEngineView* self, intptr_t slot);
QPaintDevice* QWebEngineView_QBaseRedirected(const QWebEngineView* self, QPoint* offset);
QPainter* QWebEngineView_SharedPainter(const QWebEngineView* self);
void QWebEngineView_OnSharedPainter(const QWebEngineView* self, intptr_t slot);
QPainter* QWebEngineView_QBaseSharedPainter(const QWebEngineView* self);
void QWebEngineView_UpdateMicroFocus(QWebEngineView* self);
void QWebEngineView_OnUpdateMicroFocus(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseUpdateMicroFocus(QWebEngineView* self);
void QWebEngineView_Create(QWebEngineView* self);
void QWebEngineView_OnCreate(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseCreate(QWebEngineView* self);
void QWebEngineView_Destroy(QWebEngineView* self);
void QWebEngineView_OnDestroy(QWebEngineView* self, intptr_t slot);
void QWebEngineView_QBaseDestroy(QWebEngineView* self);
bool QWebEngineView_FocusNextChild(QWebEngineView* self);
void QWebEngineView_OnFocusNextChild(QWebEngineView* self, intptr_t slot);
bool QWebEngineView_QBaseFocusNextChild(QWebEngineView* self);
bool QWebEngineView_FocusPreviousChild(QWebEngineView* self);
void QWebEngineView_OnFocusPreviousChild(QWebEngineView* self, intptr_t slot);
bool QWebEngineView_QBaseFocusPreviousChild(QWebEngineView* self);
QObject* QWebEngineView_Sender(const QWebEngineView* self);
void QWebEngineView_OnSender(const QWebEngineView* self, intptr_t slot);
QObject* QWebEngineView_QBaseSender(const QWebEngineView* self);
int QWebEngineView_SenderSignalIndex(const QWebEngineView* self);
void QWebEngineView_OnSenderSignalIndex(const QWebEngineView* self, intptr_t slot);
int QWebEngineView_QBaseSenderSignalIndex(const QWebEngineView* self);
int QWebEngineView_Receivers(const QWebEngineView* self, const char* signal);
void QWebEngineView_OnReceivers(const QWebEngineView* self, intptr_t slot);
int QWebEngineView_QBaseReceivers(const QWebEngineView* self, const char* signal);
bool QWebEngineView_IsSignalConnected(const QWebEngineView* self, QMetaMethod* signal);
void QWebEngineView_OnIsSignalConnected(const QWebEngineView* self, intptr_t slot);
bool QWebEngineView_QBaseIsSignalConnected(const QWebEngineView* self, QMetaMethod* signal);
void QWebEngineView_Delete(QWebEngineView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
