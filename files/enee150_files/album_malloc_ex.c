#include <stdio.h>
#include <stdlib.h>

typedef struct album{
    int num_tracks;
    char** track;
    int* playlist_hits;
} album_t;

int main(){
    int num_album_tracks = 3;

    /* Malloc an album_t struct */
    album_t* album1 = (album_t*) malloc(sizeof(album_t));

    album1 -> num_tracks = num_album_tracks;

    /* Malloc the char pointer array for the track titles */
    album1 -> track = (char**) malloc(sizeof(char*) * num_album_tracks);

    /* Malloc the char arrays associated with each pointer in the char array */
    int track_title_len[3] = {12, 28, 15}; 

    for(int i = 0; i < num_album_tracks; i++) {
        album1 -> track[i] = (char*) malloc(sizeof(char) * track_title_len[i]);
    }

    /* Malloc the int array for playlist hits */
    album1 -> playlist_hits = (int*) malloc(sizeof(int) * num_album_tracks);

    /* Now we free the entire album struct, going from inside out */
    /* First we free the pointers within the pointer array */
    for (int i = 0; i < num_album_tracks; i++) {
        free(album1 -> track[i]);
    }

    /* Now we free the pointer to the pointer array */
    free(album1 -> track);

    /* Now we free the memory associated with playlist_hits */
    free(album1 -> playlist_hits);

    /* Since all the heap memory within the struct has been freed, we can now free the struct itself */
    free(album1);
}




