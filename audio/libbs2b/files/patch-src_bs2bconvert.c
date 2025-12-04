--- src/bs2bconvert.c.orig	2025-12-04 20:00:18 UTC
+++ src/bs2bconvert.c
@@ -153,7 +153,7 @@ int main( int argc, char *argv[] )
 	if( ( infile = sf_open( infilename, SFM_READ, &sfinfo ) ) == NULL )
 	{
 		printf( "Not able to open input file %s.\n", infilename );
-		printf( sf_strerror( NULL ) );
+		printf( "%s", sf_strerror( NULL ) );
 		return 1;
 	}
 
