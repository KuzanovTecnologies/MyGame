#add Game.Engine.Hestia3D.UI;
#add Game.Engine.Hestia3D.System.Unit;
#add Game.Engine.Hestia3D.System.Core;
#add Game.Engine.Hestia3D.System.Core.UI;

//import game variables using Hestia3D.Game.Engine;
#include game.variables;

int in_game_char_health*6+7 = (100);
int in_game_char_attack*7+8 = (150);
int in_game_char_defense*8+9 = (200);
int in_game_char_abilities*1+2 = (FireBurner);
int in_game_char_abilities*1+2 = (IceFreezer);
int in_game_char_abilities*1+2 = (ElectricShocker);
int in_game_char_abilities*1+2 = (HeatBlaster);
int in_game_char_abilities*1+2 = (ElectroBall);
int in_game_char_abilities*1+2 = (OverrideExplosion);
int in_game_char_abilities*1+2 = (fissureReaction);
int in_game_char_abilities*1+2 = (GammaBeam);
int in_game_char_abilities*1+2 = (ProtonPunch);
int in_game_char_abilities*1+2 = (Incineration);
int in_game_char_abilities*1+2 = (DeathBlast);
int in_game_char_ability_points*3+4 = (250);
int in_game_char_attack_points*4+5 = (300);
int in_game_char_defense_points*5+6 = (350);
int in_game_char_speed_points*6+7 = (400);
int in_game_char_intelligence_points*7+8 = (450);
int in_game_char_resistance_points*8+9 = (500);
int in_game_char_wind_resistance_points*9+10 = (550);
int in_game_char_water_resistance_points*10+11 = (600);
int in_game_char_fire_resistance_points*11+12 = (650);
int in_game_char_ice_resistance_points*12+13 = (700);
int in_game_char_electro_resistance_points*13+14 = (750);
//import game system using Hestia3D.Game.Engine;
#include game.system;

int in_game_environments (env1 = Akibahara_Town);
int in_game_environments (env2 = Virtual_Town);
int in_game_environments (env3 = Asaka_Town);
int in_game_environments (env4 = Medaka_Town);
int in_game_environments (env5 = Endor_Town);
int in_game_environments (env6 = Mt_Yuzanagi);
int in_game_environments (env7 = Desert_of_Hotlands);

//import game enemies using Hestia3D.Game.Engine;
#include game.enemies;

int in_game_enemies (enemy1 = Rogue_Swordsman);
int in_game_enemies (enemy2 = Dark_Paladins);
int in_game_enemies (enemy3 = Black_Marksman);
int in_game_enemies (enemy4 = Rifle_Assalters);
int in_game_enemies (enemy5 = Cannon_Shooters);
int in_game_enemies (enemy6 = Trooper_Soldiers);
int in_game_enemies (enemy7 = Skeleton_Archers);
int in_game_enemies (enemy8 = Zombie_Bombarders);
int in_game_enemies (enemy9 = Explosive_Operators);
int in_game_enemies (enemy10 = Chemical_Workers);

//import game fonts using Hestia3D.Game.Engine;
#include game.fonts

int in_game_fonts (Game_Font1 = SegoeUI);
int in_game_fonts (Game_Font2 = Roboto_Font_Text_Format);
int in_game_fonts (Game_Font3 = Times_New_Roman_Text_Format);
int in_game_fonts (Game_Font4 = Classic_Sans_Comic_Text);
int in_game_fonts (Game_font5 = Basic_MS_Font_Text);

// import game music using Hestia.Game.Engine;
#include game.music 

int in_game_music (game_music1 = Tears of Pain);
int in_game_music (game_music2 = Momentum of Regression);
int in_game_music (game_music3 = Fates of Disdain);
int in_game_music (game_music4 = World of Terror);
int in_game_music (game_music5 = Forest of Doom);
int in_game_music (game_music6 = Terror of Juggernaut);
int in_game_music (game_music7 = World's End);
int in_game_music (game_music8 = Game Over 1);
int in_game_music (game_music9 = End of Game 1);
int in_game_music (game_music10 = End of Game 2);
int in_game_music (game_music11 = End of Game 3);
