#include <stdio.h>




struct song{
    char song_name[50];
    char song_artist[50];
    float song_time;
};




int main(){
    struct song songs[5];
    int s, i, j;
    struct song music;
    for (s=0;s<5;s++){
        printf("\nEnter song name:");
        scanf("%s",&songs[s].song_name);
        printf("\nEnter song artist:");
        scanf("%s",&songs[s].song_artist);
        printf("\nEnter song duration:");
        scanf("%f",&songs[s].song_time);
         }
         
         //bubblesort for sorting songs acc to their duration
         
         for(i=0;i<4;i++){
             for (j=0;j<4-i;j++){
             if (songs[j].song_time>songs[j+1].song_time){
                music = songs[j];
                songs[j] = songs[j+1];
                songs[j+1] = music;
             }
             }
         }
         for(s=0;s<5;s++){
             printf("\nSong name:%s",songs[s].song_name);
              printf("\nSong artist:%s",songs[s].song_artist);
               printf("\nSong duration:%f",songs[s].song_time);
         }
         return 0;
}
