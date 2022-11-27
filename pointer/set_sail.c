#include <stdio.h>

/* a program that receives the current latitude and longitude and updates it to move southwest */

void go_south_west(int *lat, int *lon);

int main()
{
	int latitude;
	int longitude; 

	printf("Enter your curent latitude: \n");
	scanf("%d", &latitude);
	printf("Enter your curent longitude: \n");
	scanf("%d", &longitude);
	go_south_west(&latitude, &longitude);
	printf("User's current position\nlatitude:%d,longitude:%d\n", latitude, longitude);
	return(0);
}
void go_south_west(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;

}
	
