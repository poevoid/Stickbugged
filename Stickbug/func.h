#pragma once

#include "vars.h"

void printToStart() {
  arduboy.setCursor(0, 0);
  arduboy.print("P\nr\ne\ns\ns\n \nA");
  arduboy.setCursor(120, 0);
  arduboy.print(F("T"));
  arduboy.setCursor(120, 8);
  arduboy.print(F("o"));
  arduboy.setCursor(120, 24);
  arduboy.print(F("S"));
  arduboy.setCursor(120, 32);
  arduboy.print(F("t"));
  arduboy.setCursor(120, 40);
  arduboy.print(F("a"));
  arduboy.setCursor(120, 48);
  arduboy.print(F("r"));
  arduboy.setCursor(120, 56);
  arduboy.print(F("t"));
}

void gameloop() {
  switch (gamestate) {

    case 0:
      //title, pokemon fake-out

      Sprites::drawOverwrite(0, 0, pokemonlogo, 0);
      arduboy.setCursor(22, 50);
      arduboy.print("Arduboy Version");

      printToStart();

      if (arduboy.justPressed(A_BUTTON)) {
        gamestate = 1;
      }
      break;

    case 1:
      //get stick bugged lol
      arduboy.setCursor(0, HEIGHT/2-4);
      arduboy.print("GET STICK BUGGED LOL");
      Sprites::drawOverwrite(WIDTH / 2 - 8, 54, stickbug, currentFrame);
      if (arduboy.everyXFrames(5)) {
        if (currentFrame < 2) {
          ++currentFrame;
        }
        else {
          currentFrame = firstFrame;
        }
      }
      break;

  }
}
