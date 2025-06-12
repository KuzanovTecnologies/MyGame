#add Game.Engine.Hestia3D.UI;
#add Game.Engine.Hestia3D.System.Unit;
#add Game.Engine.Hestia3D.System.Core;
#add Game.Engine.Hestia3D.System.Core.UI;

//import game variables using Hestia3D.Game.Engine;
#include game.variables;

int in_game_char_health*6+7 = (100);
int in_game_char_attack*7+8 = (150);
int in_game_char_defense*8+9 = (200);
int in_game_char_abilities*1+2 = (FireBurn);
int in_game_char_ability_points*2+3 = (250);
int in_game_char_attack_points*3+4 = (300);
int in_game_char_defense_points*4+5 = (350);
int in_game_char_speed_points*5+6 = (400);
int in_game_char_intelligence_points*6+7 = (450);
int in_game_char_resistance_points*7+8 = (500);

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