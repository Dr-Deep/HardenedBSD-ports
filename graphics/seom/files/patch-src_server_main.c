--- src/server/main.c.orig	2025-12-05 02:37:49 UTC
+++ src/server/main.c
@@ -22,10 +22,10 @@ static void logmessage(char* msg)
 static void logmessage(char* msg)
 {
 	if (daemonmode)
-		syslog(LOG_USER | LOG_INFO, msg);
+		syslog(LOG_USER | LOG_INFO, "%s", msg);
 	
 	else
-		printf(msg);
+		printf("%s", msg);
 }
 
 static void sighandler(int signum)
