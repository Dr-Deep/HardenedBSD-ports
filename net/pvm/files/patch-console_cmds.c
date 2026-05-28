--- console/cmds.c.orig	2025-12-08 02:30:38 UTC
+++ console/cmds.c
@@ -551,7 +551,7 @@ docmd(cmd)
 			*nextcmd++ = '\0';
 
 			if ( !first )
-				printf( prompt );
+				printf( "%s", prompt );
 			
 			else
 				first = 0;
