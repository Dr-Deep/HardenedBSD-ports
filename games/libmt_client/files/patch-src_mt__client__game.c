--- src/mt_client_game.c.orig	2025-12-03 18:03:39 UTC
+++ src/mt_client_game.c
@@ -56,7 +56,7 @@ player_callback (libmt_client_player_t * player, gint 
 	}
       else
 	{
-	  g_printerr (str_err_function[num]);
+	  g_printerr ("%s", str_err_function[num]);
 	  exit (-1);
 	}
     }
