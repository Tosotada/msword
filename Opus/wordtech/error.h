/* E R R O R . H */

/* Error ID definitions */
/* corresponding strings defined in error.c */

/* eid's are arbitrary, just grab the next available one */
/* eid's may not exceed 1023 (10 bits) */
/* do not change or reuse eid's, they are DOCUMENTED (Tec Ref) and used
	by HELP */

#define eidNil                          -1
#define eidNull                         0

#define eidNoMemory                     1
										/* 2 */
#define eidGotoLineAndFoot              3
#define eidGotoNothing                  4
#define eidNoBkmk                       5
#define eidGotoConflict                 6
#define eidNoPrevSearch                 7
#define eidNoSectAllowed                8
#define eidInvalBkmkNam                 9
#define eidBetaVersion                  10
#define eidNoMemIndex                   11
#define eidNoMemHelp                    12
#define eidNoMemLaunchDde               13
#define eidNoMemRunApp                  14
#define eidNoMemOperation               16
#define eidNoMemDisplay                 17
#define eidNoMemGlsy                    18
#define eidNoMemMerge                   19
#define eidNoMemOutline                 20
#define eidNoMemRuler                   21
#define eidNoGlsy                       22
#define eidSDE                          23
#define eidNoAvail                      24
#define eidCantOpen                     25
#define eidInvalidStyle                 26
#define eidReplaceFail                  27
#define eidNotFound                     28
#define eidNoMemPict                    29
#define eidBadCrop                      30
#define eidBadScale                     31
#define eidFcTooBig                     32
#define eidBogusDotPath                 33
#define eidBogusIniPath                 34
#define eidBogusUtilPath                35
#define eidConvtrNoLoad                 36
#define eidConvtrNoLoadMem              37
#define eidBogusPassword                38
#define eidInvalidHotZ                  39
#define eidHypNoDataFile                40
#define eidInvalidDOT                   41
#define eidMTL                          42
#define eidTabPosTooLarge               43
#define eidNoPrinter                    44
#define eidInvalPrintRange              45
#define eidCantPrint                    46
#define eidPRFAIL                       47
#define eidPrDiskErr                    48
#define eidSessionComplex               49 
#define eidNOTNUM                       50
#define eidNOTDXA                       51
#define eidOutOfRange                   52
#define eidZaOutOfRange                 53
#define eidCantWriteFile                54
#define eidBadFile                      55
#define eidBadFilename                  56
#define eidFileExists                   57
#define eidCantWriteFrgn                58
#define eidFileIsReadOnly               59
#define eidNoSaveTemp                   60
#define eidFields2Deep                  62
#define eidLowMem1                      63
#define eidLowMem2                      64
#define eidVeryLowMem                   65
#define eidCantRunM                     66
#define eidBogusGdt                     69
#define eidInvalidDate                  70
#define eidBadStyle                     71
#define eidStshFull                     72
#define eidStupidBasedOn                73
#define eidInvalidBasedOn               74
#define eidInvalidNext                  75
#define eidCantMerge                    76
#define eidStyleExists                  77
#define eidFileNotExist                 78
#define eidClipNoRender                 79
#define eidIndentTooLarge               80
#define eidParTooWide                   81
#define eidRuntimeWindows               82
#define eidNoExtension                  83
#define eidCantOpenDOT                  84
#define eidDotNotValid                  85
#define eidOldFib                       86
#define eidFutureFib                    87
#define eidOldDot                       88
#define eidOldFastSavedFib              89
#define eidStshFullCopy                 90
#define eidCantInsertSelf               91
#define eidEtNoLoadMem                  93
#define eidEtNoLoad                     94
#define eidSpellNoLoadMem               95
#define eidSpellNoDict                  96
#define eidSpellNoLoad                  97
#define eidSpellUpdateFail              98
#define eidSpellUserFail                99
#define eidSpellWdFndMain               100
#define eidSpellWdFndUpdate             101
#define eidSpellWdFndAux                102
#define eidCantFindCbt                  103
#define eidInvTabPos                    104
#define eidTooManyTabs                  105
#define eidTooManyClTabs                106
#define eidNoEntries                    107
#define eidCantCreateTemp               108
#define eidBadOpusIni                   109
#define eidPMCantOpenWind               111
#define eidPMFieldNested                112
#define eidPMFieldInSubDoc              113
#define eidPMDataNotFirstPM             114
#define eidPMNoDataFileSpec             115
#define eidPMBadFieldCond               116
#define eidPMNoOpenDataFile             117
#define eidPMNoOpenHeadFile             118
#define eidPMFirstBeyondEnd             119
#define eidBadPrinter                   120
#define eidNoPrinters                   121
#define eidInvalidRPStartAt             122
#define eidInvalidRPFormat              123
#define eidInvalidRPBoth                124
#define eidNoTocFields                  125
#define eidNoOutlineLevels              126
#define eidMakeSelection                127
#define eidInvalidSelection             128
#define eidDocTooBigToSave              129
#define eidCpRollOver                   130
#define eidWinFailure                   132
#define eidInvalidDMQPath               133
#define eidInvalidDMSrhExp              134
#define eidInvalidDMDateRange           135
#define eidDMIncomplete                 136
#define eidLock                         137
#define eidReadonly                     138
#define eidWindowTooSmall               139
#define eidNoFN                         140
#define eidNoANN                        141
#define eidNotValidForAnn               142
#define eidRevNotFound                  143
#define eidStyleSheetTooLarge           144
#define eidFormatTooComplex             145
#define eidNoFNToShow                   146
#define eidNoANNToShow                  147
#define eidLowMemIncorrectFonts         148
#define eidIllegalMoveToHeadFoot        149
#define eidIllegalFNPlacement           150
#define eidCantReplaceFN                151
#define eidCantMoveSections             152
#define eidCantMoveFNANNRefs            153
#define eidCantReplaceFNANNRefs         154
#define eidTooManyEdits                 155
#define eidNotValidEOR                  156
#define eidInvalForFN                   157
#define eidDocNotSaved                  158
#define eidDiskErrSaveNewName           159
#define eidSysLock                      160
#define eidSysFull                      161
#define eidMaxCol                       162
#define eidMaxWidth                     163
#define eidCantDelEOR                   164
#define eidIllegalTextInTable           165
#define eidMultiRefStyle                166
#define eidNotStyleName                 167
#define eidInvalStyleName               168
#define eidComplexSession               169
#define eidNoSect                       170
#define eidIllegalPasteToTable          172
#define eidCantPasteTextWChSec          174
#define eidCantPasteTableInTable        175
#define eidCopyPasteAreaDiff            176
#define eidLowMemCloseWindows           177
#define eidBadFileDlg                   178
#define eidFields2DeepCalc              179
#define eidInvalForANN                  180
#define eidDxaOutOfRange                181
#define eidCantCreateTempFile           182
#define eidNoMemSort                    183
#define eidSortFldCh                    184
#define eidSortNoRec                    185
#define eidBasedOnFull                  186
#define eidClosingSavedDoc              190
#define eidSDN                          191
#define eidDiskFull                     192
#define eidMacroTooBig                  193
#define eidCantChangeMenuHelp           194
#define eidCantCloseRunningMacro        195
#define eidNoSuchMacro                  196
#define eidNoMemForRecord               197
#define eidWordRunning                  198
#define eidWrongWinOrDos                199
#define eidNoConversionText             200
#define eidCantStartCBT                 202
#define eidNoMemCBT                     203
#define eidNoMemTokenize                204
#define eidNoMemRunMacro                205
#define eidCantReplaceCellMark          206
#define eidDocTooBigChange              207
#define eidCantRenDelCmd                208
#define eidCantRenDelOpenMacro          209
#define eidCantEdRecording              210
#define eidMacroLineTooBig              211
#define eidCantRecordOverEd             212
#define eidInvalidFmtCells              213
#define eidMenuTextTooLong              214
#define eidMixedSwitchSel               215
#define eidNoMemRecord			216
#define eidWholeRowsConverted		217
#define eidTooWideToSplit		218
#define eidRecordingTooBig		219
#define eidTooWideForOperation		220
#define eidCantRunApp                   221
#define eidLowMemMenu                   222
#define eidCannotAgainTable		223
#define eidTableInTable			224
#define eidCantTableToEnd		225
#define eidCantUseSel			226
#define eidCantRealizeFont              227
#define eidPicNoOpenDataFile            228
#define eidNoMemOpRepeats               229
#define eidCircularBasedOn              230
#define eidBadStyleSysModal             231
#define eidSpellNotFound		232
#define eidSpellDictRO			233
#define eidCantFindHelp                 234
#define eidSortRecIgnored               235
#define eidNoStack                      236
#define eidLowMemLBox					237
#define eidCantQuitWord	    			238
#define eidDemoCantSave                 239
#define eidDemoCantPrint                240
#define eidCantRepag					241
#define eidPmWordFile			242
#define eidPicWrongWin			243
#define eidBadPicFormat			244


/* eid's are arbitrary, just grab the next available one */
/* eid's may not exceed 1023 (10 bits) */
/* do not change or reuse eid's, they are DOCUMENTED (Tec Ref) and used
	by HELP */



/* Error Macros */

#ifdef DEBUG
#define ErrorEid(eid,szF)        ErrorEidProc(eid,SzShared(szF))
#define ErrorEidRgw(eid,rgw,szF) ErrorEidRgwProc(eid,rgw,SzShared(szF))
#define ErrorEidW(eid,w,szF)     ErrorEidWProc(eid,w,SzShared(szF))
#define ErrorEidSz(eid,sz,szF)   ErrorEidSzProc(eid,sz,SzFrame(szF))
#else
#define ErrorEid(eid,szF)        ErrorEidProc(eid)
#define ErrorEidRgw(eid,rgw,szF) ErrorEidRgwProc(eid,rgw)
#define ErrorEidW(eid,w,szF)     ErrorEidWProc(eid,w)
#define ErrorEidSz(eid,sz,szF)   ErrorEidSzProc(eid,sz)
#endif /* DEBUG */

