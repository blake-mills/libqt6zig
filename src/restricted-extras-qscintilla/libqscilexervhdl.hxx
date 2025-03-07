#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERVHDL_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERVHDL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerVHDL so that we can call protected methods
class VirtualQsciLexerVHDL : public QsciLexerVHDL {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerVHDL_Metacall_Callback = int (*)(QsciLexerVHDL*, QMetaObject::Call, int, void**);
    using QsciLexerVHDL_SetFoldComments_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldCompact_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtElse_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtBegin_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_SetFoldAtParenthesis_Callback = void (*)(QsciLexerVHDL*, bool);
    using QsciLexerVHDL_Language_Callback = const char* (*)();
    using QsciLexerVHDL_Lexer_Callback = const char* (*)();
    using QsciLexerVHDL_LexerId_Callback = int (*)();
    using QsciLexerVHDL_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerVHDL_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerVHDL_BlockEnd_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BlockLookback_Callback = int (*)();
    using QsciLexerVHDL_BlockStart_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BlockStartKeyword_Callback = const char* (*)(const QsciLexerVHDL*, int*);
    using QsciLexerVHDL_BraceStyle_Callback = int (*)();
    using QsciLexerVHDL_CaseSensitive_Callback = bool (*)();
    using QsciLexerVHDL_Color_Callback = QColor (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_EolFill_Callback = bool (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_Font_Callback = QFont (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_IndentationGuideView_Callback = int (*)();
    using QsciLexerVHDL_Keywords_Callback = const char* (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultStyle_Callback = int (*)();
    using QsciLexerVHDL_Description_Callback = QString (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_Paper_Callback = QColor (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultEolFill_Callback = bool (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerVHDL*, int);
    using QsciLexerVHDL_SetEditor_Callback = void (*)(QsciLexerVHDL*, QsciScintilla*);
    using QsciLexerVHDL_RefreshProperties_Callback = void (*)();
    using QsciLexerVHDL_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerVHDL_WordCharacters_Callback = const char* (*)();
    using QsciLexerVHDL_SetAutoIndentStyle_Callback = void (*)(QsciLexerVHDL*, int);
    using QsciLexerVHDL_SetColor_Callback = void (*)(QsciLexerVHDL*, const QColor&, int);
    using QsciLexerVHDL_SetEolFill_Callback = void (*)(QsciLexerVHDL*, bool, int);
    using QsciLexerVHDL_SetFont_Callback = void (*)(QsciLexerVHDL*, const QFont&, int);
    using QsciLexerVHDL_SetPaper_Callback = void (*)(QsciLexerVHDL*, const QColor&, int);
    using QsciLexerVHDL_ReadProperties_Callback = bool (*)(QsciLexerVHDL*, QSettings&, const QString&);
    using QsciLexerVHDL_WriteProperties_Callback = bool (*)(const QsciLexerVHDL*, QSettings&, const QString&);
    using QsciLexerVHDL_Event_Callback = bool (*)(QsciLexerVHDL*, QEvent*);
    using QsciLexerVHDL_EventFilter_Callback = bool (*)(QsciLexerVHDL*, QObject*, QEvent*);
    using QsciLexerVHDL_TimerEvent_Callback = void (*)(QsciLexerVHDL*, QTimerEvent*);
    using QsciLexerVHDL_ChildEvent_Callback = void (*)(QsciLexerVHDL*, QChildEvent*);
    using QsciLexerVHDL_CustomEvent_Callback = void (*)(QsciLexerVHDL*, QEvent*);
    using QsciLexerVHDL_ConnectNotify_Callback = void (*)(QsciLexerVHDL*, const QMetaMethod&);
    using QsciLexerVHDL_DisconnectNotify_Callback = void (*)(QsciLexerVHDL*, const QMetaMethod&);
    using QsciLexerVHDL_Sender_Callback = QObject* (*)();
    using QsciLexerVHDL_SenderSignalIndex_Callback = int (*)();
    using QsciLexerVHDL_Receivers_Callback = int (*)(const QsciLexerVHDL*, const char*);
    using QsciLexerVHDL_IsSignalConnected_Callback = bool (*)(const QsciLexerVHDL*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerVHDL_Metacall_Callback qscilexervhdl_metacall_callback = nullptr;
    QsciLexerVHDL_SetFoldComments_Callback qscilexervhdl_setfoldcomments_callback = nullptr;
    QsciLexerVHDL_SetFoldCompact_Callback qscilexervhdl_setfoldcompact_callback = nullptr;
    QsciLexerVHDL_SetFoldAtElse_Callback qscilexervhdl_setfoldatelse_callback = nullptr;
    QsciLexerVHDL_SetFoldAtBegin_Callback qscilexervhdl_setfoldatbegin_callback = nullptr;
    QsciLexerVHDL_SetFoldAtParenthesis_Callback qscilexervhdl_setfoldatparenthesis_callback = nullptr;
    QsciLexerVHDL_Language_Callback qscilexervhdl_language_callback = nullptr;
    QsciLexerVHDL_Lexer_Callback qscilexervhdl_lexer_callback = nullptr;
    QsciLexerVHDL_LexerId_Callback qscilexervhdl_lexerid_callback = nullptr;
    QsciLexerVHDL_AutoCompletionFillups_Callback qscilexervhdl_autocompletionfillups_callback = nullptr;
    QsciLexerVHDL_AutoCompletionWordSeparators_Callback qscilexervhdl_autocompletionwordseparators_callback = nullptr;
    QsciLexerVHDL_BlockEnd_Callback qscilexervhdl_blockend_callback = nullptr;
    QsciLexerVHDL_BlockLookback_Callback qscilexervhdl_blocklookback_callback = nullptr;
    QsciLexerVHDL_BlockStart_Callback qscilexervhdl_blockstart_callback = nullptr;
    QsciLexerVHDL_BlockStartKeyword_Callback qscilexervhdl_blockstartkeyword_callback = nullptr;
    QsciLexerVHDL_BraceStyle_Callback qscilexervhdl_bracestyle_callback = nullptr;
    QsciLexerVHDL_CaseSensitive_Callback qscilexervhdl_casesensitive_callback = nullptr;
    QsciLexerVHDL_Color_Callback qscilexervhdl_color_callback = nullptr;
    QsciLexerVHDL_EolFill_Callback qscilexervhdl_eolfill_callback = nullptr;
    QsciLexerVHDL_Font_Callback qscilexervhdl_font_callback = nullptr;
    QsciLexerVHDL_IndentationGuideView_Callback qscilexervhdl_indentationguideview_callback = nullptr;
    QsciLexerVHDL_Keywords_Callback qscilexervhdl_keywords_callback = nullptr;
    QsciLexerVHDL_DefaultStyle_Callback qscilexervhdl_defaultstyle_callback = nullptr;
    QsciLexerVHDL_Description_Callback qscilexervhdl_description_callback = nullptr;
    QsciLexerVHDL_Paper_Callback qscilexervhdl_paper_callback = nullptr;
    QsciLexerVHDL_DefaultColorWithStyle_Callback qscilexervhdl_defaultcolorwithstyle_callback = nullptr;
    QsciLexerVHDL_DefaultEolFill_Callback qscilexervhdl_defaulteolfill_callback = nullptr;
    QsciLexerVHDL_DefaultFontWithStyle_Callback qscilexervhdl_defaultfontwithstyle_callback = nullptr;
    QsciLexerVHDL_DefaultPaperWithStyle_Callback qscilexervhdl_defaultpaperwithstyle_callback = nullptr;
    QsciLexerVHDL_SetEditor_Callback qscilexervhdl_seteditor_callback = nullptr;
    QsciLexerVHDL_RefreshProperties_Callback qscilexervhdl_refreshproperties_callback = nullptr;
    QsciLexerVHDL_StyleBitsNeeded_Callback qscilexervhdl_stylebitsneeded_callback = nullptr;
    QsciLexerVHDL_WordCharacters_Callback qscilexervhdl_wordcharacters_callback = nullptr;
    QsciLexerVHDL_SetAutoIndentStyle_Callback qscilexervhdl_setautoindentstyle_callback = nullptr;
    QsciLexerVHDL_SetColor_Callback qscilexervhdl_setcolor_callback = nullptr;
    QsciLexerVHDL_SetEolFill_Callback qscilexervhdl_seteolfill_callback = nullptr;
    QsciLexerVHDL_SetFont_Callback qscilexervhdl_setfont_callback = nullptr;
    QsciLexerVHDL_SetPaper_Callback qscilexervhdl_setpaper_callback = nullptr;
    QsciLexerVHDL_ReadProperties_Callback qscilexervhdl_readproperties_callback = nullptr;
    QsciLexerVHDL_WriteProperties_Callback qscilexervhdl_writeproperties_callback = nullptr;
    QsciLexerVHDL_Event_Callback qscilexervhdl_event_callback = nullptr;
    QsciLexerVHDL_EventFilter_Callback qscilexervhdl_eventfilter_callback = nullptr;
    QsciLexerVHDL_TimerEvent_Callback qscilexervhdl_timerevent_callback = nullptr;
    QsciLexerVHDL_ChildEvent_Callback qscilexervhdl_childevent_callback = nullptr;
    QsciLexerVHDL_CustomEvent_Callback qscilexervhdl_customevent_callback = nullptr;
    QsciLexerVHDL_ConnectNotify_Callback qscilexervhdl_connectnotify_callback = nullptr;
    QsciLexerVHDL_DisconnectNotify_Callback qscilexervhdl_disconnectnotify_callback = nullptr;
    QsciLexerVHDL_Sender_Callback qscilexervhdl_sender_callback = nullptr;
    QsciLexerVHDL_SenderSignalIndex_Callback qscilexervhdl_sendersignalindex_callback = nullptr;
    QsciLexerVHDL_Receivers_Callback qscilexervhdl_receivers_callback = nullptr;
    QsciLexerVHDL_IsSignalConnected_Callback qscilexervhdl_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexervhdl_metacall_isbase = false;
    mutable bool qscilexervhdl_setfoldcomments_isbase = false;
    mutable bool qscilexervhdl_setfoldcompact_isbase = false;
    mutable bool qscilexervhdl_setfoldatelse_isbase = false;
    mutable bool qscilexervhdl_setfoldatbegin_isbase = false;
    mutable bool qscilexervhdl_setfoldatparenthesis_isbase = false;
    mutable bool qscilexervhdl_language_isbase = false;
    mutable bool qscilexervhdl_lexer_isbase = false;
    mutable bool qscilexervhdl_lexerid_isbase = false;
    mutable bool qscilexervhdl_autocompletionfillups_isbase = false;
    mutable bool qscilexervhdl_autocompletionwordseparators_isbase = false;
    mutable bool qscilexervhdl_blockend_isbase = false;
    mutable bool qscilexervhdl_blocklookback_isbase = false;
    mutable bool qscilexervhdl_blockstart_isbase = false;
    mutable bool qscilexervhdl_blockstartkeyword_isbase = false;
    mutable bool qscilexervhdl_bracestyle_isbase = false;
    mutable bool qscilexervhdl_casesensitive_isbase = false;
    mutable bool qscilexervhdl_color_isbase = false;
    mutable bool qscilexervhdl_eolfill_isbase = false;
    mutable bool qscilexervhdl_font_isbase = false;
    mutable bool qscilexervhdl_indentationguideview_isbase = false;
    mutable bool qscilexervhdl_keywords_isbase = false;
    mutable bool qscilexervhdl_defaultstyle_isbase = false;
    mutable bool qscilexervhdl_description_isbase = false;
    mutable bool qscilexervhdl_paper_isbase = false;
    mutable bool qscilexervhdl_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexervhdl_defaulteolfill_isbase = false;
    mutable bool qscilexervhdl_defaultfontwithstyle_isbase = false;
    mutable bool qscilexervhdl_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexervhdl_seteditor_isbase = false;
    mutable bool qscilexervhdl_refreshproperties_isbase = false;
    mutable bool qscilexervhdl_stylebitsneeded_isbase = false;
    mutable bool qscilexervhdl_wordcharacters_isbase = false;
    mutable bool qscilexervhdl_setautoindentstyle_isbase = false;
    mutable bool qscilexervhdl_setcolor_isbase = false;
    mutable bool qscilexervhdl_seteolfill_isbase = false;
    mutable bool qscilexervhdl_setfont_isbase = false;
    mutable bool qscilexervhdl_setpaper_isbase = false;
    mutable bool qscilexervhdl_readproperties_isbase = false;
    mutable bool qscilexervhdl_writeproperties_isbase = false;
    mutable bool qscilexervhdl_event_isbase = false;
    mutable bool qscilexervhdl_eventfilter_isbase = false;
    mutable bool qscilexervhdl_timerevent_isbase = false;
    mutable bool qscilexervhdl_childevent_isbase = false;
    mutable bool qscilexervhdl_customevent_isbase = false;
    mutable bool qscilexervhdl_connectnotify_isbase = false;
    mutable bool qscilexervhdl_disconnectnotify_isbase = false;
    mutable bool qscilexervhdl_sender_isbase = false;
    mutable bool qscilexervhdl_sendersignalindex_isbase = false;
    mutable bool qscilexervhdl_receivers_isbase = false;
    mutable bool qscilexervhdl_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerVHDL() : QsciLexerVHDL(){};
    VirtualQsciLexerVHDL(QObject* parent) : QsciLexerVHDL(parent){};

    ~VirtualQsciLexerVHDL() {
        qscilexervhdl_metacall_callback = nullptr;
        qscilexervhdl_setfoldcomments_callback = nullptr;
        qscilexervhdl_setfoldcompact_callback = nullptr;
        qscilexervhdl_setfoldatelse_callback = nullptr;
        qscilexervhdl_setfoldatbegin_callback = nullptr;
        qscilexervhdl_setfoldatparenthesis_callback = nullptr;
        qscilexervhdl_language_callback = nullptr;
        qscilexervhdl_lexer_callback = nullptr;
        qscilexervhdl_lexerid_callback = nullptr;
        qscilexervhdl_autocompletionfillups_callback = nullptr;
        qscilexervhdl_autocompletionwordseparators_callback = nullptr;
        qscilexervhdl_blockend_callback = nullptr;
        qscilexervhdl_blocklookback_callback = nullptr;
        qscilexervhdl_blockstart_callback = nullptr;
        qscilexervhdl_blockstartkeyword_callback = nullptr;
        qscilexervhdl_bracestyle_callback = nullptr;
        qscilexervhdl_casesensitive_callback = nullptr;
        qscilexervhdl_color_callback = nullptr;
        qscilexervhdl_eolfill_callback = nullptr;
        qscilexervhdl_font_callback = nullptr;
        qscilexervhdl_indentationguideview_callback = nullptr;
        qscilexervhdl_keywords_callback = nullptr;
        qscilexervhdl_defaultstyle_callback = nullptr;
        qscilexervhdl_description_callback = nullptr;
        qscilexervhdl_paper_callback = nullptr;
        qscilexervhdl_defaultcolorwithstyle_callback = nullptr;
        qscilexervhdl_defaulteolfill_callback = nullptr;
        qscilexervhdl_defaultfontwithstyle_callback = nullptr;
        qscilexervhdl_defaultpaperwithstyle_callback = nullptr;
        qscilexervhdl_seteditor_callback = nullptr;
        qscilexervhdl_refreshproperties_callback = nullptr;
        qscilexervhdl_stylebitsneeded_callback = nullptr;
        qscilexervhdl_wordcharacters_callback = nullptr;
        qscilexervhdl_setautoindentstyle_callback = nullptr;
        qscilexervhdl_setcolor_callback = nullptr;
        qscilexervhdl_seteolfill_callback = nullptr;
        qscilexervhdl_setfont_callback = nullptr;
        qscilexervhdl_setpaper_callback = nullptr;
        qscilexervhdl_readproperties_callback = nullptr;
        qscilexervhdl_writeproperties_callback = nullptr;
        qscilexervhdl_event_callback = nullptr;
        qscilexervhdl_eventfilter_callback = nullptr;
        qscilexervhdl_timerevent_callback = nullptr;
        qscilexervhdl_childevent_callback = nullptr;
        qscilexervhdl_customevent_callback = nullptr;
        qscilexervhdl_connectnotify_callback = nullptr;
        qscilexervhdl_disconnectnotify_callback = nullptr;
        qscilexervhdl_sender_callback = nullptr;
        qscilexervhdl_sendersignalindex_callback = nullptr;
        qscilexervhdl_receivers_callback = nullptr;
        qscilexervhdl_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerVHDL_Metacall_Callback(QsciLexerVHDL_Metacall_Callback cb) { qscilexervhdl_metacall_callback = cb; }
    void setQsciLexerVHDL_SetFoldComments_Callback(QsciLexerVHDL_SetFoldComments_Callback cb) { qscilexervhdl_setfoldcomments_callback = cb; }
    void setQsciLexerVHDL_SetFoldCompact_Callback(QsciLexerVHDL_SetFoldCompact_Callback cb) { qscilexervhdl_setfoldcompact_callback = cb; }
    void setQsciLexerVHDL_SetFoldAtElse_Callback(QsciLexerVHDL_SetFoldAtElse_Callback cb) { qscilexervhdl_setfoldatelse_callback = cb; }
    void setQsciLexerVHDL_SetFoldAtBegin_Callback(QsciLexerVHDL_SetFoldAtBegin_Callback cb) { qscilexervhdl_setfoldatbegin_callback = cb; }
    void setQsciLexerVHDL_SetFoldAtParenthesis_Callback(QsciLexerVHDL_SetFoldAtParenthesis_Callback cb) { qscilexervhdl_setfoldatparenthesis_callback = cb; }
    void setQsciLexerVHDL_Language_Callback(QsciLexerVHDL_Language_Callback cb) { qscilexervhdl_language_callback = cb; }
    void setQsciLexerVHDL_Lexer_Callback(QsciLexerVHDL_Lexer_Callback cb) { qscilexervhdl_lexer_callback = cb; }
    void setQsciLexerVHDL_LexerId_Callback(QsciLexerVHDL_LexerId_Callback cb) { qscilexervhdl_lexerid_callback = cb; }
    void setQsciLexerVHDL_AutoCompletionFillups_Callback(QsciLexerVHDL_AutoCompletionFillups_Callback cb) { qscilexervhdl_autocompletionfillups_callback = cb; }
    void setQsciLexerVHDL_AutoCompletionWordSeparators_Callback(QsciLexerVHDL_AutoCompletionWordSeparators_Callback cb) { qscilexervhdl_autocompletionwordseparators_callback = cb; }
    void setQsciLexerVHDL_BlockEnd_Callback(QsciLexerVHDL_BlockEnd_Callback cb) { qscilexervhdl_blockend_callback = cb; }
    void setQsciLexerVHDL_BlockLookback_Callback(QsciLexerVHDL_BlockLookback_Callback cb) { qscilexervhdl_blocklookback_callback = cb; }
    void setQsciLexerVHDL_BlockStart_Callback(QsciLexerVHDL_BlockStart_Callback cb) { qscilexervhdl_blockstart_callback = cb; }
    void setQsciLexerVHDL_BlockStartKeyword_Callback(QsciLexerVHDL_BlockStartKeyword_Callback cb) { qscilexervhdl_blockstartkeyword_callback = cb; }
    void setQsciLexerVHDL_BraceStyle_Callback(QsciLexerVHDL_BraceStyle_Callback cb) { qscilexervhdl_bracestyle_callback = cb; }
    void setQsciLexerVHDL_CaseSensitive_Callback(QsciLexerVHDL_CaseSensitive_Callback cb) { qscilexervhdl_casesensitive_callback = cb; }
    void setQsciLexerVHDL_Color_Callback(QsciLexerVHDL_Color_Callback cb) { qscilexervhdl_color_callback = cb; }
    void setQsciLexerVHDL_EolFill_Callback(QsciLexerVHDL_EolFill_Callback cb) { qscilexervhdl_eolfill_callback = cb; }
    void setQsciLexerVHDL_Font_Callback(QsciLexerVHDL_Font_Callback cb) { qscilexervhdl_font_callback = cb; }
    void setQsciLexerVHDL_IndentationGuideView_Callback(QsciLexerVHDL_IndentationGuideView_Callback cb) { qscilexervhdl_indentationguideview_callback = cb; }
    void setQsciLexerVHDL_Keywords_Callback(QsciLexerVHDL_Keywords_Callback cb) { qscilexervhdl_keywords_callback = cb; }
    void setQsciLexerVHDL_DefaultStyle_Callback(QsciLexerVHDL_DefaultStyle_Callback cb) { qscilexervhdl_defaultstyle_callback = cb; }
    void setQsciLexerVHDL_Description_Callback(QsciLexerVHDL_Description_Callback cb) { qscilexervhdl_description_callback = cb; }
    void setQsciLexerVHDL_Paper_Callback(QsciLexerVHDL_Paper_Callback cb) { qscilexervhdl_paper_callback = cb; }
    void setQsciLexerVHDL_DefaultColorWithStyle_Callback(QsciLexerVHDL_DefaultColorWithStyle_Callback cb) { qscilexervhdl_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerVHDL_DefaultEolFill_Callback(QsciLexerVHDL_DefaultEolFill_Callback cb) { qscilexervhdl_defaulteolfill_callback = cb; }
    void setQsciLexerVHDL_DefaultFontWithStyle_Callback(QsciLexerVHDL_DefaultFontWithStyle_Callback cb) { qscilexervhdl_defaultfontwithstyle_callback = cb; }
    void setQsciLexerVHDL_DefaultPaperWithStyle_Callback(QsciLexerVHDL_DefaultPaperWithStyle_Callback cb) { qscilexervhdl_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerVHDL_SetEditor_Callback(QsciLexerVHDL_SetEditor_Callback cb) { qscilexervhdl_seteditor_callback = cb; }
    void setQsciLexerVHDL_RefreshProperties_Callback(QsciLexerVHDL_RefreshProperties_Callback cb) { qscilexervhdl_refreshproperties_callback = cb; }
    void setQsciLexerVHDL_StyleBitsNeeded_Callback(QsciLexerVHDL_StyleBitsNeeded_Callback cb) { qscilexervhdl_stylebitsneeded_callback = cb; }
    void setQsciLexerVHDL_WordCharacters_Callback(QsciLexerVHDL_WordCharacters_Callback cb) { qscilexervhdl_wordcharacters_callback = cb; }
    void setQsciLexerVHDL_SetAutoIndentStyle_Callback(QsciLexerVHDL_SetAutoIndentStyle_Callback cb) { qscilexervhdl_setautoindentstyle_callback = cb; }
    void setQsciLexerVHDL_SetColor_Callback(QsciLexerVHDL_SetColor_Callback cb) { qscilexervhdl_setcolor_callback = cb; }
    void setQsciLexerVHDL_SetEolFill_Callback(QsciLexerVHDL_SetEolFill_Callback cb) { qscilexervhdl_seteolfill_callback = cb; }
    void setQsciLexerVHDL_SetFont_Callback(QsciLexerVHDL_SetFont_Callback cb) { qscilexervhdl_setfont_callback = cb; }
    void setQsciLexerVHDL_SetPaper_Callback(QsciLexerVHDL_SetPaper_Callback cb) { qscilexervhdl_setpaper_callback = cb; }
    void setQsciLexerVHDL_ReadProperties_Callback(QsciLexerVHDL_ReadProperties_Callback cb) { qscilexervhdl_readproperties_callback = cb; }
    void setQsciLexerVHDL_WriteProperties_Callback(QsciLexerVHDL_WriteProperties_Callback cb) { qscilexervhdl_writeproperties_callback = cb; }
    void setQsciLexerVHDL_Event_Callback(QsciLexerVHDL_Event_Callback cb) { qscilexervhdl_event_callback = cb; }
    void setQsciLexerVHDL_EventFilter_Callback(QsciLexerVHDL_EventFilter_Callback cb) { qscilexervhdl_eventfilter_callback = cb; }
    void setQsciLexerVHDL_TimerEvent_Callback(QsciLexerVHDL_TimerEvent_Callback cb) { qscilexervhdl_timerevent_callback = cb; }
    void setQsciLexerVHDL_ChildEvent_Callback(QsciLexerVHDL_ChildEvent_Callback cb) { qscilexervhdl_childevent_callback = cb; }
    void setQsciLexerVHDL_CustomEvent_Callback(QsciLexerVHDL_CustomEvent_Callback cb) { qscilexervhdl_customevent_callback = cb; }
    void setQsciLexerVHDL_ConnectNotify_Callback(QsciLexerVHDL_ConnectNotify_Callback cb) { qscilexervhdl_connectnotify_callback = cb; }
    void setQsciLexerVHDL_DisconnectNotify_Callback(QsciLexerVHDL_DisconnectNotify_Callback cb) { qscilexervhdl_disconnectnotify_callback = cb; }
    void setQsciLexerVHDL_Sender_Callback(QsciLexerVHDL_Sender_Callback cb) { qscilexervhdl_sender_callback = cb; }
    void setQsciLexerVHDL_SenderSignalIndex_Callback(QsciLexerVHDL_SenderSignalIndex_Callback cb) { qscilexervhdl_sendersignalindex_callback = cb; }
    void setQsciLexerVHDL_Receivers_Callback(QsciLexerVHDL_Receivers_Callback cb) { qscilexervhdl_receivers_callback = cb; }
    void setQsciLexerVHDL_IsSignalConnected_Callback(QsciLexerVHDL_IsSignalConnected_Callback cb) { qscilexervhdl_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerVHDL_Metacall_IsBase(bool value) const { qscilexervhdl_metacall_isbase = value; }
    void setQsciLexerVHDL_SetFoldComments_IsBase(bool value) const { qscilexervhdl_setfoldcomments_isbase = value; }
    void setQsciLexerVHDL_SetFoldCompact_IsBase(bool value) const { qscilexervhdl_setfoldcompact_isbase = value; }
    void setQsciLexerVHDL_SetFoldAtElse_IsBase(bool value) const { qscilexervhdl_setfoldatelse_isbase = value; }
    void setQsciLexerVHDL_SetFoldAtBegin_IsBase(bool value) const { qscilexervhdl_setfoldatbegin_isbase = value; }
    void setQsciLexerVHDL_SetFoldAtParenthesis_IsBase(bool value) const { qscilexervhdl_setfoldatparenthesis_isbase = value; }
    void setQsciLexerVHDL_Language_IsBase(bool value) const { qscilexervhdl_language_isbase = value; }
    void setQsciLexerVHDL_Lexer_IsBase(bool value) const { qscilexervhdl_lexer_isbase = value; }
    void setQsciLexerVHDL_LexerId_IsBase(bool value) const { qscilexervhdl_lexerid_isbase = value; }
    void setQsciLexerVHDL_AutoCompletionFillups_IsBase(bool value) const { qscilexervhdl_autocompletionfillups_isbase = value; }
    void setQsciLexerVHDL_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexervhdl_autocompletionwordseparators_isbase = value; }
    void setQsciLexerVHDL_BlockEnd_IsBase(bool value) const { qscilexervhdl_blockend_isbase = value; }
    void setQsciLexerVHDL_BlockLookback_IsBase(bool value) const { qscilexervhdl_blocklookback_isbase = value; }
    void setQsciLexerVHDL_BlockStart_IsBase(bool value) const { qscilexervhdl_blockstart_isbase = value; }
    void setQsciLexerVHDL_BlockStartKeyword_IsBase(bool value) const { qscilexervhdl_blockstartkeyword_isbase = value; }
    void setQsciLexerVHDL_BraceStyle_IsBase(bool value) const { qscilexervhdl_bracestyle_isbase = value; }
    void setQsciLexerVHDL_CaseSensitive_IsBase(bool value) const { qscilexervhdl_casesensitive_isbase = value; }
    void setQsciLexerVHDL_Color_IsBase(bool value) const { qscilexervhdl_color_isbase = value; }
    void setQsciLexerVHDL_EolFill_IsBase(bool value) const { qscilexervhdl_eolfill_isbase = value; }
    void setQsciLexerVHDL_Font_IsBase(bool value) const { qscilexervhdl_font_isbase = value; }
    void setQsciLexerVHDL_IndentationGuideView_IsBase(bool value) const { qscilexervhdl_indentationguideview_isbase = value; }
    void setQsciLexerVHDL_Keywords_IsBase(bool value) const { qscilexervhdl_keywords_isbase = value; }
    void setQsciLexerVHDL_DefaultStyle_IsBase(bool value) const { qscilexervhdl_defaultstyle_isbase = value; }
    void setQsciLexerVHDL_Description_IsBase(bool value) const { qscilexervhdl_description_isbase = value; }
    void setQsciLexerVHDL_Paper_IsBase(bool value) const { qscilexervhdl_paper_isbase = value; }
    void setQsciLexerVHDL_DefaultColorWithStyle_IsBase(bool value) const { qscilexervhdl_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerVHDL_DefaultEolFill_IsBase(bool value) const { qscilexervhdl_defaulteolfill_isbase = value; }
    void setQsciLexerVHDL_DefaultFontWithStyle_IsBase(bool value) const { qscilexervhdl_defaultfontwithstyle_isbase = value; }
    void setQsciLexerVHDL_DefaultPaperWithStyle_IsBase(bool value) const { qscilexervhdl_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerVHDL_SetEditor_IsBase(bool value) const { qscilexervhdl_seteditor_isbase = value; }
    void setQsciLexerVHDL_RefreshProperties_IsBase(bool value) const { qscilexervhdl_refreshproperties_isbase = value; }
    void setQsciLexerVHDL_StyleBitsNeeded_IsBase(bool value) const { qscilexervhdl_stylebitsneeded_isbase = value; }
    void setQsciLexerVHDL_WordCharacters_IsBase(bool value) const { qscilexervhdl_wordcharacters_isbase = value; }
    void setQsciLexerVHDL_SetAutoIndentStyle_IsBase(bool value) const { qscilexervhdl_setautoindentstyle_isbase = value; }
    void setQsciLexerVHDL_SetColor_IsBase(bool value) const { qscilexervhdl_setcolor_isbase = value; }
    void setQsciLexerVHDL_SetEolFill_IsBase(bool value) const { qscilexervhdl_seteolfill_isbase = value; }
    void setQsciLexerVHDL_SetFont_IsBase(bool value) const { qscilexervhdl_setfont_isbase = value; }
    void setQsciLexerVHDL_SetPaper_IsBase(bool value) const { qscilexervhdl_setpaper_isbase = value; }
    void setQsciLexerVHDL_ReadProperties_IsBase(bool value) const { qscilexervhdl_readproperties_isbase = value; }
    void setQsciLexerVHDL_WriteProperties_IsBase(bool value) const { qscilexervhdl_writeproperties_isbase = value; }
    void setQsciLexerVHDL_Event_IsBase(bool value) const { qscilexervhdl_event_isbase = value; }
    void setQsciLexerVHDL_EventFilter_IsBase(bool value) const { qscilexervhdl_eventfilter_isbase = value; }
    void setQsciLexerVHDL_TimerEvent_IsBase(bool value) const { qscilexervhdl_timerevent_isbase = value; }
    void setQsciLexerVHDL_ChildEvent_IsBase(bool value) const { qscilexervhdl_childevent_isbase = value; }
    void setQsciLexerVHDL_CustomEvent_IsBase(bool value) const { qscilexervhdl_customevent_isbase = value; }
    void setQsciLexerVHDL_ConnectNotify_IsBase(bool value) const { qscilexervhdl_connectnotify_isbase = value; }
    void setQsciLexerVHDL_DisconnectNotify_IsBase(bool value) const { qscilexervhdl_disconnectnotify_isbase = value; }
    void setQsciLexerVHDL_Sender_IsBase(bool value) const { qscilexervhdl_sender_isbase = value; }
    void setQsciLexerVHDL_SenderSignalIndex_IsBase(bool value) const { qscilexervhdl_sendersignalindex_isbase = value; }
    void setQsciLexerVHDL_Receivers_IsBase(bool value) const { qscilexervhdl_receivers_isbase = value; }
    void setQsciLexerVHDL_IsSignalConnected_IsBase(bool value) const { qscilexervhdl_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexervhdl_metacall_isbase) {
            qscilexervhdl_metacall_isbase = false;
            return QsciLexerVHDL::qt_metacall(param1, param2, param3);
        } else if (qscilexervhdl_metacall_callback != nullptr) {
            return qscilexervhdl_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerVHDL::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexervhdl_setfoldcomments_isbase) {
            qscilexervhdl_setfoldcomments_isbase = false;
            QsciLexerVHDL::setFoldComments(fold);
        } else if (qscilexervhdl_setfoldcomments_callback != nullptr) {
            qscilexervhdl_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerVHDL::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexervhdl_setfoldcompact_isbase) {
            qscilexervhdl_setfoldcompact_isbase = false;
            QsciLexerVHDL::setFoldCompact(fold);
        } else if (qscilexervhdl_setfoldcompact_callback != nullptr) {
            qscilexervhdl_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerVHDL::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexervhdl_setfoldatelse_isbase) {
            qscilexervhdl_setfoldatelse_isbase = false;
            QsciLexerVHDL::setFoldAtElse(fold);
        } else if (qscilexervhdl_setfoldatelse_callback != nullptr) {
            qscilexervhdl_setfoldatelse_callback(this, fold);
        } else {
            QsciLexerVHDL::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtBegin(bool fold) override {
        if (qscilexervhdl_setfoldatbegin_isbase) {
            qscilexervhdl_setfoldatbegin_isbase = false;
            QsciLexerVHDL::setFoldAtBegin(fold);
        } else if (qscilexervhdl_setfoldatbegin_callback != nullptr) {
            qscilexervhdl_setfoldatbegin_callback(this, fold);
        } else {
            QsciLexerVHDL::setFoldAtBegin(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtParenthesis(bool fold) override {
        if (qscilexervhdl_setfoldatparenthesis_isbase) {
            qscilexervhdl_setfoldatparenthesis_isbase = false;
            QsciLexerVHDL::setFoldAtParenthesis(fold);
        } else if (qscilexervhdl_setfoldatparenthesis_callback != nullptr) {
            qscilexervhdl_setfoldatparenthesis_callback(this, fold);
        } else {
            QsciLexerVHDL::setFoldAtParenthesis(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexervhdl_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexervhdl_lexer_isbase) {
            qscilexervhdl_lexer_isbase = false;
            return QsciLexerVHDL::lexer();
        } else if (qscilexervhdl_lexer_callback != nullptr) {
            return qscilexervhdl_lexer_callback();
        } else {
            return QsciLexerVHDL::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexervhdl_lexerid_isbase) {
            qscilexervhdl_lexerid_isbase = false;
            return QsciLexerVHDL::lexerId();
        } else if (qscilexervhdl_lexerid_callback != nullptr) {
            return qscilexervhdl_lexerid_callback();
        } else {
            return QsciLexerVHDL::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexervhdl_autocompletionfillups_isbase) {
            qscilexervhdl_autocompletionfillups_isbase = false;
            return QsciLexerVHDL::autoCompletionFillups();
        } else if (qscilexervhdl_autocompletionfillups_callback != nullptr) {
            return qscilexervhdl_autocompletionfillups_callback();
        } else {
            return QsciLexerVHDL::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexervhdl_autocompletionwordseparators_isbase) {
            qscilexervhdl_autocompletionwordseparators_isbase = false;
            return QsciLexerVHDL::autoCompletionWordSeparators();
        } else if (qscilexervhdl_autocompletionwordseparators_callback != nullptr) {
            return qscilexervhdl_autocompletionwordseparators_callback();
        } else {
            return QsciLexerVHDL::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexervhdl_blockend_isbase) {
            qscilexervhdl_blockend_isbase = false;
            return QsciLexerVHDL::blockEnd(style);
        } else if (qscilexervhdl_blockend_callback != nullptr) {
            return qscilexervhdl_blockend_callback(this, style);
        } else {
            return QsciLexerVHDL::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexervhdl_blocklookback_isbase) {
            qscilexervhdl_blocklookback_isbase = false;
            return QsciLexerVHDL::blockLookback();
        } else if (qscilexervhdl_blocklookback_callback != nullptr) {
            return qscilexervhdl_blocklookback_callback();
        } else {
            return QsciLexerVHDL::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexervhdl_blockstart_isbase) {
            qscilexervhdl_blockstart_isbase = false;
            return QsciLexerVHDL::blockStart(style);
        } else if (qscilexervhdl_blockstart_callback != nullptr) {
            return qscilexervhdl_blockstart_callback(this, style);
        } else {
            return QsciLexerVHDL::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexervhdl_blockstartkeyword_isbase) {
            qscilexervhdl_blockstartkeyword_isbase = false;
            return QsciLexerVHDL::blockStartKeyword(style);
        } else if (qscilexervhdl_blockstartkeyword_callback != nullptr) {
            return qscilexervhdl_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerVHDL::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexervhdl_bracestyle_isbase) {
            qscilexervhdl_bracestyle_isbase = false;
            return QsciLexerVHDL::braceStyle();
        } else if (qscilexervhdl_bracestyle_callback != nullptr) {
            return qscilexervhdl_bracestyle_callback();
        } else {
            return QsciLexerVHDL::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexervhdl_casesensitive_isbase) {
            qscilexervhdl_casesensitive_isbase = false;
            return QsciLexerVHDL::caseSensitive();
        } else if (qscilexervhdl_casesensitive_callback != nullptr) {
            return qscilexervhdl_casesensitive_callback();
        } else {
            return QsciLexerVHDL::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexervhdl_color_isbase) {
            qscilexervhdl_color_isbase = false;
            return QsciLexerVHDL::color(style);
        } else if (qscilexervhdl_color_callback != nullptr) {
            return qscilexervhdl_color_callback(this, style);
        } else {
            return QsciLexerVHDL::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexervhdl_eolfill_isbase) {
            qscilexervhdl_eolfill_isbase = false;
            return QsciLexerVHDL::eolFill(style);
        } else if (qscilexervhdl_eolfill_callback != nullptr) {
            return qscilexervhdl_eolfill_callback(this, style);
        } else {
            return QsciLexerVHDL::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexervhdl_font_isbase) {
            qscilexervhdl_font_isbase = false;
            return QsciLexerVHDL::font(style);
        } else if (qscilexervhdl_font_callback != nullptr) {
            return qscilexervhdl_font_callback(this, style);
        } else {
            return QsciLexerVHDL::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexervhdl_indentationguideview_isbase) {
            qscilexervhdl_indentationguideview_isbase = false;
            return QsciLexerVHDL::indentationGuideView();
        } else if (qscilexervhdl_indentationguideview_callback != nullptr) {
            return qscilexervhdl_indentationguideview_callback();
        } else {
            return QsciLexerVHDL::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexervhdl_keywords_isbase) {
            qscilexervhdl_keywords_isbase = false;
            return QsciLexerVHDL::keywords(set);
        } else if (qscilexervhdl_keywords_callback != nullptr) {
            return qscilexervhdl_keywords_callback(this, set);
        } else {
            return QsciLexerVHDL::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexervhdl_defaultstyle_isbase) {
            qscilexervhdl_defaultstyle_isbase = false;
            return QsciLexerVHDL::defaultStyle();
        } else if (qscilexervhdl_defaultstyle_callback != nullptr) {
            return qscilexervhdl_defaultstyle_callback();
        } else {
            return QsciLexerVHDL::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexervhdl_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexervhdl_paper_isbase) {
            qscilexervhdl_paper_isbase = false;
            return QsciLexerVHDL::paper(style);
        } else if (qscilexervhdl_paper_callback != nullptr) {
            return qscilexervhdl_paper_callback(this, style);
        } else {
            return QsciLexerVHDL::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexervhdl_defaultcolorwithstyle_isbase) {
            qscilexervhdl_defaultcolorwithstyle_isbase = false;
            return QsciLexerVHDL::defaultColor(style);
        } else if (qscilexervhdl_defaultcolorwithstyle_callback != nullptr) {
            return qscilexervhdl_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerVHDL::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexervhdl_defaulteolfill_isbase) {
            qscilexervhdl_defaulteolfill_isbase = false;
            return QsciLexerVHDL::defaultEolFill(style);
        } else if (qscilexervhdl_defaulteolfill_callback != nullptr) {
            return qscilexervhdl_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerVHDL::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexervhdl_defaultfontwithstyle_isbase) {
            qscilexervhdl_defaultfontwithstyle_isbase = false;
            return QsciLexerVHDL::defaultFont(style);
        } else if (qscilexervhdl_defaultfontwithstyle_callback != nullptr) {
            return qscilexervhdl_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerVHDL::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexervhdl_defaultpaperwithstyle_isbase) {
            qscilexervhdl_defaultpaperwithstyle_isbase = false;
            return QsciLexerVHDL::defaultPaper(style);
        } else if (qscilexervhdl_defaultpaperwithstyle_callback != nullptr) {
            return qscilexervhdl_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerVHDL::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexervhdl_seteditor_isbase) {
            qscilexervhdl_seteditor_isbase = false;
            QsciLexerVHDL::setEditor(editor);
        } else if (qscilexervhdl_seteditor_callback != nullptr) {
            qscilexervhdl_seteditor_callback(this, editor);
        } else {
            QsciLexerVHDL::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexervhdl_refreshproperties_isbase) {
            qscilexervhdl_refreshproperties_isbase = false;
            QsciLexerVHDL::refreshProperties();
        } else if (qscilexervhdl_refreshproperties_callback != nullptr) {
            qscilexervhdl_refreshproperties_callback();
        } else {
            QsciLexerVHDL::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexervhdl_stylebitsneeded_isbase) {
            qscilexervhdl_stylebitsneeded_isbase = false;
            return QsciLexerVHDL::styleBitsNeeded();
        } else if (qscilexervhdl_stylebitsneeded_callback != nullptr) {
            return qscilexervhdl_stylebitsneeded_callback();
        } else {
            return QsciLexerVHDL::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexervhdl_wordcharacters_isbase) {
            qscilexervhdl_wordcharacters_isbase = false;
            return QsciLexerVHDL::wordCharacters();
        } else if (qscilexervhdl_wordcharacters_callback != nullptr) {
            return qscilexervhdl_wordcharacters_callback();
        } else {
            return QsciLexerVHDL::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexervhdl_setautoindentstyle_isbase) {
            qscilexervhdl_setautoindentstyle_isbase = false;
            QsciLexerVHDL::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexervhdl_setautoindentstyle_callback != nullptr) {
            qscilexervhdl_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerVHDL::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexervhdl_setcolor_isbase) {
            qscilexervhdl_setcolor_isbase = false;
            QsciLexerVHDL::setColor(c, style);
        } else if (qscilexervhdl_setcolor_callback != nullptr) {
            qscilexervhdl_setcolor_callback(this, c, style);
        } else {
            QsciLexerVHDL::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexervhdl_seteolfill_isbase) {
            qscilexervhdl_seteolfill_isbase = false;
            QsciLexerVHDL::setEolFill(eoffill, style);
        } else if (qscilexervhdl_seteolfill_callback != nullptr) {
            qscilexervhdl_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerVHDL::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexervhdl_setfont_isbase) {
            qscilexervhdl_setfont_isbase = false;
            QsciLexerVHDL::setFont(f, style);
        } else if (qscilexervhdl_setfont_callback != nullptr) {
            qscilexervhdl_setfont_callback(this, f, style);
        } else {
            QsciLexerVHDL::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexervhdl_setpaper_isbase) {
            qscilexervhdl_setpaper_isbase = false;
            QsciLexerVHDL::setPaper(c, style);
        } else if (qscilexervhdl_setpaper_callback != nullptr) {
            qscilexervhdl_setpaper_callback(this, c, style);
        } else {
            QsciLexerVHDL::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexervhdl_readproperties_isbase) {
            qscilexervhdl_readproperties_isbase = false;
            return QsciLexerVHDL::readProperties(qs, prefix);
        } else if (qscilexervhdl_readproperties_callback != nullptr) {
            return qscilexervhdl_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerVHDL::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexervhdl_writeproperties_isbase) {
            qscilexervhdl_writeproperties_isbase = false;
            return QsciLexerVHDL::writeProperties(qs, prefix);
        } else if (qscilexervhdl_writeproperties_callback != nullptr) {
            return qscilexervhdl_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerVHDL::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexervhdl_event_isbase) {
            qscilexervhdl_event_isbase = false;
            return QsciLexerVHDL::event(event);
        } else if (qscilexervhdl_event_callback != nullptr) {
            return qscilexervhdl_event_callback(this, event);
        } else {
            return QsciLexerVHDL::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexervhdl_eventfilter_isbase) {
            qscilexervhdl_eventfilter_isbase = false;
            return QsciLexerVHDL::eventFilter(watched, event);
        } else if (qscilexervhdl_eventfilter_callback != nullptr) {
            return qscilexervhdl_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerVHDL::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexervhdl_timerevent_isbase) {
            qscilexervhdl_timerevent_isbase = false;
            QsciLexerVHDL::timerEvent(event);
        } else if (qscilexervhdl_timerevent_callback != nullptr) {
            qscilexervhdl_timerevent_callback(this, event);
        } else {
            QsciLexerVHDL::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexervhdl_childevent_isbase) {
            qscilexervhdl_childevent_isbase = false;
            QsciLexerVHDL::childEvent(event);
        } else if (qscilexervhdl_childevent_callback != nullptr) {
            qscilexervhdl_childevent_callback(this, event);
        } else {
            QsciLexerVHDL::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexervhdl_customevent_isbase) {
            qscilexervhdl_customevent_isbase = false;
            QsciLexerVHDL::customEvent(event);
        } else if (qscilexervhdl_customevent_callback != nullptr) {
            qscilexervhdl_customevent_callback(this, event);
        } else {
            QsciLexerVHDL::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexervhdl_connectnotify_isbase) {
            qscilexervhdl_connectnotify_isbase = false;
            QsciLexerVHDL::connectNotify(signal);
        } else if (qscilexervhdl_connectnotify_callback != nullptr) {
            qscilexervhdl_connectnotify_callback(this, signal);
        } else {
            QsciLexerVHDL::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexervhdl_disconnectnotify_isbase) {
            qscilexervhdl_disconnectnotify_isbase = false;
            QsciLexerVHDL::disconnectNotify(signal);
        } else if (qscilexervhdl_disconnectnotify_callback != nullptr) {
            qscilexervhdl_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerVHDL::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexervhdl_sender_isbase) {
            qscilexervhdl_sender_isbase = false;
            return QsciLexerVHDL::sender();
        } else if (qscilexervhdl_sender_callback != nullptr) {
            return qscilexervhdl_sender_callback();
        } else {
            return QsciLexerVHDL::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexervhdl_sendersignalindex_isbase) {
            qscilexervhdl_sendersignalindex_isbase = false;
            return QsciLexerVHDL::senderSignalIndex();
        } else if (qscilexervhdl_sendersignalindex_callback != nullptr) {
            return qscilexervhdl_sendersignalindex_callback();
        } else {
            return QsciLexerVHDL::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexervhdl_receivers_isbase) {
            qscilexervhdl_receivers_isbase = false;
            return QsciLexerVHDL::receivers(signal);
        } else if (qscilexervhdl_receivers_callback != nullptr) {
            return qscilexervhdl_receivers_callback(this, signal);
        } else {
            return QsciLexerVHDL::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexervhdl_issignalconnected_isbase) {
            qscilexervhdl_issignalconnected_isbase = false;
            return QsciLexerVHDL::isSignalConnected(signal);
        } else if (qscilexervhdl_issignalconnected_callback != nullptr) {
            return qscilexervhdl_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerVHDL::isSignalConnected(signal);
        }
    }
};

#endif
