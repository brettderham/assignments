//  chord.c
//  Created by Brett Derham on 3/28/19.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] ) {
    if( argc > 2 || argc < 1) {
        printf("This program requires exactly one command line argument.");
    } else if( argc == 2 ) {
        printf("The piano key supplied is %s\n", argv[1]);
        if(strcmp(argv[1],"C")==0) {
            
            printf("C: C E G\nCm: C D# G\nC7: C E G A#\nCdim7: C D# F# A\n"  );
            
        } else if(strcmp(argv[1],"C#")==0){
            
            printf("C#: C# F G#\nC#m: C# E G#\nC#7: C# F G# B\nC#dim7: C# E G A#\n"  );
            
        } else if(strcmp(argv[1],"D")==0){
            
            printf("D: D F# A\nDm: D F A\nD7: D F# A C\nDdim7: D F G# B\n"  );
            
        } else if(strcmp(argv[1],"D#")==0){
            
            printf("D#: D# G A#\nD#m: D# F# A#\nD#7: D# G A# C#\nD#dim7: D# F# A B#\n"  );
            
        } else if(strcmp(argv[1],"E")==0){
            
            printf("E: E G# B\nEm: E G B\nE7: E G# B D\nEdim7: E G A# C#\n"  );
            
        } else if(strcmp(argv[1],"F")==0){
            
            printf("F: F A C\nFm: F G# C\nF7: F A C D#\nFdim7: F G# B D\n"  );
            
        } else if(strcmp(argv[1],"F#")==0){
            
            printf("F#: F# A# C#\nF#m: F# A C#\nF#7: F# A# C# E\nF#dim7: F# A C D#\n" );
            
        } else if(strcmp(argv[1],"G")==0){
            
            printf("G: G B D\nGm: G A# D\nG7: G B D F\nGdim7: G A# C# E\n"  );;
            
        } else if(strcmp(argv[1],"G#")==0){
            
            printf("G#: G# C D#\nG#m: G# B D#\nG#7: G# C D# F#\nG#dim7: G# B D F\n"  );
            
        } else if(strcmp(argv[1],"A")==0){
            
            printf("A: A C# E\nAm: A C E\nA7: A C# E G\nAdim7: A C D# F#\n"  );
            
        } else if(strcmp(argv[1],"A#")==0){
            
            printf("A#: A# D F\nA#m: A# C# F\nA#7: A# D F G#\nA#dim7: A# C# E G\n"  );
            
        } else if(strcmp(argv[1],"B")==0) {
            
            printf("B: B D# F#\nBm: B D F#\nB7: B D# F# A\nBdim7: B D F G#\n"  );
            
        } else {
            char badkey[50];
            strcpy(badkey, argv[1]);
            printf("No such key: %s\n", badkey);
        }
    } else {
        printf("This program requires exactly one command line argument.");
    }
    return 0;
}
