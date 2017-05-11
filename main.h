#ifndef __MAIN_H__
#define __MAIN_H__


#include "merge.decl.h"


class Main : public CBase_Main {

 private:
  /// Member Variables (Object State) ///
  void (Main::*postDisplayFunc)(void);
  CProxy_Merge mergeArray;
  float inicio,fin;
  int *values;
  int value;

  /// Private Member Functions ///
  void startArrayDisplay(void (Main::*cbFunc)(void), char* prefix);
  void startNextPhase();
  void exit();

 public:
  /// Constructors ///
  Main(CkArgMsg* msg);
  Main(CkMigrateMessage* msg);

  /// Entry Methods ///
  void arrayDisplayFinished();
  void terminar(int, int []);
};


#endif //__MAIN_H__
