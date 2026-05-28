--- src/ParallelImp.c.orig	2008-11-27 20:01:48 UTC
+++ src/ParallelImp.c
@@ -265,9 +265,6 @@ JNIEXPORT jboolean JNICALL LPRPort(isPrinterBusy)(JNIE
 #if defined(__linux__)
 	return( status & LP_BUSY ? JNI_TRUE : JNI_FALSE );
 #endif
-#if defined(__FreeBSD__)
-	return( status & EBUSY ? JNI_TRUE : JNI_FALSE );
-#endif
 	return(JNI_FALSE);
 }
 /*----------------------------------------------------------
@@ -920,7 +917,7 @@ void report_error(char *msg)
 void report_error(char *msg)
 {
 #ifndef DEBUG_MW
-	fprintf(stderr, msg);
+	fprintf(stderr, "%s", msg);
 #else
 	mexWarnMsgTxt( msg );
 #endif /* DEBUG_MW */
