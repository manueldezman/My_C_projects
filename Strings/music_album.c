#include <stdio.h>
#include <string.h>

/* a C program used to search for a track  of a music  album(using nigerian singer WIZKID latest album titled \"More love,less ego\" as a test) using at least a word from the track name */

int  search_for(char query[]);
char query[40];
int i;

char track[13][80] = 
{	
	"Money and Love",
	"Balance",
	"Bad to me",
	"Sugar ft Ayra Starr",
	"Everyday",
	"Slip and Slide ft SkilliBeng and Shenseea",
	"Deep",
	"Flower Pads",
	"Wow ft Skepta and Naira Marley",
	"Pressure",
	"Plenty Loving",
	"Special ft Don Toliver",
	"Frames (Who’s gonna know)"
};

int main()
{
	printf("THE ALBUM: MORE LOVE,LESS EGO\n");
	printf("Enter a word(s) from the track you want to search for(First letter should be in Uppercase): \n");
	scanf("%s", query);
	if ( query[0] < 65 || query[0] > 90 )
		printf("Retry!\n First letter should be uppercase!\n");
	search_for(query);
	return(0);
}
int  search_for(char query[])
{
	for(i = 0; i < 13; i++)
	{
		if (strstr(track[i], query) != NULL )
		{	
			printf("Track found!\nTrack name: %s \n", track[i]);
			return(0);
		}
	}
		
	printf("%s does not exist in MLLE tracklist!\n", query);
	return(1);
}
