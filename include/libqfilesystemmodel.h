#pragma once
#ifndef SRCC_LIBQFILESYSTEMMODEL_H
#define SRCC_LIBQFILESYSTEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAnyStringView QAnyStringView;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QDateTime QDateTime;
typedef struct QDir QDir;
typedef struct QEvent QEvent;
typedef struct QFileInfo QFileInfo;
typedef struct QFileSystemModel QFileSystemModel;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QModelRoleDataSpan QModelRoleDataSpan;
typedef struct QObject QObject;
typedef struct QPersistentModelIndex QPersistentModelIndex;
typedef struct QSize QSize;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QFileSystemModel::Option Option; // C++ enum
typedef QFileSystemModel::Options Options; // C++ QFlags
typedef QFileSystemModel::Roles Roles; // C++ enum
#else
typedef int Option; // C ABI enum
typedef int Options; // C ABI QFlags
typedef int Roles; // C ABI enum
#endif

QFileSystemModel* QFileSystemModel_new();
QFileSystemModel* QFileSystemModel_new2(QObject* parent);
QMetaObject* QFileSystemModel_MetaObject(const QFileSystemModel* self);
void* QFileSystemModel_Metacast(QFileSystemModel* self, const char* param1);
int QFileSystemModel_Metacall(QFileSystemModel* self, int param1, int param2, void** param3);
void QFileSystemModel_OnMetacall(QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_QBaseMetacall(QFileSystemModel* self, int param1, int param2, void** param3);
libqt_string QFileSystemModel_Tr(const char* s);
void QFileSystemModel_RootPathChanged(QFileSystemModel* self, libqt_string newPath);
void QFileSystemModel_Connect_RootPathChanged(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_FileRenamed(QFileSystemModel* self, libqt_string path, libqt_string oldName, libqt_string newName);
void QFileSystemModel_Connect_FileRenamed(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_DirectoryLoaded(QFileSystemModel* self, libqt_string path);
void QFileSystemModel_Connect_DirectoryLoaded(QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_Index(const QFileSystemModel* self, int row, int column, QModelIndex* parent);
void QFileSystemModel_OnIndex(const QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_QBaseIndex(const QFileSystemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QFileSystemModel_IndexWithPath(const QFileSystemModel* self, libqt_string path);
QModelIndex* QFileSystemModel_Parent(const QFileSystemModel* self, QModelIndex* child);
void QFileSystemModel_OnParent(const QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_QBaseParent(const QFileSystemModel* self, QModelIndex* child);
QModelIndex* QFileSystemModel_Sibling(const QFileSystemModel* self, int row, int column, QModelIndex* idx);
void QFileSystemModel_OnSibling(const QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_QBaseSibling(const QFileSystemModel* self, int row, int column, QModelIndex* idx);
bool QFileSystemModel_HasChildren(const QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_OnHasChildren(const QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseHasChildren(const QFileSystemModel* self, QModelIndex* parent);
bool QFileSystemModel_CanFetchMore(const QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_OnCanFetchMore(const QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseCanFetchMore(const QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_FetchMore(QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_OnFetchMore(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseFetchMore(QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_RowCount(const QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_OnRowCount(const QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_QBaseRowCount(const QFileSystemModel* self, QModelIndex* parent);
int QFileSystemModel_ColumnCount(const QFileSystemModel* self, QModelIndex* parent);
void QFileSystemModel_OnColumnCount(const QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_QBaseColumnCount(const QFileSystemModel* self, QModelIndex* parent);
QVariant* QFileSystemModel_MyComputer(const QFileSystemModel* self);
QVariant* QFileSystemModel_Data(const QFileSystemModel* self, QModelIndex* index, int role);
void QFileSystemModel_OnData(const QFileSystemModel* self, intptr_t slot);
QVariant* QFileSystemModel_QBaseData(const QFileSystemModel* self, QModelIndex* index, int role);
bool QFileSystemModel_SetData(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role);
void QFileSystemModel_OnSetData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseSetData(QFileSystemModel* self, QModelIndex* index, QVariant* value, int role);
QVariant* QFileSystemModel_HeaderData(const QFileSystemModel* self, int section, int orientation, int role);
void QFileSystemModel_OnHeaderData(const QFileSystemModel* self, intptr_t slot);
QVariant* QFileSystemModel_QBaseHeaderData(const QFileSystemModel* self, int section, int orientation, int role);
int QFileSystemModel_Flags(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_OnFlags(const QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_QBaseFlags(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_Sort(QFileSystemModel* self, int column, int order);
void QFileSystemModel_OnSort(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseSort(QFileSystemModel* self, int column, int order);
libqt_list /* of libqt_string */ QFileSystemModel_MimeTypes(const QFileSystemModel* self);
void QFileSystemModel_OnMimeTypes(const QFileSystemModel* self, intptr_t slot);
libqt_list /* of libqt_string */ QFileSystemModel_QBaseMimeTypes(const QFileSystemModel* self);
QMimeData* QFileSystemModel_MimeData(const QFileSystemModel* self, libqt_list /* of QModelIndex* */ indexes);
void QFileSystemModel_OnMimeData(const QFileSystemModel* self, intptr_t slot);
QMimeData* QFileSystemModel_QBaseMimeData(const QFileSystemModel* self, libqt_list /* of QModelIndex* */ indexes);
bool QFileSystemModel_DropMimeData(QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QFileSystemModel_OnDropMimeData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseDropMimeData(QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QFileSystemModel_SupportedDropActions(const QFileSystemModel* self);
void QFileSystemModel_OnSupportedDropActions(const QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_QBaseSupportedDropActions(const QFileSystemModel* self);
libqt_map /* of int to libqt_string */ QFileSystemModel_RoleNames(const QFileSystemModel* self);
void QFileSystemModel_OnRoleNames(const QFileSystemModel* self, intptr_t slot);
libqt_map /* of int to libqt_string */ QFileSystemModel_QBaseRoleNames(const QFileSystemModel* self);
QModelIndex* QFileSystemModel_SetRootPath(QFileSystemModel* self, libqt_string path);
libqt_string QFileSystemModel_RootPath(const QFileSystemModel* self);
QDir* QFileSystemModel_RootDirectory(const QFileSystemModel* self);
void QFileSystemModel_SetIconProvider(QFileSystemModel* self, QAbstractFileIconProvider* provider);
QAbstractFileIconProvider* QFileSystemModel_IconProvider(const QFileSystemModel* self);
void QFileSystemModel_SetFilter(QFileSystemModel* self, int filters);
int QFileSystemModel_Filter(const QFileSystemModel* self);
void QFileSystemModel_SetResolveSymlinks(QFileSystemModel* self, bool enable);
bool QFileSystemModel_ResolveSymlinks(const QFileSystemModel* self);
void QFileSystemModel_SetReadOnly(QFileSystemModel* self, bool enable);
bool QFileSystemModel_IsReadOnly(const QFileSystemModel* self);
void QFileSystemModel_SetNameFilterDisables(QFileSystemModel* self, bool enable);
bool QFileSystemModel_NameFilterDisables(const QFileSystemModel* self);
void QFileSystemModel_SetNameFilters(QFileSystemModel* self, libqt_list /* of libqt_string */ filters);
libqt_list /* of libqt_string */ QFileSystemModel_NameFilters(const QFileSystemModel* self);
void QFileSystemModel_SetOption(QFileSystemModel* self, int option);
bool QFileSystemModel_TestOption(const QFileSystemModel* self, int option);
void QFileSystemModel_SetOptions(QFileSystemModel* self, int options);
int QFileSystemModel_Options(const QFileSystemModel* self);
libqt_string QFileSystemModel_FilePath(const QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_IsDir(const QFileSystemModel* self, QModelIndex* index);
long long QFileSystemModel_Size(const QFileSystemModel* self, QModelIndex* index);
libqt_string QFileSystemModel_Type(const QFileSystemModel* self, QModelIndex* index);
QDateTime* QFileSystemModel_LastModified(const QFileSystemModel* self, QModelIndex* index);
QModelIndex* QFileSystemModel_Mkdir(QFileSystemModel* self, QModelIndex* parent, libqt_string name);
bool QFileSystemModel_Rmdir(QFileSystemModel* self, QModelIndex* index);
libqt_string QFileSystemModel_FileName(const QFileSystemModel* self, QModelIndex* index);
QIcon* QFileSystemModel_FileIcon(const QFileSystemModel* self, QModelIndex* index);
int QFileSystemModel_Permissions(const QFileSystemModel* self, QModelIndex* index);
QFileInfo* QFileSystemModel_FileInfo(const QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_Remove(QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_TimerEvent(QFileSystemModel* self, QTimerEvent* event);
void QFileSystemModel_OnTimerEvent(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseTimerEvent(QFileSystemModel* self, QTimerEvent* event);
bool QFileSystemModel_Event(QFileSystemModel* self, QEvent* event);
void QFileSystemModel_OnEvent(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseEvent(QFileSystemModel* self, QEvent* event);
libqt_string QFileSystemModel_Tr2(const char* s, const char* c);
libqt_string QFileSystemModel_Tr3(const char* s, const char* c, int n);
QModelIndex* QFileSystemModel_Index2(const QFileSystemModel* self, libqt_string path, int column);
QVariant* QFileSystemModel_MyComputer1(const QFileSystemModel* self, int role);
void QFileSystemModel_SetOption2(QFileSystemModel* self, int option, bool on);
bool QFileSystemModel_SetHeaderData(QFileSystemModel* self, int section, int orientation, QVariant* value, int role);
void QFileSystemModel_OnSetHeaderData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseSetHeaderData(QFileSystemModel* self, int section, int orientation, QVariant* value, int role);
libqt_map /* of int to QVariant* */ QFileSystemModel_ItemData(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_OnItemData(const QFileSystemModel* self, intptr_t slot);
libqt_map /* of int to QVariant* */ QFileSystemModel_QBaseItemData(const QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_SetItemData(QFileSystemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles);
void QFileSystemModel_OnSetItemData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseSetItemData(QFileSystemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles);
bool QFileSystemModel_ClearItemData(QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_OnClearItemData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseClearItemData(QFileSystemModel* self, QModelIndex* index);
bool QFileSystemModel_CanDropMimeData(const QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QFileSystemModel_OnCanDropMimeData(const QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseCanDropMimeData(const QFileSystemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
int QFileSystemModel_SupportedDragActions(const QFileSystemModel* self);
void QFileSystemModel_OnSupportedDragActions(const QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_QBaseSupportedDragActions(const QFileSystemModel* self);
bool QFileSystemModel_InsertRows(QFileSystemModel* self, int row, int count, QModelIndex* parent);
void QFileSystemModel_OnInsertRows(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseInsertRows(QFileSystemModel* self, int row, int count, QModelIndex* parent);
bool QFileSystemModel_InsertColumns(QFileSystemModel* self, int column, int count, QModelIndex* parent);
void QFileSystemModel_OnInsertColumns(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseInsertColumns(QFileSystemModel* self, int column, int count, QModelIndex* parent);
bool QFileSystemModel_RemoveRows(QFileSystemModel* self, int row, int count, QModelIndex* parent);
void QFileSystemModel_OnRemoveRows(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseRemoveRows(QFileSystemModel* self, int row, int count, QModelIndex* parent);
bool QFileSystemModel_RemoveColumns(QFileSystemModel* self, int column, int count, QModelIndex* parent);
void QFileSystemModel_OnRemoveColumns(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseRemoveColumns(QFileSystemModel* self, int column, int count, QModelIndex* parent);
bool QFileSystemModel_MoveRows(QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
void QFileSystemModel_OnMoveRows(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseMoveRows(QFileSystemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QFileSystemModel_MoveColumns(QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
void QFileSystemModel_OnMoveColumns(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseMoveColumns(QFileSystemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
QModelIndex* QFileSystemModel_Buddy(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_OnBuddy(const QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_QBaseBuddy(const QFileSystemModel* self, QModelIndex* index);
libqt_list /* of QModelIndex* */ QFileSystemModel_Match(const QFileSystemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
void QFileSystemModel_OnMatch(const QFileSystemModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QFileSystemModel_QBaseMatch(const QFileSystemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
QSize* QFileSystemModel_Span(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_OnSpan(const QFileSystemModel* self, intptr_t slot);
QSize* QFileSystemModel_QBaseSpan(const QFileSystemModel* self, QModelIndex* index);
void QFileSystemModel_MultiData(const QFileSystemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
void QFileSystemModel_OnMultiData(const QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseMultiData(const QFileSystemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan);
bool QFileSystemModel_Submit(QFileSystemModel* self);
void QFileSystemModel_OnSubmit(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseSubmit(QFileSystemModel* self);
void QFileSystemModel_Revert(QFileSystemModel* self);
void QFileSystemModel_OnRevert(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseRevert(QFileSystemModel* self);
void QFileSystemModel_ResetInternalData(QFileSystemModel* self);
void QFileSystemModel_OnResetInternalData(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseResetInternalData(QFileSystemModel* self);
bool QFileSystemModel_EventFilter(QFileSystemModel* self, QObject* watched, QEvent* event);
void QFileSystemModel_OnEventFilter(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseEventFilter(QFileSystemModel* self, QObject* watched, QEvent* event);
void QFileSystemModel_ChildEvent(QFileSystemModel* self, QChildEvent* event);
void QFileSystemModel_OnChildEvent(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseChildEvent(QFileSystemModel* self, QChildEvent* event);
void QFileSystemModel_CustomEvent(QFileSystemModel* self, QEvent* event);
void QFileSystemModel_OnCustomEvent(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseCustomEvent(QFileSystemModel* self, QEvent* event);
void QFileSystemModel_ConnectNotify(QFileSystemModel* self, QMetaMethod* signal);
void QFileSystemModel_OnConnectNotify(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseConnectNotify(QFileSystemModel* self, QMetaMethod* signal);
void QFileSystemModel_DisconnectNotify(QFileSystemModel* self, QMetaMethod* signal);
void QFileSystemModel_OnDisconnectNotify(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseDisconnectNotify(QFileSystemModel* self, QMetaMethod* signal);
QModelIndex* QFileSystemModel_CreateIndex(const QFileSystemModel* self, int row, int column);
void QFileSystemModel_OnCreateIndex(const QFileSystemModel* self, intptr_t slot);
QModelIndex* QFileSystemModel_QBaseCreateIndex(const QFileSystemModel* self, int row, int column);
void QFileSystemModel_EncodeData(const QFileSystemModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
void QFileSystemModel_OnEncodeData(const QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseEncodeData(const QFileSystemModel* self, libqt_list /* of QModelIndex* */ indexes, QDataStream* stream);
bool QFileSystemModel_DecodeData(QFileSystemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QFileSystemModel_OnDecodeData(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseDecodeData(QFileSystemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QFileSystemModel_BeginInsertRows(QFileSystemModel* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_OnBeginInsertRows(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseBeginInsertRows(QFileSystemModel* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_EndInsertRows(QFileSystemModel* self);
void QFileSystemModel_OnEndInsertRows(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseEndInsertRows(QFileSystemModel* self);
void QFileSystemModel_BeginRemoveRows(QFileSystemModel* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_OnBeginRemoveRows(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseBeginRemoveRows(QFileSystemModel* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_EndRemoveRows(QFileSystemModel* self);
void QFileSystemModel_OnEndRemoveRows(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseEndRemoveRows(QFileSystemModel* self);
bool QFileSystemModel_BeginMoveRows(QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QFileSystemModel_OnBeginMoveRows(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseBeginMoveRows(QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QFileSystemModel_EndMoveRows(QFileSystemModel* self);
void QFileSystemModel_OnEndMoveRows(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseEndMoveRows(QFileSystemModel* self);
void QFileSystemModel_BeginInsertColumns(QFileSystemModel* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_OnBeginInsertColumns(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseBeginInsertColumns(QFileSystemModel* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_EndInsertColumns(QFileSystemModel* self);
void QFileSystemModel_OnEndInsertColumns(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseEndInsertColumns(QFileSystemModel* self);
void QFileSystemModel_BeginRemoveColumns(QFileSystemModel* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_OnBeginRemoveColumns(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseBeginRemoveColumns(QFileSystemModel* self, QModelIndex* parent, int first, int last);
void QFileSystemModel_EndRemoveColumns(QFileSystemModel* self);
void QFileSystemModel_OnEndRemoveColumns(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseEndRemoveColumns(QFileSystemModel* self);
bool QFileSystemModel_BeginMoveColumns(QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QFileSystemModel_OnBeginMoveColumns(QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseBeginMoveColumns(QFileSystemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QFileSystemModel_EndMoveColumns(QFileSystemModel* self);
void QFileSystemModel_OnEndMoveColumns(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseEndMoveColumns(QFileSystemModel* self);
void QFileSystemModel_BeginResetModel(QFileSystemModel* self);
void QFileSystemModel_OnBeginResetModel(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseBeginResetModel(QFileSystemModel* self);
void QFileSystemModel_EndResetModel(QFileSystemModel* self);
void QFileSystemModel_OnEndResetModel(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseEndResetModel(QFileSystemModel* self);
void QFileSystemModel_ChangePersistentIndex(QFileSystemModel* self, QModelIndex* from, QModelIndex* to);
void QFileSystemModel_OnChangePersistentIndex(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseChangePersistentIndex(QFileSystemModel* self, QModelIndex* from, QModelIndex* to);
void QFileSystemModel_ChangePersistentIndexList(QFileSystemModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);
void QFileSystemModel_OnChangePersistentIndexList(QFileSystemModel* self, intptr_t slot);
void QFileSystemModel_QBaseChangePersistentIndexList(QFileSystemModel* self, libqt_list /* of QModelIndex* */ from, libqt_list /* of QModelIndex* */ to);
libqt_list /* of QModelIndex* */ QFileSystemModel_PersistentIndexList(const QFileSystemModel* self);
void QFileSystemModel_OnPersistentIndexList(const QFileSystemModel* self, intptr_t slot);
libqt_list /* of QModelIndex* */ QFileSystemModel_QBasePersistentIndexList(const QFileSystemModel* self);
QObject* QFileSystemModel_Sender(const QFileSystemModel* self);
void QFileSystemModel_OnSender(const QFileSystemModel* self, intptr_t slot);
QObject* QFileSystemModel_QBaseSender(const QFileSystemModel* self);
int QFileSystemModel_SenderSignalIndex(const QFileSystemModel* self);
void QFileSystemModel_OnSenderSignalIndex(const QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_QBaseSenderSignalIndex(const QFileSystemModel* self);
int QFileSystemModel_Receivers(const QFileSystemModel* self, const char* signal);
void QFileSystemModel_OnReceivers(const QFileSystemModel* self, intptr_t slot);
int QFileSystemModel_QBaseReceivers(const QFileSystemModel* self, const char* signal);
bool QFileSystemModel_IsSignalConnected(const QFileSystemModel* self, QMetaMethod* signal);
void QFileSystemModel_OnIsSignalConnected(const QFileSystemModel* self, intptr_t slot);
bool QFileSystemModel_QBaseIsSignalConnected(const QFileSystemModel* self, QMetaMethod* signal);
void QFileSystemModel_Delete(QFileSystemModel* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
