#pragma once
#ifndef SRCC_LIBVIRTUALQIDENTITYPROXYMODEL_H
#define SRCC_LIBVIRTUALQIDENTITYPROXYMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QIdentityProxyModel so that we can call protected methods
class VirtualQIdentityProxyModel : public QIdentityProxyModel {

  public:
    // Virtual class public types (including callbacks)
    using QIdentityProxyModel_Metacall_Callback = int (*)(QIdentityProxyModel*, QMetaObject::Call, int, void**);
    using QIdentityProxyModel_ColumnCount_Callback = int (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_Index_Callback = QModelIndex (*)(const QIdentityProxyModel*, int, int, const QModelIndex&);
    using QIdentityProxyModel_MapFromSource_Callback = QModelIndex (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_MapToSource_Callback = QModelIndex (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_Parent_Callback = QModelIndex (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_RowCount_Callback = int (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_HeaderData_Callback = QVariant (*)(const QIdentityProxyModel*, int, Qt::Orientation, int);
    using QIdentityProxyModel_DropMimeData_Callback = bool (*)(QIdentityProxyModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QIdentityProxyModel_Sibling_Callback = QModelIndex (*)(const QIdentityProxyModel*, int, int, const QModelIndex&);
    using QIdentityProxyModel_MapSelectionFromSource_Callback = QItemSelection (*)(const QIdentityProxyModel*, const QItemSelection&);
    using QIdentityProxyModel_MapSelectionToSource_Callback = QItemSelection (*)(const QIdentityProxyModel*, const QItemSelection&);
    using QIdentityProxyModel_Match_Callback = QModelIndexList (*)(const QIdentityProxyModel*, const QModelIndex&, int, const QVariant&, int, Qt::MatchFlags);
    using QIdentityProxyModel_SetSourceModel_Callback = void (*)(QIdentityProxyModel*, QAbstractItemModel*);
    using QIdentityProxyModel_InsertColumns_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex&);
    using QIdentityProxyModel_InsertRows_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex&);
    using QIdentityProxyModel_RemoveColumns_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex&);
    using QIdentityProxyModel_RemoveRows_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex&);
    using QIdentityProxyModel_MoveRows_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QIdentityProxyModel_MoveColumns_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QIdentityProxyModel_Submit_Callback = bool (*)();
    using QIdentityProxyModel_Revert_Callback = void (*)();
    using QIdentityProxyModel_Data_Callback = QVariant (*)(const QIdentityProxyModel*, const QModelIndex&, int);
    using QIdentityProxyModel_ItemData_Callback = QMap<int, QVariant> (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_Flags_Callback = Qt::ItemFlags (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_SetData_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex&, const QVariant&, int);
    using QIdentityProxyModel_SetItemData_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex&, const QMap<int, QVariant>&);
    using QIdentityProxyModel_SetHeaderData_Callback = bool (*)(QIdentityProxyModel*, int, Qt::Orientation, const QVariant&, int);
    using QIdentityProxyModel_ClearItemData_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_Buddy_Callback = QModelIndex (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_CanFetchMore_Callback = bool (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_FetchMore_Callback = void (*)(QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_Sort_Callback = void (*)(QIdentityProxyModel*, int, Qt::SortOrder);
    using QIdentityProxyModel_Span_Callback = QSize (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_HasChildren_Callback = bool (*)(const QIdentityProxyModel*, const QModelIndex&);
    using QIdentityProxyModel_MimeData_Callback = QMimeData* (*)(const QIdentityProxyModel*, const QModelIndexList&);
    using QIdentityProxyModel_CanDropMimeData_Callback = bool (*)(const QIdentityProxyModel*, const QMimeData*, Qt::DropAction, int, int, const QModelIndex&);
    using QIdentityProxyModel_MimeTypes_Callback = QStringList (*)();
    using QIdentityProxyModel_SupportedDragActions_Callback = Qt::DropActions (*)();
    using QIdentityProxyModel_SupportedDropActions_Callback = Qt::DropActions (*)();
    using QIdentityProxyModel_RoleNames_Callback = QHash<int, QByteArray> (*)();
    using QIdentityProxyModel_MultiData_Callback = void (*)(const QIdentityProxyModel*, const QModelIndex&, QModelRoleDataSpan);
    using QIdentityProxyModel_ResetInternalData_Callback = void (*)();
    using QIdentityProxyModel_Event_Callback = bool (*)(QIdentityProxyModel*, QEvent*);
    using QIdentityProxyModel_EventFilter_Callback = bool (*)(QIdentityProxyModel*, QObject*, QEvent*);
    using QIdentityProxyModel_TimerEvent_Callback = void (*)(QIdentityProxyModel*, QTimerEvent*);
    using QIdentityProxyModel_ChildEvent_Callback = void (*)(QIdentityProxyModel*, QChildEvent*);
    using QIdentityProxyModel_CustomEvent_Callback = void (*)(QIdentityProxyModel*, QEvent*);
    using QIdentityProxyModel_ConnectNotify_Callback = void (*)(QIdentityProxyModel*, const QMetaMethod&);
    using QIdentityProxyModel_DisconnectNotify_Callback = void (*)(QIdentityProxyModel*, const QMetaMethod&);
    using QIdentityProxyModel_CreateSourceIndex_Callback = QModelIndex (*)(const QIdentityProxyModel*, int, int, void*);
    using QIdentityProxyModel_CreateIndex_Callback = QModelIndex (*)(const QIdentityProxyModel*, int, int);
    using QIdentityProxyModel_EncodeData_Callback = void (*)(const QIdentityProxyModel*, const QModelIndexList&, QDataStream&);
    using QIdentityProxyModel_DecodeData_Callback = bool (*)(QIdentityProxyModel*, int, int, const QModelIndex&, QDataStream&);
    using QIdentityProxyModel_BeginInsertRows_Callback = void (*)(QIdentityProxyModel*, const QModelIndex&, int, int);
    using QIdentityProxyModel_EndInsertRows_Callback = void (*)();
    using QIdentityProxyModel_BeginRemoveRows_Callback = void (*)(QIdentityProxyModel*, const QModelIndex&, int, int);
    using QIdentityProxyModel_EndRemoveRows_Callback = void (*)();
    using QIdentityProxyModel_BeginMoveRows_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QIdentityProxyModel_EndMoveRows_Callback = void (*)();
    using QIdentityProxyModel_BeginInsertColumns_Callback = void (*)(QIdentityProxyModel*, const QModelIndex&, int, int);
    using QIdentityProxyModel_EndInsertColumns_Callback = void (*)();
    using QIdentityProxyModel_BeginRemoveColumns_Callback = void (*)(QIdentityProxyModel*, const QModelIndex&, int, int);
    using QIdentityProxyModel_EndRemoveColumns_Callback = void (*)();
    using QIdentityProxyModel_BeginMoveColumns_Callback = bool (*)(QIdentityProxyModel*, const QModelIndex&, int, int, const QModelIndex&, int);
    using QIdentityProxyModel_EndMoveColumns_Callback = void (*)();
    using QIdentityProxyModel_BeginResetModel_Callback = void (*)();
    using QIdentityProxyModel_EndResetModel_Callback = void (*)();
    using QIdentityProxyModel_ChangePersistentIndex_Callback = void (*)(QIdentityProxyModel*, const QModelIndex&, const QModelIndex&);
    using QIdentityProxyModel_ChangePersistentIndexList_Callback = void (*)(QIdentityProxyModel*, const QModelIndexList&, const QModelIndexList&);
    using QIdentityProxyModel_PersistentIndexList_Callback = QModelIndexList (*)();
    using QIdentityProxyModel_Sender_Callback = QObject* (*)();
    using QIdentityProxyModel_SenderSignalIndex_Callback = int (*)();
    using QIdentityProxyModel_Receivers_Callback = int (*)(const QIdentityProxyModel*, const char*);
    using QIdentityProxyModel_IsSignalConnected_Callback = bool (*)(const QIdentityProxyModel*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QIdentityProxyModel_Metacall_Callback qidentityproxymodel_metacall_callback = nullptr;
    QIdentityProxyModel_ColumnCount_Callback qidentityproxymodel_columncount_callback = nullptr;
    QIdentityProxyModel_Index_Callback qidentityproxymodel_index_callback = nullptr;
    QIdentityProxyModel_MapFromSource_Callback qidentityproxymodel_mapfromsource_callback = nullptr;
    QIdentityProxyModel_MapToSource_Callback qidentityproxymodel_maptosource_callback = nullptr;
    QIdentityProxyModel_Parent_Callback qidentityproxymodel_parent_callback = nullptr;
    QIdentityProxyModel_RowCount_Callback qidentityproxymodel_rowcount_callback = nullptr;
    QIdentityProxyModel_HeaderData_Callback qidentityproxymodel_headerdata_callback = nullptr;
    QIdentityProxyModel_DropMimeData_Callback qidentityproxymodel_dropmimedata_callback = nullptr;
    QIdentityProxyModel_Sibling_Callback qidentityproxymodel_sibling_callback = nullptr;
    QIdentityProxyModel_MapSelectionFromSource_Callback qidentityproxymodel_mapselectionfromsource_callback = nullptr;
    QIdentityProxyModel_MapSelectionToSource_Callback qidentityproxymodel_mapselectiontosource_callback = nullptr;
    QIdentityProxyModel_Match_Callback qidentityproxymodel_match_callback = nullptr;
    QIdentityProxyModel_SetSourceModel_Callback qidentityproxymodel_setsourcemodel_callback = nullptr;
    QIdentityProxyModel_InsertColumns_Callback qidentityproxymodel_insertcolumns_callback = nullptr;
    QIdentityProxyModel_InsertRows_Callback qidentityproxymodel_insertrows_callback = nullptr;
    QIdentityProxyModel_RemoveColumns_Callback qidentityproxymodel_removecolumns_callback = nullptr;
    QIdentityProxyModel_RemoveRows_Callback qidentityproxymodel_removerows_callback = nullptr;
    QIdentityProxyModel_MoveRows_Callback qidentityproxymodel_moverows_callback = nullptr;
    QIdentityProxyModel_MoveColumns_Callback qidentityproxymodel_movecolumns_callback = nullptr;
    QIdentityProxyModel_Submit_Callback qidentityproxymodel_submit_callback = nullptr;
    QIdentityProxyModel_Revert_Callback qidentityproxymodel_revert_callback = nullptr;
    QIdentityProxyModel_Data_Callback qidentityproxymodel_data_callback = nullptr;
    QIdentityProxyModel_ItemData_Callback qidentityproxymodel_itemdata_callback = nullptr;
    QIdentityProxyModel_Flags_Callback qidentityproxymodel_flags_callback = nullptr;
    QIdentityProxyModel_SetData_Callback qidentityproxymodel_setdata_callback = nullptr;
    QIdentityProxyModel_SetItemData_Callback qidentityproxymodel_setitemdata_callback = nullptr;
    QIdentityProxyModel_SetHeaderData_Callback qidentityproxymodel_setheaderdata_callback = nullptr;
    QIdentityProxyModel_ClearItemData_Callback qidentityproxymodel_clearitemdata_callback = nullptr;
    QIdentityProxyModel_Buddy_Callback qidentityproxymodel_buddy_callback = nullptr;
    QIdentityProxyModel_CanFetchMore_Callback qidentityproxymodel_canfetchmore_callback = nullptr;
    QIdentityProxyModel_FetchMore_Callback qidentityproxymodel_fetchmore_callback = nullptr;
    QIdentityProxyModel_Sort_Callback qidentityproxymodel_sort_callback = nullptr;
    QIdentityProxyModel_Span_Callback qidentityproxymodel_span_callback = nullptr;
    QIdentityProxyModel_HasChildren_Callback qidentityproxymodel_haschildren_callback = nullptr;
    QIdentityProxyModel_MimeData_Callback qidentityproxymodel_mimedata_callback = nullptr;
    QIdentityProxyModel_CanDropMimeData_Callback qidentityproxymodel_candropmimedata_callback = nullptr;
    QIdentityProxyModel_MimeTypes_Callback qidentityproxymodel_mimetypes_callback = nullptr;
    QIdentityProxyModel_SupportedDragActions_Callback qidentityproxymodel_supporteddragactions_callback = nullptr;
    QIdentityProxyModel_SupportedDropActions_Callback qidentityproxymodel_supporteddropactions_callback = nullptr;
    QIdentityProxyModel_RoleNames_Callback qidentityproxymodel_rolenames_callback = nullptr;
    QIdentityProxyModel_MultiData_Callback qidentityproxymodel_multidata_callback = nullptr;
    QIdentityProxyModel_ResetInternalData_Callback qidentityproxymodel_resetinternaldata_callback = nullptr;
    QIdentityProxyModel_Event_Callback qidentityproxymodel_event_callback = nullptr;
    QIdentityProxyModel_EventFilter_Callback qidentityproxymodel_eventfilter_callback = nullptr;
    QIdentityProxyModel_TimerEvent_Callback qidentityproxymodel_timerevent_callback = nullptr;
    QIdentityProxyModel_ChildEvent_Callback qidentityproxymodel_childevent_callback = nullptr;
    QIdentityProxyModel_CustomEvent_Callback qidentityproxymodel_customevent_callback = nullptr;
    QIdentityProxyModel_ConnectNotify_Callback qidentityproxymodel_connectnotify_callback = nullptr;
    QIdentityProxyModel_DisconnectNotify_Callback qidentityproxymodel_disconnectnotify_callback = nullptr;
    QIdentityProxyModel_CreateSourceIndex_Callback qidentityproxymodel_createsourceindex_callback = nullptr;
    QIdentityProxyModel_CreateIndex_Callback qidentityproxymodel_createindex_callback = nullptr;
    QIdentityProxyModel_EncodeData_Callback qidentityproxymodel_encodedata_callback = nullptr;
    QIdentityProxyModel_DecodeData_Callback qidentityproxymodel_decodedata_callback = nullptr;
    QIdentityProxyModel_BeginInsertRows_Callback qidentityproxymodel_begininsertrows_callback = nullptr;
    QIdentityProxyModel_EndInsertRows_Callback qidentityproxymodel_endinsertrows_callback = nullptr;
    QIdentityProxyModel_BeginRemoveRows_Callback qidentityproxymodel_beginremoverows_callback = nullptr;
    QIdentityProxyModel_EndRemoveRows_Callback qidentityproxymodel_endremoverows_callback = nullptr;
    QIdentityProxyModel_BeginMoveRows_Callback qidentityproxymodel_beginmoverows_callback = nullptr;
    QIdentityProxyModel_EndMoveRows_Callback qidentityproxymodel_endmoverows_callback = nullptr;
    QIdentityProxyModel_BeginInsertColumns_Callback qidentityproxymodel_begininsertcolumns_callback = nullptr;
    QIdentityProxyModel_EndInsertColumns_Callback qidentityproxymodel_endinsertcolumns_callback = nullptr;
    QIdentityProxyModel_BeginRemoveColumns_Callback qidentityproxymodel_beginremovecolumns_callback = nullptr;
    QIdentityProxyModel_EndRemoveColumns_Callback qidentityproxymodel_endremovecolumns_callback = nullptr;
    QIdentityProxyModel_BeginMoveColumns_Callback qidentityproxymodel_beginmovecolumns_callback = nullptr;
    QIdentityProxyModel_EndMoveColumns_Callback qidentityproxymodel_endmovecolumns_callback = nullptr;
    QIdentityProxyModel_BeginResetModel_Callback qidentityproxymodel_beginresetmodel_callback = nullptr;
    QIdentityProxyModel_EndResetModel_Callback qidentityproxymodel_endresetmodel_callback = nullptr;
    QIdentityProxyModel_ChangePersistentIndex_Callback qidentityproxymodel_changepersistentindex_callback = nullptr;
    QIdentityProxyModel_ChangePersistentIndexList_Callback qidentityproxymodel_changepersistentindexlist_callback = nullptr;
    QIdentityProxyModel_PersistentIndexList_Callback qidentityproxymodel_persistentindexlist_callback = nullptr;
    QIdentityProxyModel_Sender_Callback qidentityproxymodel_sender_callback = nullptr;
    QIdentityProxyModel_SenderSignalIndex_Callback qidentityproxymodel_sendersignalindex_callback = nullptr;
    QIdentityProxyModel_Receivers_Callback qidentityproxymodel_receivers_callback = nullptr;
    QIdentityProxyModel_IsSignalConnected_Callback qidentityproxymodel_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qidentityproxymodel_metacall_isbase = false;
    mutable bool qidentityproxymodel_columncount_isbase = false;
    mutable bool qidentityproxymodel_index_isbase = false;
    mutable bool qidentityproxymodel_mapfromsource_isbase = false;
    mutable bool qidentityproxymodel_maptosource_isbase = false;
    mutable bool qidentityproxymodel_parent_isbase = false;
    mutable bool qidentityproxymodel_rowcount_isbase = false;
    mutable bool qidentityproxymodel_headerdata_isbase = false;
    mutable bool qidentityproxymodel_dropmimedata_isbase = false;
    mutable bool qidentityproxymodel_sibling_isbase = false;
    mutable bool qidentityproxymodel_mapselectionfromsource_isbase = false;
    mutable bool qidentityproxymodel_mapselectiontosource_isbase = false;
    mutable bool qidentityproxymodel_match_isbase = false;
    mutable bool qidentityproxymodel_setsourcemodel_isbase = false;
    mutable bool qidentityproxymodel_insertcolumns_isbase = false;
    mutable bool qidentityproxymodel_insertrows_isbase = false;
    mutable bool qidentityproxymodel_removecolumns_isbase = false;
    mutable bool qidentityproxymodel_removerows_isbase = false;
    mutable bool qidentityproxymodel_moverows_isbase = false;
    mutable bool qidentityproxymodel_movecolumns_isbase = false;
    mutable bool qidentityproxymodel_submit_isbase = false;
    mutable bool qidentityproxymodel_revert_isbase = false;
    mutable bool qidentityproxymodel_data_isbase = false;
    mutable bool qidentityproxymodel_itemdata_isbase = false;
    mutable bool qidentityproxymodel_flags_isbase = false;
    mutable bool qidentityproxymodel_setdata_isbase = false;
    mutable bool qidentityproxymodel_setitemdata_isbase = false;
    mutable bool qidentityproxymodel_setheaderdata_isbase = false;
    mutable bool qidentityproxymodel_clearitemdata_isbase = false;
    mutable bool qidentityproxymodel_buddy_isbase = false;
    mutable bool qidentityproxymodel_canfetchmore_isbase = false;
    mutable bool qidentityproxymodel_fetchmore_isbase = false;
    mutable bool qidentityproxymodel_sort_isbase = false;
    mutable bool qidentityproxymodel_span_isbase = false;
    mutable bool qidentityproxymodel_haschildren_isbase = false;
    mutable bool qidentityproxymodel_mimedata_isbase = false;
    mutable bool qidentityproxymodel_candropmimedata_isbase = false;
    mutable bool qidentityproxymodel_mimetypes_isbase = false;
    mutable bool qidentityproxymodel_supporteddragactions_isbase = false;
    mutable bool qidentityproxymodel_supporteddropactions_isbase = false;
    mutable bool qidentityproxymodel_rolenames_isbase = false;
    mutable bool qidentityproxymodel_multidata_isbase = false;
    mutable bool qidentityproxymodel_resetinternaldata_isbase = false;
    mutable bool qidentityproxymodel_event_isbase = false;
    mutable bool qidentityproxymodel_eventfilter_isbase = false;
    mutable bool qidentityproxymodel_timerevent_isbase = false;
    mutable bool qidentityproxymodel_childevent_isbase = false;
    mutable bool qidentityproxymodel_customevent_isbase = false;
    mutable bool qidentityproxymodel_connectnotify_isbase = false;
    mutable bool qidentityproxymodel_disconnectnotify_isbase = false;
    mutable bool qidentityproxymodel_createsourceindex_isbase = false;
    mutable bool qidentityproxymodel_createindex_isbase = false;
    mutable bool qidentityproxymodel_encodedata_isbase = false;
    mutable bool qidentityproxymodel_decodedata_isbase = false;
    mutable bool qidentityproxymodel_begininsertrows_isbase = false;
    mutable bool qidentityproxymodel_endinsertrows_isbase = false;
    mutable bool qidentityproxymodel_beginremoverows_isbase = false;
    mutable bool qidentityproxymodel_endremoverows_isbase = false;
    mutable bool qidentityproxymodel_beginmoverows_isbase = false;
    mutable bool qidentityproxymodel_endmoverows_isbase = false;
    mutable bool qidentityproxymodel_begininsertcolumns_isbase = false;
    mutable bool qidentityproxymodel_endinsertcolumns_isbase = false;
    mutable bool qidentityproxymodel_beginremovecolumns_isbase = false;
    mutable bool qidentityproxymodel_endremovecolumns_isbase = false;
    mutable bool qidentityproxymodel_beginmovecolumns_isbase = false;
    mutable bool qidentityproxymodel_endmovecolumns_isbase = false;
    mutable bool qidentityproxymodel_beginresetmodel_isbase = false;
    mutable bool qidentityproxymodel_endresetmodel_isbase = false;
    mutable bool qidentityproxymodel_changepersistentindex_isbase = false;
    mutable bool qidentityproxymodel_changepersistentindexlist_isbase = false;
    mutable bool qidentityproxymodel_persistentindexlist_isbase = false;
    mutable bool qidentityproxymodel_sender_isbase = false;
    mutable bool qidentityproxymodel_sendersignalindex_isbase = false;
    mutable bool qidentityproxymodel_receivers_isbase = false;
    mutable bool qidentityproxymodel_issignalconnected_isbase = false;

  public:
    VirtualQIdentityProxyModel() : QIdentityProxyModel(){};
    VirtualQIdentityProxyModel(QObject* parent) : QIdentityProxyModel(parent){};

    ~VirtualQIdentityProxyModel() {
        qidentityproxymodel_metacall_callback = nullptr;
        qidentityproxymodel_columncount_callback = nullptr;
        qidentityproxymodel_index_callback = nullptr;
        qidentityproxymodel_mapfromsource_callback = nullptr;
        qidentityproxymodel_maptosource_callback = nullptr;
        qidentityproxymodel_parent_callback = nullptr;
        qidentityproxymodel_rowcount_callback = nullptr;
        qidentityproxymodel_headerdata_callback = nullptr;
        qidentityproxymodel_dropmimedata_callback = nullptr;
        qidentityproxymodel_sibling_callback = nullptr;
        qidentityproxymodel_mapselectionfromsource_callback = nullptr;
        qidentityproxymodel_mapselectiontosource_callback = nullptr;
        qidentityproxymodel_match_callback = nullptr;
        qidentityproxymodel_setsourcemodel_callback = nullptr;
        qidentityproxymodel_insertcolumns_callback = nullptr;
        qidentityproxymodel_insertrows_callback = nullptr;
        qidentityproxymodel_removecolumns_callback = nullptr;
        qidentityproxymodel_removerows_callback = nullptr;
        qidentityproxymodel_moverows_callback = nullptr;
        qidentityproxymodel_movecolumns_callback = nullptr;
        qidentityproxymodel_submit_callback = nullptr;
        qidentityproxymodel_revert_callback = nullptr;
        qidentityproxymodel_data_callback = nullptr;
        qidentityproxymodel_itemdata_callback = nullptr;
        qidentityproxymodel_flags_callback = nullptr;
        qidentityproxymodel_setdata_callback = nullptr;
        qidentityproxymodel_setitemdata_callback = nullptr;
        qidentityproxymodel_setheaderdata_callback = nullptr;
        qidentityproxymodel_clearitemdata_callback = nullptr;
        qidentityproxymodel_buddy_callback = nullptr;
        qidentityproxymodel_canfetchmore_callback = nullptr;
        qidentityproxymodel_fetchmore_callback = nullptr;
        qidentityproxymodel_sort_callback = nullptr;
        qidentityproxymodel_span_callback = nullptr;
        qidentityproxymodel_haschildren_callback = nullptr;
        qidentityproxymodel_mimedata_callback = nullptr;
        qidentityproxymodel_candropmimedata_callback = nullptr;
        qidentityproxymodel_mimetypes_callback = nullptr;
        qidentityproxymodel_supporteddragactions_callback = nullptr;
        qidentityproxymodel_supporteddropactions_callback = nullptr;
        qidentityproxymodel_rolenames_callback = nullptr;
        qidentityproxymodel_multidata_callback = nullptr;
        qidentityproxymodel_resetinternaldata_callback = nullptr;
        qidentityproxymodel_event_callback = nullptr;
        qidentityproxymodel_eventfilter_callback = nullptr;
        qidentityproxymodel_timerevent_callback = nullptr;
        qidentityproxymodel_childevent_callback = nullptr;
        qidentityproxymodel_customevent_callback = nullptr;
        qidentityproxymodel_connectnotify_callback = nullptr;
        qidentityproxymodel_disconnectnotify_callback = nullptr;
        qidentityproxymodel_createsourceindex_callback = nullptr;
        qidentityproxymodel_createindex_callback = nullptr;
        qidentityproxymodel_encodedata_callback = nullptr;
        qidentityproxymodel_decodedata_callback = nullptr;
        qidentityproxymodel_begininsertrows_callback = nullptr;
        qidentityproxymodel_endinsertrows_callback = nullptr;
        qidentityproxymodel_beginremoverows_callback = nullptr;
        qidentityproxymodel_endremoverows_callback = nullptr;
        qidentityproxymodel_beginmoverows_callback = nullptr;
        qidentityproxymodel_endmoverows_callback = nullptr;
        qidentityproxymodel_begininsertcolumns_callback = nullptr;
        qidentityproxymodel_endinsertcolumns_callback = nullptr;
        qidentityproxymodel_beginremovecolumns_callback = nullptr;
        qidentityproxymodel_endremovecolumns_callback = nullptr;
        qidentityproxymodel_beginmovecolumns_callback = nullptr;
        qidentityproxymodel_endmovecolumns_callback = nullptr;
        qidentityproxymodel_beginresetmodel_callback = nullptr;
        qidentityproxymodel_endresetmodel_callback = nullptr;
        qidentityproxymodel_changepersistentindex_callback = nullptr;
        qidentityproxymodel_changepersistentindexlist_callback = nullptr;
        qidentityproxymodel_persistentindexlist_callback = nullptr;
        qidentityproxymodel_sender_callback = nullptr;
        qidentityproxymodel_sendersignalindex_callback = nullptr;
        qidentityproxymodel_receivers_callback = nullptr;
        qidentityproxymodel_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQIdentityProxyModel_Metacall_Callback(QIdentityProxyModel_Metacall_Callback cb) { qidentityproxymodel_metacall_callback = cb; }
    void setQIdentityProxyModel_ColumnCount_Callback(QIdentityProxyModel_ColumnCount_Callback cb) { qidentityproxymodel_columncount_callback = cb; }
    void setQIdentityProxyModel_Index_Callback(QIdentityProxyModel_Index_Callback cb) { qidentityproxymodel_index_callback = cb; }
    void setQIdentityProxyModel_MapFromSource_Callback(QIdentityProxyModel_MapFromSource_Callback cb) { qidentityproxymodel_mapfromsource_callback = cb; }
    void setQIdentityProxyModel_MapToSource_Callback(QIdentityProxyModel_MapToSource_Callback cb) { qidentityproxymodel_maptosource_callback = cb; }
    void setQIdentityProxyModel_Parent_Callback(QIdentityProxyModel_Parent_Callback cb) { qidentityproxymodel_parent_callback = cb; }
    void setQIdentityProxyModel_RowCount_Callback(QIdentityProxyModel_RowCount_Callback cb) { qidentityproxymodel_rowcount_callback = cb; }
    void setQIdentityProxyModel_HeaderData_Callback(QIdentityProxyModel_HeaderData_Callback cb) { qidentityproxymodel_headerdata_callback = cb; }
    void setQIdentityProxyModel_DropMimeData_Callback(QIdentityProxyModel_DropMimeData_Callback cb) { qidentityproxymodel_dropmimedata_callback = cb; }
    void setQIdentityProxyModel_Sibling_Callback(QIdentityProxyModel_Sibling_Callback cb) { qidentityproxymodel_sibling_callback = cb; }
    void setQIdentityProxyModel_MapSelectionFromSource_Callback(QIdentityProxyModel_MapSelectionFromSource_Callback cb) { qidentityproxymodel_mapselectionfromsource_callback = cb; }
    void setQIdentityProxyModel_MapSelectionToSource_Callback(QIdentityProxyModel_MapSelectionToSource_Callback cb) { qidentityproxymodel_mapselectiontosource_callback = cb; }
    void setQIdentityProxyModel_Match_Callback(QIdentityProxyModel_Match_Callback cb) { qidentityproxymodel_match_callback = cb; }
    void setQIdentityProxyModel_SetSourceModel_Callback(QIdentityProxyModel_SetSourceModel_Callback cb) { qidentityproxymodel_setsourcemodel_callback = cb; }
    void setQIdentityProxyModel_InsertColumns_Callback(QIdentityProxyModel_InsertColumns_Callback cb) { qidentityproxymodel_insertcolumns_callback = cb; }
    void setQIdentityProxyModel_InsertRows_Callback(QIdentityProxyModel_InsertRows_Callback cb) { qidentityproxymodel_insertrows_callback = cb; }
    void setQIdentityProxyModel_RemoveColumns_Callback(QIdentityProxyModel_RemoveColumns_Callback cb) { qidentityproxymodel_removecolumns_callback = cb; }
    void setQIdentityProxyModel_RemoveRows_Callback(QIdentityProxyModel_RemoveRows_Callback cb) { qidentityproxymodel_removerows_callback = cb; }
    void setQIdentityProxyModel_MoveRows_Callback(QIdentityProxyModel_MoveRows_Callback cb) { qidentityproxymodel_moverows_callback = cb; }
    void setQIdentityProxyModel_MoveColumns_Callback(QIdentityProxyModel_MoveColumns_Callback cb) { qidentityproxymodel_movecolumns_callback = cb; }
    void setQIdentityProxyModel_Submit_Callback(QIdentityProxyModel_Submit_Callback cb) { qidentityproxymodel_submit_callback = cb; }
    void setQIdentityProxyModel_Revert_Callback(QIdentityProxyModel_Revert_Callback cb) { qidentityproxymodel_revert_callback = cb; }
    void setQIdentityProxyModel_Data_Callback(QIdentityProxyModel_Data_Callback cb) { qidentityproxymodel_data_callback = cb; }
    void setQIdentityProxyModel_ItemData_Callback(QIdentityProxyModel_ItemData_Callback cb) { qidentityproxymodel_itemdata_callback = cb; }
    void setQIdentityProxyModel_Flags_Callback(QIdentityProxyModel_Flags_Callback cb) { qidentityproxymodel_flags_callback = cb; }
    void setQIdentityProxyModel_SetData_Callback(QIdentityProxyModel_SetData_Callback cb) { qidentityproxymodel_setdata_callback = cb; }
    void setQIdentityProxyModel_SetItemData_Callback(QIdentityProxyModel_SetItemData_Callback cb) { qidentityproxymodel_setitemdata_callback = cb; }
    void setQIdentityProxyModel_SetHeaderData_Callback(QIdentityProxyModel_SetHeaderData_Callback cb) { qidentityproxymodel_setheaderdata_callback = cb; }
    void setQIdentityProxyModel_ClearItemData_Callback(QIdentityProxyModel_ClearItemData_Callback cb) { qidentityproxymodel_clearitemdata_callback = cb; }
    void setQIdentityProxyModel_Buddy_Callback(QIdentityProxyModel_Buddy_Callback cb) { qidentityproxymodel_buddy_callback = cb; }
    void setQIdentityProxyModel_CanFetchMore_Callback(QIdentityProxyModel_CanFetchMore_Callback cb) { qidentityproxymodel_canfetchmore_callback = cb; }
    void setQIdentityProxyModel_FetchMore_Callback(QIdentityProxyModel_FetchMore_Callback cb) { qidentityproxymodel_fetchmore_callback = cb; }
    void setQIdentityProxyModel_Sort_Callback(QIdentityProxyModel_Sort_Callback cb) { qidentityproxymodel_sort_callback = cb; }
    void setQIdentityProxyModel_Span_Callback(QIdentityProxyModel_Span_Callback cb) { qidentityproxymodel_span_callback = cb; }
    void setQIdentityProxyModel_HasChildren_Callback(QIdentityProxyModel_HasChildren_Callback cb) { qidentityproxymodel_haschildren_callback = cb; }
    void setQIdentityProxyModel_MimeData_Callback(QIdentityProxyModel_MimeData_Callback cb) { qidentityproxymodel_mimedata_callback = cb; }
    void setQIdentityProxyModel_CanDropMimeData_Callback(QIdentityProxyModel_CanDropMimeData_Callback cb) { qidentityproxymodel_candropmimedata_callback = cb; }
    void setQIdentityProxyModel_MimeTypes_Callback(QIdentityProxyModel_MimeTypes_Callback cb) { qidentityproxymodel_mimetypes_callback = cb; }
    void setQIdentityProxyModel_SupportedDragActions_Callback(QIdentityProxyModel_SupportedDragActions_Callback cb) { qidentityproxymodel_supporteddragactions_callback = cb; }
    void setQIdentityProxyModel_SupportedDropActions_Callback(QIdentityProxyModel_SupportedDropActions_Callback cb) { qidentityproxymodel_supporteddropactions_callback = cb; }
    void setQIdentityProxyModel_RoleNames_Callback(QIdentityProxyModel_RoleNames_Callback cb) { qidentityproxymodel_rolenames_callback = cb; }
    void setQIdentityProxyModel_MultiData_Callback(QIdentityProxyModel_MultiData_Callback cb) { qidentityproxymodel_multidata_callback = cb; }
    void setQIdentityProxyModel_ResetInternalData_Callback(QIdentityProxyModel_ResetInternalData_Callback cb) { qidentityproxymodel_resetinternaldata_callback = cb; }
    void setQIdentityProxyModel_Event_Callback(QIdentityProxyModel_Event_Callback cb) { qidentityproxymodel_event_callback = cb; }
    void setQIdentityProxyModel_EventFilter_Callback(QIdentityProxyModel_EventFilter_Callback cb) { qidentityproxymodel_eventfilter_callback = cb; }
    void setQIdentityProxyModel_TimerEvent_Callback(QIdentityProxyModel_TimerEvent_Callback cb) { qidentityproxymodel_timerevent_callback = cb; }
    void setQIdentityProxyModel_ChildEvent_Callback(QIdentityProxyModel_ChildEvent_Callback cb) { qidentityproxymodel_childevent_callback = cb; }
    void setQIdentityProxyModel_CustomEvent_Callback(QIdentityProxyModel_CustomEvent_Callback cb) { qidentityproxymodel_customevent_callback = cb; }
    void setQIdentityProxyModel_ConnectNotify_Callback(QIdentityProxyModel_ConnectNotify_Callback cb) { qidentityproxymodel_connectnotify_callback = cb; }
    void setQIdentityProxyModel_DisconnectNotify_Callback(QIdentityProxyModel_DisconnectNotify_Callback cb) { qidentityproxymodel_disconnectnotify_callback = cb; }
    void setQIdentityProxyModel_CreateSourceIndex_Callback(QIdentityProxyModel_CreateSourceIndex_Callback cb) { qidentityproxymodel_createsourceindex_callback = cb; }
    void setQIdentityProxyModel_CreateIndex_Callback(QIdentityProxyModel_CreateIndex_Callback cb) { qidentityproxymodel_createindex_callback = cb; }
    void setQIdentityProxyModel_EncodeData_Callback(QIdentityProxyModel_EncodeData_Callback cb) { qidentityproxymodel_encodedata_callback = cb; }
    void setQIdentityProxyModel_DecodeData_Callback(QIdentityProxyModel_DecodeData_Callback cb) { qidentityproxymodel_decodedata_callback = cb; }
    void setQIdentityProxyModel_BeginInsertRows_Callback(QIdentityProxyModel_BeginInsertRows_Callback cb) { qidentityproxymodel_begininsertrows_callback = cb; }
    void setQIdentityProxyModel_EndInsertRows_Callback(QIdentityProxyModel_EndInsertRows_Callback cb) { qidentityproxymodel_endinsertrows_callback = cb; }
    void setQIdentityProxyModel_BeginRemoveRows_Callback(QIdentityProxyModel_BeginRemoveRows_Callback cb) { qidentityproxymodel_beginremoverows_callback = cb; }
    void setQIdentityProxyModel_EndRemoveRows_Callback(QIdentityProxyModel_EndRemoveRows_Callback cb) { qidentityproxymodel_endremoverows_callback = cb; }
    void setQIdentityProxyModel_BeginMoveRows_Callback(QIdentityProxyModel_BeginMoveRows_Callback cb) { qidentityproxymodel_beginmoverows_callback = cb; }
    void setQIdentityProxyModel_EndMoveRows_Callback(QIdentityProxyModel_EndMoveRows_Callback cb) { qidentityproxymodel_endmoverows_callback = cb; }
    void setQIdentityProxyModel_BeginInsertColumns_Callback(QIdentityProxyModel_BeginInsertColumns_Callback cb) { qidentityproxymodel_begininsertcolumns_callback = cb; }
    void setQIdentityProxyModel_EndInsertColumns_Callback(QIdentityProxyModel_EndInsertColumns_Callback cb) { qidentityproxymodel_endinsertcolumns_callback = cb; }
    void setQIdentityProxyModel_BeginRemoveColumns_Callback(QIdentityProxyModel_BeginRemoveColumns_Callback cb) { qidentityproxymodel_beginremovecolumns_callback = cb; }
    void setQIdentityProxyModel_EndRemoveColumns_Callback(QIdentityProxyModel_EndRemoveColumns_Callback cb) { qidentityproxymodel_endremovecolumns_callback = cb; }
    void setQIdentityProxyModel_BeginMoveColumns_Callback(QIdentityProxyModel_BeginMoveColumns_Callback cb) { qidentityproxymodel_beginmovecolumns_callback = cb; }
    void setQIdentityProxyModel_EndMoveColumns_Callback(QIdentityProxyModel_EndMoveColumns_Callback cb) { qidentityproxymodel_endmovecolumns_callback = cb; }
    void setQIdentityProxyModel_BeginResetModel_Callback(QIdentityProxyModel_BeginResetModel_Callback cb) { qidentityproxymodel_beginresetmodel_callback = cb; }
    void setQIdentityProxyModel_EndResetModel_Callback(QIdentityProxyModel_EndResetModel_Callback cb) { qidentityproxymodel_endresetmodel_callback = cb; }
    void setQIdentityProxyModel_ChangePersistentIndex_Callback(QIdentityProxyModel_ChangePersistentIndex_Callback cb) { qidentityproxymodel_changepersistentindex_callback = cb; }
    void setQIdentityProxyModel_ChangePersistentIndexList_Callback(QIdentityProxyModel_ChangePersistentIndexList_Callback cb) { qidentityproxymodel_changepersistentindexlist_callback = cb; }
    void setQIdentityProxyModel_PersistentIndexList_Callback(QIdentityProxyModel_PersistentIndexList_Callback cb) { qidentityproxymodel_persistentindexlist_callback = cb; }
    void setQIdentityProxyModel_Sender_Callback(QIdentityProxyModel_Sender_Callback cb) { qidentityproxymodel_sender_callback = cb; }
    void setQIdentityProxyModel_SenderSignalIndex_Callback(QIdentityProxyModel_SenderSignalIndex_Callback cb) { qidentityproxymodel_sendersignalindex_callback = cb; }
    void setQIdentityProxyModel_Receivers_Callback(QIdentityProxyModel_Receivers_Callback cb) { qidentityproxymodel_receivers_callback = cb; }
    void setQIdentityProxyModel_IsSignalConnected_Callback(QIdentityProxyModel_IsSignalConnected_Callback cb) { qidentityproxymodel_issignalconnected_callback = cb; }

    // Base flag setters
    void setQIdentityProxyModel_Metacall_IsBase(bool value) const { qidentityproxymodel_metacall_isbase = value; }
    void setQIdentityProxyModel_ColumnCount_IsBase(bool value) const { qidentityproxymodel_columncount_isbase = value; }
    void setQIdentityProxyModel_Index_IsBase(bool value) const { qidentityproxymodel_index_isbase = value; }
    void setQIdentityProxyModel_MapFromSource_IsBase(bool value) const { qidentityproxymodel_mapfromsource_isbase = value; }
    void setQIdentityProxyModel_MapToSource_IsBase(bool value) const { qidentityproxymodel_maptosource_isbase = value; }
    void setQIdentityProxyModel_Parent_IsBase(bool value) const { qidentityproxymodel_parent_isbase = value; }
    void setQIdentityProxyModel_RowCount_IsBase(bool value) const { qidentityproxymodel_rowcount_isbase = value; }
    void setQIdentityProxyModel_HeaderData_IsBase(bool value) const { qidentityproxymodel_headerdata_isbase = value; }
    void setQIdentityProxyModel_DropMimeData_IsBase(bool value) const { qidentityproxymodel_dropmimedata_isbase = value; }
    void setQIdentityProxyModel_Sibling_IsBase(bool value) const { qidentityproxymodel_sibling_isbase = value; }
    void setQIdentityProxyModel_MapSelectionFromSource_IsBase(bool value) const { qidentityproxymodel_mapselectionfromsource_isbase = value; }
    void setQIdentityProxyModel_MapSelectionToSource_IsBase(bool value) const { qidentityproxymodel_mapselectiontosource_isbase = value; }
    void setQIdentityProxyModel_Match_IsBase(bool value) const { qidentityproxymodel_match_isbase = value; }
    void setQIdentityProxyModel_SetSourceModel_IsBase(bool value) const { qidentityproxymodel_setsourcemodel_isbase = value; }
    void setQIdentityProxyModel_InsertColumns_IsBase(bool value) const { qidentityproxymodel_insertcolumns_isbase = value; }
    void setQIdentityProxyModel_InsertRows_IsBase(bool value) const { qidentityproxymodel_insertrows_isbase = value; }
    void setQIdentityProxyModel_RemoveColumns_IsBase(bool value) const { qidentityproxymodel_removecolumns_isbase = value; }
    void setQIdentityProxyModel_RemoveRows_IsBase(bool value) const { qidentityproxymodel_removerows_isbase = value; }
    void setQIdentityProxyModel_MoveRows_IsBase(bool value) const { qidentityproxymodel_moverows_isbase = value; }
    void setQIdentityProxyModel_MoveColumns_IsBase(bool value) const { qidentityproxymodel_movecolumns_isbase = value; }
    void setQIdentityProxyModel_Submit_IsBase(bool value) const { qidentityproxymodel_submit_isbase = value; }
    void setQIdentityProxyModel_Revert_IsBase(bool value) const { qidentityproxymodel_revert_isbase = value; }
    void setQIdentityProxyModel_Data_IsBase(bool value) const { qidentityproxymodel_data_isbase = value; }
    void setQIdentityProxyModel_ItemData_IsBase(bool value) const { qidentityproxymodel_itemdata_isbase = value; }
    void setQIdentityProxyModel_Flags_IsBase(bool value) const { qidentityproxymodel_flags_isbase = value; }
    void setQIdentityProxyModel_SetData_IsBase(bool value) const { qidentityproxymodel_setdata_isbase = value; }
    void setQIdentityProxyModel_SetItemData_IsBase(bool value) const { qidentityproxymodel_setitemdata_isbase = value; }
    void setQIdentityProxyModel_SetHeaderData_IsBase(bool value) const { qidentityproxymodel_setheaderdata_isbase = value; }
    void setQIdentityProxyModel_ClearItemData_IsBase(bool value) const { qidentityproxymodel_clearitemdata_isbase = value; }
    void setQIdentityProxyModel_Buddy_IsBase(bool value) const { qidentityproxymodel_buddy_isbase = value; }
    void setQIdentityProxyModel_CanFetchMore_IsBase(bool value) const { qidentityproxymodel_canfetchmore_isbase = value; }
    void setQIdentityProxyModel_FetchMore_IsBase(bool value) const { qidentityproxymodel_fetchmore_isbase = value; }
    void setQIdentityProxyModel_Sort_IsBase(bool value) const { qidentityproxymodel_sort_isbase = value; }
    void setQIdentityProxyModel_Span_IsBase(bool value) const { qidentityproxymodel_span_isbase = value; }
    void setQIdentityProxyModel_HasChildren_IsBase(bool value) const { qidentityproxymodel_haschildren_isbase = value; }
    void setQIdentityProxyModel_MimeData_IsBase(bool value) const { qidentityproxymodel_mimedata_isbase = value; }
    void setQIdentityProxyModel_CanDropMimeData_IsBase(bool value) const { qidentityproxymodel_candropmimedata_isbase = value; }
    void setQIdentityProxyModel_MimeTypes_IsBase(bool value) const { qidentityproxymodel_mimetypes_isbase = value; }
    void setQIdentityProxyModel_SupportedDragActions_IsBase(bool value) const { qidentityproxymodel_supporteddragactions_isbase = value; }
    void setQIdentityProxyModel_SupportedDropActions_IsBase(bool value) const { qidentityproxymodel_supporteddropactions_isbase = value; }
    void setQIdentityProxyModel_RoleNames_IsBase(bool value) const { qidentityproxymodel_rolenames_isbase = value; }
    void setQIdentityProxyModel_MultiData_IsBase(bool value) const { qidentityproxymodel_multidata_isbase = value; }
    void setQIdentityProxyModel_ResetInternalData_IsBase(bool value) const { qidentityproxymodel_resetinternaldata_isbase = value; }
    void setQIdentityProxyModel_Event_IsBase(bool value) const { qidentityproxymodel_event_isbase = value; }
    void setQIdentityProxyModel_EventFilter_IsBase(bool value) const { qidentityproxymodel_eventfilter_isbase = value; }
    void setQIdentityProxyModel_TimerEvent_IsBase(bool value) const { qidentityproxymodel_timerevent_isbase = value; }
    void setQIdentityProxyModel_ChildEvent_IsBase(bool value) const { qidentityproxymodel_childevent_isbase = value; }
    void setQIdentityProxyModel_CustomEvent_IsBase(bool value) const { qidentityproxymodel_customevent_isbase = value; }
    void setQIdentityProxyModel_ConnectNotify_IsBase(bool value) const { qidentityproxymodel_connectnotify_isbase = value; }
    void setQIdentityProxyModel_DisconnectNotify_IsBase(bool value) const { qidentityproxymodel_disconnectnotify_isbase = value; }
    void setQIdentityProxyModel_CreateSourceIndex_IsBase(bool value) const { qidentityproxymodel_createsourceindex_isbase = value; }
    void setQIdentityProxyModel_CreateIndex_IsBase(bool value) const { qidentityproxymodel_createindex_isbase = value; }
    void setQIdentityProxyModel_EncodeData_IsBase(bool value) const { qidentityproxymodel_encodedata_isbase = value; }
    void setQIdentityProxyModel_DecodeData_IsBase(bool value) const { qidentityproxymodel_decodedata_isbase = value; }
    void setQIdentityProxyModel_BeginInsertRows_IsBase(bool value) const { qidentityproxymodel_begininsertrows_isbase = value; }
    void setQIdentityProxyModel_EndInsertRows_IsBase(bool value) const { qidentityproxymodel_endinsertrows_isbase = value; }
    void setQIdentityProxyModel_BeginRemoveRows_IsBase(bool value) const { qidentityproxymodel_beginremoverows_isbase = value; }
    void setQIdentityProxyModel_EndRemoveRows_IsBase(bool value) const { qidentityproxymodel_endremoverows_isbase = value; }
    void setQIdentityProxyModel_BeginMoveRows_IsBase(bool value) const { qidentityproxymodel_beginmoverows_isbase = value; }
    void setQIdentityProxyModel_EndMoveRows_IsBase(bool value) const { qidentityproxymodel_endmoverows_isbase = value; }
    void setQIdentityProxyModel_BeginInsertColumns_IsBase(bool value) const { qidentityproxymodel_begininsertcolumns_isbase = value; }
    void setQIdentityProxyModel_EndInsertColumns_IsBase(bool value) const { qidentityproxymodel_endinsertcolumns_isbase = value; }
    void setQIdentityProxyModel_BeginRemoveColumns_IsBase(bool value) const { qidentityproxymodel_beginremovecolumns_isbase = value; }
    void setQIdentityProxyModel_EndRemoveColumns_IsBase(bool value) const { qidentityproxymodel_endremovecolumns_isbase = value; }
    void setQIdentityProxyModel_BeginMoveColumns_IsBase(bool value) const { qidentityproxymodel_beginmovecolumns_isbase = value; }
    void setQIdentityProxyModel_EndMoveColumns_IsBase(bool value) const { qidentityproxymodel_endmovecolumns_isbase = value; }
    void setQIdentityProxyModel_BeginResetModel_IsBase(bool value) const { qidentityproxymodel_beginresetmodel_isbase = value; }
    void setQIdentityProxyModel_EndResetModel_IsBase(bool value) const { qidentityproxymodel_endresetmodel_isbase = value; }
    void setQIdentityProxyModel_ChangePersistentIndex_IsBase(bool value) const { qidentityproxymodel_changepersistentindex_isbase = value; }
    void setQIdentityProxyModel_ChangePersistentIndexList_IsBase(bool value) const { qidentityproxymodel_changepersistentindexlist_isbase = value; }
    void setQIdentityProxyModel_PersistentIndexList_IsBase(bool value) const { qidentityproxymodel_persistentindexlist_isbase = value; }
    void setQIdentityProxyModel_Sender_IsBase(bool value) const { qidentityproxymodel_sender_isbase = value; }
    void setQIdentityProxyModel_SenderSignalIndex_IsBase(bool value) const { qidentityproxymodel_sendersignalindex_isbase = value; }
    void setQIdentityProxyModel_Receivers_IsBase(bool value) const { qidentityproxymodel_receivers_isbase = value; }
    void setQIdentityProxyModel_IsSignalConnected_IsBase(bool value) const { qidentityproxymodel_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qidentityproxymodel_metacall_isbase) {
            qidentityproxymodel_metacall_isbase = false;
            return QIdentityProxyModel::qt_metacall(param1, param2, param3);
        } else if (qidentityproxymodel_metacall_callback != nullptr) {
            return qidentityproxymodel_metacall_callback(this, param1, param2, param3);
        } else {
            return QIdentityProxyModel::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int columnCount(const QModelIndex& parent) const override {
        if (qidentityproxymodel_columncount_isbase) {
            qidentityproxymodel_columncount_isbase = false;
            return QIdentityProxyModel::columnCount(parent);
        } else if (qidentityproxymodel_columncount_callback != nullptr) {
            return qidentityproxymodel_columncount_callback(this, parent);
        } else {
            return QIdentityProxyModel::columnCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
        if (qidentityproxymodel_index_isbase) {
            qidentityproxymodel_index_isbase = false;
            return QIdentityProxyModel::index(row, column, parent);
        } else if (qidentityproxymodel_index_callback != nullptr) {
            return qidentityproxymodel_index_callback(this, row, column, parent);
        } else {
            return QIdentityProxyModel::index(row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
        if (qidentityproxymodel_mapfromsource_isbase) {
            qidentityproxymodel_mapfromsource_isbase = false;
            return QIdentityProxyModel::mapFromSource(sourceIndex);
        } else if (qidentityproxymodel_mapfromsource_callback != nullptr) {
            return qidentityproxymodel_mapfromsource_callback(this, sourceIndex);
        } else {
            return QIdentityProxyModel::mapFromSource(sourceIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
        if (qidentityproxymodel_maptosource_isbase) {
            qidentityproxymodel_maptosource_isbase = false;
            return QIdentityProxyModel::mapToSource(proxyIndex);
        } else if (qidentityproxymodel_maptosource_callback != nullptr) {
            return qidentityproxymodel_maptosource_callback(this, proxyIndex);
        } else {
            return QIdentityProxyModel::mapToSource(proxyIndex);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex parent(const QModelIndex& child) const override {
        if (qidentityproxymodel_parent_isbase) {
            qidentityproxymodel_parent_isbase = false;
            return QIdentityProxyModel::parent(child);
        } else if (qidentityproxymodel_parent_callback != nullptr) {
            return qidentityproxymodel_parent_callback(this, child);
        } else {
            return QIdentityProxyModel::parent(child);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int rowCount(const QModelIndex& parent) const override {
        if (qidentityproxymodel_rowcount_isbase) {
            qidentityproxymodel_rowcount_isbase = false;
            return QIdentityProxyModel::rowCount(parent);
        } else if (qidentityproxymodel_rowcount_callback != nullptr) {
            return qidentityproxymodel_rowcount_callback(this, parent);
        } else {
            return QIdentityProxyModel::rowCount(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
        if (qidentityproxymodel_headerdata_isbase) {
            qidentityproxymodel_headerdata_isbase = false;
            return QIdentityProxyModel::headerData(section, orientation, role);
        } else if (qidentityproxymodel_headerdata_callback != nullptr) {
            return qidentityproxymodel_headerdata_callback(this, section, orientation, role);
        } else {
            return QIdentityProxyModel::headerData(section, orientation, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
        if (qidentityproxymodel_dropmimedata_isbase) {
            qidentityproxymodel_dropmimedata_isbase = false;
            return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
        } else if (qidentityproxymodel_dropmimedata_callback != nullptr) {
            return qidentityproxymodel_dropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QIdentityProxyModel::dropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
        if (qidentityproxymodel_sibling_isbase) {
            qidentityproxymodel_sibling_isbase = false;
            return QIdentityProxyModel::sibling(row, column, idx);
        } else if (qidentityproxymodel_sibling_callback != nullptr) {
            return qidentityproxymodel_sibling_callback(this, row, column, idx);
        } else {
            return QIdentityProxyModel::sibling(row, column, idx);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
        if (qidentityproxymodel_mapselectionfromsource_isbase) {
            qidentityproxymodel_mapselectionfromsource_isbase = false;
            return QIdentityProxyModel::mapSelectionFromSource(selection);
        } else if (qidentityproxymodel_mapselectionfromsource_callback != nullptr) {
            return qidentityproxymodel_mapselectionfromsource_callback(this, selection);
        } else {
            return QIdentityProxyModel::mapSelectionFromSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
        if (qidentityproxymodel_mapselectiontosource_isbase) {
            qidentityproxymodel_mapselectiontosource_isbase = false;
            return QIdentityProxyModel::mapSelectionToSource(selection);
        } else if (qidentityproxymodel_mapselectiontosource_callback != nullptr) {
            return qidentityproxymodel_mapselectiontosource_callback(this, selection);
        } else {
            return QIdentityProxyModel::mapSelectionToSource(selection);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
        if (qidentityproxymodel_match_isbase) {
            qidentityproxymodel_match_isbase = false;
            return QIdentityProxyModel::match(start, role, value, hits, flags);
        } else if (qidentityproxymodel_match_callback != nullptr) {
            return qidentityproxymodel_match_callback(this, start, role, value, hits, flags);
        } else {
            return QIdentityProxyModel::match(start, role, value, hits, flags);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
        if (qidentityproxymodel_setsourcemodel_isbase) {
            qidentityproxymodel_setsourcemodel_isbase = false;
            QIdentityProxyModel::setSourceModel(sourceModel);
        } else if (qidentityproxymodel_setsourcemodel_callback != nullptr) {
            qidentityproxymodel_setsourcemodel_callback(this, sourceModel);
        } else {
            QIdentityProxyModel::setSourceModel(sourceModel);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_insertcolumns_isbase) {
            qidentityproxymodel_insertcolumns_isbase = false;
            return QIdentityProxyModel::insertColumns(column, count, parent);
        } else if (qidentityproxymodel_insertcolumns_callback != nullptr) {
            return qidentityproxymodel_insertcolumns_callback(this, column, count, parent);
        } else {
            return QIdentityProxyModel::insertColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_insertrows_isbase) {
            qidentityproxymodel_insertrows_isbase = false;
            return QIdentityProxyModel::insertRows(row, count, parent);
        } else if (qidentityproxymodel_insertrows_callback != nullptr) {
            return qidentityproxymodel_insertrows_callback(this, row, count, parent);
        } else {
            return QIdentityProxyModel::insertRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_removecolumns_isbase) {
            qidentityproxymodel_removecolumns_isbase = false;
            return QIdentityProxyModel::removeColumns(column, count, parent);
        } else if (qidentityproxymodel_removecolumns_callback != nullptr) {
            return qidentityproxymodel_removecolumns_callback(this, column, count, parent);
        } else {
            return QIdentityProxyModel::removeColumns(column, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
        if (qidentityproxymodel_removerows_isbase) {
            qidentityproxymodel_removerows_isbase = false;
            return QIdentityProxyModel::removeRows(row, count, parent);
        } else if (qidentityproxymodel_removerows_callback != nullptr) {
            return qidentityproxymodel_removerows_callback(this, row, count, parent);
        } else {
            return QIdentityProxyModel::removeRows(row, count, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qidentityproxymodel_moverows_isbase) {
            qidentityproxymodel_moverows_isbase = false;
            return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else if (qidentityproxymodel_moverows_callback != nullptr) {
            return qidentityproxymodel_moverows_callback(this, sourceParent, sourceRow, count, destinationParent, destinationChild);
        } else {
            return QIdentityProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
        if (qidentityproxymodel_movecolumns_isbase) {
            qidentityproxymodel_movecolumns_isbase = false;
            return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else if (qidentityproxymodel_movecolumns_callback != nullptr) {
            return qidentityproxymodel_movecolumns_callback(this, sourceParent, sourceColumn, count, destinationParent, destinationChild);
        } else {
            return QIdentityProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool submit() override {
        if (qidentityproxymodel_submit_isbase) {
            qidentityproxymodel_submit_isbase = false;
            return QIdentityProxyModel::submit();
        } else if (qidentityproxymodel_submit_callback != nullptr) {
            return qidentityproxymodel_submit_callback();
        } else {
            return QIdentityProxyModel::submit();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void revert() override {
        if (qidentityproxymodel_revert_isbase) {
            qidentityproxymodel_revert_isbase = false;
            QIdentityProxyModel::revert();
        } else if (qidentityproxymodel_revert_callback != nullptr) {
            qidentityproxymodel_revert_callback();
        } else {
            QIdentityProxyModel::revert();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
        if (qidentityproxymodel_data_isbase) {
            qidentityproxymodel_data_isbase = false;
            return QIdentityProxyModel::data(proxyIndex, role);
        } else if (qidentityproxymodel_data_callback != nullptr) {
            return qidentityproxymodel_data_callback(this, proxyIndex, role);
        } else {
            return QIdentityProxyModel::data(proxyIndex, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
        if (qidentityproxymodel_itemdata_isbase) {
            qidentityproxymodel_itemdata_isbase = false;
            return QIdentityProxyModel::itemData(index);
        } else if (qidentityproxymodel_itemdata_callback != nullptr) {
            return qidentityproxymodel_itemdata_callback(this, index);
        } else {
            return QIdentityProxyModel::itemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
        if (qidentityproxymodel_flags_isbase) {
            qidentityproxymodel_flags_isbase = false;
            return QIdentityProxyModel::flags(index);
        } else if (qidentityproxymodel_flags_callback != nullptr) {
            return qidentityproxymodel_flags_callback(this, index);
        } else {
            return QIdentityProxyModel::flags(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
        if (qidentityproxymodel_setdata_isbase) {
            qidentityproxymodel_setdata_isbase = false;
            return QIdentityProxyModel::setData(index, value, role);
        } else if (qidentityproxymodel_setdata_callback != nullptr) {
            return qidentityproxymodel_setdata_callback(this, index, value, role);
        } else {
            return QIdentityProxyModel::setData(index, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
        if (qidentityproxymodel_setitemdata_isbase) {
            qidentityproxymodel_setitemdata_isbase = false;
            return QIdentityProxyModel::setItemData(index, roles);
        } else if (qidentityproxymodel_setitemdata_callback != nullptr) {
            return qidentityproxymodel_setitemdata_callback(this, index, roles);
        } else {
            return QIdentityProxyModel::setItemData(index, roles);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
        if (qidentityproxymodel_setheaderdata_isbase) {
            qidentityproxymodel_setheaderdata_isbase = false;
            return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
        } else if (qidentityproxymodel_setheaderdata_callback != nullptr) {
            return qidentityproxymodel_setheaderdata_callback(this, section, orientation, value, role);
        } else {
            return QIdentityProxyModel::setHeaderData(section, orientation, value, role);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clearItemData(const QModelIndex& index) override {
        if (qidentityproxymodel_clearitemdata_isbase) {
            qidentityproxymodel_clearitemdata_isbase = false;
            return QIdentityProxyModel::clearItemData(index);
        } else if (qidentityproxymodel_clearitemdata_callback != nullptr) {
            return qidentityproxymodel_clearitemdata_callback(this, index);
        } else {
            return QIdentityProxyModel::clearItemData(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QModelIndex buddy(const QModelIndex& index) const override {
        if (qidentityproxymodel_buddy_isbase) {
            qidentityproxymodel_buddy_isbase = false;
            return QIdentityProxyModel::buddy(index);
        } else if (qidentityproxymodel_buddy_callback != nullptr) {
            return qidentityproxymodel_buddy_callback(this, index);
        } else {
            return QIdentityProxyModel::buddy(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canFetchMore(const QModelIndex& parent) const override {
        if (qidentityproxymodel_canfetchmore_isbase) {
            qidentityproxymodel_canfetchmore_isbase = false;
            return QIdentityProxyModel::canFetchMore(parent);
        } else if (qidentityproxymodel_canfetchmore_callback != nullptr) {
            return qidentityproxymodel_canfetchmore_callback(this, parent);
        } else {
            return QIdentityProxyModel::canFetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void fetchMore(const QModelIndex& parent) override {
        if (qidentityproxymodel_fetchmore_isbase) {
            qidentityproxymodel_fetchmore_isbase = false;
            QIdentityProxyModel::fetchMore(parent);
        } else if (qidentityproxymodel_fetchmore_callback != nullptr) {
            qidentityproxymodel_fetchmore_callback(this, parent);
        } else {
            QIdentityProxyModel::fetchMore(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void sort(int column, Qt::SortOrder order) override {
        if (qidentityproxymodel_sort_isbase) {
            qidentityproxymodel_sort_isbase = false;
            QIdentityProxyModel::sort(column, order);
        } else if (qidentityproxymodel_sort_callback != nullptr) {
            qidentityproxymodel_sort_callback(this, column, order);
        } else {
            QIdentityProxyModel::sort(column, order);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize span(const QModelIndex& index) const override {
        if (qidentityproxymodel_span_isbase) {
            qidentityproxymodel_span_isbase = false;
            return QIdentityProxyModel::span(index);
        } else if (qidentityproxymodel_span_callback != nullptr) {
            return qidentityproxymodel_span_callback(this, index);
        } else {
            return QIdentityProxyModel::span(index);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool hasChildren(const QModelIndex& parent) const override {
        if (qidentityproxymodel_haschildren_isbase) {
            qidentityproxymodel_haschildren_isbase = false;
            return QIdentityProxyModel::hasChildren(parent);
        } else if (qidentityproxymodel_haschildren_callback != nullptr) {
            return qidentityproxymodel_haschildren_callback(this, parent);
        } else {
            return QIdentityProxyModel::hasChildren(parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
        if (qidentityproxymodel_mimedata_isbase) {
            qidentityproxymodel_mimedata_isbase = false;
            return QIdentityProxyModel::mimeData(indexes);
        } else if (qidentityproxymodel_mimedata_callback != nullptr) {
            return qidentityproxymodel_mimedata_callback(this, indexes);
        } else {
            return QIdentityProxyModel::mimeData(indexes);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
        if (qidentityproxymodel_candropmimedata_isbase) {
            qidentityproxymodel_candropmimedata_isbase = false;
            return QIdentityProxyModel::canDropMimeData(data, action, row, column, parent);
        } else if (qidentityproxymodel_candropmimedata_callback != nullptr) {
            return qidentityproxymodel_candropmimedata_callback(this, data, action, row, column, parent);
        } else {
            return QIdentityProxyModel::canDropMimeData(data, action, row, column, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList mimeTypes() const override {
        if (qidentityproxymodel_mimetypes_isbase) {
            qidentityproxymodel_mimetypes_isbase = false;
            return QIdentityProxyModel::mimeTypes();
        } else if (qidentityproxymodel_mimetypes_callback != nullptr) {
            return qidentityproxymodel_mimetypes_callback();
        } else {
            return QIdentityProxyModel::mimeTypes();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDragActions() const override {
        if (qidentityproxymodel_supporteddragactions_isbase) {
            qidentityproxymodel_supporteddragactions_isbase = false;
            return QIdentityProxyModel::supportedDragActions();
        } else if (qidentityproxymodel_supporteddragactions_callback != nullptr) {
            return qidentityproxymodel_supporteddragactions_callback();
        } else {
            return QIdentityProxyModel::supportedDragActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual Qt::DropActions supportedDropActions() const override {
        if (qidentityproxymodel_supporteddropactions_isbase) {
            qidentityproxymodel_supporteddropactions_isbase = false;
            return QIdentityProxyModel::supportedDropActions();
        } else if (qidentityproxymodel_supporteddropactions_callback != nullptr) {
            return qidentityproxymodel_supporteddropactions_callback();
        } else {
            return QIdentityProxyModel::supportedDropActions();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QHash<int, QByteArray> roleNames() const override {
        if (qidentityproxymodel_rolenames_isbase) {
            qidentityproxymodel_rolenames_isbase = false;
            return QIdentityProxyModel::roleNames();
        } else if (qidentityproxymodel_rolenames_callback != nullptr) {
            return qidentityproxymodel_rolenames_callback();
        } else {
            return QIdentityProxyModel::roleNames();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void multiData(const QModelIndex& index, QModelRoleDataSpan roleDataSpan) const override {
        if (qidentityproxymodel_multidata_isbase) {
            qidentityproxymodel_multidata_isbase = false;
            QIdentityProxyModel::multiData(index, roleDataSpan);
        } else if (qidentityproxymodel_multidata_callback != nullptr) {
            qidentityproxymodel_multidata_callback(this, index, roleDataSpan);
        } else {
            QIdentityProxyModel::multiData(index, roleDataSpan);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void resetInternalData() override {
        if (qidentityproxymodel_resetinternaldata_isbase) {
            qidentityproxymodel_resetinternaldata_isbase = false;
            QIdentityProxyModel::resetInternalData();
        } else if (qidentityproxymodel_resetinternaldata_callback != nullptr) {
            qidentityproxymodel_resetinternaldata_callback();
        } else {
            QIdentityProxyModel::resetInternalData();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qidentityproxymodel_event_isbase) {
            qidentityproxymodel_event_isbase = false;
            return QIdentityProxyModel::event(event);
        } else if (qidentityproxymodel_event_callback != nullptr) {
            return qidentityproxymodel_event_callback(this, event);
        } else {
            return QIdentityProxyModel::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qidentityproxymodel_eventfilter_isbase) {
            qidentityproxymodel_eventfilter_isbase = false;
            return QIdentityProxyModel::eventFilter(watched, event);
        } else if (qidentityproxymodel_eventfilter_callback != nullptr) {
            return qidentityproxymodel_eventfilter_callback(this, watched, event);
        } else {
            return QIdentityProxyModel::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qidentityproxymodel_timerevent_isbase) {
            qidentityproxymodel_timerevent_isbase = false;
            QIdentityProxyModel::timerEvent(event);
        } else if (qidentityproxymodel_timerevent_callback != nullptr) {
            qidentityproxymodel_timerevent_callback(this, event);
        } else {
            QIdentityProxyModel::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qidentityproxymodel_childevent_isbase) {
            qidentityproxymodel_childevent_isbase = false;
            QIdentityProxyModel::childEvent(event);
        } else if (qidentityproxymodel_childevent_callback != nullptr) {
            qidentityproxymodel_childevent_callback(this, event);
        } else {
            QIdentityProxyModel::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qidentityproxymodel_customevent_isbase) {
            qidentityproxymodel_customevent_isbase = false;
            QIdentityProxyModel::customEvent(event);
        } else if (qidentityproxymodel_customevent_callback != nullptr) {
            qidentityproxymodel_customevent_callback(this, event);
        } else {
            QIdentityProxyModel::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qidentityproxymodel_connectnotify_isbase) {
            qidentityproxymodel_connectnotify_isbase = false;
            QIdentityProxyModel::connectNotify(signal);
        } else if (qidentityproxymodel_connectnotify_callback != nullptr) {
            qidentityproxymodel_connectnotify_callback(this, signal);
        } else {
            QIdentityProxyModel::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qidentityproxymodel_disconnectnotify_isbase) {
            qidentityproxymodel_disconnectnotify_isbase = false;
            QIdentityProxyModel::disconnectNotify(signal);
        } else if (qidentityproxymodel_disconnectnotify_callback != nullptr) {
            qidentityproxymodel_disconnectnotify_callback(this, signal);
        } else {
            QIdentityProxyModel::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createSourceIndex(int row, int col, void* internalPtr) const {
        if (qidentityproxymodel_createsourceindex_isbase) {
            qidentityproxymodel_createsourceindex_isbase = false;
            return QIdentityProxyModel::createSourceIndex(row, col, internalPtr);
        } else if (qidentityproxymodel_createsourceindex_callback != nullptr) {
            return qidentityproxymodel_createsourceindex_callback(this, row, col, internalPtr);
        } else {
            return QIdentityProxyModel::createSourceIndex(row, col, internalPtr);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndex createIndex(int row, int column) const {
        if (qidentityproxymodel_createindex_isbase) {
            qidentityproxymodel_createindex_isbase = false;
            return QIdentityProxyModel::createIndex(row, column);
        } else if (qidentityproxymodel_createindex_callback != nullptr) {
            return qidentityproxymodel_createindex_callback(this, row, column);
        } else {
            return QIdentityProxyModel::createIndex(row, column);
        }
    }

    // Virtual method for C ABI access and custom callback
    void encodeData(const QModelIndexList& indexes, QDataStream& stream) const {
        if (qidentityproxymodel_encodedata_isbase) {
            qidentityproxymodel_encodedata_isbase = false;
            QIdentityProxyModel::encodeData(indexes, stream);
        } else if (qidentityproxymodel_encodedata_callback != nullptr) {
            qidentityproxymodel_encodedata_callback(this, indexes, stream);
        } else {
            QIdentityProxyModel::encodeData(indexes, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool decodeData(int row, int column, const QModelIndex& parent, QDataStream& stream) {
        if (qidentityproxymodel_decodedata_isbase) {
            qidentityproxymodel_decodedata_isbase = false;
            return QIdentityProxyModel::decodeData(row, column, parent, stream);
        } else if (qidentityproxymodel_decodedata_callback != nullptr) {
            return qidentityproxymodel_decodedata_callback(this, row, column, parent, stream);
        } else {
            return QIdentityProxyModel::decodeData(row, column, parent, stream);
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertRows(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_begininsertrows_isbase) {
            qidentityproxymodel_begininsertrows_isbase = false;
            QIdentityProxyModel::beginInsertRows(parent, first, last);
        } else if (qidentityproxymodel_begininsertrows_callback != nullptr) {
            qidentityproxymodel_begininsertrows_callback(this, parent, first, last);
        } else {
            QIdentityProxyModel::beginInsertRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertRows() {
        if (qidentityproxymodel_endinsertrows_isbase) {
            qidentityproxymodel_endinsertrows_isbase = false;
            QIdentityProxyModel::endInsertRows();
        } else if (qidentityproxymodel_endinsertrows_callback != nullptr) {
            qidentityproxymodel_endinsertrows_callback();
        } else {
            QIdentityProxyModel::endInsertRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveRows(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_beginremoverows_isbase) {
            qidentityproxymodel_beginremoverows_isbase = false;
            QIdentityProxyModel::beginRemoveRows(parent, first, last);
        } else if (qidentityproxymodel_beginremoverows_callback != nullptr) {
            qidentityproxymodel_beginremoverows_callback(this, parent, first, last);
        } else {
            QIdentityProxyModel::beginRemoveRows(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveRows() {
        if (qidentityproxymodel_endremoverows_isbase) {
            qidentityproxymodel_endremoverows_isbase = false;
            QIdentityProxyModel::endRemoveRows();
        } else if (qidentityproxymodel_endremoverows_callback != nullptr) {
            qidentityproxymodel_endremoverows_callback();
        } else {
            QIdentityProxyModel::endRemoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveRows(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationRow) {
        if (qidentityproxymodel_beginmoverows_isbase) {
            qidentityproxymodel_beginmoverows_isbase = false;
            return QIdentityProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else if (qidentityproxymodel_beginmoverows_callback != nullptr) {
            return qidentityproxymodel_beginmoverows_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        } else {
            return QIdentityProxyModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveRows() {
        if (qidentityproxymodel_endmoverows_isbase) {
            qidentityproxymodel_endmoverows_isbase = false;
            QIdentityProxyModel::endMoveRows();
        } else if (qidentityproxymodel_endmoverows_callback != nullptr) {
            qidentityproxymodel_endmoverows_callback();
        } else {
            QIdentityProxyModel::endMoveRows();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginInsertColumns(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_begininsertcolumns_isbase) {
            qidentityproxymodel_begininsertcolumns_isbase = false;
            QIdentityProxyModel::beginInsertColumns(parent, first, last);
        } else if (qidentityproxymodel_begininsertcolumns_callback != nullptr) {
            qidentityproxymodel_begininsertcolumns_callback(this, parent, first, last);
        } else {
            QIdentityProxyModel::beginInsertColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endInsertColumns() {
        if (qidentityproxymodel_endinsertcolumns_isbase) {
            qidentityproxymodel_endinsertcolumns_isbase = false;
            QIdentityProxyModel::endInsertColumns();
        } else if (qidentityproxymodel_endinsertcolumns_callback != nullptr) {
            qidentityproxymodel_endinsertcolumns_callback();
        } else {
            QIdentityProxyModel::endInsertColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginRemoveColumns(const QModelIndex& parent, int first, int last) {
        if (qidentityproxymodel_beginremovecolumns_isbase) {
            qidentityproxymodel_beginremovecolumns_isbase = false;
            QIdentityProxyModel::beginRemoveColumns(parent, first, last);
        } else if (qidentityproxymodel_beginremovecolumns_callback != nullptr) {
            qidentityproxymodel_beginremovecolumns_callback(this, parent, first, last);
        } else {
            QIdentityProxyModel::beginRemoveColumns(parent, first, last);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endRemoveColumns() {
        if (qidentityproxymodel_endremovecolumns_isbase) {
            qidentityproxymodel_endremovecolumns_isbase = false;
            QIdentityProxyModel::endRemoveColumns();
        } else if (qidentityproxymodel_endremovecolumns_callback != nullptr) {
            qidentityproxymodel_endremovecolumns_callback();
        } else {
            QIdentityProxyModel::endRemoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    bool beginMoveColumns(const QModelIndex& sourceParent, int sourceFirst, int sourceLast, const QModelIndex& destinationParent, int destinationColumn) {
        if (qidentityproxymodel_beginmovecolumns_isbase) {
            qidentityproxymodel_beginmovecolumns_isbase = false;
            return QIdentityProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else if (qidentityproxymodel_beginmovecolumns_callback != nullptr) {
            return qidentityproxymodel_beginmovecolumns_callback(this, sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        } else {
            return QIdentityProxyModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
        }
    }

    // Virtual method for C ABI access and custom callback
    void endMoveColumns() {
        if (qidentityproxymodel_endmovecolumns_isbase) {
            qidentityproxymodel_endmovecolumns_isbase = false;
            QIdentityProxyModel::endMoveColumns();
        } else if (qidentityproxymodel_endmovecolumns_callback != nullptr) {
            qidentityproxymodel_endmovecolumns_callback();
        } else {
            QIdentityProxyModel::endMoveColumns();
        }
    }

    // Virtual method for C ABI access and custom callback
    void beginResetModel() {
        if (qidentityproxymodel_beginresetmodel_isbase) {
            qidentityproxymodel_beginresetmodel_isbase = false;
            QIdentityProxyModel::beginResetModel();
        } else if (qidentityproxymodel_beginresetmodel_callback != nullptr) {
            qidentityproxymodel_beginresetmodel_callback();
        } else {
            QIdentityProxyModel::beginResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void endResetModel() {
        if (qidentityproxymodel_endresetmodel_isbase) {
            qidentityproxymodel_endresetmodel_isbase = false;
            QIdentityProxyModel::endResetModel();
        } else if (qidentityproxymodel_endresetmodel_callback != nullptr) {
            qidentityproxymodel_endresetmodel_callback();
        } else {
            QIdentityProxyModel::endResetModel();
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndex(const QModelIndex& from, const QModelIndex& to) {
        if (qidentityproxymodel_changepersistentindex_isbase) {
            qidentityproxymodel_changepersistentindex_isbase = false;
            QIdentityProxyModel::changePersistentIndex(from, to);
        } else if (qidentityproxymodel_changepersistentindex_callback != nullptr) {
            qidentityproxymodel_changepersistentindex_callback(this, from, to);
        } else {
            QIdentityProxyModel::changePersistentIndex(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    void changePersistentIndexList(const QModelIndexList& from, const QModelIndexList& to) {
        if (qidentityproxymodel_changepersistentindexlist_isbase) {
            qidentityproxymodel_changepersistentindexlist_isbase = false;
            QIdentityProxyModel::changePersistentIndexList(from, to);
        } else if (qidentityproxymodel_changepersistentindexlist_callback != nullptr) {
            qidentityproxymodel_changepersistentindexlist_callback(this, from, to);
        } else {
            QIdentityProxyModel::changePersistentIndexList(from, to);
        }
    }

    // Virtual method for C ABI access and custom callback
    QModelIndexList persistentIndexList() const {
        if (qidentityproxymodel_persistentindexlist_isbase) {
            qidentityproxymodel_persistentindexlist_isbase = false;
            return QIdentityProxyModel::persistentIndexList();
        } else if (qidentityproxymodel_persistentindexlist_callback != nullptr) {
            return qidentityproxymodel_persistentindexlist_callback();
        } else {
            return QIdentityProxyModel::persistentIndexList();
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qidentityproxymodel_sender_isbase) {
            qidentityproxymodel_sender_isbase = false;
            return QIdentityProxyModel::sender();
        } else if (qidentityproxymodel_sender_callback != nullptr) {
            return qidentityproxymodel_sender_callback();
        } else {
            return QIdentityProxyModel::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qidentityproxymodel_sendersignalindex_isbase) {
            qidentityproxymodel_sendersignalindex_isbase = false;
            return QIdentityProxyModel::senderSignalIndex();
        } else if (qidentityproxymodel_sendersignalindex_callback != nullptr) {
            return qidentityproxymodel_sendersignalindex_callback();
        } else {
            return QIdentityProxyModel::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qidentityproxymodel_receivers_isbase) {
            qidentityproxymodel_receivers_isbase = false;
            return QIdentityProxyModel::receivers(signal);
        } else if (qidentityproxymodel_receivers_callback != nullptr) {
            return qidentityproxymodel_receivers_callback(this, signal);
        } else {
            return QIdentityProxyModel::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qidentityproxymodel_issignalconnected_isbase) {
            qidentityproxymodel_issignalconnected_isbase = false;
            return QIdentityProxyModel::isSignalConnected(signal);
        } else if (qidentityproxymodel_issignalconnected_callback != nullptr) {
            return qidentityproxymodel_issignalconnected_callback(this, signal);
        } else {
            return QIdentityProxyModel::isSignalConnected(signal);
        }
    }
};

#endif
