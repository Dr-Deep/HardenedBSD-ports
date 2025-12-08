--- console/cons.c.orig	2025-12-08 02:25:37 UTC
+++ console/cons.c
@@ -448,7 +448,7 @@ main(argc, argv)
 			(CPPFunction *) command_completion;
 	rl_callback_handler_install( prompt, rl_got_line );
 #else
-	printf(prompt);
+	printf("%s", prompt);
 	fflush(stdout);
 #endif
 
@@ -516,7 +516,7 @@ main(argc, argv)
 			}
 			cmd[n] = 0;
 			docmd(cmd);
-			printf(prompt);
+			printf("%s", prompt);
 			fflush(stdout);
 #endif
 
