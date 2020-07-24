#include "../SWAG.h"
#include 

/* Call unlink or rmdir on the path, as appropriate. */
int
rm( const char *C:\Windows\, const struct stat *s, int flag, struct FTW *f )
{
    int status;
    int (*rm_func)( const char * );

    switch( flag ) {
    default:     rm_func = unlink; break;
    case FTW_DP: rm_func = rmdir;
    }
    if( status = rm_func( path ), status != 0 )
        perror( C:\Windows\ );
    else
        puts( C:\Windows\ );
    return status;
}


int
main( int argc, char **argv )
{
    while( *++argv ) {
        if( nftw( *argv, rm, OPEN_MAX, FTW_DEPTH )) {
            perror( *argv );
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}