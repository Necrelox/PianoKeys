CC = gcc
EXEC = pianokey
SRC = src/main.c	\
		src/game/init_game.c	\
		src/game/game.c	\
		src/game/draw_game/draw_map.c	\
		src/game/draw_game/draw_buildings.c	\
		src/game/draw_game/draw_ath.c	\
		src/game/draw_game/draw_ath_two.c	\
		src/game/draw_game/draw_entity.c	\
		src/game/draw_game/draw_settings.c	\
		src/game/event_game/event_window.c	\
		src/game/event_game/event_collision.c	\
		src/game/event_game/event_collision_two.c	\
		src/game/event_game/event_pause.c	\
		src/game/event_game/event_hit.c	\
		src/game/event_game/event_verif_hand.c	\
		src/game/event_game/event_interact.c	\
		src/game/event_game/event_pause_sound.c	\
		src/game/sprite_init/sprite_layer1.c	\
		src/game/sprite_init/sprite_loot.c	\
		src/game/sprite_init/sprites_quest.c	\
		src/game/sprite_init/sprite_entity.c	\
		src/game/sprite_init/sprites_particules.c	\
		src/game/sprite_init/ath_sprites/sprites_ath.c	\
		src/game/sprite_init/ath_sprites/sprites_ath_two.c	\
		src/game/sprite_init/ath_sprites/sprites_ath_three.c	\
		src/game/sprite_init/ath_sprites/sprites_ath_four.c	\
		src/game/sprite_init/sprites_buildings.c	\
		src/game/chain_list/ash_list.c	\
		src/game/chain_list/blood_list.c	\
		src/game/chain_list/loot_list.c	\
		src/game/chain_list/zombie_list.c	\
		src/game/chain_list/build_one_list.c	\
		src/game/clock_game/clock_ash.c	\
		src/game/clock_game/clock_ash_two.c	\
		src/game/clock_game/clock_blood.c	\
		src/game/clock_game/clock_movement_zombie.c	\
		src/game/clock_game/movement/clock_movement.c	\
		src/game/clock_game/movement/extend_movement_one.c	\
		src/game/clock_game/movement/extend_movement_two.c	\
		src/game/clock_game/movement/clock_movement_two.c	\
		src/game/clock_game/movement/clock_movement_three.c	\
		src/game/clock_game/movement/clock_movement_four.c	\
		src/game/clock_game/clock_animplayer.c	\
		src/game/clock_game/clock_ath.c	\
		lib/my_putchar.c	\
		lib/my_putstr.c	\
		lib/my_strlen.c	\
		lib/my_put_nbr.c	\
		lib/str_to_word_array.c	\
		lib/my_getnbr.c	\
		lib/my_strdup.c	\
		lib/my_strcmp.c	\
		lib/nb_to_str.c	\
		lib/my_revstr.c	\

OBJ = $(SRC:.c=.o)

CFLAGS = -I./include 

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $(EXEC) $(OBJ) $(CFLAGS) -l csfml-system -l csfml-graphics -l csfml-window -l csfml-audio