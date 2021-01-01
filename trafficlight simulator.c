/*
 * Author:  Joseph Li    
 * Date:             11/18/2020 3:21:27 AM
 *           
 * Purpose: simple Traffic light simulator 
 *
 */
#define _CRT_SECURE_NO_WARNINGS
#include <DAQlib.h>
#include <Windows.h>
#include <stdio.h>
 /* symbolic constants */
#define SIMULATOR 2
#define ON 1
#define OFF 0
#define RESET 0
#define LED0 0
#define NUM_LEDS 6
#define ONE_SECOND 1000
/* function prototypes */
/*void setLightsEastWest(int green, int yellow, int red)
{

		digitalWrite(0, green);
		digitalWrite(1, yellow);
		digitalWrite(2, red);
	
}

void setLightsNorthSouth(int green, int yellow, int red)
{
	int led = 0;
	int i = 0;
		digitalWrite(3, green);
		digitalWrite(4, yellow);
		digitalWrite(5, red);
	
}


void trafficLightController(void)
{
	int i = 0;
	while (continueSuperLoop())
	{
		setLightsEastWest(1, 0, 0);
		setLightsNorthSouth(0, 0, 1);
		for(i=0;i<500;i++)
		Sleep(10);
		setLightsEastWest(0, 1, 0);
		setLightsNorthSouth(0, 0, 1);
		for(i=0;i<200;i++)
		Sleep(10);
		setLightsEastWest(0, 0, 1);
		setLightsNorthSouth(0, 0, 1);
		for(i=0;i<100;i++)
		Sleep(10);
		setLightsEastWest(0, 0, 1);
		setLightsNorthSouth(1, 0, 0);
		for(i=0;i<400;i++)
		Sleep(10);
		setLightsEastWest(0, 0, 1);
		setLightsNorthSouth(0, 1, 0);
		for(i=0;i<200;i++)
		Sleep(10);
		setLightsEastWest(0, 0, 1);
		setLightsNorthSouth(0, 0, 1);
		for(i=0;i<100;i++)
		Sleep(10);
	}
}
*/

void work(void);
int main(void)
{
	/* initialize simulator and run con2trol loop */
	if (setupDAQ(SIMULATOR)) {
		work();
	}
	else {
		printf("Cannot initialize the DAQ\n");
	}
	return 0;
}


void work(void)
{
	int time;
	int time2;
	time = millis();
	time2 = millis() - time;
	printf("%d", time2);
	Sleep(1000);

	time2 = millis() - time;
	printf("%d", time2);
}