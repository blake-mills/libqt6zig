#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCPP_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAC_LIBVIRTUALQSCILEXERCPP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QsciLexerCPP so that we can call protected methods
class VirtualQsciLexerCPP : public QsciLexerCPP {

  public:
    // Virtual class public types (including callbacks)
    using QsciLexerCPP_Metacall_Callback = int (*)(QsciLexerCPP*, QMetaObject::Call, int, void**);
    using QsciLexerCPP_SetFoldAtElse_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldComments_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldCompact_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetFoldPreprocessor_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_SetStylePreprocessor_Callback = void (*)(QsciLexerCPP*, bool);
    using QsciLexerCPP_Language_Callback = const char* (*)();
    using QsciLexerCPP_Lexer_Callback = const char* (*)();
    using QsciLexerCPP_LexerId_Callback = int (*)();
    using QsciLexerCPP_AutoCompletionFillups_Callback = const char* (*)();
    using QsciLexerCPP_AutoCompletionWordSeparators_Callback = QStringList (*)();
    using QsciLexerCPP_BlockEnd_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BlockLookback_Callback = int (*)();
    using QsciLexerCPP_BlockStart_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BlockStartKeyword_Callback = const char* (*)(const QsciLexerCPP*, int*);
    using QsciLexerCPP_BraceStyle_Callback = int (*)();
    using QsciLexerCPP_CaseSensitive_Callback = bool (*)();
    using QsciLexerCPP_Color_Callback = QColor (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_EolFill_Callback = bool (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_Font_Callback = QFont (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_IndentationGuideView_Callback = int (*)();
    using QsciLexerCPP_Keywords_Callback = const char* (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultStyle_Callback = int (*)();
    using QsciLexerCPP_Description_Callback = QString (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_Paper_Callback = QColor (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultColorWithStyle_Callback = QColor (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultEolFill_Callback = bool (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultFontWithStyle_Callback = QFont (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_DefaultPaperWithStyle_Callback = QColor (*)(const QsciLexerCPP*, int);
    using QsciLexerCPP_SetEditor_Callback = void (*)(QsciLexerCPP*, QsciScintilla*);
    using QsciLexerCPP_RefreshProperties_Callback = void (*)();
    using QsciLexerCPP_StyleBitsNeeded_Callback = int (*)();
    using QsciLexerCPP_WordCharacters_Callback = const char* (*)();
    using QsciLexerCPP_SetAutoIndentStyle_Callback = void (*)(QsciLexerCPP*, int);
    using QsciLexerCPP_SetColor_Callback = void (*)(QsciLexerCPP*, const QColor&, int);
    using QsciLexerCPP_SetEolFill_Callback = void (*)(QsciLexerCPP*, bool, int);
    using QsciLexerCPP_SetFont_Callback = void (*)(QsciLexerCPP*, const QFont&, int);
    using QsciLexerCPP_SetPaper_Callback = void (*)(QsciLexerCPP*, const QColor&, int);
    using QsciLexerCPP_ReadProperties_Callback = bool (*)(QsciLexerCPP*, QSettings&, const QString&);
    using QsciLexerCPP_WriteProperties_Callback = bool (*)(const QsciLexerCPP*, QSettings&, const QString&);
    using QsciLexerCPP_Event_Callback = bool (*)(QsciLexerCPP*, QEvent*);
    using QsciLexerCPP_EventFilter_Callback = bool (*)(QsciLexerCPP*, QObject*, QEvent*);
    using QsciLexerCPP_TimerEvent_Callback = void (*)(QsciLexerCPP*, QTimerEvent*);
    using QsciLexerCPP_ChildEvent_Callback = void (*)(QsciLexerCPP*, QChildEvent*);
    using QsciLexerCPP_CustomEvent_Callback = void (*)(QsciLexerCPP*, QEvent*);
    using QsciLexerCPP_ConnectNotify_Callback = void (*)(QsciLexerCPP*, const QMetaMethod&);
    using QsciLexerCPP_DisconnectNotify_Callback = void (*)(QsciLexerCPP*, const QMetaMethod&);
    using QsciLexerCPP_Sender_Callback = QObject* (*)();
    using QsciLexerCPP_SenderSignalIndex_Callback = int (*)();
    using QsciLexerCPP_Receivers_Callback = int (*)(const QsciLexerCPP*, const char*);
    using QsciLexerCPP_IsSignalConnected_Callback = bool (*)(const QsciLexerCPP*, const QMetaMethod&);

  protected:
    // Instance callback storage
    QsciLexerCPP_Metacall_Callback qscilexercpp_metacall_callback = nullptr;
    QsciLexerCPP_SetFoldAtElse_Callback qscilexercpp_setfoldatelse_callback = nullptr;
    QsciLexerCPP_SetFoldComments_Callback qscilexercpp_setfoldcomments_callback = nullptr;
    QsciLexerCPP_SetFoldCompact_Callback qscilexercpp_setfoldcompact_callback = nullptr;
    QsciLexerCPP_SetFoldPreprocessor_Callback qscilexercpp_setfoldpreprocessor_callback = nullptr;
    QsciLexerCPP_SetStylePreprocessor_Callback qscilexercpp_setstylepreprocessor_callback = nullptr;
    QsciLexerCPP_Language_Callback qscilexercpp_language_callback = nullptr;
    QsciLexerCPP_Lexer_Callback qscilexercpp_lexer_callback = nullptr;
    QsciLexerCPP_LexerId_Callback qscilexercpp_lexerid_callback = nullptr;
    QsciLexerCPP_AutoCompletionFillups_Callback qscilexercpp_autocompletionfillups_callback = nullptr;
    QsciLexerCPP_AutoCompletionWordSeparators_Callback qscilexercpp_autocompletionwordseparators_callback = nullptr;
    QsciLexerCPP_BlockEnd_Callback qscilexercpp_blockend_callback = nullptr;
    QsciLexerCPP_BlockLookback_Callback qscilexercpp_blocklookback_callback = nullptr;
    QsciLexerCPP_BlockStart_Callback qscilexercpp_blockstart_callback = nullptr;
    QsciLexerCPP_BlockStartKeyword_Callback qscilexercpp_blockstartkeyword_callback = nullptr;
    QsciLexerCPP_BraceStyle_Callback qscilexercpp_bracestyle_callback = nullptr;
    QsciLexerCPP_CaseSensitive_Callback qscilexercpp_casesensitive_callback = nullptr;
    QsciLexerCPP_Color_Callback qscilexercpp_color_callback = nullptr;
    QsciLexerCPP_EolFill_Callback qscilexercpp_eolfill_callback = nullptr;
    QsciLexerCPP_Font_Callback qscilexercpp_font_callback = nullptr;
    QsciLexerCPP_IndentationGuideView_Callback qscilexercpp_indentationguideview_callback = nullptr;
    QsciLexerCPP_Keywords_Callback qscilexercpp_keywords_callback = nullptr;
    QsciLexerCPP_DefaultStyle_Callback qscilexercpp_defaultstyle_callback = nullptr;
    QsciLexerCPP_Description_Callback qscilexercpp_description_callback = nullptr;
    QsciLexerCPP_Paper_Callback qscilexercpp_paper_callback = nullptr;
    QsciLexerCPP_DefaultColorWithStyle_Callback qscilexercpp_defaultcolorwithstyle_callback = nullptr;
    QsciLexerCPP_DefaultEolFill_Callback qscilexercpp_defaulteolfill_callback = nullptr;
    QsciLexerCPP_DefaultFontWithStyle_Callback qscilexercpp_defaultfontwithstyle_callback = nullptr;
    QsciLexerCPP_DefaultPaperWithStyle_Callback qscilexercpp_defaultpaperwithstyle_callback = nullptr;
    QsciLexerCPP_SetEditor_Callback qscilexercpp_seteditor_callback = nullptr;
    QsciLexerCPP_RefreshProperties_Callback qscilexercpp_refreshproperties_callback = nullptr;
    QsciLexerCPP_StyleBitsNeeded_Callback qscilexercpp_stylebitsneeded_callback = nullptr;
    QsciLexerCPP_WordCharacters_Callback qscilexercpp_wordcharacters_callback = nullptr;
    QsciLexerCPP_SetAutoIndentStyle_Callback qscilexercpp_setautoindentstyle_callback = nullptr;
    QsciLexerCPP_SetColor_Callback qscilexercpp_setcolor_callback = nullptr;
    QsciLexerCPP_SetEolFill_Callback qscilexercpp_seteolfill_callback = nullptr;
    QsciLexerCPP_SetFont_Callback qscilexercpp_setfont_callback = nullptr;
    QsciLexerCPP_SetPaper_Callback qscilexercpp_setpaper_callback = nullptr;
    QsciLexerCPP_ReadProperties_Callback qscilexercpp_readproperties_callback = nullptr;
    QsciLexerCPP_WriteProperties_Callback qscilexercpp_writeproperties_callback = nullptr;
    QsciLexerCPP_Event_Callback qscilexercpp_event_callback = nullptr;
    QsciLexerCPP_EventFilter_Callback qscilexercpp_eventfilter_callback = nullptr;
    QsciLexerCPP_TimerEvent_Callback qscilexercpp_timerevent_callback = nullptr;
    QsciLexerCPP_ChildEvent_Callback qscilexercpp_childevent_callback = nullptr;
    QsciLexerCPP_CustomEvent_Callback qscilexercpp_customevent_callback = nullptr;
    QsciLexerCPP_ConnectNotify_Callback qscilexercpp_connectnotify_callback = nullptr;
    QsciLexerCPP_DisconnectNotify_Callback qscilexercpp_disconnectnotify_callback = nullptr;
    QsciLexerCPP_Sender_Callback qscilexercpp_sender_callback = nullptr;
    QsciLexerCPP_SenderSignalIndex_Callback qscilexercpp_sendersignalindex_callback = nullptr;
    QsciLexerCPP_Receivers_Callback qscilexercpp_receivers_callback = nullptr;
    QsciLexerCPP_IsSignalConnected_Callback qscilexercpp_issignalconnected_callback = nullptr;

    // Instance base flags
    mutable bool qscilexercpp_metacall_isbase = false;
    mutable bool qscilexercpp_setfoldatelse_isbase = false;
    mutable bool qscilexercpp_setfoldcomments_isbase = false;
    mutable bool qscilexercpp_setfoldcompact_isbase = false;
    mutable bool qscilexercpp_setfoldpreprocessor_isbase = false;
    mutable bool qscilexercpp_setstylepreprocessor_isbase = false;
    mutable bool qscilexercpp_language_isbase = false;
    mutable bool qscilexercpp_lexer_isbase = false;
    mutable bool qscilexercpp_lexerid_isbase = false;
    mutable bool qscilexercpp_autocompletionfillups_isbase = false;
    mutable bool qscilexercpp_autocompletionwordseparators_isbase = false;
    mutable bool qscilexercpp_blockend_isbase = false;
    mutable bool qscilexercpp_blocklookback_isbase = false;
    mutable bool qscilexercpp_blockstart_isbase = false;
    mutable bool qscilexercpp_blockstartkeyword_isbase = false;
    mutable bool qscilexercpp_bracestyle_isbase = false;
    mutable bool qscilexercpp_casesensitive_isbase = false;
    mutable bool qscilexercpp_color_isbase = false;
    mutable bool qscilexercpp_eolfill_isbase = false;
    mutable bool qscilexercpp_font_isbase = false;
    mutable bool qscilexercpp_indentationguideview_isbase = false;
    mutable bool qscilexercpp_keywords_isbase = false;
    mutable bool qscilexercpp_defaultstyle_isbase = false;
    mutable bool qscilexercpp_description_isbase = false;
    mutable bool qscilexercpp_paper_isbase = false;
    mutable bool qscilexercpp_defaultcolorwithstyle_isbase = false;
    mutable bool qscilexercpp_defaulteolfill_isbase = false;
    mutable bool qscilexercpp_defaultfontwithstyle_isbase = false;
    mutable bool qscilexercpp_defaultpaperwithstyle_isbase = false;
    mutable bool qscilexercpp_seteditor_isbase = false;
    mutable bool qscilexercpp_refreshproperties_isbase = false;
    mutable bool qscilexercpp_stylebitsneeded_isbase = false;
    mutable bool qscilexercpp_wordcharacters_isbase = false;
    mutable bool qscilexercpp_setautoindentstyle_isbase = false;
    mutable bool qscilexercpp_setcolor_isbase = false;
    mutable bool qscilexercpp_seteolfill_isbase = false;
    mutable bool qscilexercpp_setfont_isbase = false;
    mutable bool qscilexercpp_setpaper_isbase = false;
    mutable bool qscilexercpp_readproperties_isbase = false;
    mutable bool qscilexercpp_writeproperties_isbase = false;
    mutable bool qscilexercpp_event_isbase = false;
    mutable bool qscilexercpp_eventfilter_isbase = false;
    mutable bool qscilexercpp_timerevent_isbase = false;
    mutable bool qscilexercpp_childevent_isbase = false;
    mutable bool qscilexercpp_customevent_isbase = false;
    mutable bool qscilexercpp_connectnotify_isbase = false;
    mutable bool qscilexercpp_disconnectnotify_isbase = false;
    mutable bool qscilexercpp_sender_isbase = false;
    mutable bool qscilexercpp_sendersignalindex_isbase = false;
    mutable bool qscilexercpp_receivers_isbase = false;
    mutable bool qscilexercpp_issignalconnected_isbase = false;

  public:
    VirtualQsciLexerCPP() : QsciLexerCPP(){};
    VirtualQsciLexerCPP(QObject* parent) : QsciLexerCPP(parent){};
    VirtualQsciLexerCPP(QObject* parent, bool caseInsensitiveKeywords) : QsciLexerCPP(parent, caseInsensitiveKeywords){};

    ~VirtualQsciLexerCPP() {
        qscilexercpp_metacall_callback = nullptr;
        qscilexercpp_setfoldatelse_callback = nullptr;
        qscilexercpp_setfoldcomments_callback = nullptr;
        qscilexercpp_setfoldcompact_callback = nullptr;
        qscilexercpp_setfoldpreprocessor_callback = nullptr;
        qscilexercpp_setstylepreprocessor_callback = nullptr;
        qscilexercpp_language_callback = nullptr;
        qscilexercpp_lexer_callback = nullptr;
        qscilexercpp_lexerid_callback = nullptr;
        qscilexercpp_autocompletionfillups_callback = nullptr;
        qscilexercpp_autocompletionwordseparators_callback = nullptr;
        qscilexercpp_blockend_callback = nullptr;
        qscilexercpp_blocklookback_callback = nullptr;
        qscilexercpp_blockstart_callback = nullptr;
        qscilexercpp_blockstartkeyword_callback = nullptr;
        qscilexercpp_bracestyle_callback = nullptr;
        qscilexercpp_casesensitive_callback = nullptr;
        qscilexercpp_color_callback = nullptr;
        qscilexercpp_eolfill_callback = nullptr;
        qscilexercpp_font_callback = nullptr;
        qscilexercpp_indentationguideview_callback = nullptr;
        qscilexercpp_keywords_callback = nullptr;
        qscilexercpp_defaultstyle_callback = nullptr;
        qscilexercpp_description_callback = nullptr;
        qscilexercpp_paper_callback = nullptr;
        qscilexercpp_defaultcolorwithstyle_callback = nullptr;
        qscilexercpp_defaulteolfill_callback = nullptr;
        qscilexercpp_defaultfontwithstyle_callback = nullptr;
        qscilexercpp_defaultpaperwithstyle_callback = nullptr;
        qscilexercpp_seteditor_callback = nullptr;
        qscilexercpp_refreshproperties_callback = nullptr;
        qscilexercpp_stylebitsneeded_callback = nullptr;
        qscilexercpp_wordcharacters_callback = nullptr;
        qscilexercpp_setautoindentstyle_callback = nullptr;
        qscilexercpp_setcolor_callback = nullptr;
        qscilexercpp_seteolfill_callback = nullptr;
        qscilexercpp_setfont_callback = nullptr;
        qscilexercpp_setpaper_callback = nullptr;
        qscilexercpp_readproperties_callback = nullptr;
        qscilexercpp_writeproperties_callback = nullptr;
        qscilexercpp_event_callback = nullptr;
        qscilexercpp_eventfilter_callback = nullptr;
        qscilexercpp_timerevent_callback = nullptr;
        qscilexercpp_childevent_callback = nullptr;
        qscilexercpp_customevent_callback = nullptr;
        qscilexercpp_connectnotify_callback = nullptr;
        qscilexercpp_disconnectnotify_callback = nullptr;
        qscilexercpp_sender_callback = nullptr;
        qscilexercpp_sendersignalindex_callback = nullptr;
        qscilexercpp_receivers_callback = nullptr;
        qscilexercpp_issignalconnected_callback = nullptr;
    }

    // Callback setters
    void setQsciLexerCPP_Metacall_Callback(QsciLexerCPP_Metacall_Callback cb) { qscilexercpp_metacall_callback = cb; }
    void setQsciLexerCPP_SetFoldAtElse_Callback(QsciLexerCPP_SetFoldAtElse_Callback cb) { qscilexercpp_setfoldatelse_callback = cb; }
    void setQsciLexerCPP_SetFoldComments_Callback(QsciLexerCPP_SetFoldComments_Callback cb) { qscilexercpp_setfoldcomments_callback = cb; }
    void setQsciLexerCPP_SetFoldCompact_Callback(QsciLexerCPP_SetFoldCompact_Callback cb) { qscilexercpp_setfoldcompact_callback = cb; }
    void setQsciLexerCPP_SetFoldPreprocessor_Callback(QsciLexerCPP_SetFoldPreprocessor_Callback cb) { qscilexercpp_setfoldpreprocessor_callback = cb; }
    void setQsciLexerCPP_SetStylePreprocessor_Callback(QsciLexerCPP_SetStylePreprocessor_Callback cb) { qscilexercpp_setstylepreprocessor_callback = cb; }
    void setQsciLexerCPP_Language_Callback(QsciLexerCPP_Language_Callback cb) { qscilexercpp_language_callback = cb; }
    void setQsciLexerCPP_Lexer_Callback(QsciLexerCPP_Lexer_Callback cb) { qscilexercpp_lexer_callback = cb; }
    void setQsciLexerCPP_LexerId_Callback(QsciLexerCPP_LexerId_Callback cb) { qscilexercpp_lexerid_callback = cb; }
    void setQsciLexerCPP_AutoCompletionFillups_Callback(QsciLexerCPP_AutoCompletionFillups_Callback cb) { qscilexercpp_autocompletionfillups_callback = cb; }
    void setQsciLexerCPP_AutoCompletionWordSeparators_Callback(QsciLexerCPP_AutoCompletionWordSeparators_Callback cb) { qscilexercpp_autocompletionwordseparators_callback = cb; }
    void setQsciLexerCPP_BlockEnd_Callback(QsciLexerCPP_BlockEnd_Callback cb) { qscilexercpp_blockend_callback = cb; }
    void setQsciLexerCPP_BlockLookback_Callback(QsciLexerCPP_BlockLookback_Callback cb) { qscilexercpp_blocklookback_callback = cb; }
    void setQsciLexerCPP_BlockStart_Callback(QsciLexerCPP_BlockStart_Callback cb) { qscilexercpp_blockstart_callback = cb; }
    void setQsciLexerCPP_BlockStartKeyword_Callback(QsciLexerCPP_BlockStartKeyword_Callback cb) { qscilexercpp_blockstartkeyword_callback = cb; }
    void setQsciLexerCPP_BraceStyle_Callback(QsciLexerCPP_BraceStyle_Callback cb) { qscilexercpp_bracestyle_callback = cb; }
    void setQsciLexerCPP_CaseSensitive_Callback(QsciLexerCPP_CaseSensitive_Callback cb) { qscilexercpp_casesensitive_callback = cb; }
    void setQsciLexerCPP_Color_Callback(QsciLexerCPP_Color_Callback cb) { qscilexercpp_color_callback = cb; }
    void setQsciLexerCPP_EolFill_Callback(QsciLexerCPP_EolFill_Callback cb) { qscilexercpp_eolfill_callback = cb; }
    void setQsciLexerCPP_Font_Callback(QsciLexerCPP_Font_Callback cb) { qscilexercpp_font_callback = cb; }
    void setQsciLexerCPP_IndentationGuideView_Callback(QsciLexerCPP_IndentationGuideView_Callback cb) { qscilexercpp_indentationguideview_callback = cb; }
    void setQsciLexerCPP_Keywords_Callback(QsciLexerCPP_Keywords_Callback cb) { qscilexercpp_keywords_callback = cb; }
    void setQsciLexerCPP_DefaultStyle_Callback(QsciLexerCPP_DefaultStyle_Callback cb) { qscilexercpp_defaultstyle_callback = cb; }
    void setQsciLexerCPP_Description_Callback(QsciLexerCPP_Description_Callback cb) { qscilexercpp_description_callback = cb; }
    void setQsciLexerCPP_Paper_Callback(QsciLexerCPP_Paper_Callback cb) { qscilexercpp_paper_callback = cb; }
    void setQsciLexerCPP_DefaultColorWithStyle_Callback(QsciLexerCPP_DefaultColorWithStyle_Callback cb) { qscilexercpp_defaultcolorwithstyle_callback = cb; }
    void setQsciLexerCPP_DefaultEolFill_Callback(QsciLexerCPP_DefaultEolFill_Callback cb) { qscilexercpp_defaulteolfill_callback = cb; }
    void setQsciLexerCPP_DefaultFontWithStyle_Callback(QsciLexerCPP_DefaultFontWithStyle_Callback cb) { qscilexercpp_defaultfontwithstyle_callback = cb; }
    void setQsciLexerCPP_DefaultPaperWithStyle_Callback(QsciLexerCPP_DefaultPaperWithStyle_Callback cb) { qscilexercpp_defaultpaperwithstyle_callback = cb; }
    void setQsciLexerCPP_SetEditor_Callback(QsciLexerCPP_SetEditor_Callback cb) { qscilexercpp_seteditor_callback = cb; }
    void setQsciLexerCPP_RefreshProperties_Callback(QsciLexerCPP_RefreshProperties_Callback cb) { qscilexercpp_refreshproperties_callback = cb; }
    void setQsciLexerCPP_StyleBitsNeeded_Callback(QsciLexerCPP_StyleBitsNeeded_Callback cb) { qscilexercpp_stylebitsneeded_callback = cb; }
    void setQsciLexerCPP_WordCharacters_Callback(QsciLexerCPP_WordCharacters_Callback cb) { qscilexercpp_wordcharacters_callback = cb; }
    void setQsciLexerCPP_SetAutoIndentStyle_Callback(QsciLexerCPP_SetAutoIndentStyle_Callback cb) { qscilexercpp_setautoindentstyle_callback = cb; }
    void setQsciLexerCPP_SetColor_Callback(QsciLexerCPP_SetColor_Callback cb) { qscilexercpp_setcolor_callback = cb; }
    void setQsciLexerCPP_SetEolFill_Callback(QsciLexerCPP_SetEolFill_Callback cb) { qscilexercpp_seteolfill_callback = cb; }
    void setQsciLexerCPP_SetFont_Callback(QsciLexerCPP_SetFont_Callback cb) { qscilexercpp_setfont_callback = cb; }
    void setQsciLexerCPP_SetPaper_Callback(QsciLexerCPP_SetPaper_Callback cb) { qscilexercpp_setpaper_callback = cb; }
    void setQsciLexerCPP_ReadProperties_Callback(QsciLexerCPP_ReadProperties_Callback cb) { qscilexercpp_readproperties_callback = cb; }
    void setQsciLexerCPP_WriteProperties_Callback(QsciLexerCPP_WriteProperties_Callback cb) { qscilexercpp_writeproperties_callback = cb; }
    void setQsciLexerCPP_Event_Callback(QsciLexerCPP_Event_Callback cb) { qscilexercpp_event_callback = cb; }
    void setQsciLexerCPP_EventFilter_Callback(QsciLexerCPP_EventFilter_Callback cb) { qscilexercpp_eventfilter_callback = cb; }
    void setQsciLexerCPP_TimerEvent_Callback(QsciLexerCPP_TimerEvent_Callback cb) { qscilexercpp_timerevent_callback = cb; }
    void setQsciLexerCPP_ChildEvent_Callback(QsciLexerCPP_ChildEvent_Callback cb) { qscilexercpp_childevent_callback = cb; }
    void setQsciLexerCPP_CustomEvent_Callback(QsciLexerCPP_CustomEvent_Callback cb) { qscilexercpp_customevent_callback = cb; }
    void setQsciLexerCPP_ConnectNotify_Callback(QsciLexerCPP_ConnectNotify_Callback cb) { qscilexercpp_connectnotify_callback = cb; }
    void setQsciLexerCPP_DisconnectNotify_Callback(QsciLexerCPP_DisconnectNotify_Callback cb) { qscilexercpp_disconnectnotify_callback = cb; }
    void setQsciLexerCPP_Sender_Callback(QsciLexerCPP_Sender_Callback cb) { qscilexercpp_sender_callback = cb; }
    void setQsciLexerCPP_SenderSignalIndex_Callback(QsciLexerCPP_SenderSignalIndex_Callback cb) { qscilexercpp_sendersignalindex_callback = cb; }
    void setQsciLexerCPP_Receivers_Callback(QsciLexerCPP_Receivers_Callback cb) { qscilexercpp_receivers_callback = cb; }
    void setQsciLexerCPP_IsSignalConnected_Callback(QsciLexerCPP_IsSignalConnected_Callback cb) { qscilexercpp_issignalconnected_callback = cb; }

    // Base flag setters
    void setQsciLexerCPP_Metacall_IsBase(bool value) const { qscilexercpp_metacall_isbase = value; }
    void setQsciLexerCPP_SetFoldAtElse_IsBase(bool value) const { qscilexercpp_setfoldatelse_isbase = value; }
    void setQsciLexerCPP_SetFoldComments_IsBase(bool value) const { qscilexercpp_setfoldcomments_isbase = value; }
    void setQsciLexerCPP_SetFoldCompact_IsBase(bool value) const { qscilexercpp_setfoldcompact_isbase = value; }
    void setQsciLexerCPP_SetFoldPreprocessor_IsBase(bool value) const { qscilexercpp_setfoldpreprocessor_isbase = value; }
    void setQsciLexerCPP_SetStylePreprocessor_IsBase(bool value) const { qscilexercpp_setstylepreprocessor_isbase = value; }
    void setQsciLexerCPP_Language_IsBase(bool value) const { qscilexercpp_language_isbase = value; }
    void setQsciLexerCPP_Lexer_IsBase(bool value) const { qscilexercpp_lexer_isbase = value; }
    void setQsciLexerCPP_LexerId_IsBase(bool value) const { qscilexercpp_lexerid_isbase = value; }
    void setQsciLexerCPP_AutoCompletionFillups_IsBase(bool value) const { qscilexercpp_autocompletionfillups_isbase = value; }
    void setQsciLexerCPP_AutoCompletionWordSeparators_IsBase(bool value) const { qscilexercpp_autocompletionwordseparators_isbase = value; }
    void setQsciLexerCPP_BlockEnd_IsBase(bool value) const { qscilexercpp_blockend_isbase = value; }
    void setQsciLexerCPP_BlockLookback_IsBase(bool value) const { qscilexercpp_blocklookback_isbase = value; }
    void setQsciLexerCPP_BlockStart_IsBase(bool value) const { qscilexercpp_blockstart_isbase = value; }
    void setQsciLexerCPP_BlockStartKeyword_IsBase(bool value) const { qscilexercpp_blockstartkeyword_isbase = value; }
    void setQsciLexerCPP_BraceStyle_IsBase(bool value) const { qscilexercpp_bracestyle_isbase = value; }
    void setQsciLexerCPP_CaseSensitive_IsBase(bool value) const { qscilexercpp_casesensitive_isbase = value; }
    void setQsciLexerCPP_Color_IsBase(bool value) const { qscilexercpp_color_isbase = value; }
    void setQsciLexerCPP_EolFill_IsBase(bool value) const { qscilexercpp_eolfill_isbase = value; }
    void setQsciLexerCPP_Font_IsBase(bool value) const { qscilexercpp_font_isbase = value; }
    void setQsciLexerCPP_IndentationGuideView_IsBase(bool value) const { qscilexercpp_indentationguideview_isbase = value; }
    void setQsciLexerCPP_Keywords_IsBase(bool value) const { qscilexercpp_keywords_isbase = value; }
    void setQsciLexerCPP_DefaultStyle_IsBase(bool value) const { qscilexercpp_defaultstyle_isbase = value; }
    void setQsciLexerCPP_Description_IsBase(bool value) const { qscilexercpp_description_isbase = value; }
    void setQsciLexerCPP_Paper_IsBase(bool value) const { qscilexercpp_paper_isbase = value; }
    void setQsciLexerCPP_DefaultColorWithStyle_IsBase(bool value) const { qscilexercpp_defaultcolorwithstyle_isbase = value; }
    void setQsciLexerCPP_DefaultEolFill_IsBase(bool value) const { qscilexercpp_defaulteolfill_isbase = value; }
    void setQsciLexerCPP_DefaultFontWithStyle_IsBase(bool value) const { qscilexercpp_defaultfontwithstyle_isbase = value; }
    void setQsciLexerCPP_DefaultPaperWithStyle_IsBase(bool value) const { qscilexercpp_defaultpaperwithstyle_isbase = value; }
    void setQsciLexerCPP_SetEditor_IsBase(bool value) const { qscilexercpp_seteditor_isbase = value; }
    void setQsciLexerCPP_RefreshProperties_IsBase(bool value) const { qscilexercpp_refreshproperties_isbase = value; }
    void setQsciLexerCPP_StyleBitsNeeded_IsBase(bool value) const { qscilexercpp_stylebitsneeded_isbase = value; }
    void setQsciLexerCPP_WordCharacters_IsBase(bool value) const { qscilexercpp_wordcharacters_isbase = value; }
    void setQsciLexerCPP_SetAutoIndentStyle_IsBase(bool value) const { qscilexercpp_setautoindentstyle_isbase = value; }
    void setQsciLexerCPP_SetColor_IsBase(bool value) const { qscilexercpp_setcolor_isbase = value; }
    void setQsciLexerCPP_SetEolFill_IsBase(bool value) const { qscilexercpp_seteolfill_isbase = value; }
    void setQsciLexerCPP_SetFont_IsBase(bool value) const { qscilexercpp_setfont_isbase = value; }
    void setQsciLexerCPP_SetPaper_IsBase(bool value) const { qscilexercpp_setpaper_isbase = value; }
    void setQsciLexerCPP_ReadProperties_IsBase(bool value) const { qscilexercpp_readproperties_isbase = value; }
    void setQsciLexerCPP_WriteProperties_IsBase(bool value) const { qscilexercpp_writeproperties_isbase = value; }
    void setQsciLexerCPP_Event_IsBase(bool value) const { qscilexercpp_event_isbase = value; }
    void setQsciLexerCPP_EventFilter_IsBase(bool value) const { qscilexercpp_eventfilter_isbase = value; }
    void setQsciLexerCPP_TimerEvent_IsBase(bool value) const { qscilexercpp_timerevent_isbase = value; }
    void setQsciLexerCPP_ChildEvent_IsBase(bool value) const { qscilexercpp_childevent_isbase = value; }
    void setQsciLexerCPP_CustomEvent_IsBase(bool value) const { qscilexercpp_customevent_isbase = value; }
    void setQsciLexerCPP_ConnectNotify_IsBase(bool value) const { qscilexercpp_connectnotify_isbase = value; }
    void setQsciLexerCPP_DisconnectNotify_IsBase(bool value) const { qscilexercpp_disconnectnotify_isbase = value; }
    void setQsciLexerCPP_Sender_IsBase(bool value) const { qscilexercpp_sender_isbase = value; }
    void setQsciLexerCPP_SenderSignalIndex_IsBase(bool value) const { qscilexercpp_sendersignalindex_isbase = value; }
    void setQsciLexerCPP_Receivers_IsBase(bool value) const { qscilexercpp_receivers_isbase = value; }
    void setQsciLexerCPP_IsSignalConnected_IsBase(bool value) const { qscilexercpp_issignalconnected_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qscilexercpp_metacall_isbase) {
            qscilexercpp_metacall_isbase = false;
            return QsciLexerCPP::qt_metacall(param1, param2, param3);
        } else if (qscilexercpp_metacall_callback != nullptr) {
            return qscilexercpp_metacall_callback(this, param1, param2, param3);
        } else {
            return QsciLexerCPP::qt_metacall(param1, param2, param3);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldAtElse(bool fold) override {
        if (qscilexercpp_setfoldatelse_isbase) {
            qscilexercpp_setfoldatelse_isbase = false;
            QsciLexerCPP::setFoldAtElse(fold);
        } else if (qscilexercpp_setfoldatelse_callback != nullptr) {
            qscilexercpp_setfoldatelse_callback(this, fold);
        } else {
            QsciLexerCPP::setFoldAtElse(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldComments(bool fold) override {
        if (qscilexercpp_setfoldcomments_isbase) {
            qscilexercpp_setfoldcomments_isbase = false;
            QsciLexerCPP::setFoldComments(fold);
        } else if (qscilexercpp_setfoldcomments_callback != nullptr) {
            qscilexercpp_setfoldcomments_callback(this, fold);
        } else {
            QsciLexerCPP::setFoldComments(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldCompact(bool fold) override {
        if (qscilexercpp_setfoldcompact_isbase) {
            qscilexercpp_setfoldcompact_isbase = false;
            QsciLexerCPP::setFoldCompact(fold);
        } else if (qscilexercpp_setfoldcompact_callback != nullptr) {
            qscilexercpp_setfoldcompact_callback(this, fold);
        } else {
            QsciLexerCPP::setFoldCompact(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFoldPreprocessor(bool fold) override {
        if (qscilexercpp_setfoldpreprocessor_isbase) {
            qscilexercpp_setfoldpreprocessor_isbase = false;
            QsciLexerCPP::setFoldPreprocessor(fold);
        } else if (qscilexercpp_setfoldpreprocessor_callback != nullptr) {
            qscilexercpp_setfoldpreprocessor_callback(this, fold);
        } else {
            QsciLexerCPP::setFoldPreprocessor(fold);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setStylePreprocessor(bool style) override {
        if (qscilexercpp_setstylepreprocessor_isbase) {
            qscilexercpp_setstylepreprocessor_isbase = false;
            QsciLexerCPP::setStylePreprocessor(style);
        } else if (qscilexercpp_setstylepreprocessor_callback != nullptr) {
            qscilexercpp_setstylepreprocessor_callback(this, style);
        } else {
            QsciLexerCPP::setStylePreprocessor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* language() const override {
        return qscilexercpp_language_callback();
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* lexer() const override {
        if (qscilexercpp_lexer_isbase) {
            qscilexercpp_lexer_isbase = false;
            return QsciLexerCPP::lexer();
        } else if (qscilexercpp_lexer_callback != nullptr) {
            return qscilexercpp_lexer_callback();
        } else {
            return QsciLexerCPP::lexer();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int lexerId() const override {
        if (qscilexercpp_lexerid_isbase) {
            qscilexercpp_lexerid_isbase = false;
            return QsciLexerCPP::lexerId();
        } else if (qscilexercpp_lexerid_callback != nullptr) {
            return qscilexercpp_lexerid_callback();
        } else {
            return QsciLexerCPP::lexerId();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* autoCompletionFillups() const override {
        if (qscilexercpp_autocompletionfillups_isbase) {
            qscilexercpp_autocompletionfillups_isbase = false;
            return QsciLexerCPP::autoCompletionFillups();
        } else if (qscilexercpp_autocompletionfillups_callback != nullptr) {
            return qscilexercpp_autocompletionfillups_callback();
        } else {
            return QsciLexerCPP::autoCompletionFillups();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QStringList autoCompletionWordSeparators() const override {
        if (qscilexercpp_autocompletionwordseparators_isbase) {
            qscilexercpp_autocompletionwordseparators_isbase = false;
            return QsciLexerCPP::autoCompletionWordSeparators();
        } else if (qscilexercpp_autocompletionwordseparators_callback != nullptr) {
            return qscilexercpp_autocompletionwordseparators_callback();
        } else {
            return QsciLexerCPP::autoCompletionWordSeparators();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockEnd(int* style) const override {
        if (qscilexercpp_blockend_isbase) {
            qscilexercpp_blockend_isbase = false;
            return QsciLexerCPP::blockEnd(style);
        } else if (qscilexercpp_blockend_callback != nullptr) {
            return qscilexercpp_blockend_callback(this, style);
        } else {
            return QsciLexerCPP::blockEnd(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int blockLookback() const override {
        if (qscilexercpp_blocklookback_isbase) {
            qscilexercpp_blocklookback_isbase = false;
            return QsciLexerCPP::blockLookback();
        } else if (qscilexercpp_blocklookback_callback != nullptr) {
            return qscilexercpp_blocklookback_callback();
        } else {
            return QsciLexerCPP::blockLookback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStart(int* style) const override {
        if (qscilexercpp_blockstart_isbase) {
            qscilexercpp_blockstart_isbase = false;
            return QsciLexerCPP::blockStart(style);
        } else if (qscilexercpp_blockstart_callback != nullptr) {
            return qscilexercpp_blockstart_callback(this, style);
        } else {
            return QsciLexerCPP::blockStart(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* blockStartKeyword(int* style) const override {
        if (qscilexercpp_blockstartkeyword_isbase) {
            qscilexercpp_blockstartkeyword_isbase = false;
            return QsciLexerCPP::blockStartKeyword(style);
        } else if (qscilexercpp_blockstartkeyword_callback != nullptr) {
            return qscilexercpp_blockstartkeyword_callback(this, style);
        } else {
            return QsciLexerCPP::blockStartKeyword(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int braceStyle() const override {
        if (qscilexercpp_bracestyle_isbase) {
            qscilexercpp_bracestyle_isbase = false;
            return QsciLexerCPP::braceStyle();
        } else if (qscilexercpp_bracestyle_callback != nullptr) {
            return qscilexercpp_bracestyle_callback();
        } else {
            return QsciLexerCPP::braceStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool caseSensitive() const override {
        if (qscilexercpp_casesensitive_isbase) {
            qscilexercpp_casesensitive_isbase = false;
            return QsciLexerCPP::caseSensitive();
        } else if (qscilexercpp_casesensitive_callback != nullptr) {
            return qscilexercpp_casesensitive_callback();
        } else {
            return QsciLexerCPP::caseSensitive();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor color(int style) const override {
        if (qscilexercpp_color_isbase) {
            qscilexercpp_color_isbase = false;
            return QsciLexerCPP::color(style);
        } else if (qscilexercpp_color_callback != nullptr) {
            return qscilexercpp_color_callback(this, style);
        } else {
            return QsciLexerCPP::color(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eolFill(int style) const override {
        if (qscilexercpp_eolfill_isbase) {
            qscilexercpp_eolfill_isbase = false;
            return QsciLexerCPP::eolFill(style);
        } else if (qscilexercpp_eolfill_callback != nullptr) {
            return qscilexercpp_eolfill_callback(this, style);
        } else {
            return QsciLexerCPP::eolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont font(int style) const override {
        if (qscilexercpp_font_isbase) {
            qscilexercpp_font_isbase = false;
            return QsciLexerCPP::font(style);
        } else if (qscilexercpp_font_callback != nullptr) {
            return qscilexercpp_font_callback(this, style);
        } else {
            return QsciLexerCPP::font(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int indentationGuideView() const override {
        if (qscilexercpp_indentationguideview_isbase) {
            qscilexercpp_indentationguideview_isbase = false;
            return QsciLexerCPP::indentationGuideView();
        } else if (qscilexercpp_indentationguideview_callback != nullptr) {
            return qscilexercpp_indentationguideview_callback();
        } else {
            return QsciLexerCPP::indentationGuideView();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* keywords(int set) const override {
        if (qscilexercpp_keywords_isbase) {
            qscilexercpp_keywords_isbase = false;
            return QsciLexerCPP::keywords(set);
        } else if (qscilexercpp_keywords_callback != nullptr) {
            return qscilexercpp_keywords_callback(this, set);
        } else {
            return QsciLexerCPP::keywords(set);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int defaultStyle() const override {
        if (qscilexercpp_defaultstyle_isbase) {
            qscilexercpp_defaultstyle_isbase = false;
            return QsciLexerCPP::defaultStyle();
        } else if (qscilexercpp_defaultstyle_callback != nullptr) {
            return qscilexercpp_defaultstyle_callback();
        } else {
            return QsciLexerCPP::defaultStyle();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QString description(int style) const override {
        return qscilexercpp_description_callback(this, style);
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor paper(int style) const override {
        if (qscilexercpp_paper_isbase) {
            qscilexercpp_paper_isbase = false;
            return QsciLexerCPP::paper(style);
        } else if (qscilexercpp_paper_callback != nullptr) {
            return qscilexercpp_paper_callback(this, style);
        } else {
            return QsciLexerCPP::paper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultColor(int style) const override {
        if (qscilexercpp_defaultcolorwithstyle_isbase) {
            qscilexercpp_defaultcolorwithstyle_isbase = false;
            return QsciLexerCPP::defaultColor(style);
        } else if (qscilexercpp_defaultcolorwithstyle_callback != nullptr) {
            return qscilexercpp_defaultcolorwithstyle_callback(this, style);
        } else {
            return QsciLexerCPP::defaultColor(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool defaultEolFill(int style) const override {
        if (qscilexercpp_defaulteolfill_isbase) {
            qscilexercpp_defaulteolfill_isbase = false;
            return QsciLexerCPP::defaultEolFill(style);
        } else if (qscilexercpp_defaulteolfill_callback != nullptr) {
            return qscilexercpp_defaulteolfill_callback(this, style);
        } else {
            return QsciLexerCPP::defaultEolFill(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QFont defaultFont(int style) const override {
        if (qscilexercpp_defaultfontwithstyle_isbase) {
            qscilexercpp_defaultfontwithstyle_isbase = false;
            return QsciLexerCPP::defaultFont(style);
        } else if (qscilexercpp_defaultfontwithstyle_callback != nullptr) {
            return qscilexercpp_defaultfontwithstyle_callback(this, style);
        } else {
            return QsciLexerCPP::defaultFont(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QColor defaultPaper(int style) const override {
        if (qscilexercpp_defaultpaperwithstyle_isbase) {
            qscilexercpp_defaultpaperwithstyle_isbase = false;
            return QsciLexerCPP::defaultPaper(style);
        } else if (qscilexercpp_defaultpaperwithstyle_callback != nullptr) {
            return qscilexercpp_defaultpaperwithstyle_callback(this, style);
        } else {
            return QsciLexerCPP::defaultPaper(style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEditor(QsciScintilla* editor) override {
        if (qscilexercpp_seteditor_isbase) {
            qscilexercpp_seteditor_isbase = false;
            QsciLexerCPP::setEditor(editor);
        } else if (qscilexercpp_seteditor_callback != nullptr) {
            qscilexercpp_seteditor_callback(this, editor);
        } else {
            QsciLexerCPP::setEditor(editor);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void refreshProperties() override {
        if (qscilexercpp_refreshproperties_isbase) {
            qscilexercpp_refreshproperties_isbase = false;
            QsciLexerCPP::refreshProperties();
        } else if (qscilexercpp_refreshproperties_callback != nullptr) {
            qscilexercpp_refreshproperties_callback();
        } else {
            QsciLexerCPP::refreshProperties();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleBitsNeeded() const override {
        if (qscilexercpp_stylebitsneeded_isbase) {
            qscilexercpp_stylebitsneeded_isbase = false;
            return QsciLexerCPP::styleBitsNeeded();
        } else if (qscilexercpp_stylebitsneeded_callback != nullptr) {
            return qscilexercpp_stylebitsneeded_callback();
        } else {
            return QsciLexerCPP::styleBitsNeeded();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual const char* wordCharacters() const override {
        if (qscilexercpp_wordcharacters_isbase) {
            qscilexercpp_wordcharacters_isbase = false;
            return QsciLexerCPP::wordCharacters();
        } else if (qscilexercpp_wordcharacters_callback != nullptr) {
            return qscilexercpp_wordcharacters_callback();
        } else {
            return QsciLexerCPP::wordCharacters();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setAutoIndentStyle(int autoindentstyle) override {
        if (qscilexercpp_setautoindentstyle_isbase) {
            qscilexercpp_setautoindentstyle_isbase = false;
            QsciLexerCPP::setAutoIndentStyle(autoindentstyle);
        } else if (qscilexercpp_setautoindentstyle_callback != nullptr) {
            qscilexercpp_setautoindentstyle_callback(this, autoindentstyle);
        } else {
            QsciLexerCPP::setAutoIndentStyle(autoindentstyle);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setColor(const QColor& c, int style) override {
        if (qscilexercpp_setcolor_isbase) {
            qscilexercpp_setcolor_isbase = false;
            QsciLexerCPP::setColor(c, style);
        } else if (qscilexercpp_setcolor_callback != nullptr) {
            qscilexercpp_setcolor_callback(this, c, style);
        } else {
            QsciLexerCPP::setColor(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setEolFill(bool eoffill, int style) override {
        if (qscilexercpp_seteolfill_isbase) {
            qscilexercpp_seteolfill_isbase = false;
            QsciLexerCPP::setEolFill(eoffill, style);
        } else if (qscilexercpp_seteolfill_callback != nullptr) {
            qscilexercpp_seteolfill_callback(this, eoffill, style);
        } else {
            QsciLexerCPP::setEolFill(eoffill, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setFont(const QFont& f, int style) override {
        if (qscilexercpp_setfont_isbase) {
            qscilexercpp_setfont_isbase = false;
            QsciLexerCPP::setFont(f, style);
        } else if (qscilexercpp_setfont_callback != nullptr) {
            qscilexercpp_setfont_callback(this, f, style);
        } else {
            QsciLexerCPP::setFont(f, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void setPaper(const QColor& c, int style) override {
        if (qscilexercpp_setpaper_isbase) {
            qscilexercpp_setpaper_isbase = false;
            QsciLexerCPP::setPaper(c, style);
        } else if (qscilexercpp_setpaper_callback != nullptr) {
            qscilexercpp_setpaper_callback(this, c, style);
        } else {
            QsciLexerCPP::setPaper(c, style);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool readProperties(QSettings& qs, const QString& prefix) override {
        if (qscilexercpp_readproperties_isbase) {
            qscilexercpp_readproperties_isbase = false;
            return QsciLexerCPP::readProperties(qs, prefix);
        } else if (qscilexercpp_readproperties_callback != nullptr) {
            return qscilexercpp_readproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerCPP::readProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
        if (qscilexercpp_writeproperties_isbase) {
            qscilexercpp_writeproperties_isbase = false;
            return QsciLexerCPP::writeProperties(qs, prefix);
        } else if (qscilexercpp_writeproperties_callback != nullptr) {
            return qscilexercpp_writeproperties_callback(this, qs, prefix);
        } else {
            return QsciLexerCPP::writeProperties(qs, prefix);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qscilexercpp_event_isbase) {
            qscilexercpp_event_isbase = false;
            return QsciLexerCPP::event(event);
        } else if (qscilexercpp_event_callback != nullptr) {
            return qscilexercpp_event_callback(this, event);
        } else {
            return QsciLexerCPP::event(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qscilexercpp_eventfilter_isbase) {
            qscilexercpp_eventfilter_isbase = false;
            return QsciLexerCPP::eventFilter(watched, event);
        } else if (qscilexercpp_eventfilter_callback != nullptr) {
            return qscilexercpp_eventfilter_callback(this, watched, event);
        } else {
            return QsciLexerCPP::eventFilter(watched, event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qscilexercpp_timerevent_isbase) {
            qscilexercpp_timerevent_isbase = false;
            QsciLexerCPP::timerEvent(event);
        } else if (qscilexercpp_timerevent_callback != nullptr) {
            qscilexercpp_timerevent_callback(this, event);
        } else {
            QsciLexerCPP::timerEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qscilexercpp_childevent_isbase) {
            qscilexercpp_childevent_isbase = false;
            QsciLexerCPP::childEvent(event);
        } else if (qscilexercpp_childevent_callback != nullptr) {
            qscilexercpp_childevent_callback(this, event);
        } else {
            QsciLexerCPP::childEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qscilexercpp_customevent_isbase) {
            qscilexercpp_customevent_isbase = false;
            QsciLexerCPP::customEvent(event);
        } else if (qscilexercpp_customevent_callback != nullptr) {
            qscilexercpp_customevent_callback(this, event);
        } else {
            QsciLexerCPP::customEvent(event);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qscilexercpp_connectnotify_isbase) {
            qscilexercpp_connectnotify_isbase = false;
            QsciLexerCPP::connectNotify(signal);
        } else if (qscilexercpp_connectnotify_callback != nullptr) {
            qscilexercpp_connectnotify_callback(this, signal);
        } else {
            QsciLexerCPP::connectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qscilexercpp_disconnectnotify_isbase) {
            qscilexercpp_disconnectnotify_isbase = false;
            QsciLexerCPP::disconnectNotify(signal);
        } else if (qscilexercpp_disconnectnotify_callback != nullptr) {
            qscilexercpp_disconnectnotify_callback(this, signal);
        } else {
            QsciLexerCPP::disconnectNotify(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    QObject* sender() const {
        if (qscilexercpp_sender_isbase) {
            qscilexercpp_sender_isbase = false;
            return QsciLexerCPP::sender();
        } else if (qscilexercpp_sender_callback != nullptr) {
            return qscilexercpp_sender_callback();
        } else {
            return QsciLexerCPP::sender();
        }
    }

    // Virtual method for C ABI access and custom callback
    int senderSignalIndex() const {
        if (qscilexercpp_sendersignalindex_isbase) {
            qscilexercpp_sendersignalindex_isbase = false;
            return QsciLexerCPP::senderSignalIndex();
        } else if (qscilexercpp_sendersignalindex_callback != nullptr) {
            return qscilexercpp_sendersignalindex_callback();
        } else {
            return QsciLexerCPP::senderSignalIndex();
        }
    }

    // Virtual method for C ABI access and custom callback
    int receivers(const char* signal) const {
        if (qscilexercpp_receivers_isbase) {
            qscilexercpp_receivers_isbase = false;
            return QsciLexerCPP::receivers(signal);
        } else if (qscilexercpp_receivers_callback != nullptr) {
            return qscilexercpp_receivers_callback(this, signal);
        } else {
            return QsciLexerCPP::receivers(signal);
        }
    }

    // Virtual method for C ABI access and custom callback
    bool isSignalConnected(const QMetaMethod& signal) const {
        if (qscilexercpp_issignalconnected_isbase) {
            qscilexercpp_issignalconnected_isbase = false;
            return QsciLexerCPP::isSignalConnected(signal);
        } else if (qscilexercpp_issignalconnected_callback != nullptr) {
            return qscilexercpp_issignalconnected_callback(this, signal);
        } else {
            return QsciLexerCPP::isSignalConnected(signal);
        }
    }
};

#endif
