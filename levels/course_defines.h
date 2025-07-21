/* Define lists for list of course for macros. Each of the following fields are described:
 * Argument 1: Course macro for define.
 * Argument 2: Star collection dance cutscenes
 * Each hex digit determines what dance cutscene to play for the stars in the course. The last digit is
 * unused. See determine_dance_cutscene() in camera.c for details.
 * Cutscene Digits:
 *      0: Lakitu flies away after the dance
 *      1: The camera rotates around the player
 *      2: The camera goes to a closeup of the player
 *      3: Bowser keys and the grand star
 *      4: Default, used for 100 coin stars, 8 red coin stars in bowser levels, and secret stars
 */
DEFINE_COURSE(COURSE_NONE, 0x22222222) // (0)  Course Hub (Castle Grounds)
DEFINE_COURSE(COURSE_BOB, 0x00022240) // (1)  Bob-omb Battlefield
DEFINE_COURSE(COURSE_WF, 0x00002004) // (2)  Whomp's Fortress
DEFINE_COURSE(COURSE_JRB, 0x22222224) // (3)  Jolly Roger Bay
DEFINE_COURSE(COURSE_CCM, 0x00220004) // (4)  Cool, Cool Mountain
DEFINE_COURSE(COURSE_BBH, 0x22222204) // (5)  Big Boo's Haunt
DEFINE_COURSE(COURSE_HMC, 0x22222204) // (6)  Hazy Maze Cave
DEFINE_COURSE(COURSE_LLL, 0x21212104) // (7)  Lethal Lava Land
DEFINE_COURSE(COURSE_SSL, 0x20222204) // (8)  Shifting Sand Land
DEFINE_COURSE(COURSE_DDD, 0x22222204) // (9)  Dire Dire Docks
DEFINE_COURSE(COURSE_SL, 0x02020204) // (10) Snowman's Land
DEFINE_COURSE(COURSE_WDW, 0x22102204) // (11) Wet-Dry World
DEFINE_COURSE(COURSE_TTM, 0x00000004) // (12) Tall, Tall Mountain
DEFINE_COURSE(COURSE_THI, 0x11112104) // (13) Tiny Huge Island
DEFINE_COURSE(COURSE_TTC, 0x22222204) // (14) Tick Tock Clock
DEFINE_COURSE(COURSE_RR, 0x00000004) // (15) Rainbow Ride
DEFINE_COURSES_END()
DEFINE_BONUS_COURSE(COURSE_SI, 0x22222220) // (16) Sunshine Isles
DEFINE_BONUS_COURSE(COURSE_BITDW, 0x22222220) // (17) Bowser in the Dark World
DEFINE_BONUS_COURSE(COURSE_BITFS, 0x34444404) // (18) Bowser in the Fire Sea
DEFINE_BONUS_COURSE(COURSE_BITS, 0x34444404) // (19) Bowser in the Sky
DEFINE_BONUS_COURSE(COURSE_PSS, 0x24444404) // (20) The Princess's Secret Slide
DEFINE_BONUS_COURSE(COURSE_COTMC, 0x44444404) // (21) Cavern of the Metal Cap
DEFINE_BONUS_COURSE(COURSE_TOTWC, 0x04444404) // (22) Tower of the Wing Cap
DEFINE_BONUS_COURSE(COURSE_VCUTM, 0x24444404) // (23) Vanish Cap under the Moat
DEFINE_BONUS_COURSE(COURSE_WMOTR, 0x04444404) // (24) Wing Mario over the Rainbow
DEFINE_BONUS_COURSE(COURSE_SA, 0x24444404) // (25) Secret Aquarium
DEFINE_BONUS_COURSE(COURSE_CAKE_END, 0x44444404) // (26) The End (Cake Scene)
