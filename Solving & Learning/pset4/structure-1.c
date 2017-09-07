/*
 * Different initialization techniques in intitializing structures.
 *
 *
 *
 */
 
 #include <stdio.h>

 #include "DateStruct.h"
 #include "TimeStruct.h"
 
 struct PlayerProf
 {
 	char *name, *team, *country;
 	Dates birthDate;
 };
 
 struct Game
 {
 	Dates gameDay;
 	Times kick_off;
 };
 
 int main(void)
 {
 	// Way 0
 	struct PlayerProf p0, p1;
 	p0 = (struct PlayerProf){"Andres Iniesta", "FCB", "Spain"};
 	p1 = (struct PlayerProf){.name = "Xavi", .country = "Spain", .team = "FCB"};
 	printf("%s, %s, %s\n", p0.name, p0.team, p0.country);
 	printf("%s, %s, %s\n", p1.name, p1.team, p1.country);
 	
 	// Way 1
 	struct PlayerProf p2 = {"Leo Messi", "FCB", "Argentina", {24, 06, 1987}};

	printf("%s, %s, %s, %d/%d/%d\n", p2.name, p2.team, p2.country, p2.birthDate.d, p2.birthDate.m, p2.birthDate.y);
	
	// Way 2
	struct Game debutGame = {{.d = 31, .m = 12, .y = 2006}};
	
	printf("%d, %d, %d\n", debutGame.gameDay.d, debutGame.gameDay.m, debutGame.gameDay.y);  
	
	// Way 3
	struct PlayerProf p[5] = {[1] = {"Cr7", "R.Madrid", "Portugal"}};	
	printf("%s, %s, %s\n", p[1].name, p[1].team, p[1].country);
	
	
	struct Cricket
	{
		char *name, *country, *IPL;
	}player = {"Virat Kohli", "India", "RCB"};			
	
	printf("%s, %s, %s\n", player.name, player.country, player.IPL);
 }
