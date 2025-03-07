#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexer so that we can call protected methods
class VirtualQsciLexer : public QsciLexer {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexer_Metacall_Callback = int (*)(QsciLexer*, QMetaObject::Call, int, void**);
    using QsciLexer_Language_Callback = const char* (*)();
    using QsciLexer_Lexer_Callback = const char* (*)();
    using QsciLexer_LexerId_Callback = int (*)();
    using QsciLexer_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexer_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexer_BlockEnd_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BlockLookback_Callback = int (*)();
    using QsciLexer_BlockStart_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BlockStartKeyword_Callback = const char* (*)(const QsciLexer*, int*);
    using QsciLexer_BraceStyle_Callback = int (*)();
    using QsciLexer_CaseSensitive_Callback = bool (*)();
    using QsciLexer_Color_Callback = QColor (*)(const QsciLexer*, int);
    using QsciLexer_EolFill_Callback = bool (*)(const QsciLexer*, int);
    using QsciLexer_Font_Callback = QFont (*)(const QsciLexer*, int);
    using QsciLexer_IndentationGuideView_Callback = int (*)();
    using QsciLexer_Keywords_Callback = const char* (*)(const QsciLexer*, int);
    using QsciLexer_DefaultStyle_Callback = int (*)();
    using QsciLexer_Description_Callback = QString (*)(const QsciLexer*, int);
    using QsciLexer_Paper_Callback = QColor (*)(const QsciLexer*, int);
    using QsciLexer_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexer*, int);
    using QsciLexer_DefaultEolFill_Callback = bool (*)(const QsciLexer*, int);
    using QsciLexer_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexer*, int);
    using QsciLexer_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexer*, int);
    using QsciLexer_SetEditor_Callback = void (*)(QsciLexer*, QsciScintilla*);
    using QsciLexer_RefreshProperties_Callback = void (*)();
    using QsciLexer_StyleBitsNeeded_Callback = int (*)();
    using QsciLexer_WordCharacters_Callback = const char* (*)();
    using QsciLexer_SetAutoIndentStyle_Callback = void (*)(QsciLexer*, int);
    using QsciLexer_SetColor_Callback = void (*)(QsciLexer*, const QColor&, int);
    using QsciLexer_SetEolFill_Callback = void (*)(QsciLexer*, bool, int);
    using QsciLexer_SetFont_Callback = void (*)(QsciLexer*, const QFont&, int);
    using QsciLexer_SetPaper_Callback = void (*)(QsciLexer*, const QColor&, int);
    using QsciLexer_ReadProperties_Callback = bool (*)(QsciLexer*, QSettings&, const QString&);
    using QsciLexer_WriteProperties_Callback = bool (*)(const QsciLexer*, QSettings&, const QString&);
    using QsciLexer_Event_Callback = bool (*)(QsciLexer*, QEvent*);
    using QsciLexer_EventFilter_Callback = bool (*)(QsciLexer*, QObject*, QEvent*);
    using QsciLexer_TimerEvent_Callback = void (*)(QsciLexer*, QTimerEvent*);
    using QsciLexer_ChildEvent_Callback = void (*)(QsciLexer*, QChildEvent*);
    using QsciLexer_CustomEvent_Callback = void (*)(QsciLexer*, QEvent*);
    using QsciLexer_ConnectNotify_Callback = void (*)(QsciLexer*, const QMetaMethod&);
    using QsciLexer_DisconnectNotify_Callback = void (*)(QsciLexer*, const QMetaMethod&);
    using QsciLexer_Sender_Callback = QObject* (*)();
    using QsciLexer_SenderSignalIndex_Callback = int (*)();
    using QsciLexer_Receivers_Callback = int (*)(const QsciLexer*, const char*);
    using QsciLexer_IsSignalConnected_Callback = bool (*)(const QsciLexer*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexer_Metacall_Callback qscilexer_metacall_callback = nullptr;
    QsciLexer_Language_Callback qscilexer_language_callback = nullptr;
    QsciLexer_Lexer_Callback qscilexer_lexer_callback = nullptr;
    QsciLexer_LexerId_Callback qscilexer_lexerid_callback = nullptr;
    QsciLexer_AutoCompletionFillups_Callback qscilexer_autocompletionfillups_callback = nullptr;
    QsciLexer_AutoCompletionWordSeparators_Callback qscilexer_autocompletionwordseparators_callback = nullptr;
    QsciLexer_BlockEnd_Callback qscilexer_blockend_callback = nullptr;
    QsciLexer_BlockLookback_Callback qscilexer_blocklookback_callback = nullptr;
    QsciLexer_BlockStart_Callback qscilexer_blockstart_callback = nullptr;
    QsciLexer_BlockStartKeyword_Callback qscilexer_blockstartkeyword_callback = nullptr;
    QsciLexer_BraceStyle_Callback qscilexer_bracestyle_callback = nullptr;
    QsciLexer_CaseSensitive_Callback qscilexer_casesensitive_callback = nullptr;
    QsciLexer_Color_Callback qscilexer_color_callback = nullptr;
    QsciLexer_EolFill_Callback qscilexer_eolfill_callback = nullptr;
    QsciLexer_Font_Callback qscilexer_font_callback = nullptr;
    QsciLexer_IndentationGuideView_Callback qscilexer_indentationguideview_callback = nullptr;
    QsciLexer_Keywords_Callback qscilexer_keywords_callback = nullptr;
    QsciLexer_DefaultStyle_Callback qscilexer_defaultstyle_callback = nullptr;
    QsciLexer_Description_Callback qscilexer_description_callback = nullptr;
    QsciLexer_Paper_Callback qscilexer_paper_callback = nullptr;
    QsciLexer_DefaultColorWithStyle_Callback qscilexer_defaultcolorwithstyle_callback = nullptr;
    QsciLexer_DefaultEolFill_Callback qscilexer_defaulteolfill_callback = nullptr;
    QsciLexer_DefaultFontWithStyle_Callback qscilexer_defaultfontwithstyle_callback = nullptr;
    QsciLexer_DefaultPaperWithStyle_Callback qscilexer_defaultpaperwithstyle_callback = nullptr;
    QsciLexer_SetEditor_Callback qscilexer_seteditor_callback = nullptr;
    QsciLexer_RefreshProperties_Callback qscilexer_refreshproperties_callback = nullptr;
    QsciLexer_StyleBitsNeeded_Callback qscilexer_stylebitsneeded_callback = nullptr;
    QsciLexer_WordCharacters_Callback qscilexer_wordcharacters_callback = nullptr;
    QsciLexer_SetAutoIndentStyle_Callback qscilexer_setautoindentstyle_callback = nullptr;
    QsciLexer_SetColor_Callback qscilexer_setcolor_callback = nullptr;
    QsciLexer_SetEolFill_Callback qscilexer_seteolfill_callback = nullptr;
    QsciLexer_SetFont_Callback qscilexer_setfont_callback = nullptr;
    QsciLexer_SetPaper_Callback qscilexer_setpaper_callback = nullptr;
    QsciLexer_ReadProperties_Callback qscilexer_readproperties_callback = nullptr;
    QsciLexer_WriteProperties_Callback qscilexer_writeproperties_callback = nullptr;
    QsciLexer_Event_Callback qscilexer_event_callback = nullptr;
    QsciLexer_EventFilter_Callback qscilexer_eventfilter_callback = nullptr;
    QsciLexer_TimerEvent_Callback qscilexer_timerevent_callback = nullptr;
    QsciLexer_ChildEvent_Callback qscilexer_childevent_callback = nullptr;
    QsciLexer_CustomEvent_Callback qscilexer_customevent_callback = nullptr;
    QsciLexer_ConnectNotify_Callback qscilexer_connectnotify_callback = nullptr;
    QsciLexer_DisconnectNotify_Callback qscilexer_disconnectnotify_callback = nullptr;
    QsciLexer_Sender_Callback qscilexer_sender_callback = nullptr;
    QsciLexer_SenderSignalIndex_Callback qscilexer_sendersignalindex_callback = nullptr;
    QsciLexer_Receivers_Callback qscilexer_receivers_callback = nullptr;
    QsciLexer_IsSignalConnected_Callback qscilexer_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexer_metacall_isbase = false;
    mutable bool qscilexer_language_isbase = false;
    mutable bool qscilexer_lexer_isbase = false;
    mutable bool qscilexer_lexerid_isbase = false;
    mutable bool qscilexer_autocompletionfillups_isbase = false;
    mutable bool qscilexer_autocompletionwordseparators_isbase = false;
    mutable bool qscilexer_blockend_isbase = false;
    mutable bool qscilexer_blocklookback_isbase = false;
    mutable bool qscilexer_blockstart_isbase = false;
    mutable bool qscilexer_blockstartkeyword_isbase = false;
    mutable bool qscilexer_bracestyle_isbase = false;
    mutable bool qscilexer_casesensitive_isbase = false;
    mutable bool qscilexer_color_isbase = false;
    mutable bool qscilexer_eolfill_isbase = false;
    mutable bool qscilexer_font_isbase = false;
    mutable bool qscilexer_indentationguideview_isbase = false;
    mutable bool qscilexer_keywords_isbase = false;
    mutable bool qscilexer_defaultstyle_isbase = false;
    mutable bool qscilexer_description_isbase = false;
    mutable bool qscilexer_paper_isbase = false;
    mutable bool qscilexer_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexer_defaulteolfill_isbase = false;
    mutable bool qscilexer_defaultfontwithstyle_isbase = false;
    mutable bool qscilexer_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexer_seteditor_isbase = false;
    mutable bool qscilexer_refreshproperties_isbase = false;
    mutable bool qscilexer_stylebitsneeded_isbase = false;
    mutable bool qscilexer_wordcharacters_isbase = false;
    mutable bool qscilexer_setautoindentstyle_isbase = false;
    mutable bool qscilexer_setcolor_isbase = false;
    mutable bool qscilexer_seteolfill_isbase = false;
    mutable bool qscilexer_setfont_isbase = false;
    mutable bool qscilexer_setpaper_isbase = false;
    mutable bool qscilexer_readproperties_isbase = false;
    mutable bool qscilexer_writeproperties_isbase = false;
    mutable bool qscilexer_event_isbase = false;
    mutable bool qscilexer_eventfilter_isbase = false;
    mutable bool qscilexer_timerevent_isbase = false;
    mutable bool qscilexer_childevent_isbase = false;
    mutable bool qscilexer_customevent_isbase = false;
    mutable bool qscilexer_connectnotify_isbase = false;
    mutable bool qscilexer_disconnectnotify_isbase = false;
    mutable bool qscilexer_sender_isbase = false;
    mutable bool qscilexer_sendersignalindex_isbase = false;
    mutable bool qscilexer_receivers_isbase = false;
    mutable bool qscilexer_issignalconnected_isbase = false;

  public:
    VirtualQsciLexer() : QsciLexer(){};
    VirtualQsciLexer(QObject* parent) : QsciLexer(parent){};

    ~VirtualQsciLexer() {
        qscilexer_metacall_callback = nullptr;
        qscilexer_language_callback = nullptr;
        qscilexer_lexer_callback = nullptr;
        qscilexer_lexerid_callback = nullptr;
        qscilexer_autocompletionfillups_callback = nullptr;
        qscilexer_autocompletionwordseparators_callback = nullptr;
        qscilexer_blockend_callback = nullptr;
        qscilexer_blocklookback_callback = nullptr;
        qscilexer_blockstart_callback = nullptr;
        qscilexer_blockstartkeyword_callback = nullptr;
        qscilexer_bracestyle_callback = nullptr;
        qscilexer_casesensitive_callback = nullptr;
        qscilexer_color_callback = nullptr;
        qscilexer_eolfill_callback = nullptr;
        qscilexer_font_callback = nullptr;
        qscilexer_indentationguideview_callback = nullptr;
        qscilexer_keywords_callback = nullptr;
        qscilexer_defaultstyle_callback = nullptr;
        qscilexer_description_callback = nullptr;
        qscilexer_paper_callback = nullptr;
        qscilexer_defaultcolorwithstyle_callback = nullptr;
        qscilexer_defaulteolfill_callback = nullptr;
        qscilexer_defaultfontwithstyle_callback = nullptr;
        qscilexer_defaultpaperwithstyle_callback = nullptr;
        qscilexer_seteditor_callback = nullptr;
        qscilexer_refreshproperties_callback = nullptr;
        qscilexer_stylebitsneeded_callback = nullptr;
        qscilexer_wordcharacters_callback = nullptr;
        qscilexer_setautoindentstyle_callback = nullptr;
        qscilexer_setcolor_callback = nullptr;
        qscilexer_seteolfill_callback = nullptr;
        qscilexer_setfont_callback = nullptr;
        qscilexer_setpaper_callback = nullptr;
        qscilexer_readproperties_callback = nullptr;
        qscilexer_writeproperties_callback = nullptr;
        qscilexer_event_callback = nullptr;
        qscilexer_eventfilter_callback = nullptr;
        qscilexer_timerevent_callback = nullptr;
        qscilexer_childevent_callback = nullptr;
        qscilexer_customevent_callback = nullptr;
        qscilexer_connectnotify_callback = nullptr;
        qscilexer_disconnectnotify_callback = nullptr;
        qscilexer_sender_callback = nullptr;
        qscilexer_sendersignalindex_callback = nullptr;
        qscilexer_receivers_callback = nullptr;
        qscilexer_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexer_Metacall_Callback(QsciLexer_Metacall_Callback cb) { qscilexer_metacall_callback = cb; }
    void setQsciLexer_Language_Callback(QsciLexer_Language_Callback cb) { qscilexer_language_callback = cb; }
    void setQsciLexer_Lexer_Callback(QsciLexer_Lexer_Callback cb) { qscilexer_lexer_callback = cb; }
    void setQsciLexer_LexerId_Callback(QsciLexer_LexerId_Callback cb) { qscilexer_lexerid_callback = cb; }
    void setQsciLexer_AutoCompletionFillups_Callback(QsciLexer_AutoCompletionFillups_Callback cb) { qscilexer_autocompletionfillups_callback = cb; }
    void setQsciLexer_AutoCompletionWordSeparators_Callback(QsciLexer_AutoCompletionWordSeparators_Callback cb) { qscilexer_autocompletionwordseparators_callback = cb; }
    void setQsciLexer_BlockEnd_Callback(QsciLexer_BlockEnd_Callback cb) { qscilexer_blockend_callback = cb; }
    void setQsciLexer_BlockLookback_Callback(QsciLexer_BlockLookback_Callback cb) { qscilexer_blocklookback_callback = cb; }
    void setQsciLexer_BlockStart_Callback(QsciLexer_BlockStart_Callback cb) { qscilexer_blockstart_callback = cb; }
    void setQsciLexer_BlockStartKeyword_Callback(QsciLexer_BlockStartKeyword_Callback cb) { qscilexer_blockstartkeyword_callback = cb; }
    void setQsciLexer_BraceStyle_Callback(QsciLexer_BraceStyle_Callback cb) { qscilexer_bracestyle_callback = cb; }
    void setQsciLexer_CaseSensitive_Callback(QsciLexer_CaseSensitive_Callback cb) { qscilexer_casesensitive_callback = cb; }
    void setQsciLexer_Color_Callback(QsciLexer_Color_Callback cb) { qscilexer_color_callback = cb; }
    void setQsciLexer_EolFill_Callback(QsciLexer_EolFill_Callback cb) { qscilexer_eolfill_callback = cb; }
    void setQsciLexer_Font_Callback(QsciLexer_Font_Callback cb) { qscilexer_font_callback = cb; }
    void setQsciLexer_IndentationGuideView_Callback(QsciLexer_IndentationGuideView_Callback cb) { qscilexer_indentationguideview_callback = cb; }
    void setQsciLexer_Keywords_Callback(QsciLexer_Keywords_Callback cb) { qscilexer_keywords_callback = cb; }
    void setQsciLexer_DefaultStyle_Callback(QsciLexer_DefaultStyle_Callback cb) { qscilexer_defaultstyle_callback = cb; }
    void setQsciLexer_Description_Callback(QsciLexer_Description_Callback cb) { qscilexer_description_callback = cb; }
    void setQsciLexer_Paper_Callback(QsciLexer_Paper_Callback cb) { qscilexer_paper_callback = cb; }
    void setQsciLexer_DefaultColorWithStyle_Callback(QsciLexer_DefaultColorWithStyle_Callback cb) { qscilexer_defaultcolorwithstyle_callback = cb; }
    void setQsciLexer_DefaultEolFill_Callback(QsciLexer_DefaultEolFill_Callback cb) { qscilexer_defaulteolfill_callback = cb; }
    void setQsciLexer_DefaultFontWithStyle_Callback(QsciLexer_DefaultFontWithStyle_Callback cb) { qscilexer_defaultfontwithstyle_callback = cb; }
    void setQsciLexer_DefaultPaperWithStyle_Callback(QsciLexer_DefaultPaperWithStyle_Callback cb) { qscilexer_defaultpaperwithstyle_callback = cb; }
    void setQsciLexer_SetEditor_Callback(QsciLexer_SetEditor_Callback cb) { qscilexer_seteditor_callback = cb; }
    void setQsciLexer_RefreshProperties_Callback(QsciLexer_RefreshProperties_Callback cb) { qscilexer_refreshproperties_callback = cb; }
    void setQsciLexer_StyleBitsNeeded_Callback(QsciLexer_StyleBitsNeeded_Callback cb) { qscilexer_stylebitsneeded_callback = cb; }
    void setQsciLexer_WordCharacters_Callback(QsciLexer_WordCharacters_Callback cb) { qscilexer_wordcharacters_callback = cb; }
    void setQsciLexer_SetAutoIndentStyle_Callback(QsciLexer_SetAutoIndentStyle_Callback cb) { qscilexer_setautoindentstyle_callback = cb; }
    void setQsciLexer_SetColor_Callback(QsciLexer_SetColor_Callback cb) { qscilexer_setcolor_callback = cb; }
    void setQsciLexer_SetEolFill_Callback(QsciLexer_SetEolFill_Callback cb) { qscilexer_seteolfill_callback = cb; }
    void setQsciLexer_SetFont_Callback(QsciLexer_SetFont_Callback cb) { qscilexer_setfont_callback = cb; }
    void setQsciLexer_SetPaper_Callback(QsciLexer_SetPaper_Callback cb) { qscilexer_setpaper_callback = cb; }
    void setQsciLexer_ReadProperties_Callback(QsciLexer_ReadProperties_Callback cb) { qscilexer_readproperties_callback = cb; }
    void setQsciLexer_WriteProperties_Callback(QsciLexer_WriteProperties_Callback cb) { qscilexer_writeproperties_callback = cb; }
    void setQsciLexer_Event_Callback(QsciLexer_Event_Callback cb) { qscilexer_event_callback = cb; }
    void setQsciLexer_EventFilter_Callback(QsciLexer_EventFilter_Callback cb) { qscilexer_eventfilter_callback = cb; }
    void setQsciLexer_TimerEvent_Callback(QsciLexer_TimerEvent_Callback cb) { qscilexer_timerevent_callback = cb; }
    void setQsciLexer_ChildEvent_Callback(QsciLexer_ChildEvent_Callback cb) { qscilexer_childevent_callback = cb; }
    void setQsciLexer_CustomEvent_Callback(QsciLexer_CustomEvent_Callback cb) { qscilexer_customevent_callback = cb; }
    void setQsciLexer_ConnectNotify_Callback(QsciLexer_ConnectNotify_Callback cb) { qscilexer_connectnotify_callback = cb; }
    void setQsciLexer_DisconnectNotify_Callback(QsciLexer_DisconnectNotify_Callback cb) { qscilexer_disconnectnotify_callback = cb; }
    void setQsciLexer_Sender_Callback(QsciLexer_Sender_Callback cb) { qscilexer_sender_callback = cb; }
    void setQsciLexer_SenderSignalIndex_Callback(QsciLexer_SenderSignalIndex_Callback cb) { qscilexer_sendersignalindex_callback = cb; }
    void setQsciLexer_Receivers_Callback(QsciLexer_Receivers_Callback cb) { qscilexer_receivers_callback = cb; }
    void setQsciLexer_IsSignalConnected_Callback(QsciLexer_IsSignalConnected_Callback cb) { qscilexer_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexer_Metacall_IsBase(bool value) const { qscilexer_metacall_isbase = value; }
    void setQsciLexer_Language_IsBase(bool value) const { qscilexer_language_isbase = value; }
    void setQsciLexer_Lexer_IsBase(bool value) const { qscilexer_lexer_isbase = value; }
    void setQsciLexer_LexerId_IsBase(bool value) const { qscilexer_lexerid_isbase = value; }
    void setQsciLexer_AutoCompletionFillups_IsBase(bool value) const { qscilexer_autocompletionfillups_isbase = value; }
    void setQsciLexer_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexer_autocompletionwordseparators_isbase = value; }
    void setQsciLexer_BlockEnd_IsBase(bool value) const { qscilexer_blockend_isbase = value; }
    void setQsciLexer_BlockLookback_IsBase(bool value) const { qscilexer_blocklookback_isbase = value; }
    void setQsciLexer_BlockStart_IsBase(bool value) const { qscilexer_blockstart_isbase = value; }
    void setQsciLexer_BlockStartKeyword_IsBase(bool value) const { qscilexer_blockstartkeyword_isbase = value; }
    void setQsciLexer_BraceStyle_IsBase(bool value) const { qscilexer_bracestyle_isbase = value; }
    void setQsciLexer_CaseSensitive_IsBase(bool value) const { qscilexer_casesensitive_isbase = value; }
    void setQsciLexer_Color_IsBase(bool value) const { qscilexer_color_isbase = value; }
    void setQsciLexer_EolFill_IsBase(bool value) const { qscilexer_eolfill_isbase = value; }
    void setQsciLexer_Font_IsBase(bool value) const { qscilexer_font_isbase = value; }
    void setQsciLexer_IndentationGuideView_IsBase(bool value) const { qscilexer_indentationguideview_isbase = value; }
    void setQsciLexer_Keywords_IsBase(bool value) const { qscilexer_keywords_isbase = value; }
    void setQsciLexer_DefaultStyle_IsBase(bool value) const { qscilexer_defaultstyle_isbase = value; }
    void setQsciLexer_Description_IsBase(bool value) const { qscilexer_description_isbase = value; }
    void setQsciLexer_Paper_IsBase(bool value) const { qscilexer_paper_isbase = value; }
    void setQsciLexer_DefaultColorWithStyle_IsBase(bool value) const { qscilexer_defaultcolorwithstyle_isbase = value; }
    void setQsciLexer_DefaultEolFill_IsBase(bool value) const { qscilexer_defaulteolfill_isbase = value; }
    void setQsciLexer_DefaultFontWithStyle_IsBase(bool value) const { qscilexer_defaultfontwithstyle_isbase = value; }
    void setQsciLexer_DefaultPaperWithStyle_IsBase(bool value) const { qscilexer_defaultpaperwithstyle_isbase = value; }
    void setQsciLexer_SetEditor_IsBase(bool value) const { qscilexer_seteditor_isbase = value; }
    void setQsciLexer_RefreshProperties_IsBase(bool value) const { qscilexer_refreshproperties_isbase = value; }
    void setQsciLexer_StyleBitsNeeded_IsBase(bool value) const { qscilexer_stylebitsneeded_isbase = value; }
    void setQsciLexer_WordCharacters_IsBase(bool value) const { qscilexer_wordcharacters_isbase = value; }
    void setQsciLexer_SetAutoIndentStyle_IsBase(bool value) const { qscilexer_setautoindentstyle_isbase = value; }
    void setQsciLexer_SetColor_IsBase(bool value) const { qscilexer_setcolor_isbase = value; }
    void setQsciLexer_SetEolFill_IsBase(bool value) const { qscilexer_seteolfill_isbase = value; }
    void setQsciLexer_SetFont_IsBase(bool value) const { qscilexer_setfont_isbase = value; }
    void setQsciLexer_SetPaper_IsBase(bool value) const { qscilexer_setpaper_isbase = value; }
    void setQsciLexer_ReadProperties_IsBase(bool value) const { qscilexer_readproperties_isbase = value; }
    void setQsciLexer_WriteProperties_IsBase(bool value) const { qscilexer_writeproperties_isbase = value; }
    void setQsciLexer_Event_IsBase(bool value) const { qscilexer_event_isbase = value; }
    void setQsciLexer_EventFilter_IsBase(bool value) const { qscilexer_eventfilter_isbase = value; }
    void setQsciLexer_TimerEvent_IsBase(bool value) const { qscilexer_timerevent_isbase = value; }
    void setQsciLexer_ChildEvent_IsBase(bool value) const { qscilexer_childevent_isbase = value; }
    void setQsciLexer_CustomEvent_IsBase(bool value) const { qscilexer_customevent_isbase = value; }
    void setQsciLexer_ConnectNotify_IsBase(bool value) const { qscilexer_connectnotify_isbase = value; }
    void setQsciLexer_DisconnectNotify_IsBase(bool value) const { qscilexer_disconnectnotify_isbase = value; }
    void setQsciLexer_Sender_IsBase(bool value) const { qscilexer_sender_isbase = value; }
    void setQsciLexer_SenderSignalIndex_IsBase(bool value) const { qscilexer_sendersignalindex_isbase = value; }
    void setQsciLexer_Receivers_IsBase(bool value) const { qscilexer_receivers_isbase = value; }
    void setQsciLexer_IsSignalConnected_IsBase(bool value) const { qscilexer_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexer_metacall_isbase) {
            qscilexer_metacall_isbase = false;
            return QsciLexer::qt_metacall(param1, param2, param3);
        } else if (qscilexer_metacall_callback != nullptr) {
            return qscilexer_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexer::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexer_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexer_lexer_isbase) {
            qscilexer_lexer_isbase = false;
            return QsciLexer::lexer();
        } else if (qscilexer_lexer_callback != nullptr) {
            return qscilexer_lexer_callback();
        } else {
            return QsciLexer::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexer_lexerid_isbase) {
            qscilexer_lexerid_isbase = false;
            return QsciLexer::lexerId();
        } else if (qscilexer_lexerid_callback != nullptr) {
            return qscilexer_lexerid_callback();
        } else {
            return QsciLexer::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexer_autocompletionfillups_isbase) {
            qscilexer_autocompletionfillups_isbase = false;
            return QsciLexer::autoCompletionFillups();
        } else if (qscilexer_autocompletionfillups_callback != nullptr) {
            return qscilexer_autocompletionfillups_callback();
        } else {
            return QsciLexer::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexer_autocompletionwordseparators_isbase) {
            qscilexer_autocompletionwordseparators_isbase = false;
            return QsciLexer::autoCompletionWordSeparators();
        } else if (qscilexer_autocompletionwordseparators_callback != nullptr) {
            return qscilexer_autocompletionwordseparators_callback();
        } else {
            return QsciLexer::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexer_blockend_isbase) {
            qscilexer_blockend_isbase = false;
            return QsciLexer::blockEnd(style);
        } else if (qscilexer_blockend_callback != nullptr) {
            return qscilexer_blockend_callback(this, style);
        } else {
            return QsciLexer::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexer_blocklookback_isbase) {
            qscilexer_blocklookback_isbase = false;
            return QsciLexer::blockLookback();
        } else if (qscilexer_blocklookback_callback != nullptr) {
            return qscilexer_blocklookback_callback();
        } else {
            return QsciLexer::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexer_blockstart_isbase) {
            qscilexer_blockstart_isbase = false;
            return QsciLexer::blockStart(style);
        } else if (qscilexer_blockstart_callback != nullptr) {
            return qscilexer_blockstart_callback(this, style);
        } else {
            return QsciLexer::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexer_blockstartkeyword_isbase) {
            qscilexer_blockstartkeyword_isbase = false;
            return QsciLexer::blockStartKeyword(style);
        } else if (qscilexer_blockstartkeyword_callback != nullptr) {
            return qscilexer_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexer::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexer_bracestyle_isbase) {
            qscilexer_bracestyle_isbase = false;
            return QsciLexer::braceStyle();
        } else if (qscilexer_bracestyle_callback != nullptr) {
            return qscilexer_bracestyle_callback();
        } else {
            return QsciLexer::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexer_casesensitive_isbase) {
            qscilexer_casesensitive_isbase = false;
            return QsciLexer::caseSensitive();
        } else if (qscilexer_casesensitive_callback != nullptr) {
            return qscilexer_casesensitive_callback();
        } else {
            return QsciLexer::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexer_color_isbase) {
            qscilexer_color_isbase = false;
            return QsciLexer::color(style);
        } else if (qscilexer_color_callback != nullptr) {
            return qscilexer_color_callback(this, style);
        } else {
            return QsciLexer::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexer_eolfill_isbase) {
            qscilexer_eolfill_isbase = false;
            return QsciLexer::eolFill(style);
        } else if (qscilexer_eolfill_callback != nullptr) {
            return qscilexer_eolfill_callback(this, style);
        } else {
            return QsciLexer::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexer_font_isbase) {
            qscilexer_font_isbase = false;
            return QsciLexer::font(style);
        } else if (qscilexer_font_callback != nullptr) {
            return qscilexer_font_callback(this, style);
        } else {
            return QsciLexer::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexer_indentationguideview_isbase) {
            qscilexer_indentationguideview_isbase = false;
            return QsciLexer::indentationGuideView();
        } else if (qscilexer_indentationguideview_callback != nullptr) {
            return qscilexer_indentationguideview_callback();
        } else {
            return QsciLexer::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexer_keywords_isbase) {
            qscilexer_keywords_isbase = false;
            return QsciLexer::keywords(set);
        } else if (qscilexer_keywords_callback != nullptr) {
            return qscilexer_keywords_callback(this, set);
        } else {
            return QsciLexer::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexer_defaultstyle_isbase) {
            qscilexer_defaultstyle_isbase = false;
            return QsciLexer::defaultStyle();
        } else if (qscilexer_defaultstyle_callback != nullptr) {
            return qscilexer_defaultstyle_callback();
        } else {
            return QsciLexer::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexer_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexer_paper_isbase) {
            qscilexer_paper_isbase = false;
            return QsciLexer::paper(style);
        } else if (qscilexer_paper_callback != nullptr) {
            return qscilexer_paper_callback(this, style);
        } else {
            return QsciLexer::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexer_defaultcolorwithstyle_isbase) {
            qscilexer_defaultcolorwithstyle_isbase = false;
            return QsciLexer::defaultColor(style);
        } else if (qscilexer_defaultcolorwithstyle_callback != nullptr) {
            return qscilexer_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexer::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexer_defaulteolfill_isbase) {
            qscilexer_defaulteolfill_isbase = false;
            return QsciLexer::defaultEolFill(style);
        } else if (qscilexer_defaulteolfill_callback != nullptr) {
            return qscilexer_defaulteolfill_callback(this, style);
        } else {
            return QsciLexer::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexer_defaultfontwithstyle_isbase) {
            qscilexer_defaultfontwithstyle_isbase = false;
            return QsciLexer::defaultFont(style);
        } else if (qscilexer_defaultfontwithstyle_callback != nullptr) {
            return qscilexer_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexer::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexer_defaultpaperwithstyle_isbase) {
            qscilexer_defaultpaperwithstyle_isbase = false;
            return QsciLexer::defaultPaper(style);
        } else if (qscilexer_defaultpaperwithstyle_callback != nullptr) {
            return qscilexer_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexer::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexer_seteditor_isbase) {
            qscilexer_seteditor_isbase = false;
            QsciLexer::setEditor(editor);
        } else if (qscilexer_seteditor_callback != nullptr) {
            qscilexer_seteditor_callback(this, editor);
        } else {
            QsciLexer::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexer_refreshproperties_isbase) {
            qscilexer_refreshproperties_isbase = false;
            QsciLexer::refreshProperties();
        } else if (qscilexer_refreshproperties_callback != nullptr) {
            qscilexer_refreshproperties_callback();
        } else {
            QsciLexer::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexer_stylebitsneeded_isbase) {
            qscilexer_stylebitsneeded_isbase = false;
            return QsciLexer::styleBitsNeeded();
        } else if (qscilexer_stylebitsneeded_callback != nullptr) {
            return qscilexer_stylebitsneeded_callback();
        } else {
            return QsciLexer::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexer_wordcharacters_isbase) {
            qscilexer_wordcharacters_isbase = false;
            return QsciLexer::wordCharacters();
        } else if (qscilexer_wordcharacters_callback != nullptr) {
            return qscilexer_wordcharacters_callback();
        } else {
            return QsciLexer::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexer_setautoindentstyle_isbase) {
            qscilexer_setautoindentstyle_isbase = false;
            QsciLexer::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexer_setautoindentstyle_callback != nullptr) {
            qscilexer_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexer::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexer_setcolor_isbase) {
            qscilexer_setcolor_isbase = false;
            QsciLexer::setColor(c, style);
        } else if (qscilexer_setcolor_callback != nullptr) {
            qscilexer_setcolor_callback(this, c, style);
        } else {
            QsciLexer::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexer_seteolfill_isbase) {
            qscilexer_seteolfill_isbase = false;
            QsciLexer::setEolFill(eoffill, style);
        } else if (qscilexer_seteolfill_callback != nullptr) {
            qscilexer_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexer::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexer_setfont_isbase) {
            qscilexer_setfont_isbase = false;
            QsciLexer::setFont(f, style);
        } else if (qscilexer_setfont_callback != nullptr) {
            qscilexer_setfont_callback(this, f, style);
        } else {
            QsciLexer::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexer_setpaper_isbase) {
            qscilexer_setpaper_isbase = false;
            QsciLexer::setPaper(c, style);
        } else if (qscilexer_setpaper_callback != nullptr) {
            qscilexer_setpaper_callback(this, c, style);
        } else {
            QsciLexer::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexer_readproperties_isbase) {
            qscilexer_readproperties_isbase = false;
            return QsciLexer::readProperties(qs, prefix);
        } else if (qscilexer_readproperties_callback != nullptr) {
            return qscilexer_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexer::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexer_writeproperties_isbase) {
            qscilexer_writeproperties_isbase = false;
            return QsciLexer::writeProperties(qs, prefix);
        } else if (qscilexer_writeproperties_callback != nullptr) {
            return qscilexer_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexer::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexer_event_isbase) {
            qscilexer_event_isbase = false;
            return QsciLexer::event(event);
        } else if (qscilexer_event_callback != nullptr) {
            return qscilexer_event_callback(this, event);
        } else {
            return QsciLexer::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexer_eventfilter_isbase) {
            qscilexer_eventfilter_isbase = false;
            return QsciLexer::eventFilter(watched, event);
        } else if (qscilexer_eventfilter_callback != nullptr) {
            return qscilexer_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexer::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexer_timerevent_isbase) {
            qscilexer_timerevent_isbase = false;
            QsciLexer::timerEvent(event);
        } else if (qscilexer_timerevent_callback != nullptr) {
            qscilexer_timerevent_callback(this, event);
        } else {
            QsciLexer::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexer_childevent_isbase) {
            qscilexer_childevent_isbase = false;
            QsciLexer::childEvent(event);
        } else if (qscilexer_childevent_callback != nullptr) {
            qscilexer_childevent_callback(this, event);
        } else {
            QsciLexer::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexer_customevent_isbase) {
            qscilexer_customevent_isbase = false;
            QsciLexer::customEvent(event);
        } else if (qscilexer_customevent_callback != nullptr) {
            qscilexer_customevent_callback(this, event);
        } else {
            QsciLexer::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexer_connectnotify_isbase) {
            qscilexer_connectnotify_isbase = false;
            QsciLexer::connectNotify(signal);
        } else if (qscilexer_connectnotify_callback != nullptr) {
            qscilexer_connectnotify_callback(this, signal);
        } else {
            QsciLexer::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexer_disconnectnotify_isbase) {
            qscilexer_disconnectnotify_isbase = false;
            QsciLexer::disconnectNotify(signal);
        } else if (qscilexer_disconnectnotify_callback != nullptr) {
            qscilexer_disconnectnotify_callback(this, signal);
        } else {
            QsciLexer::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexer_sender_isbase) {
            qscilexer_sender_isbase = false;
            return QsciLexer::sender();
        } else if (qscilexer_sender_callback != nullptr) {
            return qscilexer_sender_callback();
        } else {
            return QsciLexer::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexer_sendersignalindex_isbase) {
            qscilexer_sendersignalindex_isbase = false;
            return QsciLexer::senderSignalIndex();
        } else if (qscilexer_sendersignalindex_callback != nullptr) {
            return qscilexer_sendersignalindex_callback();
        } else {
            return QsciLexer::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexer_receivers_isbase) {
            qscilexer_receivers_isbase = false;
            return QsciLexer::receivers(signal);
        } else if (qscilexer_receivers_callback != nullptr) {
            return qscilexer_receivers_callback(this, signal);
        } else {
            return QsciLexer::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexer_issignalconnected_isbase) {
            qscilexer_issignalconnected_isbase = false;
            return QsciLexer::isSignalConnected(signal);
        } else if (qscilexer_issignalconnected_callback != nullptr) {
            return qscilexer_issignalconnected_callback(this, signal);
        } else {
            return QsciLexer::isSignalConnected(signal);
        }
    }
};

#endif
