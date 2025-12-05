--- src/FXGLViewer.cpp.orig	2025-12-05 16:05:48 UTC
+++ src/FXGLViewer.cpp
@@ -2420,7 +2420,7 @@ long FXGLViewer::onCmdPrintImage(FXObject*,FXSelector,
 
       // Try open printer
       if(!pdc.beginPrint(printer)){
-        FXMessageBox::error(this,MBOX_OK,tr("Printer Error"),tr("Unable to print."));
+        FXMessageBox::error(this,MBOX_OK,"%s",tr("Printer Error"),tr("Unable to print."));
         return 1;
         }
 
@@ -2595,7 +2595,7 @@ long FXGLViewer::onCmdPrintVector(FXObject*,FXSelector
     dlg.getPrinter(printer);
     FXDCPrint pdc(getApp());
     if(!pdc.beginPrint(printer)){
-      FXMessageBox::error(this,MBOX_OK,tr("Printer Error"),tr("Unable to print."));
+      FXMessageBox::error(this,MBOX_OK,"%s",tr("Printer Error"),tr("Unable to print."));
       return 1;
       }
 
