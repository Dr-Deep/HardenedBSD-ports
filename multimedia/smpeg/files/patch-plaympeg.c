--- plaympeg.c.orig	2025-11-24 15:59:34 UTC
+++ plaympeg.c
@@ -262,7 +262,7 @@ int ftp_get_reply(int tcp_sock)
       answer[i] = c;
     }
     answer[i] = 0;
-    fprintf(stderr, answer + 4);
+    fprintf(stderr, "%s", answer + 4);
   }
   while(answer[3] == '-');
 
