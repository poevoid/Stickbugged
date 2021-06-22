#pragma once
constexpr uint8_t pokemonWidth = 136;
constexpr uint8_t pokemonHeight = 50;

const uint8_t PROGMEM pokemonlogo[] =
{
  pokemonWidth, pokemonHeight,
  //Frame 0
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF0, 0x1C, 0x86, 0x83, 0xC3, 0xE3, 0x7F, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0x70, 0x30, 0x38, 0x1C, 0x1C, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x03, 0x03, 0x03, 0x03, 0x02, 0x06, 0x06, 0x0E, 0x0E, 0x1C, 0x78, 0xF0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFE, 0xF6, 0xC6, 0x07, 0x03, 0x03, 0x01, 0x3F, 0xFF, 0x3F, 0x1E, 0x03, 0x03, 0x07, 0x0E, 0x1C, 0xF8, 0xF0, 0xF0, 0x70, 0x3C, 0x3F, 0x1F, 0x0F, 0x8F, 0x8F, 0x0F, 0x0F, 0x1F, 0x1C, 0x38, 0xF0, 0xE0, 0xC0, 0xFC, 0xFE, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x1F, 0x7F, 0x1F, 0x07, 0x01, 0x01, 0x03, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFC, 0xDC, 0x9C, 0x1C, 0x1C, 0x08, 0x18, 0x38, 0x30, 0xF0, 0xE0, 0x80, 0xC0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1F, 0x3F, 0xFC, 0xF0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x3C, 0x3C, 0x7C, 0xF8, 0xF0, 0x00, 0x00, 0x81, 0xFF, 0xFE, 0xE0, 0x40, 0x10, 0x10, 0x38, 0x18, 0x19, 0x3F, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xE0, 0xF0, 0xFC, 0xFE, 0xFF, 0x8F, 0x01, 0x00, 0x00, 0x00, 0x1E, 0x0F, 0x0F, 0x07, 0x03, 0x60, 0x70, 0x3C, 0x3E, 0x7F, 0xFF, 0xFF, 0xFF, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0x38, 0x1C, 0x8C, 0x0C, 0x04, 0x04, 0x0E, 0x0F, 0x1F, 0x3F, 0x66, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x3F, 0xFF, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x1F, 0xFF, 0xFC, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE1, 0xF0, 0xF8, 0x7E, 0x0F, 0x03, 0x01, 0x00, 0x08, 0x7E, 0x7C, 0x70, 0x70, 0x70, 0x20, 0x00, 0x01, 0x03, 0xFE, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x81, 0x01, 0x01, 0x03, 0x07, 0x1F, 0x3C, 0x78, 0x70, 0xE0, 0xE0, 0xC0, 0xC0, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF8, 0xFC, 0xFF, 0x1F, 0x03, 0x00, 0x00, 0x00, 0xC0, 0xF0, 0xC0, 0x00, 0xC0, 0xF0, 0xC0, 0xC0, 0xFE, 0xFF, 0x01, 0x00, 0x00, 0x03, 0x0F, 0x1E, 0x1C, 0x1C, 0x1C, 0x00, 0x00, 0x80, 0x8E, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFE, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x3F, 0xFF, 0xFC, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x03, 0x0F, 0xFF, 0xFF, 0x07, 0x3E, 0xFC, 0xF0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xFE, 0xFE, 0xE1, 0x80, 0x80, 0xFA, 0xFF, 0xFF, 0x3F, 0x07, 0x07, 0x07, 0x0F, 0x0E, 0x1C, 0x3C, 0x38, 0xF0, 0xF0, 0xE0, 0xE0, 0xE1, 0xFF, 0xEF, 0x01, 0x01, 0x01, 0x00, 0x03, 0x07, 0x0F, 0x1F, 0x0E, 0x0C, 0x0C, 0x1C, 0x1E, 0x1F, 0x07, 0x0F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x87, 0x8E, 0xFC, 0xF8, 0xF8, 0xF0, 0xF8, 0x30, 0x38, 0xF8, 0xFC, 0xFE, 0x07, 0x01, 0x00, 0x80, 0xF0, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7E, 0x3F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x1F, 0xFF, 0xF8, 0xE0, 0xC0, 0xE0, 0xE0, 0x73, 0x7F, 0x3F, 0x18, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x3F, 0x3F, 0x7F, 0x7F, 0xE0, 0xE0, 0xE0, 0x7C, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};


const uint8_t stickbug[] PROGMEM = {
  16,10,
  //frame0
0x00,0xC0,0x20,0x20,0x94,0x78,0x18,0x18,0xB0,0x70,0xF0,0xF0,0x30,0x38,0xF8,0x0C,
0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x03,0x00,0x02,0x03,0x00,0x00,0x00,0x01,0x02,
//frame1
0xC0,0x20,0x20,0x14,0xC8,0x38,0x98,0x70,0x70,0xB0,0x70,0xF0,0x30,0xF8,0x0C,0x00,
0x03,0x00,0x00,0x00,0x03,0x00,0x01,0x02,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x02,
//frame2
0xE0,0x20,0x14,0x08,0xF8,0xB8,0x50,0x70,0xB0,0x70,0xF0,0x70,0x58,0xCC,0x00,0x00,
0x00,0x03,0x00,0x00,0x01,0x02,0x01,0x02,0x02,0x01,0x02,0x00,0x00,0x00,0x01,0x02,
};
