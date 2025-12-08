--- tracer/tracer.c.orig	2025-12-08 02:33:11 UTC
+++ tracer/tracer.c
@@ -170,7 +170,7 @@ work()
 
 	prompt = "tracer> ";
 
-	printf( prompt );
+	printf( "%s", prompt );
 	fflush( stdout );
 
 	/* Process Events Messages and User Input */
@@ -226,7 +226,7 @@ work()
 
 				handle_cmd( cmd );
 
-				printf( prompt );
+				printf( "%s", prompt );
 				fflush( stdout );
 			}
 		}
