--- src/tools/gen_code/gen_code.c.orig	2025-12-02 02:07:54 UTC
+++ src/tools/gen_code/gen_code.c
@@ -3453,7 +3453,7 @@ static void printFuncHeaderDoc( FILE *out,
    int first;
 
    fprintf( out, "%sTA_%s - %s\n", prefix, funcInfo->name, funcInfo->hint );
-   fprintf( out, prefix );
+   fprintf( out, "%s", prefix );
 
    fprintf( out, "\n" );
    fprintf( out, "%sInput  = ", prefix );
