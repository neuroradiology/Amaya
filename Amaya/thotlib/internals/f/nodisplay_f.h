/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern int TtaGetThotColor ( unsigned short red,
                             unsigned short green,
                             unsigned short blue );
extern ThotBool CallEventType ( NotifyEvent * notifyEvent,
                                ThotBool pre );
extern ThotBool CallEventAttribute ( NotifyAttribute * notifyAttr,
                                     ThotBool pre );
extern void CleanPictInfo ( ThotPictInfo *esc );
extern void AddInSelection ( PtrElement pEl,
                             ThotBool dernier );
extern void FreeAbEl ( PtrElement pEl,
                       PtrDocument pDoc );
extern void ConfigTranslateSSchema ( PtrSSchema pSS );
extern PtrPRule GlobalSearchRulepEl ( PtrElement pEl,
                                      PtrDocument pDoc,
                                      PtrPSchema * pSPR,
                                      PtrSSchema * pSSR,
                                      ThotBool presBox,
                                      int presNum,
                                      PtrPSchema pSchP,
                                      int Vue,
                                      PRuleType TRegle,
                                      FunctionType typeFunc,
                                      ThotBool Pag,
                                      ThotBool attr,
                                      PtrAttribute * pAttr );
extern ThotBool IsASavedElement ( PtrElement pEl );
extern ThotBool BothHaveNoSpecRules ( PtrElement pEl1,
                                      PtrElement pEl2 );
extern void AddSchemaGuestViews ( PtrDocument pDoc,
                                  PtrSSchema pSS );

#else /* __STDC__ */

extern int TtaGetThotColor ( unsigned short red,
                               unsigned short green,
                               unsigned short blue );
extern ThotBool CallEventType ( NotifyEvent * notifyEvent,
                                  ThotBool pre );
extern ThotBool CallEventAttribute ( NotifyAttribute * notifyAttr,
                                       ThotBool pre );
extern void CleanPictInfo ( ThotPictInfo *esc );
extern void AddInSelection ( PtrElement pEl,
                               ThotBool dernier );
extern void FreeAbEl ( PtrElement pEl,
                         PtrDocument pDoc );
extern void ConfigTranslateSSchema ( PtrSSchema pSS );
extern PtrPRule GlobalSearchRulepEl ( PtrElement pEl,
                                        PtrDocument pDoc,
                                        PtrPSchema * pSPR,
                                        PtrSSchema * pSSR,
                                        ThotBool presBox,
                                        int presNum,
                                        PtrPSchema pSchP,
                                        int Vue,
                                        PRuleType TRegle,
                                        FunctionType typeFunc,
                                        ThotBool Pag,
                                        ThotBool attr,
                                        PtrAttribute * pAttr );
extern ThotBool IsASavedElement ( PtrElement pEl );
extern ThotBool BothHaveNoSpecRules ( PtrElement pEl1,
                                        PtrElement pEl2 );
extern void AddSchemaGuestViews ( PtrDocument pDoc,
                                    PtrSSchema pSS );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */