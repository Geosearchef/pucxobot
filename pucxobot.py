#!/usr/bin/python3

# Puxcobot - A robot to play Coup in Esperanto (Puĉo)
# Copyright (C) 2018  Neil Roberts
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import random
import enum
import bot

class Character(enum.Enum):
    DUKE = "Duko"
    ASSASSIN = "Murdisto"
    CONTESSA = "Grafino"
    CAPTAIN = "Kapitano"
    AMBASSADOR = "Ambasadoro"

class Player:
    def __init__(self):
        pass

class Game:
    def __init__(self):
        self._deck = list(Character) * 3
        random.shuffle(self._deck)

        self._players = []

if __name__ == "__main__":
    bot = bot.Bot()
    bot.run()
