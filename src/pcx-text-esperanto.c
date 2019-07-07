/*
 * Puxcobot - A robot to play Coup in Esperanto (Puĉo)
 * Copyright (C) 2019  Neil Roberts
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "pcx-text-esperanto.h"

#include "pcx-text.h"

const char *
pcx_text_esperanto[] = {
        [PCX_TEXT_STRING_LANGUAGE_CODE] = "eo",
        [PCX_TEXT_STRING_TIMEOUT_START] =
        "Neniu aliĝis dum pli ol %i minutoj. La "
        "ludo tuj komenciĝos.",
        [PCX_TEXT_STRING_TIMEOUT_ABANDON] =
        "La ludo estas senaktiva dum pli ol "
        "%i minutoj kaj estos forlasita.",
        [PCX_TEXT_STRING_NEED_PUBLIC_GROUP] =
        "Bonvolu aliĝi al ludo en publika grupo.",
        [PCX_TEXT_STRING_SEND_PRIVATE_MESSAGE] =
        "Bonvolu sendi privatan mesaĝon al @%s "
        "por ke mi povu sendi al vi viajn kartojn "
        "private.",
        [PCX_TEXT_STRING_ALREADY_IN_GAME] =
        "Vi jam estas en ludo",
        [PCX_TEXT_STRING_GAME_FULL] =
        "La ludo jam estas plena",
        [PCX_TEXT_STRING_GAME_ALREADY_STARTED] =
        "La ludo jam komenciĝis",
        [PCX_TEXT_STRING_NAME_FROM_ID] =
        "Sr.%i",
        [PCX_TEXT_STRING_FINAL_CONJUNCTION] =
        " kaj ",
        [PCX_TEXT_STRING_FINAL_DISJUNCTION] =
        " aŭ ",
        [PCX_TEXT_STRING_WELCOME] =
        "Bonvenon. Aliaj ludantoj tajpu "
        "/aligxi por aliĝi al la ludo aŭ tajpu /komenci "
        "por komenci la ludon. La aktualaj ludantoj "
        "estas:\n"
        "%s",
        [PCX_TEXT_STRING_JOIN_BEFORE_START] =
        "Aliĝu al la ludo per /aligxi antaŭ ol "
        "komenci ĝin",
        [PCX_TEXT_STRING_NEED_MIN_PLAYERS] =
        "Necesas almenaŭ %i ludantoj por ludi.",
        [PCX_TEXT_STRING_JOIN_COMMAND] =
        "/aligxi",
        [PCX_TEXT_STRING_START_COMMAND] =
        "/komenci",
        [PCX_TEXT_STRING_HELP_COMMAND] =
        "/helpo",
        [PCX_TEXT_STRING_RECEIVED_PRIVATE_MESSAGE] =
        "Dankon pro la mesaĝo. Vi povas nun aliĝi "
        "al ludo en la ĉefa grupo.",
        [PCX_TEXT_STRING_COUP] =
        "Puĉo",
        [PCX_TEXT_STRING_INCOME] =
        "Enspezi",
        [PCX_TEXT_STRING_FOREIGN_AID] =
        "Eksterlanda helpo",
        [PCX_TEXT_STRING_TAX] =
        "Imposto (Duko)",
        [PCX_TEXT_STRING_ASSASSINATE] =
        "Murdi (Murdisto)",
        [PCX_TEXT_STRING_EXCHANGE] =
        "Interŝanĝi (Ambasadoro)",
        [PCX_TEXT_STRING_STEAL] =
        "Ŝteli (Kapitano)",
        [PCX_TEXT_STRING_ACCEPT] =
        "Akcepti",
        [PCX_TEXT_STRING_CHALLENGE] =
        "Defii",
        [PCX_TEXT_STRING_BLOCK] =
        "Bloki",
        [PCX_TEXT_STRING_1_COIN] =
        "1 monero",
        [PCX_TEXT_STRING_PLURAL_COINS] =
        "%i moneroj",
        [PCX_TEXT_STRING_YOUR_CARDS_ARE] =
        "Viaj kartoj estas:",
        [PCX_TEXT_STRING_NOONE] =
        "Neniu",
        [PCX_TEXT_STRING_WON] =
        "%s venkis!",
        [PCX_TEXT_STRING_YOUR_GO] =
        "%s, estas via vico, "
        "kion vi volas fari?",
        [PCX_TEXT_STRING_WHICH_CARD_TO_LOSE] =
        "Kiun karton vi volas perdi?",
        [PCX_TEXT_STRING_CHALLENGE_SUCCEEDED] =
        "%s defiis kaj %s ne havis %s kaj %s "
        "perdas karton",
        [PCX_TEXT_STRING_CHALLENGE_FAILED] =
        "%s defiis sed %s ja havis %s kaj %s "
        "perdas karton",
        [PCX_TEXT_STRING_ANNOUNCE_CHALLENGE] =
        "%s ne kredas ke vi havas %s.\n"
        "Kiun karton vi volas montri?",
        [PCX_TEXT_STRING_NO_CHALLENGE_SO_BLOCK] =
        "Neniu defiis. La ago estis blokita.",
        [PCX_TEXT_STRING_CLAIM_CARDS_TO_BLOCK] =
        "%s pretendas havi %s kaj "
        "blokas.",
        [PCX_TEXT_STRING_DOES_SOMEBODY_CHALLENGE] =
        "Ĉu iu volas defii rin?",
        [PCX_TEXT_STRING_OR_BLOCK_NO_TARGET] =
        "Aŭ ĉu iu volas pretendi havi %s "
        "kaj bloki rin?",
        [PCX_TEXT_STRING_BLOCK_NO_TARGET] =
        "Ĉu iu volas pretendi havi %s kaj "
        "bloki rin?",
        [PCX_TEXT_STRING_OR_BLOCK_WITH_TARGET] =
        "Aŭ %s, ĉu vi volas pretendi havi "
        "%s kaj bloki rin?",
        [PCX_TEXT_STRING_BLOCK_WITH_TARGET] =
        "%s, ĉu vi volas pretendi havi %s "
        "kaj bloki rin?",
        [PCX_TEXT_STRING_WHO_TO_COUP] =
        "%s, kiun vi volas mortigi dum la puĉo?",
        [PCX_TEXT_STRING_DOING_COUP] =
        "💣 %s faras puĉon kontraŭ %s",
        [PCX_TEXT_STRING_DOING_INCOME] =
        "💲 %s enspezas 1 moneron",
        [PCX_TEXT_STRING_REALLY_DOING_FOREIGN_AID] =
        "Neniu blokis, %s prenas la 2 monerojn",
        [PCX_TEXT_STRING_DOING_FOREIGN_AID] =
        "💴 %s prenas 2 monerojn per eksterlanda "
        "helpo.",
        [PCX_TEXT_STRING_REALLY_DOING_TAX] =
        "Neniu defiis, %s prenas la 3 monerojn",
        [PCX_TEXT_STRING_DOING_TAX] =
        "💸 %s pretendas havi la dukon kaj prenas "
        "3 monerojn per imposto.",
        [PCX_TEXT_STRING_REALLY_DOING_ASSASSINATION] =
        "Neniu blokis aŭ defiis, %s murdas %s",
        [PCX_TEXT_STRING_SELECT_TARGET_ASSASSINATION] =
        "%s, kiun vi volas murdi?",
        [PCX_TEXT_STRING_DOING_ASSASSINATION] =
        "🗡 %s volas murdi %s",
        [PCX_TEXT_STRING_WHICH_CARDS_TO_KEEP] =
        "Kiujn kartojn vi volas konservi?",
        [PCX_TEXT_STRING_REALLY_DOING_EXCHANGE] =
        "Neniu blokis aŭ defiis, %s interŝanĝas kartojn",
        [PCX_TEXT_STRING_DOING_EXCHANGE] =
        "🔄 %s pretendas havi la ambasadoron kaj volas "
        "interŝanĝi kartojn",
        [PCX_TEXT_STRING_REALLY_DOING_STEAL] =
        "Neniu blokis aŭ defiis, %s ŝtelas de %s",
        [PCX_TEXT_STRING_SELECT_TARGET_STEAL] =
        "%s, de kiu vi volas ŝteli?",
        [PCX_TEXT_STRING_DOING_STEAL] =
        "💰 %s volas ŝteli de %s",
        [PCX_TEXT_STRING_CHARACTER_NAME_DUKE] =
        "Duko",
        [PCX_TEXT_STRING_CHARACTER_NAME_ASSASSIN] =
        "Murdisto",
        [PCX_TEXT_STRING_CHARACTER_NAME_CONTESSA] =
        "Grafino",
        [PCX_TEXT_STRING_CHARACTER_NAME_CAPTAIN] =
        "Kapitano",
        [PCX_TEXT_STRING_CHARACTER_NAME_AMBASSADOR] =
        "Ambasadoro",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_DUKE] =
        "la dukon",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_ASSASSIN] =
        "la murdiston",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_CONTESSA] =
        "la grafinon",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_CAPTAIN] =
        "la kapitanon",
        [PCX_TEXT_STRING_CHARACTER_OBJECT_NAME_AMBASSADOR] =
        "la ambasadoron",
        [PCX_TEXT_STRING_ROLE_NAME_DRIVER] =
        "Ŝoforo",
        [PCX_TEXT_STRING_ROLE_NAME_LOCKPICK] =
        "Ŝlosisto",
        [PCX_TEXT_STRING_ROLE_NAME_MUSCLE] =
        "Muskolulo",
        [PCX_TEXT_STRING_ROLE_NAME_CON_ARTIST] =
        "Trompartisto",
        [PCX_TEXT_STRING_ROLE_NAME_LOOKOUT] =
        "Gvatisto",
        [PCX_TEXT_STRING_ROLE_NAME_SNITCH] =
        "Perfidulo",
        [PCX_TEXT_STRING_ROUND_NUM] =
        "Raŭndo %i / %i",
        [PCX_TEXT_STRING_CHOOSE_HEIST_DIFFICULTY] =
        "%s, vi estas la rabestro. Kiom da roluloj vi volas por la rabado?",
        [PCX_TEXT_STRING_HEIST_SIZE_CHOSEN] =
        "La rabado bezonos %i rolulojn kiuj estas:",
        [PCX_TEXT_STRING_DISCUSS_HEIST] =
        "Nun vi povas interkonsenti inter vi pri kiun rolon vi aldonos al "
        "la rabado. Kiam vi estas preta, sekrete elektu karton.",
        [PCX_TEXT_STRING_CARDS_CHOSEN] =
        "Ĉiu faris sian elekton! La roluloj estas:",
        [PCX_TEXT_STRING_NEEDED_CARDS_WERE] =
        "La bezonataj kartoj estis:",
        [PCX_TEXT_STRING_YOU_CHOSE] =
        "Vi elektis:",
        [PCX_TEXT_STRING_WHICH_ROLE] =
        "Kiun karton vi volas elekti?",
        [PCX_TEXT_STRING_HEIST_SUCCESS] =
        "La rabado sukcesis! Ĉiu ludanto kiu ne elektis la perfidulon ricevas "
        "%i monerojn.",
        [PCX_TEXT_STRING_HEIST_FAILED] =
        "La rabado fuŝiĝis! Ĉiu kiu ne elektis la perfidulon perdas 1 moneron.",
        [PCX_TEXT_STRING_SNITCH_GAIN_1] =
        "Ĉiu alia gajnas 1 moneron.",
        [PCX_TEXT_STRING_SNITCH_GAIN_PLURAL] =
        "Ĉiu alia gajnas %i monerojn.",
        [PCX_TEXT_STRING_EVERYONE_SNITCHED] =
        "La rabado fuŝiĝis kaj ĉiu perfidis! Neniu gajnas monon.",
        [PCX_TEXT_STRING_NOONE_SNITCHED] =
        "Neniu perfidis.",
        [PCX_TEXT_STRING_1_SNITCH] =
        "1 perfidulo",
        [PCX_TEXT_STRING_PLURAL_SNITCHES] =
        "%i perfiduloj",
};
