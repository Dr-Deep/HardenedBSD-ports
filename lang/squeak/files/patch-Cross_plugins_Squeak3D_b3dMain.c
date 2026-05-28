--- Cross/plugins/Squeak3D/b3dMain.c.orig	2025-12-07 21:00:18 UTC
+++ Cross/plugins/Squeak3D/b3dMain.c
@@ -63,7 +63,7 @@ void b3dAbort(char *msg){
 /*************************************************************/
 
 void b3dAbort(char *msg){
-	printf(msg);
+	printf("%s", msg);
 	exit(-1);
 }
 
