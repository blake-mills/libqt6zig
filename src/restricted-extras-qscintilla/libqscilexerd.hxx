#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERD_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerD so that we can call protected methods
class VirtualQsciLexerD : public QsciLexerD {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerD_Metacall_Callback = int (*)(QsciLexerD*, QMetaObject::Call, int, void**);
    using QsciLexerD_SetFoldAtElse_Callback = void (*)(QsciLexerD*, bool);
    using QsciLexerD_SetFoldComments_Callback = void (*)(QsciLexerD*, bool);
    using QsciLexerD_SetFoldCompact_Callback = void (*)(QsciLexerD*, bool);
    using QsciLexerD_Language_Callback = const char* (*)();
    using QsciLexerD_Lexer_Callback = const char* (*)();
    using QsciLexerD_LexerId_Callback = int (*)();
    using QsciLexerD_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerD_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerD_BlockEnd_Callback = const char* (*)(const QsciLexerD*, int*);
    using QsciLexerD_BlockLookback_Callback = int (*)();
    using QsciLexerD_BlockStart_Callback = const char* (*)(const QsciLexerD*, int*);
    using QsciLexerD_BlockStartKeyword_Callback = const char* (*)(const QsciLexerD*, int*);
    using QsciLexerD_BraceStyle_Callback = int (*)();
    using QsciLexerD_CaseSensitive_Callback = bool (*)();
    using QsciLexerD_Color_Callback = QColor (*)(const QsciLexerD*, int);
    using QsciLexerD_EolFill_Callback = bool (*)(const QsciLexerD*, int);
    using QsciLexerD_Font_Callback = QFont (*)(const QsciLexerD*, int);
    using QsciLexerD_IndentationGuideView_Callback = int (*)();
    using QsciLexerD_Keywords_Callback = const char* (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultStyle_Callback = int (*)();
    using QsciLexerD_Description_Callback = QString (*)(const QsciLexerD*, int);
    using QsciLexerD_Paper_Callback = QColor (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultEolFill_Callback = bool (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerD*, int);
    using QsciLexerD_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerD*, int);
    using QsciLexerD_SetEditor_Callback = void (*)(QsciLexerD*, QsciScintilla*);
    using QsciLexerD_RefreshProperties_Callback = void (*)();
    using QsciLexerD_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerD_WordCharacters_Callback = const char* (*)();
    using QsciLexerD_SetAutoIndentStyle_Callback = void (*)(QsciLexerD*, int);
    using QsciLexerD_SetColor_Callback = void (*)(QsciLexerD*, const QColor&, int);
    using QsciLexerD_SetEolFill_Callback = void (*)(QsciLexerD*, bool, int);
    using QsciLexerD_SetFont_Callback = void (*)(QsciLexerD*, const QFont&, int);
    using QsciLexerD_SetPaper_Callback = void (*)(QsciLexerD*, const QColor&, int);
    using QsciLexerD_ReadProperties_Callback = bool (*)(QsciLexerD*, QSettings&, const QString&);
    using QsciLexerD_WriteProperties_Callback = bool (*)(const QsciLexerD*, QSettings&, const QString&);
    using QsciLexerD_Event_Callback = bool (*)(QsciLexerD*, QEvent*);
    using QsciLexerD_EventFilter_Callback = bool (*)(QsciLexerD*, QObject*, QEvent*);
    using QsciLexerD_TimerEvent_Callback = void (*)(QsciLexerD*, QTimerEvent*);
    using QsciLexerD_ChildEvent_Callback = void (*)(QsciLexerD*, QChildEvent*);
    using QsciLexerD_CustomEvent_Callback = void (*)(QsciLexerD*, QEvent*);
    using QsciLexerD_ConnectNotify_Callback = void (*)(QsciLexerD*, const QMetaMethod&);
    using QsciLexerD_DisconnectNotify_Callback = void (*)(QsciLexerD*, const QMetaMethod&);
    using QsciLexerD_Sender_Callback = QObject* (*)();
    using QsciLexerD_SenderSignalIndex_Callback = int (*)();
    using QsciLexerD_Receivers_Callback = int (*)(const QsciLexerD*, const char*);
    using QsciLexerD_IsSignalConnected_Callback = bool (*)(const QsciLexerD*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerD_Metacall_Callback qscilexerd_metacall_callback = nullptr;
    QsciLexerD_SetFoldAtElse_Callback qscilexerd_setfoldatelse_callback = nullptr;
    QsciLexerD_SetFoldComments_Callback qscilexerd_setfoldcomments_callback = nullptr;
    QsciLexerD_SetFoldCompact_Callback qscilexerd_setfoldcompact_callback = nullptr;
    QsciLexerD_Language_Callback qscilexerd_language_callback = nullptr;
    QsciLexerD_Lexer_Callback qscilexerd_lexer_callback = nullptr;
    QsciLexerD_LexerId_Callback qscilexerd_lexerid_callback = nullptr;
    QsciLexerD_AutoCompletionFillups_Callback qscilexerd_autocompletionfillups_callback = nullptr;
    QsciLexerD_AutoCompletionWordSeparators_Callback qscilexerd_autocompletionwordseparators_callback = nullptr;
    QsciLexerD_BlockEnd_Callback qscilexerd_blockend_callback = nullptr;
    QsciLexerD_BlockLookback_Callback qscilexerd_blocklookback_callback = nullptr;
    QsciLexerD_BlockStart_Callback qscilexerd_blockstart_callback = nullptr;
    QsciLexerD_BlockStartKeyword_Callback qscilexerd_blockstartkeyword_callback = nullptr;
    QsciLexerD_BraceStyle_Callback qscilexerd_bracestyle_callback = nullptr;
    QsciLexerD_CaseSensitive_Callback qscilexerd_casesensitive_callback = nullptr;
    QsciLexerD_Color_Callback qscilexerd_color_callback = nullptr;
    QsciLexerD_EolFill_Callback qscilexerd_eolfill_callback = nullptr;
    QsciLexerD_Font_Callback qscilexerd_font_callback = nullptr;
    QsciLexerD_IndentationGuideView_Callback qscilexerd_indentationguideview_callback = nullptr;
    QsciLexerD_Keywords_Callback qscilexerd_keywords_callback = nullptr;
    QsciLexerD_DefaultStyle_Callback qscilexerd_defaultstyle_callback = nullptr;
    QsciLexerD_Description_Callback qscilexerd_description_callback = nullptr;
    QsciLexerD_Paper_Callback qscilexerd_paper_callback = nullptr;
    QsciLexerD_DefaultColorWithStyle_Callback qscilexerd_defaultcolorwithstyle_callback = nullptr;
    QsciLexerD_DefaultEolFill_Callback qscilexerd_defaulteolfill_callback = nullptr;
    QsciLexerD_DefaultFontWithStyle_Callback qscilexerd_defaultfontwithstyle_callback = nullptr;
    QsciLexerD_DefaultPaperWithStyle_Callback qscilexerd_defaultpaperwithstyle_callback = nullptr;
    QsciLexerD_SetEditor_Callback qscilexerd_seteditor_callback = nullptr;
    QsciLexerD_RefreshProperties_Callback qscilexerd_refreshproperties_callback = nullptr;
    QsciLexerD_StyleBitsNeeded_Callback qscilexerd_stylebitsneeded_callback = nullptr;
    QsciLexerD_WordCharacters_Callback qscilexerd_wordcharacters_callback = nullptr;
    QsciLexerD_SetAutoIndentStyle_Callback qscilexerd_setautoindentstyle_callback = nullptr;
    QsciLexerD_SetColor_Callback qscilexerd_setcolor_callback = nullptr;
    QsciLexerD_SetEolFill_Callback qscilexerd_seteolfill_callback = nullptr;
    QsciLexerD_SetFont_Callback qscilexerd_setfont_callback = nullptr;
    QsciLexerD_SetPaper_Callback qscilexerd_setpaper_callback = nullptr;
    QsciLexerD_ReadProperties_Callback qscilexerd_readproperties_callback = nullptr;
    QsciLexerD_WriteProperties_Callback qscilexerd_writeproperties_callback = nullptr;
    QsciLexerD_Event_Callback qscilexerd_event_callback = nullptr;
    QsciLexerD_EventFilter_Callback qscilexerd_eventfilter_callback = nullptr;
    QsciLexerD_TimerEvent_Callback qscilexerd_timerevent_callback = nullptr;
    QsciLexerD_ChildEvent_Callback qscilexerd_childevent_callback = nullptr;
    QsciLexerD_CustomEvent_Callback qscilexerd_customevent_callback = nullptr;
    QsciLexerD_ConnectNotify_Callback qscilexerd_connectnotify_callback = nullptr;
    QsciLexerD_DisconnectNotify_Callback qscilexerd_disconnectnotify_callback = nullptr;
    QsciLexerD_Sender_Callback qscilexerd_sender_callback = nullptr;
    QsciLexerD_SenderSignalIndex_Callback qscilexerd_sendersignalindex_callback = nullptr;
    QsciLexerD_Receivers_Callback qscilexerd_receivers_callback = nullptr;
    QsciLexerD_IsSignalConnected_Callback qscilexerd_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexerd_metacall_isbase = false;
    mutable bool qscilexerd_setfoldatelse_isbase = false;
    mutable bool qscilexerd_setfoldcomments_isbase = false;
    mutable bool qscilexerd_setfoldcompact_isbase = false;
    mutable bool qscilexerd_language_isbase = false;
    mutable bool qscilexerd_lexer_isbase = false;
    mutable bool qscilexerd_lexerid_isbase = false;
    mutable bool qscilexerd_autocompletionfillups_isbase = false;
    mutable bool qscilexerd_autocompletionwordseparators_isbase = false;
    mutable bool qscilexerd_blockend_isbase = false;
    mutable bool qscilexerd_blocklookback_isbase = false;
    mutable bool qscilexerd_blockstart_isbase = false;
    mutable bool qscilexerd_blockstartkeyword_isbase = false;
    mutable bool qscilexerd_bracestyle_isbase = false;
    mutable bool qscilexerd_casesensitive_isbase = false;
    mutable bool qscilexerd_color_isbase = false;
    mutable bool qscilexerd_eolfill_isbase = false;
    mutable bool qscilexerd_font_isbase = false;
    mutable bool qscilexerd_indentationguideview_isbase = false;
    mutable bool qscilexerd_keywords_isbase = false;
    mutable bool qscilexerd_defaultstyle_isbase = false;
    mutable bool qscilexerd_description_isbase = false;
    mutable bool qscilexerd_paper_isbase = false;
    mutable bool qscilexerd_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexerd_defaulteolfill_isbase = false;
    mutable bool qscilexerd_defaultfontwithstyle_isbase = false;
    mutable bool qscilexerd_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexerd_seteditor_isbase = false;
    mutable bool qscilexerd_refreshproperties_isbase = false;
    mutable bool qscilexerd_stylebitsneeded_isbase = false;
    mutable bool qscilexerd_wordcharacters_isbase = false;
    mutable bool qscilexerd_setautoindentstyle_isbase = false;
    mutable bool qscilexerd_setcolor_isbase = false;
    mutable bool qscilexerd_seteolfill_isbase = false;
    mutable bool qscilexerd_setfont_isbase = false;
    mutable bool qscilexerd_setpaper_isbase = false;
    mutable bool qscilexerd_readproperties_isbase = false;
    mutable bool qscilexerd_writeproperties_isbase = false;
    mutable bool qscilexerd_event_isbase = false;
    mutable bool qscilexerd_eventfilter_isbase = false;
    mutable bool qscilexerd_timerevent_isbase = false;
    mutable bool qscilexerd_childevent_isbase = false;
    mutable bool qscilexerd_customevent_isbase = false;
    mutable bool qscilexerd_connectnotify_isbase = false;
    mutable bool qscilexerd_disconnectnotify_isbase = false;
    mutable bool qscilexerd_sender_isbase = false;
    mutable bool qscilexerd_sendersignalindex_isbase = false;
    mutable bool qscilexerd_receivers_isbase = false;
    mutable bool qscilexerd_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerD() : QsciLexerD(){};
    VirtualQsciLexerD(QObject* parent) : QsciLexerD(parent){};

    ~VirtualQsciLexerD() {
        qscilexerd_metacall_callback = nullptr;
        qscilexerd_setfoldatelse_callback = nullptr;
        qscilexerd_setfoldcomments_callback = nullptr;
        qscilexerd_setfoldcompact_callback = nullptr;
        qscilexerd_language_callback = nullptr;
        qscilexerd_lexer_callback = nullptr;
        qscilexerd_lexerid_callback = nullptr;
        qscilexerd_autocompletionfillups_callback = nullptr;
        qscilexerd_autocompletionwordseparators_callback = nullptr;
        qscilexerd_blockend_callback = nullptr;
        qscilexerd_blocklookback_callback = nullptr;
        qscilexerd_blockstart_callback = nullptr;
        qscilexerd_blockstartkeyword_callback = nullptr;
        qscilexerd_bracestyle_callback = nullptr;
        qscilexerd_casesensitive_callback = nullptr;
        qscilexerd_color_callback = nullptr;
        qscilexerd_eolfill_callback = nullptr;
        qscilexerd_font_callback = nullptr;
        qscilexerd_indentationguideview_callback = nullptr;
        qscilexerd_keywords_callback = nullptr;
        qscilexerd_defaultstyle_callback = nullptr;
        qscilexerd_description_callback = nullptr;
        qscilexerd_paper_callback = nullptr;
        qscilexerd_defaultcolorwithstyle_callback = nullptr;
        qscilexerd_defaulteolfill_callback = nullptr;
        qscilexerd_defaultfontwithstyle_callback = nullptr;
        qscilexerd_defaultpaperwithstyle_callback = nullptr;
        qscilexerd_seteditor_callback = nullptr;
        qscilexerd_refreshproperties_callback = nullptr;
        qscilexerd_stylebitsneeded_callback = nullptr;
        qscilexerd_wordcharacters_callback = nullptr;
        qscilexerd_setautoindentstyle_callback = nullptr;
        qscilexerd_setcolor_callback = nullptr;
        qscilexerd_seteolfill_callback = nullptr;
        qscilexerd_setfont_callback = nullptr;
        qscilexerd_setpaper_callback = nullptr;
        qscilexerd_readproperties_callback = nullptr;
        qscilexerd_writeproperties_callback = nullptr;
        qscilexerd_event_callback = nullptr;
        qscilexerd_eventfilter_callback = nullptr;
        qscilexerd_timerevent_callback = nullptr;
        qscilexerd_childevent_callback = nullptr;
        qscilexerd_customevent_callback = nullptr;
        qscilexerd_connectnotify_callback = nullptr;
        qscilexerd_disconnectnotify_callback = nullptr;
        qscilexerd_sender_callback = nullptr;
        qscilexerd_sendersignalindex_callback = nullptr;
        qscilexerd_receivers_callback = nullptr;
        qscilexerd_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerD_Metacall_Callback(QsciLexerD_Metacall_Callback cb) { qscilexerd_metacall_callback = cb; }
    void setQsciLexerD_SetFoldAtElse_Callback(QsciLexerD_SetFoldAtElse_Callback cb) { qscilexerd_setfoldatelse_callback = cb; }
    void setQsciLexerD_SetFoldComments_Callback(QsciLexerD_SetFoldComments_Callback cb) { qscilexerd_setfoldcomments_callback = cb; }
    void setQsciLexerD_SetFoldCompact_Callback(QsciLexerD_SetFoldCompact_Callback cb) { qscilexerd_setfoldcompact_callback = cb; }
    void setQsciLexerD_Language_Callback(QsciLexerD_Language_Callback cb) { qscilexerd_language_callback = cb; }
    void setQsciLexerD_Lexer_Callback(QsciLexerD_Lexer_Callback cb) { qscilexerd_lexer_callback = cb; }
    void setQsciLexerD_LexerId_Callback(QsciLexerD_LexerId_Callback cb) { qscilexerd_lexerid_callback = cb; }
    void setQsciLexerD_AutoCompletionFillups_Callback(QsciLexerD_AutoCompletionFillups_Callback cb) { qscilexerd_autocompletionfillups_callback = cb; }
    void setQsciLexerD_AutoCompletionWordSeparators_Callback(QsciLexerD_AutoCompletionWordSeparators_Callback cb) { qscilexerd_autocompletionwordseparators_callback = cb; }
    void setQsciLexerD_BlockEnd_Callback(QsciLexerD_BlockEnd_Callback cb) { qscilexerd_blockend_callback = cb; }
    void setQsciLexerD_BlockLookback_Callback(QsciLexerD_BlockLookback_Callback cb) { qscilexerd_blocklookback_callback = cb; }
    void setQsciLexerD_BlockStart_Callback(QsciLexerD_BlockStart_Callback cb) { qscilexerd_blockstart_callback = cb; }
    void setQsciLexerD_BlockStartKeyword_Callback(QsciLexerD_BlockStartKeyword_Callback cb) { qscilexerd_blockstartkeyword_callback = cb; }
    void setQsciLexerD_BraceStyle_Callback(QsciLexerD_BraceStyle_Callback cb) { qscilexerd_bracestyle_callback = cb; }
    void setQsciLexerD_CaseSensitive_Callback(QsciLexerD_CaseSensitive_Callback cb) { qscilexerd_casesensitive_callback = cb; }
    void setQsciLexerD_Color_Callback(QsciLexerD_Color_Callback cb) { qscilexerd_color_callback = cb; }
    void setQsciLexerD_EolFill_Callback(QsciLexerD_EolFill_Callback cb) { qscilexerd_eolfill_callback = cb; }
    void setQsciLexerD_Font_Callback(QsciLexerD_Font_Callback cb) { qscilexerd_font_callback = cb; }
    void setQsciLexerD_IndentationGuideView_Callback(QsciLexerD_IndentationGuideView_Callback cb) { qscilexerd_indentationguideview_callback = cb; }
    void setQsciLexerD_Keywords_Callback(QsciLexerD_Keywords_Callback cb) { qscilexerd_keywords_callback = cb; }
    void setQsciLexerD_DefaultStyle_Callback(QsciLexerD_DefaultStyle_Callback cb) { qscilexerd_defaultstyle_callback = cb; }
    void setQsciLexerD_Description_Callback(QsciLexerD_Description_Callback cb) { qscilexerd_description_callback = cb; }
    void setQsciLexerD_Paper_Callback(QsciLexerD_Paper_Callback cb) { qscilexerd_paper_callback = cb; }
    void setQsciLexerD_DefaultColorWithStyle_Callback(QsciLexerD_DefaultColorWithStyle_Callback cb) { qscilexerd_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerD_DefaultEolFill_Callback(QsciLexerD_DefaultEolFill_Callback cb) { qscilexerd_defaulteolfill_callback = cb; }
    void setQsciLexerD_DefaultFontWithStyle_Callback(QsciLexerD_DefaultFontWithStyle_Callback cb) { qscilexerd_defaultfontwithstyle_callback = cb; }
    void setQsciLexerD_DefaultPaperWithStyle_Callback(QsciLexerD_DefaultPaperWithStyle_Callback cb) { qscilexerd_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerD_SetEditor_Callback(QsciLexerD_SetEditor_Callback cb) { qscilexerd_seteditor_callback = cb; }
    void setQsciLexerD_RefreshProperties_Callback(QsciLexerD_RefreshProperties_Callback cb) { qscilexerd_refreshproperties_callback = cb; }
    void setQsciLexerD_StyleBitsNeeded_Callback(QsciLexerD_StyleBitsNeeded_Callback cb) { qscilexerd_stylebitsneeded_callback = cb; }
    void setQsciLexerD_WordCharacters_Callback(QsciLexerD_WordCharacters_Callback cb) { qscilexerd_wordcharacters_callback = cb; }
    void setQsciLexerD_SetAutoIndentStyle_Callback(QsciLexerD_SetAutoIndentStyle_Callback cb) { qscilexerd_setautoindentstyle_callback = cb; }
    void setQsciLexerD_SetColor_Callback(QsciLexerD_SetColor_Callback cb) { qscilexerd_setcolor_callback = cb; }
    void setQsciLexerD_SetEolFill_Callback(QsciLexerD_SetEolFill_Callback cb) { qscilexerd_seteolfill_callback = cb; }
    void setQsciLexerD_SetFont_Callback(QsciLexerD_SetFont_Callback cb) { qscilexerd_setfont_callback = cb; }
    void setQsciLexerD_SetPaper_Callback(QsciLexerD_SetPaper_Callback cb) { qscilexerd_setpaper_callback = cb; }
    void setQsciLexerD_ReadProperties_Callback(QsciLexerD_ReadProperties_Callback cb) { qscilexerd_readproperties_callback = cb; }
    void setQsciLexerD_WriteProperties_Callback(QsciLexerD_WriteProperties_Callback cb) { qscilexerd_writeproperties_callback = cb; }
    void setQsciLexerD_Event_Callback(QsciLexerD_Event_Callback cb) { qscilexerd_event_callback = cb; }
    void setQsciLexerD_EventFilter_Callback(QsciLexerD_EventFilter_Callback cb) { qscilexerd_eventfilter_callback = cb; }
    void setQsciLexerD_TimerEvent_Callback(QsciLexerD_TimerEvent_Callback cb) { qscilexerd_timerevent_callback = cb; }
    void setQsciLexerD_ChildEvent_Callback(QsciLexerD_ChildEvent_Callback cb) { qscilexerd_childevent_callback = cb; }
    void setQsciLexerD_CustomEvent_Callback(QsciLexerD_CustomEvent_Callback cb) { qscilexerd_customevent_callback = cb; }
    void setQsciLexerD_ConnectNotify_Callback(QsciLexerD_ConnectNotify_Callback cb) { qscilexerd_connectnotify_callback = cb; }
    void setQsciLexerD_DisconnectNotify_Callback(QsciLexerD_DisconnectNotify_Callback cb) { qscilexerd_disconnectnotify_callback = cb; }
    void setQsciLexerD_Sender_Callback(QsciLexerD_Sender_Callback cb) { qscilexerd_sender_callback = cb; }
    void setQsciLexerD_SenderSignalIndex_Callback(QsciLexerD_SenderSignalIndex_Callback cb) { qscilexerd_sendersignalindex_callback = cb; }
    void setQsciLexerD_Receivers_Callback(QsciLexerD_Receivers_Callback cb) { qscilexerd_receivers_callback = cb; }
    void setQsciLexerD_IsSignalConnected_Callback(QsciLexerD_IsSignalConnected_Callback cb) { qscilexerd_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerD_Metacall_IsBase(bool value) const { qscilexerd_metacall_isbase = value; }
    void setQsciLexerD_SetFoldAtElse_IsBase(bool value) const { qscilexerd_setfoldatelse_isbase = value; }
    void setQsciLexerD_SetFoldComments_IsBase(bool value) const { qscilexerd_setfoldcomments_isbase = value; }
    void setQsciLexerD_SetFoldCompact_IsBase(bool value) const { qscilexerd_setfoldcompact_isbase = value; }
    void setQsciLexerD_Language_IsBase(bool value) const { qscilexerd_language_isbase = value; }
    void setQsciLexerD_Lexer_IsBase(bool value) const { qscilexerd_lexer_isbase = value; }
    void setQsciLexerD_LexerId_IsBase(bool value) const { qscilexerd_lexerid_isbase = value; }
    void setQsciLexerD_AutoCompletionFillups_IsBase(bool value) const { qscilexerd_autocompletionfillups_isbase = value; }
    void setQsciLexerD_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexerd_autocompletionwordseparators_isbase = value; }
    void setQsciLexerD_BlockEnd_IsBase(bool value) const { qscilexerd_blockend_isbase = value; }
    void setQsciLexerD_BlockLookback_IsBase(bool value) const { qscilexerd_blocklookback_isbase = value; }
    void setQsciLexerD_BlockStart_IsBase(bool value) const { qscilexerd_blockstart_isbase = value; }
    void setQsciLexerD_BlockStartKeyword_IsBase(bool value) const { qscilexerd_blockstartkeyword_isbase = value; }
    void setQsciLexerD_BraceStyle_IsBase(bool value) const { qscilexerd_bracestyle_isbase = value; }
    void setQsciLexerD_CaseSensitive_IsBase(bool value) const { qscilexerd_casesensitive_isbase = value; }
    void setQsciLexerD_Color_IsBase(bool value) const { qscilexerd_color_isbase = value; }
    void setQsciLexerD_EolFill_IsBase(bool value) const { qscilexerd_eolfill_isbase = value; }
    void setQsciLexerD_Font_IsBase(bool value) const { qscilexerd_font_isbase = value; }
    void setQsciLexerD_IndentationGuideView_IsBase(bool value) const { qscilexerd_indentationguideview_isbase = value; }
    void setQsciLexerD_Keywords_IsBase(bool value) const { qscilexerd_keywords_isbase = value; }
    void setQsciLexerD_DefaultStyle_IsBase(bool value) const { qscilexerd_defaultstyle_isbase = value; }
    void setQsciLexerD_Description_IsBase(bool value) const { qscilexerd_description_isbase = value; }
    void setQsciLexerD_Paper_IsBase(bool value) const { qscilexerd_paper_isbase = value; }
    void setQsciLexerD_DefaultColorWithStyle_IsBase(bool value) const { qscilexerd_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerD_DefaultEolFill_IsBase(bool value) const { qscilexerd_defaulteolfill_isbase = value; }
    void setQsciLexerD_DefaultFontWithStyle_IsBase(bool value) const { qscilexerd_defaultfontwithstyle_isbase = value; }
    void setQsciLexerD_DefaultPaperWithStyle_IsBase(bool value) const { qscilexerd_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerD_SetEditor_IsBase(bool value) const { qscilexerd_seteditor_isbase = value; }
    void setQsciLexerD_RefreshProperties_IsBase(bool value) const { qscilexerd_refreshproperties_isbase = value; }
    void setQsciLexerD_StyleBitsNeeded_IsBase(bool value) const { qscilexerd_stylebitsneeded_isbase = value; }
    void setQsciLexerD_WordCharacters_IsBase(bool value) const { qscilexerd_wordcharacters_isbase = value; }
    void setQsciLexerD_SetAutoIndentStyle_IsBase(bool value) const { qscilexerd_setautoindentstyle_isbase = value; }
    void setQsciLexerD_SetColor_IsBase(bool value) const { qscilexerd_setcolor_isbase = value; }
    void setQsciLexerD_SetEolFill_IsBase(bool value) const { qscilexerd_seteolfill_isbase = value; }
    void setQsciLexerD_SetFont_IsBase(bool value) const { qscilexerd_setfont_isbase = value; }
    void setQsciLexerD_SetPaper_IsBase(bool value) const { qscilexerd_setpaper_isbase = value; }
    void setQsciLexerD_ReadProperties_IsBase(bool value) const { qscilexerd_readproperties_isbase = value; }
    void setQsciLexerD_WriteProperties_IsBase(bool value) const { qscilexerd_writeproperties_isbase = value; }
    void setQsciLexerD_Event_IsBase(bool value) const { qscilexerd_event_isbase = value; }
    void setQsciLexerD_EventFilter_IsBase(bool value) const { qscilexerd_eventfilter_isbase = value; }
    void setQsciLexerD_TimerEvent_IsBase(bool value) const { qscilexerd_timerevent_isbase = value; }
    void setQsciLexerD_ChildEvent_IsBase(bool value) const { qscilexerd_childevent_isbase = value; }
    void setQsciLexerD_CustomEvent_IsBase(bool value) const { qscilexerd_customevent_isbase = value; }
    void setQsciLexerD_ConnectNotify_IsBase(bool value) const { qscilexerd_connectnotify_isbase = value; }
    void setQsciLexerD_DisconnectNotify_IsBase(bool value) const { qscilexerd_disconnectnotify_isbase = value; }
    void setQsciLexerD_Sender_IsBase(bool value) const { qscilexerd_sender_isbase = value; }
    void setQsciLexerD_SenderSignalIndex_IsBase(bool value) const { qscilexerd_sendersignalindex_isbase = value; }
    void setQsciLexerD_Receivers_IsBase(bool value) const { qscilexerd_receivers_isbase = value; }
    void setQsciLexerD_IsSignalConnected_IsBase(bool value) const { qscilexerd_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexerd_metacall_isbase) {
            qscilexerd_metacall_isbase = false;
            return QsciLexerD::qt_metacall(param1, param2, param3);
        } else if (qscilexerd_metacall_callback != nullptr) {
            return qscilexerd_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerD::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexerd_setfoldatelse_isbase) {
            qscilexerd_setfoldatelse_isbase = false;
            QsciLexerD::setFoldAtElse(fold);
        } else if (qscilexerd_setfoldatelse_callback != nullptr) {
            qscilexerd_setfoldatelse_callback(this, fold);
        } else {
            QsciLexerD::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexerd_setfoldcomments_isbase) {
            qscilexerd_setfoldcomments_isbase = false;
            QsciLexerD::setFoldComments(fold);
        } else if (qscilexerd_setfoldcomments_callback != nullptr) {
            qscilexerd_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerD::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexerd_setfoldcompact_isbase) {
            qscilexerd_setfoldcompact_isbase = false;
            QsciLexerD::setFoldCompact(fold);
        } else if (qscilexerd_setfoldcompact_callback != nullptr) {
            qscilexerd_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerD::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexerd_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexerd_lexer_isbase) {
            qscilexerd_lexer_isbase = false;
            return QsciLexerD::lexer();
        } else if (qscilexerd_lexer_callback != nullptr) {
            return qscilexerd_lexer_callback();
        } else {
            return QsciLexerD::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexerd_lexerid_isbase) {
            qscilexerd_lexerid_isbase = false;
            return QsciLexerD::lexerId();
        } else if (qscilexerd_lexerid_callback != nullptr) {
            return qscilexerd_lexerid_callback();
        } else {
            return QsciLexerD::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexerd_autocompletionfillups_isbase) {
            qscilexerd_autocompletionfillups_isbase = false;
            return QsciLexerD::autoCompletionFillups();
        } else if (qscilexerd_autocompletionfillups_callback != nullptr) {
            return qscilexerd_autocompletionfillups_callback();
        } else {
            return QsciLexerD::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexerd_autocompletionwordseparators_isbase) {
            qscilexerd_autocompletionwordseparators_isbase = false;
            return QsciLexerD::autoCompletionWordSeparators();
        } else if (qscilexerd_autocompletionwordseparators_callback != nullptr) {
            return qscilexerd_autocompletionwordseparators_callback();
        } else {
            return QsciLexerD::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexerd_blockend_isbase) {
            qscilexerd_blockend_isbase = false;
            return QsciLexerD::blockEnd(style);
        } else if (qscilexerd_blockend_callback != nullptr) {
            return qscilexerd_blockend_callback(this, style);
        } else {
            return QsciLexerD::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexerd_blocklookback_isbase) {
            qscilexerd_blocklookback_isbase = false;
            return QsciLexerD::blockLookback();
        } else if (qscilexerd_blocklookback_callback != nullptr) {
            return qscilexerd_blocklookback_callback();
        } else {
            return QsciLexerD::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexerd_blockstart_isbase) {
            qscilexerd_blockstart_isbase = false;
            return QsciLexerD::blockStart(style);
        } else if (qscilexerd_blockstart_callback != nullptr) {
            return qscilexerd_blockstart_callback(this, style);
        } else {
            return QsciLexerD::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexerd_blockstartkeyword_isbase) {
            qscilexerd_blockstartkeyword_isbase = false;
            return QsciLexerD::blockStartKeyword(style);
        } else if (qscilexerd_blockstartkeyword_callback != nullptr) {
            return qscilexerd_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerD::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexerd_bracestyle_isbase) {
            qscilexerd_bracestyle_isbase = false;
            return QsciLexerD::braceStyle();
        } else if (qscilexerd_bracestyle_callback != nullptr) {
            return qscilexerd_bracestyle_callback();
        } else {
            return QsciLexerD::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexerd_casesensitive_isbase) {
            qscilexerd_casesensitive_isbase = false;
            return QsciLexerD::caseSensitive();
        } else if (qscilexerd_casesensitive_callback != nullptr) {
            return qscilexerd_casesensitive_callback();
        } else {
            return QsciLexerD::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexerd_color_isbase) {
            qscilexerd_color_isbase = false;
            return QsciLexerD::color(style);
        } else if (qscilexerd_color_callback != nullptr) {
            return qscilexerd_color_callback(this, style);
        } else {
            return QsciLexerD::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexerd_eolfill_isbase) {
            qscilexerd_eolfill_isbase = false;
            return QsciLexerD::eolFill(style);
        } else if (qscilexerd_eolfill_callback != nullptr) {
            return qscilexerd_eolfill_callback(this, style);
        } else {
            return QsciLexerD::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexerd_font_isbase) {
            qscilexerd_font_isbase = false;
            return QsciLexerD::font(style);
        } else if (qscilexerd_font_callback != nullptr) {
            return qscilexerd_font_callback(this, style);
        } else {
            return QsciLexerD::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexerd_indentationguideview_isbase) {
            qscilexerd_indentationguideview_isbase = false;
            return QsciLexerD::indentationGuideView();
        } else if (qscilexerd_indentationguideview_callback != nullptr) {
            return qscilexerd_indentationguideview_callback();
        } else {
            return QsciLexerD::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexerd_keywords_isbase) {
            qscilexerd_keywords_isbase = false;
            return QsciLexerD::keywords(set);
        } else if (qscilexerd_keywords_callback != nullptr) {
            return qscilexerd_keywords_callback(this, set);
        } else {
            return QsciLexerD::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexerd_defaultstyle_isbase) {
            qscilexerd_defaultstyle_isbase = false;
            return QsciLexerD::defaultStyle();
        } else if (qscilexerd_defaultstyle_callback != nullptr) {
            return qscilexerd_defaultstyle_callback();
        } else {
            return QsciLexerD::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexerd_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexerd_paper_isbase) {
            qscilexerd_paper_isbase = false;
            return QsciLexerD::paper(style);
        } else if (qscilexerd_paper_callback != nullptr) {
            return qscilexerd_paper_callback(this, style);
        } else {
            return QsciLexerD::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexerd_defaultcolorwithstyle_isbase) {
            qscilexerd_defaultcolorwithstyle_isbase = false;
            return QsciLexerD::defaultColor(style);
        } else if (qscilexerd_defaultcolorwithstyle_callback != nullptr) {
            return qscilexerd_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerD::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexerd_defaulteolfill_isbase) {
            qscilexerd_defaulteolfill_isbase = false;
            return QsciLexerD::defaultEolFill(style);
        } else if (qscilexerd_defaulteolfill_callback != nullptr) {
            return qscilexerd_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerD::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexerd_defaultfontwithstyle_isbase) {
            qscilexerd_defaultfontwithstyle_isbase = false;
            return QsciLexerD::defaultFont(style);
        } else if (qscilexerd_defaultfontwithstyle_callback != nullptr) {
            return qscilexerd_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerD::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexerd_defaultpaperwithstyle_isbase) {
            qscilexerd_defaultpaperwithstyle_isbase = false;
            return QsciLexerD::defaultPaper(style);
        } else if (qscilexerd_defaultpaperwithstyle_callback != nullptr) {
            return qscilexerd_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerD::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexerd_seteditor_isbase) {
            qscilexerd_seteditor_isbase = false;
            QsciLexerD::setEditor(editor);
        } else if (qscilexerd_seteditor_callback != nullptr) {
            qscilexerd_seteditor_callback(this, editor);
        } else {
            QsciLexerD::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexerd_refreshproperties_isbase) {
            qscilexerd_refreshproperties_isbase = false;
            QsciLexerD::refreshProperties();
        } else if (qscilexerd_refreshproperties_callback != nullptr) {
            qscilexerd_refreshproperties_callback();
        } else {
            QsciLexerD::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexerd_stylebitsneeded_isbase) {
            qscilexerd_stylebitsneeded_isbase = false;
            return QsciLexerD::styleBitsNeeded();
        } else if (qscilexerd_stylebitsneeded_callback != nullptr) {
            return qscilexerd_stylebitsneeded_callback();
        } else {
            return QsciLexerD::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexerd_wordcharacters_isbase) {
            qscilexerd_wordcharacters_isbase = false;
            return QsciLexerD::wordCharacters();
        } else if (qscilexerd_wordcharacters_callback != nullptr) {
            return qscilexerd_wordcharacters_callback();
        } else {
            return QsciLexerD::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexerd_setautoindentstyle_isbase) {
            qscilexerd_setautoindentstyle_isbase = false;
            QsciLexerD::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexerd_setautoindentstyle_callback != nullptr) {
            qscilexerd_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerD::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexerd_setcolor_isbase) {
            qscilexerd_setcolor_isbase = false;
            QsciLexerD::setColor(c, style);
        } else if (qscilexerd_setcolor_callback != nullptr) {
            qscilexerd_setcolor_callback(this, c, style);
        } else {
            QsciLexerD::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexerd_seteolfill_isbase) {
            qscilexerd_seteolfill_isbase = false;
            QsciLexerD::setEolFill(eoffill, style);
        } else if (qscilexerd_seteolfill_callback != nullptr) {
            qscilexerd_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerD::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexerd_setfont_isbase) {
            qscilexerd_setfont_isbase = false;
            QsciLexerD::setFont(f, style);
        } else if (qscilexerd_setfont_callback != nullptr) {
            qscilexerd_setfont_callback(this, f, style);
        } else {
            QsciLexerD::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexerd_setpaper_isbase) {
            qscilexerd_setpaper_isbase = false;
            QsciLexerD::setPaper(c, style);
        } else if (qscilexerd_setpaper_callback != nullptr) {
            qscilexerd_setpaper_callback(this, c, style);
        } else {
            QsciLexerD::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexerd_readproperties_isbase) {
            qscilexerd_readproperties_isbase = false;
            return QsciLexerD::readProperties(qs, prefix);
        } else if (qscilexerd_readproperties_callback != nullptr) {
            return qscilexerd_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerD::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexerd_writeproperties_isbase) {
            qscilexerd_writeproperties_isbase = false;
            return QsciLexerD::writeProperties(qs, prefix);
        } else if (qscilexerd_writeproperties_callback != nullptr) {
            return qscilexerd_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerD::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexerd_event_isbase) {
            qscilexerd_event_isbase = false;
            return QsciLexerD::event(event);
        } else if (qscilexerd_event_callback != nullptr) {
            return qscilexerd_event_callback(this, event);
        } else {
            return QsciLexerD::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexerd_eventfilter_isbase) {
            qscilexerd_eventfilter_isbase = false;
            return QsciLexerD::eventFilter(watched, event);
        } else if (qscilexerd_eventfilter_callback != nullptr) {
            return qscilexerd_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerD::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexerd_timerevent_isbase) {
            qscilexerd_timerevent_isbase = false;
            QsciLexerD::timerEvent(event);
        } else if (qscilexerd_timerevent_callback != nullptr) {
            qscilexerd_timerevent_callback(this, event);
        } else {
            QsciLexerD::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexerd_childevent_isbase) {
            qscilexerd_childevent_isbase = false;
            QsciLexerD::childEvent(event);
        } else if (qscilexerd_childevent_callback != nullptr) {
            qscilexerd_childevent_callback(this, event);
        } else {
            QsciLexerD::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexerd_customevent_isbase) {
            qscilexerd_customevent_isbase = false;
            QsciLexerD::customEvent(event);
        } else if (qscilexerd_customevent_callback != nullptr) {
            qscilexerd_customevent_callback(this, event);
        } else {
            QsciLexerD::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexerd_connectnotify_isbase) {
            qscilexerd_connectnotify_isbase = false;
            QsciLexerD::connectNotify(signal);
        } else if (qscilexerd_connectnotify_callback != nullptr) {
            qscilexerd_connectnotify_callback(this, signal);
        } else {
            QsciLexerD::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexerd_disconnectnotify_isbase) {
            qscilexerd_disconnectnotify_isbase = false;
            QsciLexerD::disconnectNotify(signal);
        } else if (qscilexerd_disconnectnotify_callback != nullptr) {
            qscilexerd_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerD::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexerd_sender_isbase) {
            qscilexerd_sender_isbase = false;
            return QsciLexerD::sender();
        } else if (qscilexerd_sender_callback != nullptr) {
            return qscilexerd_sender_callback();
        } else {
            return QsciLexerD::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexerd_sendersignalindex_isbase) {
            qscilexerd_sendersignalindex_isbase = false;
            return QsciLexerD::senderSignalIndex();
        } else if (qscilexerd_sendersignalindex_callback != nullptr) {
            return qscilexerd_sendersignalindex_callback();
        } else {
            return QsciLexerD::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexerd_receivers_isbase) {
            qscilexerd_receivers_isbase = false;
            return QsciLexerD::receivers(signal);
        } else if (qscilexerd_receivers_callback != nullptr) {
            return qscilexerd_receivers_callback(this, signal);
        } else {
            return QsciLexerD::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexerd_issignalconnected_isbase) {
            qscilexerd_issignalconnected_isbase = false;
            return QsciLexerD::isSignalConnected(signal);
        } else if (qscilexerd_issignalconnected_callback != nullptr) {
            return qscilexerd_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerD::isSignalConnected(signal);
        }
    }
};

#endif
