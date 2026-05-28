--- src/readline.c.orig	2025-12-02 02:29:25 UTC
+++ src/readline.c
@@ -192,7 +192,7 @@ message_in_echo_area(char *message)
   if (message) {
     rl_save_prompt();
     message_in_echo_area = TRUE;  
-    rl_message(message);
+    rl_message("%s", message);
   }  else {
     if (message_in_echo_area)
       rl_restore_prompt();
