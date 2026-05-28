--- src/shell.c.orig	2025-12-02 02:21:41 UTC
+++ src/shell.c
@@ -692,7 +692,7 @@ static int do_meta_command(char *zLine, struct callbac
   }else
 
   if( c=='h' && strncmp(azArg[0], "help", n)==0 ){
-    fprintf(stderr,zHelp);
+    fprintf(stderr,"%s",zHelp);
   }else
 
   if( c=='i' && strncmp(azArg[0], "indices", n)==0 && nArg>1 ){
